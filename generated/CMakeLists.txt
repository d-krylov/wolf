cmake_minimum_required(VERSION 3.25)

project(Example LANGUAGES CXX C)

set(CMAKE_CXX_STANDARD 23)
set(CMAKE_CXX_STANDARD_REQUIRED ON)
set(CMAKE_CXX_EXTENSIONS ON)

find_package(Vulkan REQUIRED)

add_executable(${PROJECT_NAME} 
  main.cpp
)

target_include_directories(${PROJECT_NAME}
  PUBLIC ${Vulkan_INCLUDE_DIR}
)
