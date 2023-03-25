cmake_minimum_required(VERSION 3.19)
project(cpp_learning)

set(CMAKE_CXX_STANDARD 20)

add_executable(cpp_learning main.cpp a_00_base/class_object.cpp a_00_base/class_object.h a_00_base/inherit.cpp a_00_base/inherit.h a_00_base/error.cpp a_00_base/error.h a_01_sort/a_01_bubble.h utils/printUtil.h a_01_sort/a_02_quick.h a_01_sort/a_03_insertion.h a_01_sort/a_04_shell.h a_01_sort/a_05_selection.h a_01_sort/a_06_heap.h a_01_sort/a_07_merge.h a_01_sort/a_08_count.h utils/compareUtil.h a_01_sort/a_09_bucket.h)