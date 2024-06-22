target_sources(${TARGET_LIBRARY_NAME}
  PUBLIC
  vtkAlgorithmEmbinding.cxx
  vtkDataObjectAlgorithmEmbinding.cxx
  vtkPolyDataAlgorithmEmbinding.cxx
  vtkAlgorithmOutputEmbinding.cxx
)

target_link_libraries(${TARGET_LIBRARY_NAME} PRIVATE VTK::CommonExecutionModel)

