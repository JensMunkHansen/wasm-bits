target_sources(${TARGET_LIBRARY_NAME}
  PUBLIC
  vtkCleanPolyDataEmbinding.cxx
  vtkPlaneCutterEmbinding.cxx
)

target_link_libraries(${TARGET_LIBRARY_NAME} PRIVATE VTK::FiltersCore)
