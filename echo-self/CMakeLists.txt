
project(cmake-echo-self)
 
message(STATUS "CMAKE_GENERATOR : ${CMAKE_GENERATOR}")
message(STATUS "PROJECT_NAME     : ${PROJECT_NAME}")

add_executable(self self.cpp)
