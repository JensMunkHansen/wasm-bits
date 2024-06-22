// JavaScript wrapper for vtkFixedPointVolumeRayCastCompositeGOShadeHelper with embind 
//
// This file was auto-generated using :
/*
node /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/bin/vtkWrapJavaScript.js \
 @/home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkRenderingVolume.js/vtkRenderingVolume.js.Release.args \
 -o \
 /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkRenderingVolume.js/vtkFixedPointVolumeRayCastCompositeGOShadeHelperEmbinding.cxx \
 /home/jmh/github/vtk/Rendering/Volume/vtkFixedPointVolumeRayCastCompositeGOShadeHelper.h
*/
#include "vtkEmbindSmartPointerTrait.h"
#include <emscripten.h>
#include <string>
#include "vtkVariant.h"
#include "vtkObjectBase.h"
#include "vtkIndent.h"
#include "vtkVolume.h"
#include "vtkFixedPointVolumeRayCastMapper.h"
#include "vtkFixedPointVolumeRayCastCompositeGOShadeHelper.h"

template<> void emscripten::internal::raw_destructor<vtkFixedPointVolumeRayCastCompositeGOShadeHelper>(vtkFixedPointVolumeRayCastCompositeGOShadeHelper * ptr){ ptr->Delete(); }
EMSCRIPTEN_BINDINGS(vtkFixedPointVolumeRayCastCompositeGOShadeHelper_class) {
  emscripten::class_<vtkFixedPointVolumeRayCastCompositeGOShadeHelper, emscripten::base<vtkFixedPointVolumeRayCastHelper>>("vtkFixedPointVolumeRayCastCompositeGOShadeHelper")
    .smart_ptr<vtkSmartPointer<vtkFixedPointVolumeRayCastCompositeGOShadeHelper>>("vtkSmartPointer<vtkFixedPointVolumeRayCastCompositeGOShadeHelper>")
    .constructor(&vtk::MakeVTKSmartPtr<vtkFixedPointVolumeRayCastCompositeGOShadeHelper>)
    .class_function("IsTypeOf", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkFixedPointVolumeRayCastCompositeGOShadeHelper::IsTypeOf( arg_0.c_str());}))
    .function("IsA", emscripten::optional_override([](vtkFixedPointVolumeRayCastCompositeGOShadeHelper& self, const std::string & arg_0) -> int {  return self.IsA( arg_0.c_str());}))
    .class_function("SafeDownCast", &vtkFixedPointVolumeRayCastCompositeGOShadeHelper::SafeDownCast, emscripten::allow_raw_pointers())
    .function("NewInstance", &vtkFixedPointVolumeRayCastCompositeGOShadeHelper::NewInstance, emscripten::allow_raw_pointers())
    .class_function("GetNumberOfGenerationsFromBaseType", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkFixedPointVolumeRayCastCompositeGOShadeHelper::GetNumberOfGenerationsFromBaseType( arg_0.c_str());}))
    .function("GetNumberOfGenerationsFromBase", emscripten::optional_override([](vtkFixedPointVolumeRayCastCompositeGOShadeHelper& self, const std::string & arg_0) -> int {  return self.GetNumberOfGenerationsFromBase( arg_0.c_str());}))
    .function("GenerateImage", &vtkFixedPointVolumeRayCastCompositeGOShadeHelper::GenerateImage, emscripten::allow_raw_pointers());
}
