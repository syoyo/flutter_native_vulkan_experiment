cmake_minimum_required(VERSION 3.4.1)  # for example

project(native_add C CXX)



add_library( native_add

             # Sets the library as a shared library.
             SHARED

             ../ios/Classes/native_add.cpp )

target_link_libraries(native_add PUBLIC dl)

add_library( native_submodule

             # Sets the library as a shared library.
             SHARED

             ../ios/Classes/native_submodule.cpp )
