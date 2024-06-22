// JavaScript wrapper for vtkImageMapToRGBA with embind 
//
// This file was auto-generated using :
/*
node /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/bin/vtkWrapJavaScript.js \
 @/home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkImagingColor.js/vtkImagingColor.js.Release.args \
 -o \
 /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkImagingColor.js/vtkImageMapToRGBAEmbinding.cxx \
 /home/jmh/github/vtk/Imaging/Color/vtkImageMapToRGBA.h
*/
#include "vtkEmbindSmartPointerTrait.h"
#include <emscripten.h>
#include <string>
#include "vtkVariant.h"
#include "vtkObjectBase.h"
#include "vtkIndent.h"
#include "vtkImageMapToRGBA.h"

template<> void emscripten::internal::raw_destructor<vtkImageMapToRGBA>(vtkImageMapToRGBA * ptr){ ptr->Delete(); }
EMSCRIPTEN_BINDINGS(vtkImageMapToRGBA_class) {
  emscripten::class_<vtkImageMapToRGBA, emscripten::base<vtkImageMapToColors>>("vtkImageMapToRGBA")
    .smart_ptr<vtkSmartPointer<vtkImageMapToRGBA>>("vtkSmartPointer<vtkImageMapToRGBA>")
    .constructor(&vtk::MakeVTKSmartPtr<vtkImageMapToRGBA>)
    .class_function("IsTypeOf", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkImageMapToRGBA::IsTypeOf( arg_0.c_str());}))
    .function("IsA", emscripten::optional_override([](vtkImageMapToRGBA& self, const std::string & arg_0) -> int {  return self.IsA( arg_0.c_str());}))
    .class_function("SafeDownCast", &vtkImageMapToRGBA::SafeDownCast, emscripten::allow_raw_pointers())
    .function("NewInstance", &vtkImageMapToRGBA::NewInstance, emscripten::allow_raw_pointers())
    .class_function("GetNumberOfGenerationsFromBaseType", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkImageMapToRGBA::GetNumberOfGenerationsFromBaseType( arg_0.c_str());}))
    .function("GetNumberOfGenerationsFromBase", emscripten::optional_override([](vtkImageMapToRGBA& self, const std::string & arg_0) -> int {  return self.GetNumberOfGenerationsFromBase( arg_0.c_str());}));
}
