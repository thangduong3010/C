cmake_minimum_required(VERSION 3.5)
project(c_modern)

set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -std=c++11")

set(BUILD_1 main)
set(SOURCE_FILES
    "chapter 2/celsius.c"
    "chapter 2/celsius.exe"
    "chapter 2/celsius.o"
    "chapter 2/dummy1.c"
    "chapter 2/dummy1.exe"
    "chapter 2/dummy1.o"
    "chapter 2/dweight.c"
    "chapter 2/dweight.exe"
    "chapter 2/dweight.o"
    "chapter 2/ex1.c"
    "chapter 2/ex1.exe"
    "chapter 2/ex1.o"
    "chapter 2/Ex2.c"
    "chapter 2/Ex2.exe"
    "chapter 2/Ex2.o"
    "chapter 2/ex3.c"
    "chapter 2/ex3.exe"
    "chapter 2/ex3.o"
    "chapter 2/ex5.c"
    "chapter 2/ex5.exe"
    "chapter 2/ex5.o"
    "chapter 2/ex7.c"
    "chapter 2/ex7.exe"
    "chapter 2/ex7.o"
    "chapter 3/dummy.c"
    "chapter 3/dummy.exe"
    "chapter 3/dummy.o"
    "chapter 3/ex1.c"
    "chapter 3/ex1.exe"
    "chapter 3/ex1.o"
    "chapter 3/ex2.c"
    "chapter 3/ex2.exe"
    "chapter 3/ex2.o"
    "chapter 3/ex3.c"
    "chapter 3/ex3.exe"
    "chapter 3/ex3.o"
    "chapter 3/ex4.c"
    "chapter 3/ex4.exe"
    "chapter 3/ex4.o"
    "chapter 3/tprintf.c"
    "chapter 3/tprintf.exe"
    "chapter 3/tprintf.o"
    main.cpp dummy.cpp)

add_executable(c_modern ${SOURCE_FILES})