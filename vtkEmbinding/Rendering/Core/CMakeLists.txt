find_package(VTK 
COMPONENTS
  RenderingCore
)

target_sources(${TARGET_LIBRARY_NAME}
  PUBLIC
  vtkInteractorObserverEmbinding.cxx
  vtkRendererEmbinding.cxx
  vtkRenderWindowInteractorEmbinding.cxx
)

target_link_libraries(${TARGET_LIBRARY_NAME} PRIVATE VTK::RenderingCore)
