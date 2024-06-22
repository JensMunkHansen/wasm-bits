target_sources(${TARGET_LIBRARY_NAME}
  PUBLIC
  vtkAbstractWidgetEmbinding.cxx
)

target_link_libraries(${TARGET_LIBRARY_NAME} PRIVATE VTK::Rendering)
