# C 与 Pascal 源码比较工具

这个 Python 脚本用于比较 C 和 Pascal 两种编程语言的源代码编译后的输出结果是否相同。它可以自动处理编译、执行和输出比较的过程。

## 文件夹结构

确保以下文件夹位于与脚本相同的目录中：
1. 必须有`fpc_path.txt`文件和`gcc_path.txt`文件

  ![image](https://zszsecond-1309370201.cos.ap-nanjing.myqcloud.com/img/image.png)

## 依赖项

- Python 3.x
- GCC（用于编译C代码）
- Free Pascal（用于编译Pascal代码）

确保系统中已安装了以上依赖项，并将GCC和Free Pascal添加到系统路径中。



## 使用方法

1. **准备环境**:

   - 确保已经安装了 GCC（C 编译器）和 Free Pascal 编译器。
   - 将 GCC 和 FPC 的可执行文件路径分别写入 `gcc_path.txt` 和 `fpc_path.txt` 文件中。

2. **准备代码**:

   文件格式

   ![image-20240510222033031](https://zszsecond-1309370201.cos.ap-nanjing.myqcloud.com/img/image-20240510222033031.png)

   ![image-20240510222046907](https://zszsecond-1309370201.cos.ap-nanjing.myqcloud.com/img/image-20240510222046907.png)

   ![image-20240510222109135](https://zszsecond-1309370201.cos.ap-nanjing.myqcloud.com/img/image-20240510222109135.png)

   如上图准备好这三个文件夹，并记录文件路径，注意确保要比较的c代码和pascal代码以及对应的输入文件是一致的。

   - 将你的 C 代码放置在一个文件夹中，并准备好对应的输入文件（`.txt` 格式）。
   - 将你的 Pascal 代码放置在另一个文件夹中，并准备好对应的输入文件。

3. **运行脚本**:

   - 在终端中运行 `compare_code.py` 脚本。
   - 输入 C 代码文件夹、Pascal 代码文件夹和输入文件夹的路径。

4. **查看结果**:

   - 脚本将自动编译和运行每个 C 和 Pascal 文件，并将输出结果保存在对应的文件夹中。

     ![image-20240510222400296](https://zszsecond-1309370201.cos.ap-nanjing.myqcloud.com/img/image-20240510222400296.png)

     ![image-20240510222443039](https://zszsecond-1309370201.cos.ap-nanjing.myqcloud.com/img/image-20240510222443039.png)

   - 脚本将比较两个文件夹中同名文件的内容，并输出比较结果。

   - ![img](https://zszsecond-1309370201.cos.ap-nanjing.myqcloud.com/img/asynccode)

5. **清理**:

   - 可以程序将自动删除 Pascal 代码生成的 `.o` 和 `.exe` 文件。

## 注意事项

- 确保 C 和 Pascal 代码具有相同的功能和输出，否则比较结果可能不准确。
- 该脚本仅支持基本的 C 和 Pascal 编译和执行过程，如果需要更复杂的功能，请根据实际需求进行修改。
- \- 确保在运行脚本之前正确设置文件夹路径。

  \- 确保代码文件、输入文件和输出文件的命名一致性。

  \- 如果发生错误，请检查错误消息以获取详细信息。

