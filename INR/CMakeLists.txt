cmake_minimum_required(VERSION 3.20)
set(CMAKE_CXX_COMPILER g++)
project(GlauberSample CXX)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDART_REQUIRED ON)

set(MAIN_SOURCES main.cpp)
set(LIB_SOURCES 
    Collider.cpp 
    GlauNucleon.cpp 
    GlauNucleus.cpp
)

add_executable(GlauberSample ${MAIN_SOURCES})
add_library(my_lib STATIC ${LIB_SOURCES})

target_link_libraries(GlauberSample PRIVATE my_lib)
target_include_directories(GlauberSample PUBLIC include)
