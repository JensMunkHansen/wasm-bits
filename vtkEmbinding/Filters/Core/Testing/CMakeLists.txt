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
add_executable(main main.cpp)
target_link_libraries(main PUBLIC vtkEmbinding)
target_link_options(main PRIVATE
  "-lembind"
  "-sMODULARIZE=1"
  "-sEXPORT_ES6=1"  
  "-sEXPORT_NAME=loadFiltersCoreWasmModule"
  "${emscripten_optimization_flags}")
target_link_libraries(main PUBLIC VTK::CommonCore VTK::CommonTransforms)

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
      "${CMAKE_CURRENT_SOURCE_DIR}/run_PlaneCutSphere.js"
      $<TARGET_FILE_DIR:main>
)

add_custom_command(
  TARGET main
  POST_BUILD
  COMMAND
    npm install
  WORKING_DIRECTORY
    ${CMAKE_CURRENT_BINARY_DIR})
    
add_test(NAME PlaneCutter_CutSphere_OutputAvailable
  COMMAND
    npm run test
  WORKING_DIRECTORY
    ${CMAKE_CURRENT_BINARY_DIR})
    
