// JavaScript wrapper for vtkImageNormalize with embind 
//
// This file was auto-generated using :
/*
node /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/bin/vtkWrapJavaScript.js \
 @/home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkImagingGeneral.js/vtkImagingGeneral.js.Release.args \
 -o \
 /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkImagingGeneral.js/vtkImageNormalizeEmbinding.cxx \
 /home/jmh/github/vtk/Imaging/General/vtkImageNormalize.h
*/
#include "vtkEmbindSmartPointerTrait.h"
#include <emscripten.h>
#include <string>
#include "vtkVariant.h"
#include "vtkObjectBase.h"
#include "vtkIndent.h"
#include "vtkImageNormalize.h"

template<> void emscripten::internal::raw_destructor<vtkImageNormalize>(vtkImageNormalize * ptr){ ptr->Delete(); }
EMSCRIPTEN_BINDINGS(vtkImageNormalize_class) {
  emscripten::class_<vtkImageNormalize, emscripten::base<vtkThreadedImageAlgorithm>>("vtkImageNormalize")
    .smart_ptr<vtkSmartPointer<vtkImageNormalize>>("vtkSmartPointer<vtkImageNormalize>")
    .constructor(&vtk::MakeVTKSmartPtr<vtkImageNormalize>)
    .class_function("IsTypeOf", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkImageNormalize::IsTypeOf( arg_0.c_str());}))
    .function("IsA", emscripten::optional_override([](vtkImageNormalize& self, const std::string & arg_0) -> int {  return self.IsA( arg_0.c_str());}))
    .class_function("SafeDownCast", &vtkImageNormalize::SafeDownCast, emscripten::allow_raw_pointers())
    .function("NewInstance", &vtkImageNormalize::NewInstance, emscripten::allow_raw_pointers())
    .class_function("GetNumberOfGenerationsFromBaseType", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkImageNormalize::GetNumberOfGenerationsFromBaseType( arg_0.c_str());}))
    .function("GetNumberOfGenerationsFromBase", emscripten::optional_override([](vtkImageNormalize& self, const std::string & arg_0) -> int {  return self.GetNumberOfGenerationsFromBase( arg_0.c_str());}));
}
