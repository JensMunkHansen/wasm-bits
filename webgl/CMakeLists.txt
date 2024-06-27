cmake_minimum_required(VERSION 3.15)

add_executable(webgl_create_context webgl_create_context.cpp)
set(emscripten_optimization_flags -g3 -O0)
target_link_libraries(webgl_create_context PRIVATE VTK::CommonCore)
target_link_options(webgl_create_context PRIVATE
  "-lembind"
  "-sMODULARIZE=1"
  "-sEXPORT_ES6=1"  
  "-sEXPORT_NAME=loadvtkSmartPointerWasmModule"
  "${emscripten_optimization_flags}")
