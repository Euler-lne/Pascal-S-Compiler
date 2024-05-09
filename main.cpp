/***
 * @addindex
 * @ $ g++ main.cpp -o translator
 * @ $ ./translator input.pas output.c
 */
#include "main.h"
#include "ASTError.h"
#include "ASTNode.h"
#include "CodeGeneration.h"
#include <fstream>
#include <iostream>
#include <sstream>
#include <string>
#include <vector>
#include <windows.h>

#ifdef _WIN32
#include <windows.h>
#else
#include <dirent.h>
#endif

CompilerError complierError;
int ERROR_NUM = 0;
ReduceParseNode reduceNode;
extern ParseNode *ParseTreeHead;
extern FILE *yyin;
extern int yyparse();

struct Parameters {
    string inputPath;
    string outputPath;
    int mode;        // 0: -i, 1: -a
    int hasDtOption; // 0: not selected, 1: selected 终端
    int hasDfOption; // 0: not selected, 1: selected 文件
};

string itos(int num)
{
    stringstream sin;
    sin << num;
    return sin.str();
}

Parameters parseArguments(int argc, char *argv[]);
vector<string> getAllFilePaths(const string &path);
string getFileNameFromPath(const string &filePath);
int Complier(string inputFile, string outputFile);

int main(int argc, char *argv[])
{
    Parameters parameters = parseArguments(argc, argv);
    if (parameters.mode == 1) {
        vector<string> files = getAllFilePaths(parameters.inputPath);
        for (int i = 0; i < files.size(); i++) {
            string inFile = getFileNameFromPath(files[i]);
            string outFile = inFile;
            outFile.replace(outFile.end() - 4, outFile.end(), ".c");
            string errorFile = inFile;
            errorFile.replace(errorFile.end() - 4, errorFile.end(), "_error.txt");
            complierError.setOutputMode(parameters.hasDtOption, parameters.hasDfOption, errorFile);
            Complier(inFile, outFile);
        }
    } else {
        string inFile = parameters.inputPath;
        string outFile = parameters.outputPath;
        string errorFile = inFile;
        errorFile.replace(errorFile.end() - 4, errorFile.end(), "_error.txt");
        complierError.setOutputMode(parameters.hasDtOption, parameters.hasDfOption, errorFile);
        Complier(inFile, outFile);
    }
    return 0;
}
/// @brief 进行参数判断
/// -i <input_file> <output_file> 读入Pascal文件，将C代码生成到指定路径下；如果没有<output_file>就在input_file路径下，文件名字和输入相同
/// -a <input_file> <output_file> Pascal文件所在的文件夹，C代码输出的文件夹 <output_file>可选
/// -df 将报错信息以文件的形式保存
/// -dt 将报错信息在终端显示
/// @param argc
/// @param argv
/// @return
Parameters parseArguments(int argc, char *argv[])
{
    Parameters params;

    if (argc < 3) {
        cerr << "Usage: " << argv[0] << " <input_file> <output_file>" << endl;
        exit(1);
    }

    string flag = argv[1];

    if (flag == "-i" || flag == "-a") {
        params.mode = (flag == "-i") ? 0 : 1;

        int index = 2;
        while (index < argc && argv[index][0] == '-') {
            string option = argv[index];
            if (option == "-dt") {
                params.hasDtOption = 1;
            } else if (option == "-df") {
                params.hasDfOption = 1;
            } else {
                cerr << "Invalid option: " << option << endl;
                exit(1);
            }
            index++;
        }

        if (argc - index < 1 || argc - index > 2) {
            cerr << "Usage: " << argv[0] << " " << flag << " [-dt] [-df] <input_file> [<output_file>]" << endl;
            exit(1);
        }

        params.inputPath = argv[index++];
        if (params.mode == 0 && params.inputPath.substr(params.inputPath.size() - 4) != ".pas") {
            cerr << "Usage: " << argv[0] << " " << flag << " the input_file must be Pascal file, whilch means input_fils must end with .pas " << endl;
            exit(1);
        }
        if (index < argc) {
            params.outputPath = argv[index];
        } else {
            // If output path not provided, use input path
            params.outputPath = params.inputPath;
            if (params.mode == 0) {
                params.outputPath.pop_back();
                params.outputPath.pop_back();
                params.outputPath.pop_back();
                params.outputPath += "c";
            }
        }
    } else {
        cerr << "Invalid flag: " << flag << endl;
        exit(1);
    }

    return params;
}

vector<string> getAllFilePaths(const string &path)
{
    vector<string> files;

#ifdef _WIN32
    WIN32_FIND_DATAA fileData;
    HANDLE hFind = FindFirstFileA((path + "/*").c_str(), &fileData);
    if (hFind != INVALID_HANDLE_VALUE) {
        do {
            if (!(fileData.dwFileAttributes & FILE_ATTRIBUTE_DIRECTORY)) {
                string filename = fileData.cFileName;
                if (filename.size() >= 4 && filename.substr(filename.size() - 4) == ".pas") {
                    string filepath = path + "/" + filename;
                    files.push_back(filepath);
                }
            }
        } while (FindNextFileA(hFind, &fileData));
        FindClose(hFind);
    }
#else
    DIR *directory = opendir(path.c_str());
    if (directory != nullptr) {
        struct dirent *entry;
        while ((entry = readdir(directory)) != nullptr) {
            if (entry->d_type == DT_REG) { // Check if it's a regular file
                string filename = entry->d_name;
                if (filename.size() >= 4 && filename.substr(filename.size() - 4) == ".pas") {
                    string filepath = path + "/" + filename;
                    files.push_back(filepath);
                }
            }
        }
        closedir(directory);
    }
#endif

    return files;
}

string getFileNameFromPath(const string &filePath)
{
    size_t found = filePath.find_last_of("/\\");
    if (found != string::npos) {
        return filePath.substr(found + 1);
    } else {
        return filePath;
    }
}

/// @brief 编译函数
/// @return 打不开文件返回-1 编译成功返回1 检测到错误返回0
int Complier(string inputFile, string outputFile)
{
    FILE *fp = fopen(inputFile.c_str(), "r");
    if (fp == NULL) {
        cout << "Cannot open PASCAL-S file " << inputFile << ", please check it." << endl;
        return -1;
    }
    yyin = fp;

    yyparse(); // 调用语法分析程序

    fclose(fp);

    if (ERROR_NUM == 0) {
        // 进入语义分析
        AST::Program program(ParseTreeHead);
        reduceNode.Clear();
        delete ParseTreeHead;
        if (ERROR_NUM == 0) {
            // 进入代码生成
            C_GEN::C_Generater gen(&program, outputFile);
            gen.run();
        }
    } else {
        reduceNode.Clear();
        delete ParseTreeHead;
    }
    if (ERROR_NUM == 0)
        return 1;
    else
        return 0;
}