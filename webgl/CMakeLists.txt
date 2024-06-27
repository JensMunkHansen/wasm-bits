cmake_minimum_required(VERSION 3.15)

project(webgl)

if (0)
add_executable(main webgl_create_context.cpp)
else()
add_executable(main webgl_create_context2.cpp)
endif()
set(emscripten_optimization_flags -g3 -O0)
target_link_options(main PRIVATE
 "-sOFFSCREEN_FRAMEBUFFER=1"
 "-sOFFSCREENCANVAS_SUPPORT=1"
 "-sUSE_WEBGL2=1"
 "-sALLOW_MEMORY_GROWTH=1"
 "-sMAXIMUM_MEMORY=4GB"
 "--memoryprofiler"
 "-sMODULARIZE=1"
 "-sEXPORT_ES6=1"   # Needed for js script, but remove for index.htnl
 "-sEXPORT_NAME=loadWebGLWasmModule"
 "-sEXPORTED_FUNCTIONS=['_main', '_malloc', '_free']"
 "-sENVIRONMENT=web"
  "-sEXPORTED_RUNTIME_METHODS=['ENV', 'UTF8ToString']" 
 "${emscripten_optimization_flags}")

add_custom_command(
  TARGET main
  POST_BUILD
  COMMAND
    ${CMAKE_COMMAND} -E copy_if_different
      "${CMAKE_CURRENT_SOURCE_DIR}/index.html"
      $<TARGET_FILE_DIR:main>
)

