// JavaScript wrapper for vtkFixedPointVolumeRayCastCompositeShadeHelper with embind 
//
// This file was auto-generated using :
/*
node /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/bin/vtkWrapJavaScript.js \
 @/home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkRenderingVolume.js/vtkRenderingVolume.js.Release.args \
 -o \
 /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkRenderingVolume.js/vtkFixedPointVolumeRayCastCompositeShadeHelperEmbinding.cxx \
 /home/jmh/github/vtk/Rendering/Volume/vtkFixedPointVolumeRayCastCompositeShadeHelper.h
*/
#include "vtkEmbindSmartPointerTrait.h"
#include <emscripten.h>
#include <string>
#include "vtkVariant.h"
#include "vtkObjectBase.h"
#include "vtkIndent.h"
#include "vtkVolume.h"
#include "vtkFixedPointVolumeRayCastMapper.h"
#include "vtkFixedPointVolumeRayCastCompositeShadeHelper.h"

template<> void emscripten::internal::raw_destructor<vtkFixedPointVolumeRayCastCompositeShadeHelper>(vtkFixedPointVolumeRayCastCompositeShadeHelper * ptr){ ptr->Delete(); }
EMSCRIPTEN_BINDINGS(vtkFixedPointVolumeRayCastCompositeShadeHelper_class) {
  emscripten::class_<vtkFixedPointVolumeRayCastCompositeShadeHelper, emscripten::base<vtkFixedPointVolumeRayCastHelper>>("vtkFixedPointVolumeRayCastCompositeShadeHelper")
    .smart_ptr<vtkSmartPointer<vtkFixedPointVolumeRayCastCompositeShadeHelper>>("vtkSmartPointer<vtkFixedPointVolumeRayCastCompositeShadeHelper>")
    .constructor(&vtk::MakeVTKSmartPtr<vtkFixedPointVolumeRayCastCompositeShadeHelper>)
    .class_function("IsTypeOf", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkFixedPointVolumeRayCastCompositeShadeHelper::IsTypeOf( arg_0.c_str());}))
    .function("IsA", emscripten::optional_override([](vtkFixedPointVolumeRayCastCompositeShadeHelper& self, const std::string & arg_0) -> int {  return self.IsA( arg_0.c_str());}))
    .class_function("SafeDownCast", &vtkFixedPointVolumeRayCastCompositeShadeHelper::SafeDownCast, emscripten::allow_raw_pointers())
    .function("NewInstance", &vtkFixedPointVolumeRayCastCompositeShadeHelper::NewInstance, emscripten::allow_raw_pointers())
    .class_function("GetNumberOfGenerationsFromBaseType", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkFixedPointVolumeRayCastCompositeShadeHelper::GetNumberOfGenerationsFromBaseType( arg_0.c_str());}))
    .function("GetNumberOfGenerationsFromBase", emscripten::optional_override([](vtkFixedPointVolumeRayCastCompositeShadeHelper& self, const std::string & arg_0) -> int {  return self.GetNumberOfGenerationsFromBase( arg_0.c_str());}))
    .function("GenerateImage", &vtkFixedPointVolumeRayCastCompositeShadeHelper::GenerateImage, emscripten::allow_raw_pointers());
}
