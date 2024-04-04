cmake_minimum_required(VERSION 3.1)
project(PASCC)

# 查找 Flex 和 Bison
find_package(FLEX)
find_package(BISON)


if(FLEX_FOUND AND BISON_FOUND)
  # 使用 Flex 和 Bison 生成目标文件
  BISON_TARGET(Parser ${CMAKE_BINARY_DIR}/../src/yacc.y  ${CMAKE_BINARY_DIR}/../src/yacc.tab.cc  DEFINES_FILE  ${CMAKE_BINARY_DIR}/../include/yacc.tab.h COMPILE_FLAGS "-t")
  FLEX_TARGET(Lexer  ${CMAKE_BINARY_DIR}/../src/lex.l  ${CMAKE_BINARY_DIR}/../src/lex.yy.cc)
  ADD_FLEX_BISON_DEPENDENCY(Lexer Parser)
endif()

# 设置输出目录
set(CMAKE_RUNTIME_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/bin)

# 包含头文件目录
include_directories("include")

# Windows 下的编译指令
if(WIN32)
  message(STATUS "Windows")
  set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -D_WIN32 -Wno-error=register")

# Linux 下的编译指令
elseif(UNIX)
  message(STATUS "Linux")
  # set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -D__linux__ -Wno-error=register")
endif()

file(GLOB_RECURSE include "include/*.h")
file(GLOB_RECURSE src "src/*.cpp" "src/*.cc")
file(GLOB root_src "*.cpp")

add_executable(${PROJECT_NAME}
        ${src}
        ${root_src}

        src/lex.yy.cc
        src/yacc.tab.cc
        )

