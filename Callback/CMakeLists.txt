cmake_minimum_required(VERSION 3.15)

project(vtkCallbackCommand)

include(CTest)
enable_testing()

find_package(VTK 
COMPONENTS
  CommonCore
)

add_executable(main main.cpp)

target_link_libraries(main PRIVATE VTK::CommonCore)
if (EMSCRIPTEN)
set(emscripten_optimization_flags -g3 -O0)
target_link_options(main PRIVATE
  "-lembind"
  "-sMODULARIZE=1"
  "-sEXPORT_NAME=loadvtkCallbackCommandWasmModule"
  "${emscripten_optimization_flags}")
target_compile_options(main PRIVATE ${emscripten_optimization_flags})
endif()

