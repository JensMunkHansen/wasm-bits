cmake_minimum_required(VERSION 3.13)
project(JSSphere)

include(CTest)

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
    CommonCore
    InteractionStyle    # Mouse handling
    RenderingOpenGL2    # For Rendering with OpenGL
    RenderingWebGPU     # For Rendering with WebGPU
    RenderingUI         # For SDL2 Window
)
else()
find_package(VTK
  COMPONENTS
    CommonCore
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
set(TARGET_NAME JSSphere)
add_executable(${TARGET_NAME}
  vtkActorEmbinding.cxx
  vtkSphereSourceEmbinding.cxx
  vtkAlgorithmEmbinding.cxx
  vtkMapperEmbinding.cxx
  vtkAlgorithmOutputEmbinding.cxx
  vtkProp3DEmbinding.cxx
  vtkPropEmbinding.cxx
  vtkPropertyEmbinding.cxx
  vtkOpenGLRenderWindowEmbinding.cxx
  vtkAbstractMapperEmbinding.cxx
  vtkAbstractMapper3DEmbinding.cxx
  vtkPolyDataAlgorithmEmbinding.cxx
  vtkPolyDataMapperEmbinding.cxx
  vtkObjectBaseEmbinding.cxx
  vtkObjectEmbinding.cxx
  vtkCallbackCommandEmbinding.cxx
  vtkCommandEmbinding.cxx
  vtkRendererEmbinding.cxx
  vtkRenderWindowInteractorEmbinding.cxx
  vtkRenderWindowEmbinding.cxx
  vtkWebAssemblyRenderWindowInteractorEmbinding.cxx
  vtkWebAssemblyOpenGLRenderWindowEmbinding.cxx
  vtkOpenGLRendererEmbinding.cxx
  vtkWindowEmbinding.cxx
  vtkViewportEmbinding.cxx
  vtkWindowsEmbinding.cxx
)

target_include_directories(${TARGET_NAME}
  PRIVATE
  ${CMAKE_CURRENT_BINARY_DIR})

target_link_libraries(${TARGET_NAME}
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
  "-sMAXIMUM_MEMORY=4GB"
  "-sSINGLE_FILE=0"
  "--memoryprofiler"
  #"--cpuprofiler"
  #"--threadprofiler"
  "-sEXPORTED_FUNCTIONS=['_malloc', '_free']" # Required if library
  "-sEXPORTED_RUNTIME_METHODS=['ENV', 'FS', 'ccall', 'stringToNewUTF8', 'addFunction']"
  "-sALLOW_TABLE_GROWTH=1"  
  "-sALLOW_MEMORY_GROWTH=1"  
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

target_compile_options(${TARGET_NAME}
  PUBLIC
    ${emscripten_compile_options}
    ${emscripten_optimizations}
    ${emscripten_debug_options}
)

target_link_options(${TARGET_NAME}
  PUBLIC
    ${emscripten_link_options}
    ${emscripten_optimizations}
    ${emscripten_debug_options}
)

# -----------------------------------------------------------------------------
# VTK modules initialization
# -----------------------------------------------------------------------------

vtk_module_autoinit(
  TARGETS  ${TARGET_NAME}
  MODULES  ${VTK_LIBRARIES}
)

