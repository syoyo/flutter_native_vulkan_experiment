#!/bin/bash

ANDROID_SDK_ROOT ?= $HOME/Android/Sdk

# Edit path to Android NDK if required
# Default: use ANDROID_SDK_HOME environment
ANDROID_NDK_ROOT=$ANDROID_SDK_ROOT/ndk-bundle

# CMake 3.6 or later required.
CMAKE_BIN=cmake

TARGET_DIR=build-android

rm -rf ${TARGET_DIR}
mkdir ${TARGET_DIR}
cd ${TARGET_DIR}

$CMAKE_BIN -G Ninja -DCMAKE_TOOLCHAIN_FILE=$ANDROID_NDK_ROOT/build/cmake/android.toolchain.cmake \
  -DCMAKE_BUILD_TYPE=RelWithDebInfo \
  -DANDROID_ABI=arm64-v8a \
  -DANDROID_NATIVE_API_LEVEL=28 \
  -DANDROID_ARM_MODE=arm \
  -DANDROID_ARM_NEON=TRUE \
  -DANDROID_STL=c++_shared \
  ..

cd ..
