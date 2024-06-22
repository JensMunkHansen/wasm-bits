// JavaScript wrapper for vtkImageWrapPad with embind 
//
// This file was auto-generated using :
/*
node /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/bin/vtkWrapJavaScript.js \
 @/home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkImagingCore.js/vtkImagingCore.js.Release.args \
 -o \
 /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkImagingCore.js/vtkImageWrapPadEmbinding.cxx \
 /home/jmh/github/vtk/Imaging/Core/vtkImageWrapPad.h
*/
#include "vtkEmbindSmartPointerTrait.h"
#include <emscripten.h>
#include <string>
#include "vtkVariant.h"
#include "vtkObjectBase.h"
#include "vtkIndent.h"
#include "vtkImageWrapPad.h"

template<> void emscripten::internal::raw_destructor<vtkImageWrapPad>(vtkImageWrapPad * ptr){ ptr->Delete(); }
EMSCRIPTEN_BINDINGS(vtkImageWrapPad_class) {
  emscripten::class_<vtkImageWrapPad, emscripten::base<vtkImagePadFilter>>("vtkImageWrapPad")
    .smart_ptr<vtkSmartPointer<vtkImageWrapPad>>("vtkSmartPointer<vtkImageWrapPad>")
    .constructor(&vtk::MakeVTKSmartPtr<vtkImageWrapPad>)
    .class_function("IsTypeOf", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkImageWrapPad::IsTypeOf( arg_0.c_str());}))
    .function("IsA", emscripten::optional_override([](vtkImageWrapPad& self, const std::string & arg_0) -> int {  return self.IsA( arg_0.c_str());}))
    .class_function("SafeDownCast", &vtkImageWrapPad::SafeDownCast, emscripten::allow_raw_pointers())
    .function("NewInstance", &vtkImageWrapPad::NewInstance, emscripten::allow_raw_pointers())
    .class_function("GetNumberOfGenerationsFromBaseType", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkImageWrapPad::GetNumberOfGenerationsFromBaseType( arg_0.c_str());}))
    .function("GetNumberOfGenerationsFromBase", emscripten::optional_override([](vtkImageWrapPad& self, const std::string & arg_0) -> int {  return self.GetNumberOfGenerationsFromBase( arg_0.c_str());}));
}
