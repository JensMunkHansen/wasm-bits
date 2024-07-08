cmake_minimum_required(VERSION 3.15)

project(vtkEmbinding)

include(CTest)
enable_testing()

find_package(VTK 
  COMPONENTS
    CommonCore
)

set(ENABLE_THREADING OFF)

add_library(vtkEmbindingUtils INTERFACE)
target_sources(vtkEmbindingUtils PUBLIC
  vtkEmbindSmartPointerTraits.h)
target_link_libraries(vtkEmbindingUtils INTERFACE VTK::CommonCore)

target_include_directories(vtkEmbindingUtils
  INTERFACE
    $<BUILD_INTERFACE:${CMAKE_CURRENT_SOURCE_DIR}>
    $<INSTALL_INTERFACE:include>)

set(TARGET_LIBRARY_NAME vtkEmbinding)
add_library(${TARGET_LIBRARY_NAME})

if (ENABLE_THREADING)
  target_link_libraries(${TARGET_LIBRARY_NAME} PUBLIC pthread)
endif()
target_link_libraries(${TARGET_LIBRARY_NAME} PUBLIC vtkEmbindingUtils)
  
# Selected content that we need from hierarchy
add_subdirectory(Common)
add_subdirectory(Filters)
# add_subdirectory(Rendering)
# add_subdirectory(Interaction)
    
if (BUILD_TESTING)
  # Testing - consider joining all tests
  add_subdirectory(Common/Core/Testing)
  add_subdirectory(Common/Transforms/Testing)
  add_subdirectory(Filters/Core/Testing)
endif()
