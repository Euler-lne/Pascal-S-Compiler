import os
import subprocess
import filecmp
import sys


# 获取当前脚本的路径
# 获取当前文件的路径
if hasattr(sys, '_MEIPASS'):
    # 如果是打包后的可执行文件，则使用打包后的路径
    script_path = os.path.dirname(os.path.abspath(sys.executable))
else:
    # 否则使用原始脚本的路径
    script_path = os.path.dirname(os.path.abspath(__file__))
print("当前路径", script_path)
# 构建文件夹的绝对路径
c_code_folder = input("Path of C Program: ")
pascal_code_folder = input("Path of Pascal Program: ")
input_folder = input("Path of program input: ")
with open(os.path.join(script_path, 'fpc_path.txt'), "r") as f:
    fpc_path = f.readline()
with open(os.path.join(script_path, 'gcc_path.txt'), "r") as f:
    gcc_path = f.readline()


def process_c_files(c_folder, input_folder):
    # 获取C_code文件夹中的所有.c文件
    c_files = [file for file in os.listdir(c_folder) if file.endswith('.c')]

    for c_file in c_files:
        # 构建文件路径
        c_file_path = os.path.join(c_folder, c_file)
        input_file_path = os.path.join(
            input_folder, c_file.replace('.c', '.txt'))
        output_file_path = os.path.join(
            c_folder, c_file.replace('.c', '_out.txt'))

        try:
            # 使用GCC编译C文件并生成可执行文件
            subprocess.run([gcc_path, c_file_path, '-o',
                           'executable'], check=True)

            # 执行生成的可执行文件，将输入文件作为输入，并将输出保存到输出文件
            with open(input_file_path, 'r') as input_file, open(output_file_path, 'w') as output_file:
                subprocess.run(['./executable'], stdin=input_file,
                               check=True, stdout=output_file)

            # 输出处理完成消息
            print(f'C file "{c_file}" processed successfully!')
        except subprocess.CalledProcessError as e:
            # 输出执行失败消息以及错误信息
            print(f'Failed to process C file "{c_file}".')
            print('Error:', e.stderr)


# 调用函数处理批处理过程
process_c_files(c_code_folder, input_folder)


def process_pascal_files(pascal_folder, input_folder, fpc_path):
    # 获取P_code文件夹中的所有.pas文件
    pascal_files = [file for file in os.listdir(
        pascal_folder) if file.endswith('.pas')]

    for pascal_file in pascal_files:
        # 构建文件路径
        pascal_file_path = os.path.join(pascal_folder, pascal_file)
        input_file_path = os.path.join(
            input_folder, pascal_file.replace('.pas', '.txt'))
        output_file_path = os.path.join(
            pascal_folder, pascal_file.replace('.pas', '_out.txt'))

        try:
            # 使用Free Pascal编译Pascal文件并生成可执行文件
            subprocess.run([fpc_path, pascal_file_path], check=True,
                           stdout=subprocess.DEVNULL, stderr=subprocess.DEVNULL)

            # 获取生成的可执行文件路径
            executable_path = os.path.splitext(pascal_file_path)[0]

            # 执行生成的可执行文件，将输入文件作为输入，并将输出保存到输出文件
            with open(input_file_path, 'r') as input_file, open(output_file_path, 'w') as output_file:
                subprocess.run([executable_path], stdin=input_file,
                               check=True, stdout=output_file)

            # 输出处理完成消息
            print(f'Pascal file "{pascal_file}" processed successfully!')
        except subprocess.CalledProcessError as e:
            # 输出执行失败消息以及错误信息
            print(f'Failed to process Pascal file "{pascal_file}".')
            print('Error:', e.stderr)


# 调用函数处理批处理过程
process_pascal_files(pascal_code_folder, input_folder, fpc_path)


# 比较文件夹中同名文件的内容是否相同
for filename in os.listdir(c_code_folder):
    if (filename[-1] == 'c'):
        continue
    c_output_file = os.path.join(c_code_folder, filename)
    p_output_file = os.path.join(pascal_code_folder, filename)

    if os.path.isfile(c_output_file) and os.path.isfile(p_output_file):
        if filecmp.cmp(c_output_file, p_output_file):
            print(filename, "contents are the same")
        else:
            print(filename, "contents are different")

# 删除Pascal代码生成的.o和.exe文件
for filename in os.listdir(pascal_code_folder):
    if filename.endswith('.o') or filename.endswith('.exe'):
        file_path = os.path.join(pascal_code_folder, filename)
        os.remove(file_path)

input("Press any key to continue...")
