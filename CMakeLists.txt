cmake_minimum_required (VERSION 3.5.1)

set (CMAKE_CXX_STANDARD 17)
set(CXX_STANDARD_REQUIRED ON)
set(_SOURCE_DIR ${CMAKE_CURRENT_SOURCE_DIR}/cpp)
set(_INC_DIR ${CMAKE_CURRENT_SOURCE_DIR}/cpp/utils)
project (robo_entry)



include_directories(${CMAKE_CURRENT_SOURCE_DIR}/cpp )
add_executable(
  ${PROJECT_NAME}
  
  ${_SOURCE_DIR}/main.cpp
  ${_INC_DIR}/Image.cpp
 
  

)