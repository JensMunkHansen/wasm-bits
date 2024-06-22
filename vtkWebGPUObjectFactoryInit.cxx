// defaults
int use_opengl = 1;
int use_webgpu = 0;
// Query the environmental for backend to use.
if (const char* p = std::getenv("VTK_GRAPHICS_BACKEND"))
{
  const std::string backend(p);
  if (backend == "OPENGL")
  {
    use_webgpu = 0;
    use_opengl = 1;
  }
  else if (backend == "WEBGPU")
  {
    use_webgpu = 1;
    use_opengl = 0;
  }
  else
  {
    vtkLogF(ERROR, "Unknown backend '%s', using default OPENGL", backend.c_str());
  }
}
// register the factory before modyfing the overrides so it is found below
vtkRenderingWebGPUObjectFactory* renderingFactory = vtkRenderingWebGPUObjectFactory::New();
if (renderingFactory)
{
  // vtkObjectFactory keeps a reference to the factory,
  vtkObjectFactory::RegisterFactory(renderingFactory);
  renderingFactory->Delete();
}
vtkObjectFactory* object_factory;
vtkCollectionSimpleIterator osit;
for (vtkObjectFactory::GetRegisteredFactories()->InitTraversal(osit);
     (object_factory = vtkObjectFactory::GetRegisteredFactories()->GetNextObjectFactory(osit));)
{
  if (object_factory->HasOverride("vtkActor"))
  {
    object_factory->SetEnableFlag(use_webgpu, "vtkActor", "vtkWebGPUActor");
    object_factory->SetEnableFlag(use_opengl, "vtkActor", "vtkOpenGLActor");
  }
  if (object_factory->HasOverride("vtkCamera"))
  {
    object_factory->SetEnableFlag(use_webgpu, "vtkCamera", "vtkWebGPUCamera");
    object_factory->SetEnableFlag(use_opengl, "vtkCamera", "vtkOpenGLCamera");
  }
  if (object_factory->HasOverride("vtkHardwareSelector"))
  {
    object_factory->SetEnableFlag(use_webgpu, "vtkHardwareSelector", "vtkWebGPUHardwareSelector");
    object_factory->SetEnableFlag(use_opengl, "vtkHardwareSelector", "vtkOpenGLHardwareSelector");
  }
  if (object_factory->HasOverride("vtkLight"))
  {
    object_factory->SetEnableFlag(use_webgpu, "vtkLight", "vtkWebGPULight");
    object_factory->SetEnableFlag(use_opengl, "vtkLight", "vtkOpenGLLight");
  }
  if (object_factory->HasOverride("vtkPolyDataMapper"))
  {
    object_factory->SetEnableFlag(use_webgpu, "vtkPolyDataMapper", "vtkWebGPUPolyDataMapper");
    object_factory->SetEnableFlag(use_opengl, "vtkPolyDataMapper", "vtkOpenGLPolyDataMapper");
    object_factory->SetEnableFlag(use_opengl, "vtkPolyDataMapper", "vtkOpenGLLowMemoryPolyDataMapper");
  }
  if (object_factory->HasOverride("vtkProperty"))
  {
    object_factory->SetEnableFlag(use_webgpu, "vtkProperty", "vtkWebGPUProperty");
    object_factory->SetEnableFlag(use_opengl, "vtkProperty", "vtkOpenGLProperty");
  }
  if (object_factory->HasOverride("vtkRenderer"))
  {
    object_factory->SetEnableFlag(use_webgpu, "vtkRenderer", "vtkWebGPURenderer");
    object_factory->SetEnableFlag(use_opengl, "vtkRenderer", "vtkOpenGLRenderer");
  }
  if (object_factory->HasOverride("vtkRenderWindow"))
  {
    if (use_webgpu && !use_opengl)
    {
      object_factory->SetEnableFlag(use_webgpu, "vtkRenderWindow", "vtkWebAssemblyWebGPURenderWindow");
      // disable ALL opengl render window overrides.
      object_factory->SetEnableFlag(0, "vtkRenderWindow", "vtkCocoaRenderWindow");
      object_factory->SetEnableFlag(0, "vtkRenderWindow", "vtkWin32OpenGLRenderWindow");
      object_factory->SetEnableFlag(0, "vtkRenderWindow", "vtkXOpenGLRenderWindow");
      object_factory->SetEnableFlag(0, "vtkRenderWindow", "vtkSDL2OpenGLRenderWindow");
    }
  }
}
