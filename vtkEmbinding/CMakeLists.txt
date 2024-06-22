cmake_minimum_required(VERSION 3.15)

project(vtkEmbinding)

include(CTest)
enable_testing()

find_package(VTK 
COMPONENTS
  CommonCore
)

set(TARGET_LIBRARY_NAME vtkEmbinding)
add_library(${TARGET_LIBRARY_NAME} vtkEmbindSmartPointerTraits.h)

target_link_libraries(${TARGET_LIBRARY_NAME} PRIVATE VTK::CommonCore)

target_include_directories(${TARGET_LIBRARY_NAME}
  PUBLIC
    $<BUILD_INTERFACE:${CMAKE_CURRENT_SOURCE_DIR}>
    $<INSTALL_INTERFACE:include>)

# Selected content that we need from hierarchy
add_subdirectory(Common)
add_subdirectory(Filters)
add_subdirectory(Interaction)

# Testing
add_subdirectory(Common/Core/Testing)
