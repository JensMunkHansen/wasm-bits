// JavaScript wrapper for vtkImageDotProduct with embind 
//
// This file was auto-generated using :
/*
node /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/bin/vtkWrapJavaScript.js \
 @/home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkImagingMath.js/vtkImagingMath.js.Release.args \
 -o \
 /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkImagingMath.js/vtkImageDotProductEmbinding.cxx \
 /home/jmh/github/vtk/Imaging/Math/vtkImageDotProduct.h
*/
#include "vtkEmbindSmartPointerTrait.h"
#include <emscripten.h>
#include <string>
#include "vtkVariant.h"
#include "vtkObjectBase.h"
#include "vtkIndent.h"
#include "vtkDataObject.h"
#include "vtkImageDotProduct.h"

template<> void emscripten::internal::raw_destructor<vtkImageDotProduct>(vtkImageDotProduct * ptr){ ptr->Delete(); }
EMSCRIPTEN_BINDINGS(vtkImageDotProduct_class) {
  emscripten::class_<vtkImageDotProduct, emscripten::base<vtkThreadedImageAlgorithm>>("vtkImageDotProduct")
    .smart_ptr<vtkSmartPointer<vtkImageDotProduct>>("vtkSmartPointer<vtkImageDotProduct>")
    .constructor(&vtk::MakeVTKSmartPtr<vtkImageDotProduct>)
    .class_function("IsTypeOf", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkImageDotProduct::IsTypeOf( arg_0.c_str());}))
    .function("IsA", emscripten::optional_override([](vtkImageDotProduct& self, const std::string & arg_0) -> int {  return self.IsA( arg_0.c_str());}))
    .class_function("SafeDownCast", &vtkImageDotProduct::SafeDownCast, emscripten::allow_raw_pointers())
    .function("NewInstance", &vtkImageDotProduct::NewInstance, emscripten::allow_raw_pointers())
    .class_function("GetNumberOfGenerationsFromBaseType", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkImageDotProduct::GetNumberOfGenerationsFromBaseType( arg_0.c_str());}))
    .function("GetNumberOfGenerationsFromBase", emscripten::optional_override([](vtkImageDotProduct& self, const std::string & arg_0) -> int {  return self.GetNumberOfGenerationsFromBase( arg_0.c_str());}))
    .function("SetInput1Data", &vtkImageDotProduct::SetInput1Data, emscripten::allow_raw_pointers())
    .function("SetInput2Data", &vtkImageDotProduct::SetInput2Data, emscripten::allow_raw_pointers());
}
