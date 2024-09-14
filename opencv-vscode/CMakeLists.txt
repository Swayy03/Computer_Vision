cmake_minimum_required(VERSION 3.10)

project(opencv-vscode VERSION 0.1.0)

include(CTest)
enable_testing()

add_executable(${PROJECT_NAME} src/main.cpp)
set(CPACK_PROJECT_NAME ${PROJECT_NAME})
set(CPACK_PROJECT_VERSION ${PROJECT_VERSION})
include(CPack)
set(OpenCV_DIR C:/opencv/build)
find_package(OpenCV REQUIRED)



target_link_libraries(${PROJECT_NAME} ${OpenCV_LIBS})