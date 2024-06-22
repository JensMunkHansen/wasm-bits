// JavaScript wrapper for vtkGenericImageInterpolator with embind 
//
// This file was auto-generated using :
/*
node /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/bin/vtkWrapJavaScript.js \
 @/home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkImagingCore.js/vtkImagingCore.js.Release.args \
 -o \
 /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkImagingCore.js/vtkGenericImageInterpolatorEmbinding.cxx \
 /home/jmh/github/vtk/Imaging/Core/vtkGenericImageInterpolator.h
*/
#include "vtkEmbindSmartPointerTrait.h"
#include <emscripten.h>
#include <string>
#include "vtkVariant.h"
#include "vtkObjectBase.h"
#include "vtkIndent.h"
#include "vtkGenericImageInterpolator.h"

template<> void emscripten::internal::raw_destructor<vtkGenericImageInterpolator>(vtkGenericImageInterpolator * ptr){ ptr->Delete(); }
EMSCRIPTEN_BINDINGS(vtkGenericImageInterpolator_class) {
  emscripten::class_<vtkGenericImageInterpolator, emscripten::base<vtkImageInterpolator>>("vtkGenericImageInterpolator")
    .smart_ptr<vtkSmartPointer<vtkGenericImageInterpolator>>("vtkSmartPointer<vtkGenericImageInterpolator>")
    .constructor(&vtk::MakeVTKSmartPtr<vtkGenericImageInterpolator>)
    .class_function("IsTypeOf", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkGenericImageInterpolator::IsTypeOf( arg_0.c_str());}))
    .function("IsA", emscripten::optional_override([](vtkGenericImageInterpolator& self, const std::string & arg_0) -> int {  return self.IsA( arg_0.c_str());}))
    .class_function("SafeDownCast", &vtkGenericImageInterpolator::SafeDownCast, emscripten::allow_raw_pointers())
    .function("NewInstance", &vtkGenericImageInterpolator::NewInstance, emscripten::allow_raw_pointers())
    .class_function("GetNumberOfGenerationsFromBaseType", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkGenericImageInterpolator::GetNumberOfGenerationsFromBaseType( arg_0.c_str());}))
    .function("GetNumberOfGenerationsFromBase", emscripten::optional_override([](vtkGenericImageInterpolator& self, const std::string & arg_0) -> int {  return self.GetNumberOfGenerationsFromBase( arg_0.c_str());}))
    .function("Update", &vtkGenericImageInterpolator::Update);
}
