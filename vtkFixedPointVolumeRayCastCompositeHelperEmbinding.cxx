// JavaScript wrapper for vtkFixedPointVolumeRayCastCompositeHelper with embind 
//
// This file was auto-generated using :
/*
node /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/bin/vtkWrapJavaScript.js \
 @/home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkRenderingVolume.js/vtkRenderingVolume.js.Release.args \
 -o \
 /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkRenderingVolume.js/vtkFixedPointVolumeRayCastCompositeHelperEmbinding.cxx \
 /home/jmh/github/vtk/Rendering/Volume/vtkFixedPointVolumeRayCastCompositeHelper.h
*/
#include "vtkEmbindSmartPointerTrait.h"
#include <emscripten.h>
#include <string>
#include "vtkVariant.h"
#include "vtkObjectBase.h"
#include "vtkIndent.h"
#include "vtkVolume.h"
#include "vtkFixedPointVolumeRayCastMapper.h"
#include "vtkFixedPointVolumeRayCastCompositeHelper.h"

template<> void emscripten::internal::raw_destructor<vtkFixedPointVolumeRayCastCompositeHelper>(vtkFixedPointVolumeRayCastCompositeHelper * ptr){ ptr->Delete(); }
EMSCRIPTEN_BINDINGS(vtkFixedPointVolumeRayCastCompositeHelper_class) {
  emscripten::class_<vtkFixedPointVolumeRayCastCompositeHelper, emscripten::base<vtkFixedPointVolumeRayCastHelper>>("vtkFixedPointVolumeRayCastCompositeHelper")
    .smart_ptr<vtkSmartPointer<vtkFixedPointVolumeRayCastCompositeHelper>>("vtkSmartPointer<vtkFixedPointVolumeRayCastCompositeHelper>")
    .constructor(&vtk::MakeVTKSmartPtr<vtkFixedPointVolumeRayCastCompositeHelper>)
    .class_function("IsTypeOf", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkFixedPointVolumeRayCastCompositeHelper::IsTypeOf( arg_0.c_str());}))
    .function("IsA", emscripten::optional_override([](vtkFixedPointVolumeRayCastCompositeHelper& self, const std::string & arg_0) -> int {  return self.IsA( arg_0.c_str());}))
    .class_function("SafeDownCast", &vtkFixedPointVolumeRayCastCompositeHelper::SafeDownCast, emscripten::allow_raw_pointers())
    .function("NewInstance", &vtkFixedPointVolumeRayCastCompositeHelper::NewInstance, emscripten::allow_raw_pointers())
    .class_function("GetNumberOfGenerationsFromBaseType", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkFixedPointVolumeRayCastCompositeHelper::GetNumberOfGenerationsFromBaseType( arg_0.c_str());}))
    .function("GetNumberOfGenerationsFromBase", emscripten::optional_override([](vtkFixedPointVolumeRayCastCompositeHelper& self, const std::string & arg_0) -> int {  return self.GetNumberOfGenerationsFromBase( arg_0.c_str());}))
    .function("GenerateImage", &vtkFixedPointVolumeRayCastCompositeHelper::GenerateImage, emscripten::allow_raw_pointers());
}
