#!/bin/sh
directory_bulid="./build"
if [ -d $directory_bulid ]
then
    echo "Catalogue build exists ! Change directory to build and clear it"
    cd build
    rm -rf ./*
else
    echo "Catalogue build doesn't exist ! Create first"
    mkdir build
    cd build 
fi
cmake ..
make
