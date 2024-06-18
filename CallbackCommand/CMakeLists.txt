cmake_minimum_required(VERSION 3.22..3.28)

project(VTKCallbackCommand)

include(CTest)

find_package(VTK 
COMPONENTS
  CommonCore
)

add_executable(main main.cpp)
set(emscripten_optimization_flags -g3 -O0)
target_link_libraries(main PRIVATE VTK::CommonCore)
target_link_options(main PRIVATE
  "-lembind"
  "-sMODULARIZE=1"
  "-sEXPORT_ES6=1"  
  "-sEXPORT_NAME=loadvtkCallbackCommandWasmModule"
  "${emscripten_optimization_flags}")

target_compile_options(main PRIVATE ${emscripten_optimization_flags})

set(node_and_javascript_files
  package.json
  package-lock.json
  run.js)

foreach(node_and_javascript_file ${node_and_javascript_files})
  add_custom_command(
    TARGET main
    COMMAND
      ${CMAKE_COMMAND} -E copy_if_different
        "${CMAKE_CURRENT_SOURCE_DIR}/${node_and_javascript_file}"
        $<TARGET_FILE_DIR:main>)
endforeach()


# Copy output to current source dir
add_custom_command(
  TARGET main
  POST_BUILD
  COMMAND
    npm install
  WORKING_DIRECTORY
    ${CMAKE_CURRENT_BINARY_DIR})

add_test(NAME CallbackCommand_Execute_CallerIsIdentified
  COMMAND
    npm run test
  WORKING_DIRECTORY
    ${CMAKE_CURRENT_BINARY_DIR})
