// JavaScript wrapper for vtkCoordinate with embind 
//
// This file was auto-generated using :
/*
node /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/bin/vtkWrapJavaScript.js \
 @/home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkRenderingCore.js/vtkRenderingCore.js.Release.args \
 -o \
 /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkRenderingCore.js/vtkCoordinateEmbinding.cxx \
 /home/jmh/github/vtk/Rendering/Core/vtkCoordinate.h
*/
#include "vtkEmbindSmartPointerTrait.h"
#include <emscripten.h>
#include <string>
#include "vtkVariant.h"
#include "vtkObjectBase.h"
#include "vtkIndent.h"
#include "vtkViewport.h"
#include "vtkCoordinate.h"

EMSCRIPTEN_BINDINGS(vtkRenderingCore_vtkCoordinate_0_1_constants) {
  const struct { const char *name; int value; }
    constants[8] = {
      { "VTK_DISPLAY", 0 },
      { "VTK_NORMALIZED_DISPLAY", 1 },
      { "VTK_VIEWPORT", 2 },
      { "VTK_NORMALIZED_VIEWPORT", 3 },
      { "VTK_VIEW", 4 },
      { "VTK_POSE", 5 },
      { "VTK_WORLD", 6 },
      { "VTK_USERDEFINED", 7 },
  };
  for (int c = 0; c < 8; c++)
  {
    emscripten::constant(constants[c].name, constants[c].value);
  }
}
template<> void emscripten::internal::raw_destructor<vtkCoordinate>(vtkCoordinate * ptr){ ptr->Delete(); }
EMSCRIPTEN_BINDINGS(vtkCoordinate_class) {
  emscripten::class_<vtkCoordinate, emscripten::base<vtkObject>>("vtkCoordinate")
    .smart_ptr<vtkSmartPointer<vtkCoordinate>>("vtkSmartPointer<vtkCoordinate>")
    .constructor(&vtk::MakeVTKSmartPtr<vtkCoordinate>)
    .class_function("IsTypeOf", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkCoordinate::IsTypeOf( arg_0.c_str());}))
    .function("IsA", emscripten::optional_override([](vtkCoordinate& self, const std::string & arg_0) -> int {  return self.IsA( arg_0.c_str());}))
    .class_function("SafeDownCast", &vtkCoordinate::SafeDownCast, emscripten::allow_raw_pointers())
    .function("NewInstance", &vtkCoordinate::NewInstance, emscripten::allow_raw_pointers())
    .class_function("GetNumberOfGenerationsFromBaseType", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkCoordinate::GetNumberOfGenerationsFromBaseType( arg_0.c_str());}))
    .function("GetNumberOfGenerationsFromBase", emscripten::optional_override([](vtkCoordinate& self, const std::string & arg_0) -> int {  return self.GetNumberOfGenerationsFromBase( arg_0.c_str());}))
    .function("SetCoordinateSystem", &vtkCoordinate::SetCoordinateSystem)
    .function("GetCoordinateSystem", &vtkCoordinate::GetCoordinateSystem)
    .function("SetCoordinateSystemToDisplay", &vtkCoordinate::SetCoordinateSystemToDisplay)
    .function("SetCoordinateSystemToNormalizedDisplay", &vtkCoordinate::SetCoordinateSystemToNormalizedDisplay)
    .function("SetCoordinateSystemToViewport", &vtkCoordinate::SetCoordinateSystemToViewport)
    .function("SetCoordinateSystemToNormalizedViewport", &vtkCoordinate::SetCoordinateSystemToNormalizedViewport)
    .function("SetCoordinateSystemToView", &vtkCoordinate::SetCoordinateSystemToView)
    .function("SetCoordinateSystemToPose", &vtkCoordinate::SetCoordinateSystemToPose)
    .function("SetCoordinateSystemToWorld", &vtkCoordinate::SetCoordinateSystemToWorld)
    .function("GetCoordinateSystemAsString", emscripten::optional_override([](vtkCoordinate& self) -> std::string {  return self.GetCoordinateSystemAsString();}))
    .function("SetValue", emscripten::select_overload<void(vtkCoordinate&, double, double, double)>([](vtkCoordinate& self, double arg_0, double arg_1, double arg_2) -> void { return self.SetValue( arg_0, arg_1, arg_2); }))
    .function("SetValue", emscripten::select_overload<void(vtkCoordinate&, double, double)>([](vtkCoordinate& self, double arg_0, double arg_1) -> void { return self.SetValue( arg_0, arg_1); }))
    .function("SetReferenceCoordinate", &vtkCoordinate::SetReferenceCoordinate, emscripten::allow_raw_pointers())
    .function("GetReferenceCoordinate", &vtkCoordinate::GetReferenceCoordinate, emscripten::allow_raw_pointers())
    .function("SetViewport", &vtkCoordinate::SetViewport, emscripten::allow_raw_pointers())
    .function("GetViewport", &vtkCoordinate::GetViewport, emscripten::allow_raw_pointers());
}
