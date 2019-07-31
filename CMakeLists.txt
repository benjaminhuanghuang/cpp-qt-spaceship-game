cmake_minimum_required(VERSION 3.7)

set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -std=c++11 -stdlib=libc++")

set(Qt5_DIR "/Users/bhuang/Qt/5.12.2/clang_64/lib/cmake/Qt5")

project(QtGame)

find_package(Qt5 COMPONENTS Quick Core REQUIRED)

file(GLOB project_SRCS src/*.cpp) #src/*.h

add_executable(${PROJECT_NAME} ${project_SRCS})

qt5_use_modules(${PROJECT_NAME} Widgets Core)

target_link_libraries(${PROJECT_NAME} Qt5::Core Qt5::Widgets)
