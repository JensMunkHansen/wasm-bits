// JavaScript wrapper for vtkTextureMapToSphere with embind 
//
// This file was auto-generated using :
/*
node /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/bin/vtkWrapJavaScript.js \
 @/home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkFiltersTexture.js/vtkFiltersTexture.js.Release.args \
 -o \
 /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkFiltersTexture.js/vtkTextureMapToSphereEmbinding.cxx \
 /home/jmh/github/vtk/Filters/Texture/vtkTextureMapToSphere.h
*/
#include "vtkEmbindSmartPointerTrait.h"
#include <emscripten.h>
#include <string>
#include "vtkVariant.h"
#include "vtkObjectBase.h"
#include "vtkIndent.h"
#include "vtkDataSet.h"
#include "vtkTextureMapToSphere.h"

template<> void emscripten::internal::raw_destructor<vtkTextureMapToSphere>(vtkTextureMapToSphere * ptr){ ptr->Delete(); }
EMSCRIPTEN_BINDINGS(vtkTextureMapToSphere_class) {
  emscripten::class_<vtkTextureMapToSphere, emscripten::base<vtkDataSetAlgorithm>>("vtkTextureMapToSphere")
    .smart_ptr<vtkSmartPointer<vtkTextureMapToSphere>>("vtkSmartPointer<vtkTextureMapToSphere>")
    .constructor(&vtk::MakeVTKSmartPtr<vtkTextureMapToSphere>)
    .class_function("IsTypeOf", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkTextureMapToSphere::IsTypeOf( arg_0.c_str());}))
    .function("IsA", emscripten::optional_override([](vtkTextureMapToSphere& self, const std::string & arg_0) -> int {  return self.IsA( arg_0.c_str());}))
    .class_function("SafeDownCast", &vtkTextureMapToSphere::SafeDownCast, emscripten::allow_raw_pointers())
    .function("NewInstance", &vtkTextureMapToSphere::NewInstance, emscripten::allow_raw_pointers())
    .class_function("GetNumberOfGenerationsFromBaseType", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkTextureMapToSphere::GetNumberOfGenerationsFromBaseType( arg_0.c_str());}))
    .function("GetNumberOfGenerationsFromBase", emscripten::optional_override([](vtkTextureMapToSphere& self, const std::string & arg_0) -> int {  return self.GetNumberOfGenerationsFromBase( arg_0.c_str());}))
    .function("SetCenter", emscripten::select_overload<void(vtkTextureMapToSphere&, double, double, double)>([](vtkTextureMapToSphere& self, double arg_0, double arg_1, double arg_2) -> void { return self.SetCenter( arg_0, arg_1, arg_2); }))
    .function("SetAutomaticSphereGeneration", &vtkTextureMapToSphere::SetAutomaticSphereGeneration)
    .function("GetAutomaticSphereGeneration", &vtkTextureMapToSphere::GetAutomaticSphereGeneration)
    .function("AutomaticSphereGenerationOn", &vtkTextureMapToSphere::AutomaticSphereGenerationOn)
    .function("AutomaticSphereGenerationOff", &vtkTextureMapToSphere::AutomaticSphereGenerationOff)
    .function("SetPreventSeam", &vtkTextureMapToSphere::SetPreventSeam)
    .function("GetPreventSeam", &vtkTextureMapToSphere::GetPreventSeam)
    .function("PreventSeamOn", &vtkTextureMapToSphere::PreventSeamOn)
    .function("PreventSeamOff", &vtkTextureMapToSphere::PreventSeamOff)
    .function("ComputeCenter", &vtkTextureMapToSphere::ComputeCenter, emscripten::allow_raw_pointers());
}
