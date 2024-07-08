cmake_minimum_required(VERSION 3.15)
project(Inherit)

add_executable(main main.cpp extra.cpp)
set(emscripten_optimization_flags -g3 -O0)
target_link_options(main PRIVATE
  "-lembind"
  "-sMODULARIZE=1"
  "-sEXPORT_NAME=loadInheritWasmModule"
  "${emscripten_optimization_flags}")
target_compile_options(main PRIVATE ${emscripten_optimization_flags})

add_custom_command(
  TARGET main
  COMMAND
  ${CMAKE_COMMAND} -E copy_if_different
  "${CMAKE_CURRENT_SOURCE_DIR}/run.js"
  $<TARGET_FILE_DIR:main>)
  
