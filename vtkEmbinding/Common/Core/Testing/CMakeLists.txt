cmake_minimum_required(VERSION 3.15)

include(CTest)
enable_testing()

find_package(VTK 
COMPONENTS
  CommonCore
)

# Readable JS and no optimization
set(emscripten_optimization_flags -g3 -O0)

# https://gitlab.kitware.com/vtk/vtk/-/issues/19008
add_executable(SmartPointerTest SmartPointerTest.cpp)
target_link_libraries(SmartPointerTest PRIVATE VTK::CommonCore)
target_link_libraries(SmartPointerTest PUBLIC vtkEmbinding)
target_link_options(SmartPointerTest PRIVATE
  "-lembind"
  "-sMODULARIZE=1"
  "-sEXPORT_ES6=1"
  "-sINCLUDE_FULL_LIBRARY=1"  
  "-sALLOW_TABLE_GROWTH=1"  
  "-sEXPORT_NAME=loadvtkSmartPointerWasmModule"
  "${emscripten_optimization_flags}")

target_compile_options(SmartPointerTest PRIVATE ${emscripten_optimization_flags})

add_executable(CallbackTest CallbackTest.cpp)
target_link_libraries(CallbackTest PRIVATE VTK::CommonCore)
target_link_libraries(CallbackTest PRIVATE vtkEmbinding)
target_link_options(CallbackTest PRIVATE
  "-lembind"
  "-sMODULARIZE=1"
  "-sEXPORT_ES6=1"  
  "-sINCLUDE_FULL_LIBRARY" # for addFunction  
  "-sEXPORTED_RUNTIME_METHODS=['ENV', 'FS', 'ccall', 'stringToNewUTF8', 'addFunction']"
  "-sALLOW_TABLE_GROWTH=1"  
  "-sALLOW_MEMORY_GROWTH=1"
  "-sEXPORT_NAME=loadvtkCallbackWasmModule"
  "${emscripten_optimization_flags}")

target_compile_options(CallbackTest PRIVATE ${emscripten_optimization_flags})
add_dependencies(CallbackTest SmartPointerTest)

# Copy Node/JavaScript to build directory
set(node_and_javascript_files
  package.json
  package-lock.json
  run_SmartPointerTest.js
  run_CallbackTest.js)

foreach(node_and_javascript_file ${node_and_javascript_files})
  add_custom_command(
    TARGET SmartPointerTest
    COMMAND
      ${CMAKE_COMMAND} -E copy_if_different
        "${CMAKE_CURRENT_SOURCE_DIR}/${node_and_javascript_file}"
        $<TARGET_FILE_DIR:SmartPointerTest>)
endforeach()

add_custom_command(
  TARGET SmartPointerTest
  POST_BUILD
  COMMAND
    npm install
  WORKING_DIRECTORY
    ${CMAKE_CURRENT_BINARY_DIR})
    
add_test(NAME GarbageCollector_LeakVTKSmartPointer_ObjectsDeleted
  COMMAND
    npx node run_SmartPointerTest.js
  WORKING_DIRECTORY
    ${CMAKE_CURRENT_BINARY_DIR})

add_test(NAME CallbackCommand_InvokeEvent_CallbackExecuted
  COMMAND
    npx node run_CallbackTest.js
  WORKING_DIRECTORY
    ${CMAKE_CURRENT_BINARY_DIR})
  
