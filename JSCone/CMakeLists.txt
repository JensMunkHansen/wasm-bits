cmake_minimum_required(VERSION 3.13)
project(Viewer)

include(GenerateExportHeader)

option(ENABLE_WEBGPU "Enable WebGPU" OFF)

configure_file(Viewer.html ${CMAKE_CURRENT_BINARY_DIR}/index.html)
# -----------------------------------------------------------------------------
# EMSCRIPTEN only
# -----------------------------------------------------------------------------

if (NOT EMSCRIPTEN)
  message("Skipping example: This needs to run inside an Emscripten build environment")
  return ()
endif ()

# -----------------------------------------------------------------------------
# Handle VTK dependency
# -----------------------------------------------------------------------------

if (ENABLE_WEBGPU)
find_package(VTK
  COMPONENTS
    FiltersSources      # VTK pipeline
    InteractionStyle    # Mouse handling
    RenderingOpenGL2    # For Rendering with OpenGL
    RenderingWebGPU     # For Rendering with WebGPU
    RenderingUI         # For SDL2 Window
)
else()
find_package(VTK
  COMPONENTS
    FiltersSources      # VTK pipeline
    InteractionStyle    # Mouse handling
    RenderingOpenGL2    # For Rendering with OpenGL
    RenderingUI         # For SDL2 Window
)
endif()

if (NOT VTK_FOUND)
  message("Skipping example: ${VTK_NOT_FOUND_MESSAGE}")
  return ()
endif ()

# -----------------------------------------------------------------------------
# Compile example code
# -----------------------------------------------------------------------------

add_executable(Viewer
  vtkObjectBaseEmbinding.cxx
  vtkObjectEmbinding.cxx
  vtkRenderWindowEmbinding.cxx
#  vtkRendererEmbinding.cxx
#  vtkRenderWindowInteractorEmbinding.cxx
#  vtkRenderWindowInteractorEmbinding.cxx
#  vtkWebAssemblyRenderWindowInteractorEmbinding.cxx
  vtkWebAssemblyOpenGLRenderWindowEmbinding.cxx
)

target_include_directories(Viewer
  PRIVATE
  ${CMAKE_CURRENT_BINARY_DIR})

target_link_libraries(Viewer
  PRIVATE
    ${VTK_LIBRARIES}
)

# -----------------------------------------------------------------------------
# WebAssembly build options
# -----------------------------------------------------------------------------
set(emscripten_link_options)
set(emscripten_compile_options)

list(APPEND emscripten_link_options
  "-lembind"
  "-sMODULARIZE=1"
  "-sEXPORT_ES6=1"
  "-sEXPORT_NAME=createViewerModule"
  "-sALLOW_MEMORY_GROWTH=1"
  "-sMAXIMUM_MEMORY=4GB"
  "-sSINGLE_FILE=1"
  "--memoryprofiler"
  #"--cpuprofiler"
  #"--threadprofiler"
  "-sEXPORTED_FUNCTIONS=['_malloc', '_free']" # Required if library
  "-sEXPORTED_RUNTIME_METHODS=['ENV', 'UTF8ToString']" # UTF8ToString required if library
)

if (ENABLE_THREADING)
  list(APPEND emscripten_link_options
    "SHELL:-s USE_PTHREADS=1"
    "-pthread"
    "SHELL:-s PTHREAD_POOL_SIZE=4"
    "SHELL:-s OFFSCREENCANVAS_SUPPORT=1" # Proxy rendering to main browser thread
    "-sENVIRONMENT=web,worker"
  )
else()
  list(APPEND emscripten_link_options
    "-sENVIRONMENT=web"
  )
endif()

set(emscripten_debug_options)
if(DEBUGINFO STREQUAL "NONE")
  list(APPEND emscripten_debug_options
    "-g0"
  )
elseif(DEBUGINFO STREQUAL "READABLE_JS")
  list(APPEND emscripten_debug_options
    "-g1"
  )
  list(APPEND emscripten_link_options
    "-sDEMANGLE_SUPPORT=1"
  )
elseif(DEBUGINFO STREQUAL "PROFILE")
  list(APPEND emscripten_debug_options
    "-g2"
  )
  list(APPEND emscripten_link_options
    "-sDEMANGLE_SUPPORT=1"
  )
elseif(DEBUGINFO STREQUAL "DEBUG_NATIVE")
  list(APPEND emscripten_debug_options
    "-g3"
  )
  list(APPEND emscripten_link_options
    "-sASSERTIONS=1"
    "-sDEMANGLE_SUPPORT=1"
  )
endif()

# -----------------------------------------------------------------------------
# Build options
# -----------------------------------------------------------------------------
set(emscripten_optimizations)
if(OPTIMIZE STREQUAL "NO_OPTIMIZATION")
  list(APPEND emscripten_optimizations
    "-O0"
  )
elseif(OPTIMIZE STREQUAL "LITTLE")
  list(APPEND emscripten_optimizations
    "-O1"
  )
elseif(OPTIMIZE STREQUAL "MORE")
  list(APPEND emscripten_optimizations
    "-O2"
  )
elseif(OPTIMIZE STREQUAL "BEST")
  list(APPEND emscripten_optimizations
    "-O3"
  )
elseif(OPTIMIZE STREQUAL "SMALL")
  list(APPEND emscripten_optimizations
    "-Os"
  )
elseif(OPTIMIZE STREQUAL "SMALLEST")
  list(APPEND emscripten_optimizations
    "-Oz"
  )
elseif(OPTIMIZE STREQUAL "SMALLEST_WITH_CLOSURE")
  list(APPEND emscripten_optimizations
    "-Oz"
  )
  list(APPEND emscripten_link_options
    "--closure 1"
  )
endif()

target_compile_options(Viewer
  PUBLIC
    ${emscripten_compile_options}
    ${emscripten_optimizations}
    ${emscripten_debug_options}
)

target_link_options(Viewer
  PUBLIC
    ${emscripten_link_options}
    ${emscripten_optimizations}
    ${emscripten_debug_options}
)

# -----------------------------------------------------------------------------
# VTK modules initialization
# -----------------------------------------------------------------------------

vtk_module_autoinit(
  TARGETS  Viewer
  MODULES  ${VTK_LIBRARIES}
)

#set_target_properties(Viewer
#PROPERTIES
#  RUNTIME_OUTPUT_DIRECTORY "${VUE_COMPONENTS_DIR}/Viewer"
#)
