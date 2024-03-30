cmake_minimum_required (VERSION 3.10.2)#最小版本，不然会警告
set(CMAKE_CXX_STANDARD 14)
project(pascal_complier)
aux_source_directory(./src SRC_SUB)#src 目录下
aux_source_directory(./ SRC_CUR)#根目录下（和CMakeLists一样的目录下
add_executable(${PROJECT_NAME} ${SRC_SUB} ${SRC_CUR})#可执行文件的名字 和 路径，如果没有main函数这里会报错
include_directories(include)