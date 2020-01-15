#!/bin/bash

# CMake 3.6 or later required.
CMAKE_BIN=cmake

TARGET_DIR=build

rm -rf ${TARGET_DIR}
mkdir ${TARGET_DIR}
cd ${TARGET_DIR}

$CMAKE_BIN -G Ninja \
  ..

cd ..
