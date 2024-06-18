// JavaScript wrapper for vtkCellGridRenderRequest with embind 
//
// This file was auto-generated using :
/*
node /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/bin/vtkWrapJavaScript.js \
 @/home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkRenderingCore.js/vtkRenderingCore.js.Release.args \
 -o \
 /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkRenderingCore.js/vtkCellGridRenderRequestEmbinding.cxx \
 /home/jmh/github/vtk/Rendering/Core/vtkCellGridRenderRequest.h
*/
#include "vtkEmbindSmartPointerTrait.h"
#include <emscripten.h>
#include <string>
#include "vtkVariant.h"
#include "vtkObjectBase.h"
#include "vtkIndent.h"
#include "vtkCellGridMapper.h"
#include "vtkActor.h"
#include "vtkRenderer.h"
#include "vtkWindow.h"
#include "vtkStringToken.h"
#include "vtkCellGridRenderRequest.h"

EMSCRIPTEN_BINDINGS(vtkRenderingCore_vtkCellGridRenderRequest_class_enums) {
}
template<> void emscripten::internal::raw_destructor<vtkCellGridRenderRequest>(vtkCellGridRenderRequest * ptr){ ptr->Delete(); }
EMSCRIPTEN_BINDINGS(vtkCellGridRenderRequest_class) {
  using RenderableGeometry=vtkCellGridRenderRequest::RenderableGeometry;
  emscripten::class_<vtkCellGridRenderRequest, emscripten::base<vtkCellGridQuery>>("vtkCellGridRenderRequest")
    .smart_ptr<vtkSmartPointer<vtkCellGridRenderRequest>>("vtkSmartPointer<vtkCellGridRenderRequest>")
    .constructor(&vtk::MakeAvtkSmartPointer<vtkCellGridRenderRequest>)
    .class_function("IsTypeOf", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkCellGridRenderRequest::IsTypeOf( arg_0.c_str());}))
    .function("IsA", emscripten::optional_override([](vtkCellGridRenderRequest& self, const std::string & arg_0) -> int {  return self.IsA( arg_0.c_str());}))
    .class_function("SafeDownCast", &vtkCellGridRenderRequest::SafeDownCast, emscripten::allow_raw_pointers())
    .function("NewInstance", &vtkCellGridRenderRequest::NewInstance, emscripten::allow_raw_pointers())
    .class_function("GetNumberOfGenerationsFromBaseType", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkCellGridRenderRequest::GetNumberOfGenerationsFromBaseType( arg_0.c_str());}))
    .function("GetNumberOfGenerationsFromBase", emscripten::optional_override([](vtkCellGridRenderRequest& self, const std::string & arg_0) -> int {  return self.GetNumberOfGenerationsFromBase( arg_0.c_str());}))
    .function("SetMapper", &vtkCellGridRenderRequest::SetMapper, emscripten::allow_raw_pointers())
    .function("GetMapper", &vtkCellGridRenderRequest::GetMapper, emscripten::allow_raw_pointers())
    .function("SetActor", &vtkCellGridRenderRequest::SetActor, emscripten::allow_raw_pointers())
    .function("GetActor", &vtkCellGridRenderRequest::GetActor, emscripten::allow_raw_pointers())
    .function("SetRenderer", &vtkCellGridRenderRequest::SetRenderer, emscripten::allow_raw_pointers())
    .function("GetRenderer", &vtkCellGridRenderRequest::GetRenderer, emscripten::allow_raw_pointers())
    .function("SetWindow", &vtkCellGridRenderRequest::SetWindow, emscripten::allow_raw_pointers())
    .function("GetWindow", &vtkCellGridRenderRequest::GetWindow, emscripten::allow_raw_pointers())
    .function("GetShapesToDraw", &vtkCellGridRenderRequest::GetShapesToDraw)
    .function("SetShapesToDraw", &vtkCellGridRenderRequest::SetShapesToDraw)
    .function("GetShapesToDrawMinValue", &vtkCellGridRenderRequest::GetShapesToDrawMinValue)
    .function("GetShapesToDrawMaxValue", &vtkCellGridRenderRequest::GetShapesToDrawMaxValue)
    .function("Initialize", &vtkCellGridRenderRequest::Initialize)
    .function("Finalize", &vtkCellGridRenderRequest::Finalize)
    .function("GetIsReleasingResources", &vtkCellGridRenderRequest::GetIsReleasingResources)
    .function("SetIsReleasingResources", &vtkCellGridRenderRequest::SetIsReleasingResources);
}
EMSCRIPTEN_BINDINGS(vtkRenderingCore_vtkCellGridRenderRequest_0_2_constants) {
    typedef vtkCellGridRenderRequest::RenderableGeometry cxx_enum_type;

  const struct { const char *name; cxx_enum_type value; }
    constants[6] = {
      { "vtkCellGridRenderRequest_RenderableGeometry_VERTICES", vtkCellGridRenderRequest::VERTICES },
      { "vtkCellGridRenderRequest_RenderableGeometry_EDGES", vtkCellGridRenderRequest::EDGES },
      { "vtkCellGridRenderRequest_RenderableGeometry_FACES", vtkCellGridRenderRequest::FACES },
      { "vtkCellGridRenderRequest_RenderableGeometry_VOLUMES", vtkCellGridRenderRequest::VOLUMES },
      { "vtkCellGridRenderRequest_RenderableGeometry_SURFACE_WITH_EDGES", vtkCellGridRenderRequest::SURFACE_WITH_EDGES },
      { "vtkCellGridRenderRequest_RenderableGeometry_ALL", vtkCellGridRenderRequest::ALL },
  };
  for (int c = 0; c < 6; c++)
  {
    emscripten::constant(constants[c].name, static_cast<int>(constants[c].value));
  }
}
