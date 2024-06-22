// JavaScript wrapper for vtkRayCastImageDisplayHelper with embind 
//
// This file was auto-generated using :
/*
node /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/bin/vtkWrapJavaScript.js \
 @/home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkRenderingVolume.js/vtkRenderingVolume.js.Release.args \
 -o \
 /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkRenderingVolume.js/vtkRayCastImageDisplayHelperEmbinding.cxx \
 /home/jmh/github/vtk/Rendering/Volume/vtkRayCastImageDisplayHelper.h
*/
#include "vtkEmbindSmartPointerTrait.h"
#include <emscripten.h>
#include <string>
#include "vtkVariant.h"
#include "vtkObjectBase.h"
#include "vtkIndent.h"
#include "vtkVolume.h"
#include "vtkRenderer.h"
#include "vtkFixedPointRayCastImage.h"
#include "vtkWindow.h"
#include "vtkRayCastImageDisplayHelper.h"

template<> void emscripten::internal::raw_destructor<vtkRayCastImageDisplayHelper>(vtkRayCastImageDisplayHelper * ptr){ ptr->Delete(); }
EMSCRIPTEN_BINDINGS(vtkRayCastImageDisplayHelper_class) {
  emscripten::class_<vtkRayCastImageDisplayHelper, emscripten::base<vtkObject>>("vtkRayCastImageDisplayHelper")
    .smart_ptr<vtkSmartPointer<vtkRayCastImageDisplayHelper>>("vtkSmartPointer<vtkRayCastImageDisplayHelper>")
    .constructor(&vtk::MakeAvtkSmartPointer<vtkRayCastImageDisplayHelper>)
    .class_function("IsTypeOf", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkRayCastImageDisplayHelper::IsTypeOf( arg_0.c_str());}))
    .function("IsA", emscripten::optional_override([](vtkRayCastImageDisplayHelper& self, const std::string & arg_0) -> int {  return self.IsA( arg_0.c_str());}))
    .class_function("SafeDownCast", &vtkRayCastImageDisplayHelper::SafeDownCast, emscripten::allow_raw_pointers())
    .function("NewInstance", &vtkRayCastImageDisplayHelper::NewInstance, emscripten::allow_raw_pointers())
    .class_function("GetNumberOfGenerationsFromBaseType", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkRayCastImageDisplayHelper::GetNumberOfGenerationsFromBaseType( arg_0.c_str());}))
    .function("GetNumberOfGenerationsFromBase", emscripten::optional_override([](vtkRayCastImageDisplayHelper& self, const std::string & arg_0) -> int {  return self.GetNumberOfGenerationsFromBase( arg_0.c_str());}))
    .function("SetPreMultipliedColors", &vtkRayCastImageDisplayHelper::SetPreMultipliedColors)
    .function("GetPreMultipliedColorsMinValue", &vtkRayCastImageDisplayHelper::GetPreMultipliedColorsMinValue)
    .function("GetPreMultipliedColorsMaxValue", &vtkRayCastImageDisplayHelper::GetPreMultipliedColorsMaxValue)
    .function("GetPreMultipliedColors", &vtkRayCastImageDisplayHelper::GetPreMultipliedColors)
    .function("PreMultipliedColorsOn", &vtkRayCastImageDisplayHelper::PreMultipliedColorsOn)
    .function("PreMultipliedColorsOff", &vtkRayCastImageDisplayHelper::PreMultipliedColorsOff)
    .function("SetPixelScale", &vtkRayCastImageDisplayHelper::SetPixelScale)
    .function("GetPixelScale", &vtkRayCastImageDisplayHelper::GetPixelScale)
    .function("ReleaseGraphicsResources", &vtkRayCastImageDisplayHelper::ReleaseGraphicsResources, emscripten::allow_raw_pointers());
}
