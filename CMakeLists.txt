cmake_minimum_required(VERSION 3.10)
project(webcam)

# Manually set the OpenCV directory
set(OpenCV_DIR "C:/Users/Ayushiraj/Downloads/opencv/build")

find_package(OpenCV REQUIRED)

if(OpenCV_FOUND)
    message(STATUS "OpenCV version: ${OpenCV_VERSION}")
    message(STATUS "OpenCV include path: ${OpenCV_INCLUDE_DIRS}")
    message(STATUS "OpenCV libraries: ${OpenCV_LIBS}")
else()
    message(FATAL_ERROR "OpenCV NOT FOUND!")
endif()

include_directories(${OpenCV_INCLUDE_DIRS})
link_directories(${OpenCV_LIB_DIRS})

add_executable(webcam src/main.cpp)
target_link_libraries(webcam ${OpenCV_LIBS})
