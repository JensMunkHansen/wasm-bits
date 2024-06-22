// JavaScript wrapper for vtkTextureMapToPlane with embind 
//
// This file was auto-generated using :
/*
node /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/bin/vtkWrapJavaScript.js \
 @/home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkFiltersTexture.js/vtkFiltersTexture.js.Release.args \
 -o \
 /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkFiltersTexture.js/vtkTextureMapToPlaneEmbinding.cxx \
 /home/jmh/github/vtk/Filters/Texture/vtkTextureMapToPlane.h
*/
#include "vtkEmbindSmartPointerTrait.h"
#include <emscripten.h>
#include <string>
#include "vtkVariant.h"
#include "vtkObjectBase.h"
#include "vtkIndent.h"
#include "vtkTextureMapToPlane.h"

template<> void emscripten::internal::raw_destructor<vtkTextureMapToPlane>(vtkTextureMapToPlane * ptr){ ptr->Delete(); }
EMSCRIPTEN_BINDINGS(vtkTextureMapToPlane_class) {
  emscripten::class_<vtkTextureMapToPlane, emscripten::base<vtkDataSetAlgorithm>>("vtkTextureMapToPlane")
    .smart_ptr<vtkSmartPointer<vtkTextureMapToPlane>>("vtkSmartPointer<vtkTextureMapToPlane>")
    .constructor(&vtk::MakeAvtkSmartPointer<vtkTextureMapToPlane>)
    .class_function("IsTypeOf", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkTextureMapToPlane::IsTypeOf( arg_0.c_str());}))
    .function("IsA", emscripten::optional_override([](vtkTextureMapToPlane& self, const std::string & arg_0) -> int {  return self.IsA( arg_0.c_str());}))
    .class_function("SafeDownCast", &vtkTextureMapToPlane::SafeDownCast, emscripten::allow_raw_pointers())
    .function("NewInstance", &vtkTextureMapToPlane::NewInstance, emscripten::allow_raw_pointers())
    .class_function("GetNumberOfGenerationsFromBaseType", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkTextureMapToPlane::GetNumberOfGenerationsFromBaseType( arg_0.c_str());}))
    .function("GetNumberOfGenerationsFromBase", emscripten::optional_override([](vtkTextureMapToPlane& self, const std::string & arg_0) -> int {  return self.GetNumberOfGenerationsFromBase( arg_0.c_str());}))
    .function("SetOrigin", emscripten::select_overload<void(vtkTextureMapToPlane&, double, double, double)>([](vtkTextureMapToPlane& self, double arg_0, double arg_1, double arg_2) -> void { return self.SetOrigin( arg_0, arg_1, arg_2); }))
    .function("SetPoint1", emscripten::select_overload<void(vtkTextureMapToPlane&, double, double, double)>([](vtkTextureMapToPlane& self, double arg_0, double arg_1, double arg_2) -> void { return self.SetPoint1( arg_0, arg_1, arg_2); }))
    .function("SetPoint2", emscripten::select_overload<void(vtkTextureMapToPlane&, double, double, double)>([](vtkTextureMapToPlane& self, double arg_0, double arg_1, double arg_2) -> void { return self.SetPoint2( arg_0, arg_1, arg_2); }))
    .function("SetNormal", emscripten::select_overload<void(vtkTextureMapToPlane&, double, double, double)>([](vtkTextureMapToPlane& self, double arg_0, double arg_1, double arg_2) -> void { return self.SetNormal( arg_0, arg_1, arg_2); }))
    .function("SetSRange", emscripten::select_overload<void(vtkTextureMapToPlane&, double, double)>([](vtkTextureMapToPlane& self, double arg_0, double arg_1) -> void { return self.SetSRange( arg_0, arg_1); }))
    .function("SetTRange", emscripten::select_overload<void(vtkTextureMapToPlane&, double, double)>([](vtkTextureMapToPlane& self, double arg_0, double arg_1) -> void { return self.SetTRange( arg_0, arg_1); }))
    .function("SetAutomaticPlaneGeneration", &vtkTextureMapToPlane::SetAutomaticPlaneGeneration)
    .function("GetAutomaticPlaneGeneration", &vtkTextureMapToPlane::GetAutomaticPlaneGeneration)
    .function("AutomaticPlaneGenerationOn", &vtkTextureMapToPlane::AutomaticPlaneGenerationOn)
    .function("AutomaticPlaneGenerationOff", &vtkTextureMapToPlane::AutomaticPlaneGenerationOff);
}
