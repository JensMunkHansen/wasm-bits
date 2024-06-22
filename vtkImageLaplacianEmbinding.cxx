// JavaScript wrapper for vtkImageLaplacian with embind 
//
// This file was auto-generated using :
/*
node /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/bin/vtkWrapJavaScript.js \
 @/home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkImagingGeneral.js/vtkImagingGeneral.js.Release.args \
 -o \
 /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkImagingGeneral.js/vtkImageLaplacianEmbinding.cxx \
 /home/jmh/github/vtk/Imaging/General/vtkImageLaplacian.h
*/
#include "vtkEmbindSmartPointerTrait.h"
#include <emscripten.h>
#include <string>
#include "vtkVariant.h"
#include "vtkObjectBase.h"
#include "vtkIndent.h"
#include "vtkImageLaplacian.h"

template<> void emscripten::internal::raw_destructor<vtkImageLaplacian>(vtkImageLaplacian * ptr){ ptr->Delete(); }
EMSCRIPTEN_BINDINGS(vtkImageLaplacian_class) {
  emscripten::class_<vtkImageLaplacian, emscripten::base<vtkThreadedImageAlgorithm>>("vtkImageLaplacian")
    .smart_ptr<vtkSmartPointer<vtkImageLaplacian>>("vtkSmartPointer<vtkImageLaplacian>")
    .constructor(&vtk::MakeVTKSmartPtr<vtkImageLaplacian>)
    .class_function("IsTypeOf", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkImageLaplacian::IsTypeOf( arg_0.c_str());}))
    .function("IsA", emscripten::optional_override([](vtkImageLaplacian& self, const std::string & arg_0) -> int {  return self.IsA( arg_0.c_str());}))
    .class_function("SafeDownCast", &vtkImageLaplacian::SafeDownCast, emscripten::allow_raw_pointers())
    .function("NewInstance", &vtkImageLaplacian::NewInstance, emscripten::allow_raw_pointers())
    .class_function("GetNumberOfGenerationsFromBaseType", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkImageLaplacian::GetNumberOfGenerationsFromBaseType( arg_0.c_str());}))
    .function("GetNumberOfGenerationsFromBase", emscripten::optional_override([](vtkImageLaplacian& self, const std::string & arg_0) -> int {  return self.GetNumberOfGenerationsFromBase( arg_0.c_str());}))
    .function("SetDimensionality", &vtkImageLaplacian::SetDimensionality)
    .function("GetDimensionalityMinValue", &vtkImageLaplacian::GetDimensionalityMinValue)
    .function("GetDimensionalityMaxValue", &vtkImageLaplacian::GetDimensionalityMaxValue)
    .function("GetDimensionality", &vtkImageLaplacian::GetDimensionality);
}
