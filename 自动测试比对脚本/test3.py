import os
import subprocess
import filecmp


# 获取当前脚本的路径
script_path = os.path.dirname(os.path.abspath(__file__))
print("当前路径",script_path)
# 构建文件夹的绝对路径
c_folder = os.path.join(script_path, 'C_code')
c_input_folder = os.path.join(script_path, 'inputfile')
c_output_folder = os.path.join(script_path, 'C_output')
pascal_code_folder = os.path.join(script_path, 'P_code')
pascal_output_folder = os.path.join(script_path, 'P_output')
pascal_input_folder = os.path.join(script_path, 'inputfile')
fpc_path = r'E:\FPC\3.2.2\bin\i386-win32\fpc.exe'


def process_c_files(c_folder, input_folder, output_folder):
    # 获取C_code文件夹中的所有.c文件
    c_files = [file for file in os.listdir(c_folder) if file.endswith('.c')]

    for c_file in c_files:
        # 构建文件路径
        c_file_path = os.path.join(c_folder, c_file)
        input_file_path = os.path.join(input_folder, c_file.replace('.c', '.txt'))
        output_file_path = os.path.join(output_folder, c_file.replace('.c', '.txt'))

        try:
            # 使用GCC编译C文件并生成可执行文件
            subprocess.run(['gcc', c_file_path, '-o', 'executable'], check=True)

            # 执行生成的可执行文件，将输入文件作为输入，并将输出保存到输出文件
            with open(input_file_path, 'r') as input_file, open(output_file_path, 'w') as output_file:
                subprocess.run(['./executable'], stdin=input_file, check=True, stdout=output_file)

            # 输出处理完成消息
            print(f'C file "{c_file}" processed successfully!')
        except subprocess.CalledProcessError as e:
            # 输出执行失败消息以及错误信息
            print(f'Failed to process C file "{c_file}".')
            print('Error:', e.stderr)



# 创建C_output文件夹（如果不存在）
os.makedirs(c_output_folder, exist_ok=True)

# 调用函数处理批处理过程
process_c_files(c_folder, c_input_folder, c_output_folder)


def process_pascal_files(pascal_folder, input_folder, output_folder, fpc_path):
    # 获取P_code文件夹中的所有.pas文件
    pascal_files = [file for file in os.listdir(pascal_folder) if file.endswith('.pas')]

    for pascal_file in pascal_files:
        # 构建文件路径
        pascal_file_path = os.path.join(pascal_folder, pascal_file)
        input_file_path = os.path.join(input_folder, pascal_file.replace('.pas', '.txt'))
        output_file_path = os.path.join(output_folder, pascal_file.replace('.pas', '.txt'))

        try:
            # 使用Free Pascal编译Pascal文件并生成可执行文件
            subprocess.run([fpc_path, pascal_file_path], check=True, stdout=subprocess.DEVNULL, stderr=subprocess.DEVNULL)

            # 获取生成的可执行文件路径
            executable_path = os.path.splitext(pascal_file_path)[0]

            # 执行生成的可执行文件，将输入文件作为输入，并将输出保存到输出文件
            with open(input_file_path, 'r') as input_file, open(output_file_path, 'w') as output_file:
                subprocess.run([executable_path], stdin=input_file, check=True, stdout=output_file)

            # 输出处理完成消息
            print(f'Pascal file "{pascal_file}" processed successfully!')
        except subprocess.CalledProcessError as e:
            # 输出执行失败消息以及错误信息
            print(f'Failed to process Pascal file "{pascal_file}".')
            print('Error:', e.stderr)




# 创建P_output文件夹（如果不存在）
os.makedirs(pascal_output_folder, exist_ok=True)

# 调用函数处理批处理过程
process_pascal_files(pascal_code_folder, pascal_input_folder, pascal_output_folder, fpc_path)


# 比较文件夹中同名文件的内容是否相同
for filename in os.listdir(c_output_folder):
    c_output_file = os.path.join(c_output_folder, filename)
    p_output_file = os.path.join(pascal_output_folder, filename)
    
    if os.path.isfile(c_output_file) and os.path.isfile(p_output_file):
        if filecmp.cmp(c_output_file, p_output_file):
            print(filename, "contents are the same")
        else:
            print(filename, "contents are different")