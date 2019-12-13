# Cmake实践

## 作用

工程构建工具，跨平台进行工程构建管理
Linux及Unix生成makefile文件
win生成 MSVC文件
OS X 生成 xcode文件

## CmakLists.txt

CmakeList.txt 是cmake的构建定义文件，大小写敏感
如果工程存在多个目录，则需要确保每个管理的目录都存在一个CMakeLists.txt

## 语法分析

- PRPJECT
  - 语法： PROJECT(projectname [CXX] [C] [JAVA])
  - 作用： 指定工程名称，支持的语言(可忽略)
  - 注意： 隐式定义了两个cmake变量：<projectname>_BINARY_DIR 以及<projectname>_SOURCE_DIR，内部编译时，均指向工程所在路径，外部编译会有不同

- SET
  - 语法： SET(VAR [VALUE] [CACHE TYPE DOCSTRING [FORCE]])
  - 作用： 显式定义变量
  - 注意： 如果源文件文件名中包含空格，则必须使用双引号引用，否则可以不添加双引号
  - 常见用法：
    - SET(EXECUTABLE_OUTPUT_PATH ${PROJECT_BINARY_DIR}/bin)
    - SET(LIBRARY_OUTPUT_PATH ${PROJECT_BINARY_DIR}/lib)

- MESSAGE
  - 语法： MESSAGE([SEND_ERROR | STATUS | FATAL_ERROR] "message to display" ...)
  - 作用： 这个指令用于向终端输出用户定义的信息，包含了三种类型:
    - SEND_ERROR，产生错误，生成过程被跳过。
    - SATUS，输出前缀为—的信息。
    - FATAL_ERROR，立即终止所有 cmake 过程。

- ADD_EXECUTABLE
  - 语法： (可执行文件名 源文件)
  - 作用： 生成可执行文件
  - 注意：
    - 可以忽略掉文件后缀(最好不要)
    - 可以用‘；’分割源文件

- ADD_SUBDIRECTORY
  - 语法： ADD_SUBDIRECTORY(source_dir [binary_dir] [EXCLUDE_FROM_ALL])
  - 作用： 用于向当前工程添加存放源文件的子目录，并可以指定中间二进制和目标二进制存放的位置。
  - 注意
    - 可以使用SET指令重新定义EXECUTABLE_OUTPUT_PATH和LIBRARY_OUTPUT_PATH 例如以下代码(<font color = #ff6197>仅仅将生成的文件输出到set 目录中，生成过程中的CMakeFiles  cmake_install.cmake  Makefile 等文件仍然在ADD_SUBDIRECTORY第二个参数指定目录下</font>)
    - 把握一个简单的原则，以下代码放置的位置为:在哪里ADD_EXECUTABLE或ADD_LIBRARY， 如果需要改变目标存放路径，就在哪里加入上述的定义。

    ```Reorient output path
    SET(EXECUTABLE_OUTPUT_PATH ${PROJECT_BINARY_DIR}/bin) 
    SET(LIBRARY_OUTPUT_PATH ${PROJECT_BINARY_DIR}/lib) 
    ```

- INSTALL
  - 语法：

  ```INSTALL
    - INSTALL(TARGETS targets...
          [[ARCHIVE|LIBRARY|RUNTIME]
              [DESTINATION <dir>]
              [PERMISSIONS permissions...]
              [CONFIGURATIONS
          [Debug|Release|...]]
              [COMPONENT <component>]
              [OPTIONAL]
              ] [...])
  ```

  - 解释： 
    - 参数中的 TARGETS 后面跟的就是我们通过ADD_EXECUTABLE 或者 ADD_LIBRARY 定义的目标文件，可能是可执行二进制、动态库、静态库。
    - 目标类型也就相对应的有三种，ARCHIVE 特指静态库，LIBRARY 特指动态库，RUNTIME特指可执行目标二进制。
    - DESTINATION 定义了安装的路径，如果路径以/开头，那么指的是绝对路径，这时候CMAKE_INSTALL_PREFIX 其实就无效了。如果你希望使用 CMAKE_INSTALL_PREFIX 来定义安装路径，就要写成相对路径，即不要以/开头，那么安装后的路径就是

  ```PATH
      ${CMAKE_INSTALL_PREFIX}/<DESTINATION 定义的路径>
  ```

  - 举例：

  ```EXAMPLE
      INSTALL(TARGETS myrun mylib mystaticlib
      RUNTIME DESTINATION bin
      LIBRARY DESTINATION lib
      ARCHIVE DESTINATION libstatic
      )
  ```

  - 上面的例子会将：
    - 可执行二进制 myrun 安装到${CMAKE_INSTALL_PREFIX}/bin 目录
    - 动态库 libmylib 安装到${CMAKE_INSTALL_PREFIX}/lib 目录
    - 静态库 libmystaticlib 安装到${CMAKE_INSTALL_PREFIX}/libstatic 目录
  - 特别注意：不需要关心 TARGETS 具体生成的路径，只需要写上 TARGETS 名称就可以了。

- 清理工程： make clean，可以对构建结果进行清理
  - make distclean 无效

## 内部构建与外部构建

官方比较推荐外部构建，因为内部构建会生成大量临时文件，造成目录下文件混乱难以管理

### 外部构建方式

1. 建立CMakeLists
2. 任意位置建立build目录
3. 进入build目录，运行 cmake [PATH]
4. 在build目录下运行make构建工程，在当前目录下获得目标文件

*特别注意，上文提到的隐式定义变量，在外部构建中，<projectname>_BINARY_DIR 指向工程目录 <projectname>_SOURCE_DIR 指向build目录*

## 工程管理方式

1. 为工程添加一个子目录 src，用来放置工程源代码;
2. 添加一个子目录 doc，用来放置这个工程的文档
3. 在工程目录添加文本文件 COPYRIGHT, README；
4. 在工程目录添加一个.sh 脚本，用来调用 可执行文件 二进制
5. 将构建后的目标文件放入构建目录的 bin 子目录；
6. 最终安装这些文件：将 可执行文件 二进制与 .sh 安装至/usr/bin，将 doc 目录的内容，以及 COPYRIGHT/README 安装到/usr/share/doc/cmake/工程名目录

### 过程分析

- 添加子目录 src,将源文件移动至src文件夹，子目录文件夹中添加CMakeLists.txt,添加内容

```CMakeLists.txt
  ADD_EXECUTABLE(可执行文件名 main.c)
```

- 在工程目录下建立CMakeLists.txt，添加内容为

```CMakeLists.txt
  PROJECT(HELLO)
  ADD_SUBDIRECTORY(src bin)
```

- 建立build目录 运行

```build
  cmake ..
  make
```

- 安装
  - 通过make install 安装
  - 打包时制定目录安装： 如过 make install DESTDIR=/tmp/test 将目标安装在 /tmp/test/usr/bin 目录