cmake_minimum_required(VERSION 3.15)

project(webgl)

add_executable(webgl_create_context webgl_create_context.cpp)

set(emscripten_optimization_flags -g3 -O0)
target_link_options(webgl_create_context PRIVATE
 "-sUSE_GLFW=3"
 "-sFULL_ES3=1"
 "-sOFFSCREEN_FRAMEBUFFER=1"
 "-sOFFSCREENCANVAS_SUPPORT=1"
 "-sUSE_WEBGL2=1"
#  "-sMODULARIZE=1"
#  "-sEXPORT_ES6=1"  
#  "-sEXPORT_NAME=loadvtkSmartPointerWasmModule"
  "${emscripten_optimization_flags}")

add_executable(webgl_create_context2 webgl_create_context2.cpp)
set(emscripten_optimization_flags -g3 -O0)
target_link_options(webgl_create_context2 PRIVATE
#  "-lembind"
#  "-sMODULARIZE=1"
#  "-sEXPORT_ES6=1"  
#  "-sEXPORT_NAME=loadvtkSmartPointerWasmModule"
  "${emscripten_optimization_flags}")
