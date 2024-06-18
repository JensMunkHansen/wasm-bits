// JavaScript wrapper for vtkImageInterpolator with embind 
//
// This file was auto-generated using :
/*
node /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/bin/vtkWrapJavaScript.js \
 @/home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkImagingCore.js/vtkImagingCore.js.Release.args \
 -o \
 /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkImagingCore.js/vtkImageInterpolatorEmbinding.cxx \
 /home/jmh/github/vtk/Imaging/Core/vtkImageInterpolator.h
*/
#include "vtkEmbindSmartPointerTrait.h"
#include <emscripten.h>
#include <string>
#include "vtkVariant.h"
#include "vtkObjectBase.h"
#include "vtkIndent.h"
#include "vtkImageInterpolator.h"

template<> void emscripten::internal::raw_destructor<vtkImageInterpolator>(vtkImageInterpolator * ptr){ ptr->Delete(); }
EMSCRIPTEN_BINDINGS(vtkImageInterpolator_class) {
  emscripten::class_<vtkImageInterpolator, emscripten::base<vtkAbstractImageInterpolator>>("vtkImageInterpolator")
    .smart_ptr<vtkSmartPointer<vtkImageInterpolator>>("vtkSmartPointer<vtkImageInterpolator>")
    .constructor(&vtk::MakeAvtkSmartPointer<vtkImageInterpolator>)
    .class_function("IsTypeOf", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkImageInterpolator::IsTypeOf( arg_0.c_str());}))
    .function("IsA", emscripten::optional_override([](vtkImageInterpolator& self, const std::string & arg_0) -> int {  return self.IsA( arg_0.c_str());}))
    .class_function("SafeDownCast", &vtkImageInterpolator::SafeDownCast, emscripten::allow_raw_pointers())
    .function("NewInstance", &vtkImageInterpolator::NewInstance, emscripten::allow_raw_pointers())
    .class_function("GetNumberOfGenerationsFromBaseType", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkImageInterpolator::GetNumberOfGenerationsFromBaseType( arg_0.c_str());}))
    .function("GetNumberOfGenerationsFromBase", emscripten::optional_override([](vtkImageInterpolator& self, const std::string & arg_0) -> int {  return self.GetNumberOfGenerationsFromBase( arg_0.c_str());}))
    .function("SetInterpolationMode", &vtkImageInterpolator::SetInterpolationMode)
    .function("SetInterpolationModeToNearest", &vtkImageInterpolator::SetInterpolationModeToNearest)
    .function("SetInterpolationModeToLinear", &vtkImageInterpolator::SetInterpolationModeToLinear)
    .function("SetInterpolationModeToCubic", &vtkImageInterpolator::SetInterpolationModeToCubic)
    .function("GetInterpolationMode", &vtkImageInterpolator::GetInterpolationMode)
    .function("GetInterpolationModeAsString", emscripten::optional_override([](vtkImageInterpolator& self) -> std::string {  return self.GetInterpolationModeAsString();}))
    .function("IsSeparable", &vtkImageInterpolator::IsSeparable);
}
