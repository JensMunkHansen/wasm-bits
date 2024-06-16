cmake_minimum_required(VERSION 3.15)
project(StdFunction)

include(CTest)
enable_testing()

add_executable(function_pointer function_pointer.cpp)
set(emscripten_optimization_flags -g3 -O0)

target_link_options(function_pointer PRIVATE
  "-lembind"
  "-sMODULARIZE=1"
#  "-sEXPORT_ES6=1" # Without this, the index.html works 
#  "-sEXPORT_ES6=1" # With this the node run test works
  "-sEXPORT_NAME=loadStdFunctionWasmModule"
  "-sEXPORTED_FUNCTIONS=\"_set_function_pointer\", \"_call_stored_function\""
  "-sEXPORTED_RUNTIME_METHODS=\"ccall\", \"cwrap\", \"addFunction\""
  "-sINCLUDE_FULL_LIBRARY=1"
  "-sALLOW_TABLE_GROWTH=1"
  "-sDEFAULT_LIBRARY_FUNCS_TO_INCLUDE='$addFunction'"
  "${emscripten_optimization_flags}")
target_compile_options(function_pointer PRIVATE ${emscripten_optimization_flags})

# Copy HTML to build directory
add_custom_command(
  TARGET function_pointer
  COMMAND
    ${CMAKE_COMMAND} -E copy_if_different
      "${CMAKE_CURRENT_SOURCE_DIR}/index.html"
      $<TARGET_FILE_DIR:function_pointer>
)

# Copy Node/JavaScript to build directory
add_custom_command(
  TARGET function_pointer
  COMMAND
    ${CMAKE_COMMAND} -E copy_if_different
      "${CMAKE_CURRENT_SOURCE_DIR}/package.json"
      $<TARGET_FILE_DIR:function_pointer>)

add_custom_command(
  TARGET function_pointer
  COMMAND
    ${CMAKE_COMMAND} -E copy_if_different
      "${CMAKE_CURRENT_SOURCE_DIR}/package-lock.json"
      $<TARGET_FILE_DIR:function_pointer>)
    
add_custom_command(
  TARGET function_pointer
  COMMAND
    ${CMAKE_COMMAND} -E copy_if_different
      "${CMAKE_CURRENT_SOURCE_DIR}/run.js"
      $<TARGET_FILE_DIR:function_pointer>
)

add_custom_command(
  TARGET function_pointer
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
