cmake_minimum_required(VERSION 3.15)
project(StdFunction)

include(CTest)
enable_testing()

add_executable(output callback_example.cpp)
set(emscripten_optimization_flags -g3 -O0)

target_link_options(output PRIVATE
  "-lembind"
  "-sMODULARIZE=1"
  "-sEXPORT_ES6=1"
  "-sEXPORT_NAME=loadFunctionPointerWasmModule"
  "-sINCLUDE_FULL_LIBRARY=1"
  "-sALLOW_TABLE_GROWTH=1"
  "${emscripten_optimization_flags}")
target_compile_options(output PRIVATE ${emscripten_optimization_flags})

# Copy HTML to build directory
add_custom_command(
  TARGET output
  COMMAND
    ${CMAKE_COMMAND} -E copy_if_different
      "${CMAKE_CURRENT_SOURCE_DIR}/index.html"
      $<TARGET_FILE_DIR:output>
)

# Copy Node/JavaScript to build directory
add_custom_command(
  TARGET output
  COMMAND
    ${CMAKE_COMMAND} -E copy_if_different
      "${CMAKE_CURRENT_SOURCE_DIR}/package.json"
      $<TARGET_FILE_DIR:output>)

add_custom_command(
  TARGET output
  COMMAND
    ${CMAKE_COMMAND} -E copy_if_different
      "${CMAKE_CURRENT_SOURCE_DIR}/package-lock.json"
      $<TARGET_FILE_DIR:output>)
    
add_custom_command(
  TARGET output
  COMMAND
    ${CMAKE_COMMAND} -E copy_if_different
      "${CMAKE_CURRENT_SOURCE_DIR}/run.js"
      $<TARGET_FILE_DIR:output>
)

add_custom_command(
  TARGET output
  POST_BUILD
  COMMAND
    npm install
  WORKING_DIRECTORY
    ${CMAKE_CURRENT_BINARY_DIR})
    
add_test(NAME FunctionPointer_Execute_FunctionCalled
  COMMAND
    npm run test
  WORKING_DIRECTORY
    ${CMAKE_CURRENT_BINARY_DIR})
