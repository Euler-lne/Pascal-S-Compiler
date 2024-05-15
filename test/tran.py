import os
import shutil

def convert_pas_to_txt(source_dir, target_dir):
    # 检查目标文件夹是否存在，如果不存在则创建
    if not os.path.exists(target_dir):
        os.makedirs(target_dir)

    # 遍历源文件夹中的所有文件
    for filename in os.listdir(source_dir):
        # 检查文件扩展名是否为 .pas
        if filename.endswith('.pas'):
            # 构建完整的源文件路径
            source_file = os.path.join(source_dir, filename)
            # 构建目标文件路径，扩展名改为 .txt
            target_file = os.path.join(target_dir, os.path.splitext(filename)[0] + '.txt')
            
            # 将 .pas 文件内容复制到 .txt 文件
            shutil.copyfile(source_file, target_file)
            print(f"Converted {source_file} to {target_file}")

# 示例用法
source_directory = r'D:\github\新建文件夹\Pascal-S-Compiler\test\touge'  # 替换为实际源文件夹路径
target_directory = r'D:\github\新建文件夹\Pascal-S-Compiler\test\txt'  # 替换为实际目标文件夹路径

convert_pas_to_txt(source_directory, target_directory)
