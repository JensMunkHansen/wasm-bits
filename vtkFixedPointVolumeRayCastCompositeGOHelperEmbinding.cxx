// JavaScript wrapper for vtkFixedPointVolumeRayCastCompositeGOHelper with embind 
//
// This file was auto-generated using :
/*
node /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/bin/vtkWrapJavaScript.js \
 @/home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkRenderingVolume.js/vtkRenderingVolume.js.Release.args \
 -o \
 /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkRenderingVolume.js/vtkFixedPointVolumeRayCastCompositeGOHelperEmbinding.cxx \
 /home/jmh/github/vtk/Rendering/Volume/vtkFixedPointVolumeRayCastCompositeGOHelper.h
*/
#include "vtkEmbindSmartPointerTrait.h"
#include <emscripten.h>
#include <string>
#include "vtkVariant.h"
#include "vtkObjectBase.h"
#include "vtkIndent.h"
#include "vtkVolume.h"
#include "vtkFixedPointVolumeRayCastMapper.h"
#include "vtkFixedPointVolumeRayCastCompositeGOHelper.h"

template<> void emscripten::internal::raw_destructor<vtkFixedPointVolumeRayCastCompositeGOHelper>(vtkFixedPointVolumeRayCastCompositeGOHelper * ptr){ ptr->Delete(); }
EMSCRIPTEN_BINDINGS(vtkFixedPointVolumeRayCastCompositeGOHelper_class) {
  emscripten::class_<vtkFixedPointVolumeRayCastCompositeGOHelper, emscripten::base<vtkFixedPointVolumeRayCastHelper>>("vtkFixedPointVolumeRayCastCompositeGOHelper")
    .smart_ptr<vtkSmartPointer<vtkFixedPointVolumeRayCastCompositeGOHelper>>("vtkSmartPointer<vtkFixedPointVolumeRayCastCompositeGOHelper>")
    .constructor(&vtk::MakeAvtkSmartPointer<vtkFixedPointVolumeRayCastCompositeGOHelper>)
    .class_function("IsTypeOf", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkFixedPointVolumeRayCastCompositeGOHelper::IsTypeOf( arg_0.c_str());}))
    .function("IsA", emscripten::optional_override([](vtkFixedPointVolumeRayCastCompositeGOHelper& self, const std::string & arg_0) -> int {  return self.IsA( arg_0.c_str());}))
    .class_function("SafeDownCast", &vtkFixedPointVolumeRayCastCompositeGOHelper::SafeDownCast, emscripten::allow_raw_pointers())
    .function("NewInstance", &vtkFixedPointVolumeRayCastCompositeGOHelper::NewInstance, emscripten::allow_raw_pointers())
    .class_function("GetNumberOfGenerationsFromBaseType", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkFixedPointVolumeRayCastCompositeGOHelper::GetNumberOfGenerationsFromBaseType( arg_0.c_str());}))
    .function("GetNumberOfGenerationsFromBase", emscripten::optional_override([](vtkFixedPointVolumeRayCastCompositeGOHelper& self, const std::string & arg_0) -> int {  return self.GetNumberOfGenerationsFromBase( arg_0.c_str());}))
    .function("GenerateImage", &vtkFixedPointVolumeRayCastCompositeGOHelper::GenerateImage, emscripten::allow_raw_pointers());
}
