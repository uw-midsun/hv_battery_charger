cmake_minimum_required(VERSION 3.20)

set(CMAKE_TOOLCHAIN_FILE "${CMAKE_SOURCE_DIR}/cmake/toolchain.cmake")
list(APPEND CMAKE_MODULE_PATH "${CMAKE_CURRENT_SOURCE_DIR}/cmake/")

project(hv_battery_charger C CXX ASM)

# We should be allowed to use volatile, its embedded.
add_compile_options(-Wall)

set(CMAKE_C_STANDARD 11)
set(CMAKE_C_STANDARD_REQUIRED ON)
set(CMAKE_EXPORT_COMPILE_COMMANDS ON)

include(compile_options)
include(add_libs)


add_subdirectory(hal_conf)
add_subdirectory(vendor)
add_subdirectory(drivers)
add_subdirectory(board)
