// JavaScript wrapper for vtkTextureMapToCylinder with embind 
//
// This file was auto-generated using :
/*
node /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/bin/vtkWrapJavaScript.js \
 @/home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkFiltersTexture.js/vtkFiltersTexture.js.Release.args \
 -o \
 /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkFiltersTexture.js/vtkTextureMapToCylinderEmbinding.cxx \
 /home/jmh/github/vtk/Filters/Texture/vtkTextureMapToCylinder.h
*/
#include "vtkEmbindSmartPointerTrait.h"
#include <emscripten.h>
#include <string>
#include "vtkVariant.h"
#include "vtkObjectBase.h"
#include "vtkIndent.h"
#include "vtkTextureMapToCylinder.h"

template<> void emscripten::internal::raw_destructor<vtkTextureMapToCylinder>(vtkTextureMapToCylinder * ptr){ ptr->Delete(); }
EMSCRIPTEN_BINDINGS(vtkTextureMapToCylinder_class) {
  emscripten::class_<vtkTextureMapToCylinder, emscripten::base<vtkDataSetAlgorithm>>("vtkTextureMapToCylinder")
    .smart_ptr<vtkSmartPointer<vtkTextureMapToCylinder>>("vtkSmartPointer<vtkTextureMapToCylinder>")
    .constructor(&vtk::MakeAvtkSmartPointer<vtkTextureMapToCylinder>)
    .class_function("IsTypeOf", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkTextureMapToCylinder::IsTypeOf( arg_0.c_str());}))
    .function("IsA", emscripten::optional_override([](vtkTextureMapToCylinder& self, const std::string & arg_0) -> int {  return self.IsA( arg_0.c_str());}))
    .class_function("SafeDownCast", &vtkTextureMapToCylinder::SafeDownCast, emscripten::allow_raw_pointers())
    .function("NewInstance", &vtkTextureMapToCylinder::NewInstance, emscripten::allow_raw_pointers())
    .class_function("GetNumberOfGenerationsFromBaseType", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkTextureMapToCylinder::GetNumberOfGenerationsFromBaseType( arg_0.c_str());}))
    .function("GetNumberOfGenerationsFromBase", emscripten::optional_override([](vtkTextureMapToCylinder& self, const std::string & arg_0) -> int {  return self.GetNumberOfGenerationsFromBase( arg_0.c_str());}))
    .function("SetPoint1", emscripten::select_overload<void(vtkTextureMapToCylinder&, double, double, double)>([](vtkTextureMapToCylinder& self, double arg_0, double arg_1, double arg_2) -> void { return self.SetPoint1( arg_0, arg_1, arg_2); }))
    .function("SetPoint2", emscripten::select_overload<void(vtkTextureMapToCylinder&, double, double, double)>([](vtkTextureMapToCylinder& self, double arg_0, double arg_1, double arg_2) -> void { return self.SetPoint2( arg_0, arg_1, arg_2); }))
    .function("SetAutomaticCylinderGeneration", &vtkTextureMapToCylinder::SetAutomaticCylinderGeneration)
    .function("GetAutomaticCylinderGeneration", &vtkTextureMapToCylinder::GetAutomaticCylinderGeneration)
    .function("AutomaticCylinderGenerationOn", &vtkTextureMapToCylinder::AutomaticCylinderGenerationOn)
    .function("AutomaticCylinderGenerationOff", &vtkTextureMapToCylinder::AutomaticCylinderGenerationOff)
    .function("SetPreventSeam", &vtkTextureMapToCylinder::SetPreventSeam)
    .function("GetPreventSeam", &vtkTextureMapToCylinder::GetPreventSeam)
    .function("PreventSeamOn", &vtkTextureMapToCylinder::PreventSeamOn)
    .function("PreventSeamOff", &vtkTextureMapToCylinder::PreventSeamOff);
}
