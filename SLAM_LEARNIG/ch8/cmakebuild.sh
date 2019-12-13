#!/bin/bash

if [ ! -d "./build" ]
then
    echo "build目录不存在,创建目录"
    mkdir build
else
    echo "build目录已经存在,清空目录"
    rm -rf ./build/*
fi

if [ ! -d "./bin" ]
then
    echo "bin目录不存在,创建目录"
    mkdir bin
else
    echo "bin目录已经存在,清空目录"
    rm -rf ./bin/*
fi
cd build
cmake ..
make -j4
