target_sources(${TARGET_LIBRARY_NAME}
  PUBLIC
  vtkFinitePlaneWidgetEmbinding.cxx
)

target_link_libraries(${TARGET_LIBRARY_NAME} PRIVATE VTK::InteractionWidgets)
