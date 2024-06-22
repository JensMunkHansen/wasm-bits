// JavaScript wrapper for vtkImageMapToWindowLevelColors with embind 
//
// This file was auto-generated using :
/*
node /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/bin/vtkWrapJavaScript.js \
 @/home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkImagingColor.js/vtkImagingColor.js.Release.args \
 -o \
 /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkImagingColor.js/vtkImageMapToWindowLevelColorsEmbinding.cxx \
 /home/jmh/github/vtk/Imaging/Color/vtkImageMapToWindowLevelColors.h
*/
#include "vtkEmbindSmartPointerTrait.h"
#include <emscripten.h>
#include <string>
#include "vtkVariant.h"
#include "vtkObjectBase.h"
#include "vtkIndent.h"
#include "vtkImageMapToWindowLevelColors.h"

template<> void emscripten::internal::raw_destructor<vtkImageMapToWindowLevelColors>(vtkImageMapToWindowLevelColors * ptr){ ptr->Delete(); }
EMSCRIPTEN_BINDINGS(vtkImageMapToWindowLevelColors_class) {
  emscripten::class_<vtkImageMapToWindowLevelColors, emscripten::base<vtkImageMapToColors>>("vtkImageMapToWindowLevelColors")
    .smart_ptr<vtkSmartPointer<vtkImageMapToWindowLevelColors>>("vtkSmartPointer<vtkImageMapToWindowLevelColors>")
    .constructor(&vtk::MakeAvtkSmartPointer<vtkImageMapToWindowLevelColors>)
    .class_function("IsTypeOf", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkImageMapToWindowLevelColors::IsTypeOf( arg_0.c_str());}))
    .function("IsA", emscripten::optional_override([](vtkImageMapToWindowLevelColors& self, const std::string & arg_0) -> int {  return self.IsA( arg_0.c_str());}))
    .class_function("SafeDownCast", &vtkImageMapToWindowLevelColors::SafeDownCast, emscripten::allow_raw_pointers())
    .function("NewInstance", &vtkImageMapToWindowLevelColors::NewInstance, emscripten::allow_raw_pointers())
    .class_function("GetNumberOfGenerationsFromBaseType", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkImageMapToWindowLevelColors::GetNumberOfGenerationsFromBaseType( arg_0.c_str());}))
    .function("GetNumberOfGenerationsFromBase", emscripten::optional_override([](vtkImageMapToWindowLevelColors& self, const std::string & arg_0) -> int {  return self.GetNumberOfGenerationsFromBase( arg_0.c_str());}))
    .function("SetWindow", &vtkImageMapToWindowLevelColors::SetWindow)
    .function("GetWindow", &vtkImageMapToWindowLevelColors::GetWindow)
    .function("SetLevel", &vtkImageMapToWindowLevelColors::SetLevel)
    .function("GetLevel", &vtkImageMapToWindowLevelColors::GetLevel);
}