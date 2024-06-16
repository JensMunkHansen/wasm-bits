cmake_minimum_required(VERSION 3.15)
project(FunctionPointer)

include(CTest)
enable_testing()

add_executable(main main.cpp)
set(emscripten_optimization_flags -g3 -O0)
target_link_options(main PRIVATE
  "-lembind"
  "-sMODULARIZE=1"
  "-sEXPORT_ES6=1"  
  "-sEXPORT_NAME=loadFunctionPointersWasmModule"
  "-sINCLUDE_FULL_LIBRARY=1"
  "-sALLOW_TABLE_GROWTH=1"
  "${emscripten_optimization_flags}")
target_compile_options(main PRIVATE ${emscripten_optimization_flags})

# Copy Node/JavaScript to build directory
add_custom_command(
  TARGET main
  COMMAND
    ${CMAKE_COMMAND} -E copy_if_different
      "${CMAKE_CURRENT_SOURCE_DIR}/package.json"
      $<TARGET_FILE_DIR:main>)

add_custom_command(
  TARGET main
  COMMAND
    ${CMAKE_COMMAND} -E copy_if_different
      "${CMAKE_CURRENT_SOURCE_DIR}/package-lock.json"
      $<TARGET_FILE_DIR:main>)
    
add_custom_command(
  TARGET main
  COMMAND
    ${CMAKE_COMMAND} -E copy_if_different
      "${CMAKE_CURRENT_SOURCE_DIR}/run.js"
      $<TARGET_FILE_DIR:main>
)

add_custom_command(
  TARGET main
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
