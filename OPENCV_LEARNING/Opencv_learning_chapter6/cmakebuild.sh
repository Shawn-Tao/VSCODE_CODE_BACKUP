#!/bin/sh
directory_bulid="./build"
directory_bin="./bin"
if [ -d $directory_bulid ]
then
    echo "Catalogue build exists ! Clear it first!"
    rm -rf ./build/*
else
    echo "Catalogue build doesn't exist ! Create first"
    mkdir build
fi
if [ -d $directory_bin ]
then
    echo "Catalogue bin exists ! Clear it first!"
    rm -rf ./bin/*
else
    echo "Catalogue build doesn't exist ! Create first!"
    mkdir bin
fi
cd build
Local_Dir=$(cd "$(dirname "$0")"; pwd)
echo "Now work at Dir:$Local_Dir"
cmake ..
make
#cd ..
#cd bin
#./5_1
