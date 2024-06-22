target_sources(${TARGET_LIBRARY_NAME}
  PUBLIC
  vtkAbstractTransformEmbinding.cxx
  vtkHomogeneousTransformEmbinding.cxx
  vtkLinearTransformEmbinding.cxx
  vtkTransformEmbinding.cxx
)

target_link_libraries(${TARGET_LIBRARY_NAME} PRIVATE VTK::CommonCore VTK::CommonTransforms)
