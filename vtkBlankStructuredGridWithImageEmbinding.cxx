// JavaScript wrapper for vtkBlankStructuredGridWithImage with embind 
//
// This file was auto-generated using :
/*
node /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/bin/vtkWrapJavaScript.js \
 @/home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkFiltersGeneral.js/vtkFiltersGeneral.js.Release.args \
 -o \
 /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkFiltersGeneral.js/vtkBlankStructuredGridWithImageEmbinding.cxx \
 /home/jmh/github/vtk/Filters/General/vtkBlankStructuredGridWithImage.h
*/
#include "vtkEmbindSmartPointerTrait.h"
#include <emscripten.h>
#include <string>
#include "vtkVariant.h"
#include "vtkObjectBase.h"
#include "vtkIndent.h"
#include "vtkImageData.h"
#include "vtkBlankStructuredGridWithImage.h"

template<> void emscripten::internal::raw_destructor<vtkBlankStructuredGridWithImage>(vtkBlankStructuredGridWithImage * ptr){ ptr->Delete(); }
EMSCRIPTEN_BINDINGS(vtkBlankStructuredGridWithImage_class) {
  emscripten::class_<vtkBlankStructuredGridWithImage, emscripten::base<vtkStructuredGridAlgorithm>>("vtkBlankStructuredGridWithImage")
    .smart_ptr<vtkSmartPointer<vtkBlankStructuredGridWithImage>>("vtkSmartPointer<vtkBlankStructuredGridWithImage>")
    .constructor(&vtk::MakeAvtkSmartPointer<vtkBlankStructuredGridWithImage>)
    .class_function("IsTypeOf", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkBlankStructuredGridWithImage::IsTypeOf( arg_0.c_str());}))
    .function("IsA", emscripten::optional_override([](vtkBlankStructuredGridWithImage& self, const std::string & arg_0) -> int {  return self.IsA( arg_0.c_str());}))
    .class_function("SafeDownCast", &vtkBlankStructuredGridWithImage::SafeDownCast, emscripten::allow_raw_pointers())
    .function("NewInstance", &vtkBlankStructuredGridWithImage::NewInstance, emscripten::allow_raw_pointers())
    .class_function("GetNumberOfGenerationsFromBaseType", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkBlankStructuredGridWithImage::GetNumberOfGenerationsFromBaseType( arg_0.c_str());}))
    .function("GetNumberOfGenerationsFromBase", emscripten::optional_override([](vtkBlankStructuredGridWithImage& self, const std::string & arg_0) -> int {  return self.GetNumberOfGenerationsFromBase( arg_0.c_str());}))
    .function("SetBlankingInputData", &vtkBlankStructuredGridWithImage::SetBlankingInputData, emscripten::allow_raw_pointers())
    .function("GetBlankingInput", &vtkBlankStructuredGridWithImage::GetBlankingInput, emscripten::allow_raw_pointers());
}
