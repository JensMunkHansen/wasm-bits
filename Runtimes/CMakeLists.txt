cmake_minimum_required(VERSION 3.15)

project(RunTimes)

set(emscripten_optimization_flags -g3 -O0)
add_executable(Module1 module1.cpp)
target_link_options(Module1 PRIVATE
  "-sMODULARIZE=1"
  "-sEXPORT_ES6=1"
  "-sEXPORT_NAME=Module1"
  "${emscripten_optimization_flags}")

target_compile_options(Module1 PRIVATE ${emscripten_optimization_flags})

add_executable(Module2 module2.cpp)
target_link_options(Module2 PRIVATE
  "-sMODULARIZE=1"
  "-sEXPORT_ES6=1"
  "-sEXPORT_NAME=Module2"
  "${emscripten_optimization_flags}")

target_compile_options(Module2 PRIVATE ${emscripten_optimization_flags})

set(node_and_javascript_files
  package.json
  package-lock.json
  run.js
)

foreach(node_and_javascript_file ${node_and_javascript_files})
  add_custom_command(
    TARGET Module1
    COMMAND
      ${CMAKE_COMMAND} -E copy_if_different
        "${CMAKE_CURRENT_SOURCE_DIR}/${node_and_javascript_file}"
        $<TARGET_FILE_DIR:Module1>)
endforeach()
