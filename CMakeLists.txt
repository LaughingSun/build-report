cmake_minimum_required(VERSION 2.8.9)
set(CMAKE_C_COMPILER_ID "GNU")
set(CMAKE_CXX_COMPILER_ID "GNU")
set(CMAKE_COMPILER_IS_GNUCXX TRUE)

project(common-macros-c)
set(CMAKE_RUNTIME_OUTPUT_DIRECTORY ${PROJECT_BINARY_DIR}/bin)
set(SOURCE_DIR ${CMAKE_BINARY_DIR}/src)
set(INCLUDE_DIR ${CMAKE_BINARY_DIR}/include)
include_directories("${INCLUDE_DIR}")
file(GLOB COMMON_HDRS "${INCLUDE_DIR}/*.hpp")
set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -std=c++11")
message(STATUS "SOURCE_DIR=${SOURCE_DIR}")
message(STATUS "INCLUDE_DIR=${INCLUDE_DIR}")
message(STATUS "COMMON_HDRS=${COMMON_HDRS}")

#
# loop foreach target
#

set(MAIN_SRC "${SOURCE_DIR}/macros-all-common.cpp")
string(REGEX REPLACE "^.*/([a-z-]+)\\.cpp$" "\\1" MAIN_EXE "${MAIN_SRC}")
#string(REGEX REPLACE "^.*/([a-z-]+)\\.cpp$" "${CMAKE_RUNTIME_OUTPUT_DIRECTORY}/\\1" MAIN_EXE "${MAIN_SRC}")

message(STATUS "MAIN_SRC=${MAIN_SRC}")
message(STATUS "MAIN_EXE=${MAIN_EXE}")

add_executable("${MAIN_EXE}" "${MAIN_SRC}")


set(MAIN_SRC "${SOURCE_DIR}/macros-endian-common.cpp")
string(REGEX REPLACE "^.*/([a-z-]+)\\.cpp$" "\\1" MAIN_EXE "${MAIN_SRC}")
#string(REGEX REPLACE "^.*/([a-z-]+)\\.cpp$" "${CMAKE_RUNTIME_OUTPUT_DIRECTORY}/\\1" MAIN_EXE "${MAIN_SRC}")

message(STATUS "MAIN_SRC=${MAIN_SRC}")
message(STATUS "MAIN_EXE=${MAIN_EXE}")

add_executable("${MAIN_EXE}" "${MAIN_SRC}")


set(MAIN_SRC "${SOURCE_DIR}/macros-inttypes-common.cpp")
string(REGEX REPLACE "^.*/([a-z-]+)\\.cpp$" "\\1" MAIN_EXE "${MAIN_SRC}")
#string(REGEX REPLACE "^.*/([a-z-]+)\\.cpp$" "${CMAKE_RUNTIME_OUTPUT_DIRECTORY}/\\1" MAIN_EXE "${MAIN_SRC}")

message(STATUS "MAIN_SRC=${MAIN_SRC}")
message(STATUS "MAIN_EXE=${MAIN_EXE}")

add_executable("${MAIN_EXE}" "${MAIN_SRC}")



#file(GLOB INCLUDES $(PROJECT_INCLUDE_DIR) "/*.hpp")


