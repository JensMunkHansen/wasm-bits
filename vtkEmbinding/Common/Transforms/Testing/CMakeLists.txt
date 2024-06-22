cmake_minimum_required(VERSION 3.15)

include(CTest)
enable_testing()

find_package(VTK 
COMPONENTS
  CommonCore
  CommonTransforms
)

set(emscripten_optimization_flags -g3 -O0)

# https://gitlab.kitware.com/vtk/vtk/-/issues/19008
add_executable(TransformTest TransformTest.cpp)
target_link_libraries(TransformTest PUBLIC vtkEmbinding)
target_link_options(TransformTest PRIVATE
  "-lembind"
  "-sMODULARIZE=1"
  "-sEXPORT_ES6=1"  
  "-sEXPORT_NAME=loadvtkTransformWasmModule"
  "${emscripten_optimization_flags}")
target_link_libraries(TransformTest PUBLIC VTK::CommonCore VTK::CommonTransforms)

target_compile_options(TransformTest PRIVATE ${emscripten_optimization_flags})

# Copy Node/JavaScript to build directory
add_custom_command(
  TARGET TransformTest
  COMMAND
    ${CMAKE_COMMAND} -E copy_if_different
      "${CMAKE_CURRENT_SOURCE_DIR}/package.json"
      $<TARGET_FILE_DIR:TransformTest>)

add_custom_command(
  TARGET TransformTest
  COMMAND
    ${CMAKE_COMMAND} -E copy_if_different
      "${CMAKE_CURRENT_SOURCE_DIR}/package-lock.json"
      $<TARGET_FILE_DIR:TransformTest>)
    
add_custom_command(
  TARGET TransformTest
  COMMAND
    ${CMAKE_COMMAND} -E copy_if_different
      "${CMAKE_CURRENT_SOURCE_DIR}/run.js"
      $<TARGET_FILE_DIR:TransformTest>
)

add_custom_command(
  TARGET TransformTest
  POST_BUILD
  COMMAND
    npm install
  WORKING_DIRECTORY
    ${CMAKE_CURRENT_BINARY_DIR})
    
add_test(NAME ChainOfTransforms_Update_ResultOkay
  COMMAND
    npm run test
  WORKING_DIRECTORY
    ${CMAKE_CURRENT_BINARY_DIR})
    
