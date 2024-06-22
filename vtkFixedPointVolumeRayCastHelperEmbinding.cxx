// JavaScript wrapper for vtkFixedPointVolumeRayCastHelper with embind 
//
// This file was auto-generated using :
/*
node /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/bin/vtkWrapJavaScript.js \
 @/home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkRenderingVolume.js/vtkRenderingVolume.js.Release.args \
 -o \
 /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkRenderingVolume.js/vtkFixedPointVolumeRayCastHelperEmbinding.cxx \
 /home/jmh/github/vtk/Rendering/Volume/vtkFixedPointVolumeRayCastHelper.h
*/
#include "vtkEmbindSmartPointerTrait.h"
#include <emscripten.h>
#include <string>
#include "vtkVariant.h"
#include "vtkObjectBase.h"
#include "vtkIndent.h"
#include "vtkVolume.h"
#include "vtkFixedPointVolumeRayCastMapper.h"
#include "vtkFixedPointVolumeRayCastHelper.h"

template<> void emscripten::internal::raw_destructor<vtkFixedPointVolumeRayCastHelper>(vtkFixedPointVolumeRayCastHelper * ptr){ ptr->Delete(); }
EMSCRIPTEN_BINDINGS(vtkFixedPointVolumeRayCastHelper_class) {
  emscripten::class_<vtkFixedPointVolumeRayCastHelper, emscripten::base<vtkObject>>("vtkFixedPointVolumeRayCastHelper")
    .smart_ptr<vtkSmartPointer<vtkFixedPointVolumeRayCastHelper>>("vtkSmartPointer<vtkFixedPointVolumeRayCastHelper>")
    .constructor(&vtk::MakeVTKSmartPtr<vtkFixedPointVolumeRayCastHelper>)
    .class_function("IsTypeOf", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkFixedPointVolumeRayCastHelper::IsTypeOf( arg_0.c_str());}))
    .function("IsA", emscripten::optional_override([](vtkFixedPointVolumeRayCastHelper& self, const std::string & arg_0) -> int {  return self.IsA( arg_0.c_str());}))
    .class_function("SafeDownCast", &vtkFixedPointVolumeRayCastHelper::SafeDownCast, emscripten::allow_raw_pointers())
    .function("NewInstance", &vtkFixedPointVolumeRayCastHelper::NewInstance, emscripten::allow_raw_pointers())
    .class_function("GetNumberOfGenerationsFromBaseType", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkFixedPointVolumeRayCastHelper::GetNumberOfGenerationsFromBaseType( arg_0.c_str());}))
    .function("GetNumberOfGenerationsFromBase", emscripten::optional_override([](vtkFixedPointVolumeRayCastHelper& self, const std::string & arg_0) -> int {  return self.GetNumberOfGenerationsFromBase( arg_0.c_str());}))
    .function("GenerateImage", &vtkFixedPointVolumeRayCastHelper::GenerateImage, emscripten::allow_raw_pointers());
}
