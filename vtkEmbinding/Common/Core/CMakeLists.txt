target_sources(${TARGET_LIBRARY_NAME}
  PUBLIC
  vtkObjectBaseEmbinding.cxx
  vtkObjectEmbinding.cxx
  vtkCommandEmbinding.cxx
  vtkCallbackCommandEmbinding.cxx
#  vtkVariantEmbedding.cxx # Needed for vtkFinitePlaneWidget
)


