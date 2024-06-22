target_sources(${TARGET_LIBRARY_NAME}
  PUBLIC
  vtkMatrix4x4Embinding.cxx
)

target_link_libraries(${TARGET_LIBRARY_NAME} PRIVATE VTK::CommonMath)
