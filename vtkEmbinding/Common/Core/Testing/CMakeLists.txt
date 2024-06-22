cmake_minimum_required(VERSION 3.15)

include(CTest)
enable_testing()

find_package(VTK 
COMPONENTS
  CommonCore
)

set(emscripten_optimization_flags -g3 -O0)

# https://gitlab.kitware.com/vtk/vtk/-/issues/19008
add_executable(SmartPointerTest SmartPointerTest.cpp)
target_link_libraries(SmartPointerTest PRIVATE VTK::CommonCore)
target_link_libraries(SmartPointerTest PUBLIC vtkEmbinding)
target_link_options(SmartPointerTest PRIVATE
  "-lembind"
  "-sMODULARIZE=1"
  "-sEXPORT_ES6=1"
  "-sEXPORT_NAME=loadvtkSmartPointerWasmModule"
  "${emscripten_optimization_flags}")

target_compile_options(SmartPointerTest PRIVATE ${emscripten_optimization_flags})
target_link_libraries(SmartPointerTest PUBLIC pthread)


add_executable(CallbackTest CallbackTest.cpp)
target_link_libraries(CallbackTest PRIVATE VTK::CommonCore)
target_link_libraries(CallbackTest PUBLIC vtkEmbinding)
target_link_options(CallbackTest PRIVATE
  "-lembind"
  "-sMODULARIZE=1"
  "-sEXPORT_ES6=1"  
  "-sEXPORT_NAME=loadvtkCallbackWasmModule"
  "${emscripten_optimization_flags}")

target_compile_options(CallbackTest PRIVATE ${emscripten_optimization_flags})






# Copy Node/JavaScript to build directory
add_custom_command(
  TARGET SmartPointerTest
  COMMAND
    ${CMAKE_COMMAND} -E copy_if_different
      "${CMAKE_CURRENT_SOURCE_DIR}/package.json"
      $<TARGET_FILE_DIR:SmartPointerTest>)

add_custom_command(
  TARGET SmartPointerTest
  COMMAND
    ${CMAKE_COMMAND} -E copy_if_different
      "${CMAKE_CURRENT_SOURCE_DIR}/package-lock.json"
      $<TARGET_FILE_DIR:SmartPointerTest>)
    
add_custom_command(
  TARGET SmartPointerTest
  COMMAND
    ${CMAKE_COMMAND} -E copy_if_different
      "${CMAKE_CURRENT_SOURCE_DIR}/run_SmartPointerTest.js"
      $<TARGET_FILE_DIR:SmartPointerTest>
)

add_custom_command(
  TARGET CallbackTest
  COMMAND
    ${CMAKE_COMMAND} -E copy_if_different
      "${CMAKE_CURRENT_SOURCE_DIR}/run_CallbackTest.js"
      $<TARGET_FILE_DIR:CallbackTest>
)

add_custom_command(
  TARGET SmartPointerTest
  POST_BUILD
  COMMAND
    npm install
  WORKING_DIRECTORY
    ${CMAKE_CURRENT_BINARY_DIR})
    
add_test(NAME GarbageCollector_LeakVTKSmartPointer_ObjectsDeleted
  COMMAND
    npm run smartpointer
  WORKING_DIRECTORY
    ${CMAKE_CURRENT_BINARY_DIR})

add_test(NAME CallbackCommand_InvokeEvent_CallbackExecuted
  COMMAND
    npm run callback
  WORKING_DIRECTORY
    ${CMAKE_CURRENT_BINARY_DIR})
  
