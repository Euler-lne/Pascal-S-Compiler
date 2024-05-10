# 使用方法

CLI模式，通过命令运行程序进行编译，并可以接受一些参数

### 基本参数

- `input_file`/`input_file_path`
  - 输入Pascal文件的位置或者Pascal文件所在的文件夹
  - 对于两种不同的选项需要使用不同的配置参数。特别的，如果是输入Pascal文件的话必须以.pas结尾，否则会执行失败
- `output_file`/`output_file_path`（可选）
  - 输入将编译后的文件所保存的文件或者文件夹
  - 对于两种不同的选项需要使用不同的配置参数

### 配置参数

- `-i`参数：
  - ```Plain
    pascc -i <input_file> [<output_file>]
    ```

  -  编译`input_file`文件，并将编译后的C代码的结果保存到`output_file`下。其中`output_file`参数可选，如果没有这个参数那么输出文件的名字将会被保存到与`input_file`相同的路径下，并且与其名字相同，只是后缀不同。例如

  - ```Plain
    pascc -i D:\1.pas
    ```

  -  这时会将生成的文件存放到`D:\1.c`中
- `-a`参数：
  - ```Plain
    pascc -a <input_file_path> [<output_file_path>]
    ```

  -  编译`input_file_path`文件夹下的所有Pascal文件，也就是以.pas结尾的文件，并将编译后的C代码的结果保存到`output_fil_path`下，名字与被编译的Pascal文件的名字一样只是后缀为`.c`。其中`output_fil_path`参数可选，如果没有这个参数那么输出文件的名字将会被保存到与`input_file_path`相同的路径下。例如：

  - ```Plain
    pascc -i D:\1
    ```

  -  这时会将生成的文件存放到`D:\1`文件中

  -  主要用于批量处理文件。
- `-dt`参数（可选），如果语义分析中出现错误，那么将这个错误打印到终端。
  - ```Plain
    pascc -a -dt <input_file_path> [<output_file_path>]
    ```
- `-df`参数（可选），如果语义分析中出现错误，那么将这个错误保存到与C代码生成相同路径，且名字加上`_error`后缀的`.txt`文件；例如输出文件为：`D:\1.c`，那么语义错误将会被保存到`D:\1_error.txt`文件中。无论是否有语义错误都会生成该文件。
  - ```Plain
    pascc -a -dt <input_file_path> [<output_file_path>]
    ```
- 注意
  - `-i`参数和`-a`参数，只能有且只能有一个
  - `-dt`参数和`-df`参数可以同时有，也可以同时没有，也可以只有一种，一共四种情况
  - `-dt`参数和`-df`参数，必须置于`-i`参数或者`-a`参数之后，`input_file_path`或者`input_file`之前

