project(supernova-core C)
cmake_minimum_required(VERSION 3.13)

find_package(OpenGL REQUIRED COMPONENTS EGL)

add_executable(egl egl.c)
target_link_libraries(egl PRIVATE OpenGL::EGL)

install(TARGETS egl
  RUNTIME DESTINATION bin)
