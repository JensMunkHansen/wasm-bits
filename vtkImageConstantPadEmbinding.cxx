// JavaScript wrapper for vtkImageConstantPad with embind 
//
// This file was auto-generated using :
/*
node /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/bin/vtkWrapJavaScript.js \
 @/home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkImagingCore.js/vtkImagingCore.js.Release.args \
 -o \
 /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkImagingCore.js/vtkImageConstantPadEmbinding.cxx \
 /home/jmh/github/vtk/Imaging/Core/vtkImageConstantPad.h
*/
#include "vtkEmbindSmartPointerTrait.h"
#include <emscripten.h>
#include <string>
#include "vtkVariant.h"
#include "vtkObjectBase.h"
#include "vtkIndent.h"
#include "vtkImageConstantPad.h"

template<> void emscripten::internal::raw_destructor<vtkImageConstantPad>(vtkImageConstantPad * ptr){ ptr->Delete(); }
EMSCRIPTEN_BINDINGS(vtkImageConstantPad_class) {
  emscripten::class_<vtkImageConstantPad, emscripten::base<vtkImagePadFilter>>("vtkImageConstantPad")
    .smart_ptr<vtkSmartPointer<vtkImageConstantPad>>("vtkSmartPointer<vtkImageConstantPad>")
    .constructor(&vtk::MakeVTKSmartPtr<vtkImageConstantPad>)
    .class_function("IsTypeOf", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkImageConstantPad::IsTypeOf( arg_0.c_str());}))
    .function("IsA", emscripten::optional_override([](vtkImageConstantPad& self, const std::string & arg_0) -> int {  return self.IsA( arg_0.c_str());}))
    .class_function("SafeDownCast", &vtkImageConstantPad::SafeDownCast, emscripten::allow_raw_pointers())
    .function("NewInstance", &vtkImageConstantPad::NewInstance, emscripten::allow_raw_pointers())
    .class_function("GetNumberOfGenerationsFromBaseType", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkImageConstantPad::GetNumberOfGenerationsFromBaseType( arg_0.c_str());}))
    .function("GetNumberOfGenerationsFromBase", emscripten::optional_override([](vtkImageConstantPad& self, const std::string & arg_0) -> int {  return self.GetNumberOfGenerationsFromBase( arg_0.c_str());}))
    .function("SetConstant", &vtkImageConstantPad::SetConstant)
    .function("GetConstant", &vtkImageConstantPad::GetConstant);
}
