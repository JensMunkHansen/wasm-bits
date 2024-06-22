// JavaScript wrapper for vtkImageStencilAlgorithm with embind 
//
// This file was auto-generated using :
/*
node /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/bin/vtkWrapJavaScript.js \
 @/home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkImagingCore.js/vtkImagingCore.js.Release.args \
 -o \
 /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkImagingCore.js/vtkImageStencilAlgorithmEmbinding.cxx \
 /home/jmh/github/vtk/Imaging/Core/vtkImageStencilAlgorithm.h
*/
#include "vtkEmbindSmartPointerTrait.h"
#include <emscripten.h>
#include <string>
#include "vtkVariant.h"
#include "vtkObjectBase.h"
#include "vtkIndent.h"
#include "vtkImageStencilData.h"
#include "vtkInformation.h"
#include "vtkInformationVector.h"
#include "vtkImageStencilAlgorithm.h"

template<> void emscripten::internal::raw_destructor<vtkImageStencilAlgorithm>(vtkImageStencilAlgorithm * ptr){ ptr->Delete(); }
EMSCRIPTEN_BINDINGS(vtkImageStencilAlgorithm_class) {
  emscripten::class_<vtkImageStencilAlgorithm, emscripten::base<vtkAlgorithm>>("vtkImageStencilAlgorithm")
    .smart_ptr<vtkSmartPointer<vtkImageStencilAlgorithm>>("vtkSmartPointer<vtkImageStencilAlgorithm>")
    .constructor(&vtk::MakeAvtkSmartPointer<vtkImageStencilAlgorithm>)
    .class_function("IsTypeOf", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkImageStencilAlgorithm::IsTypeOf( arg_0.c_str());}))
    .function("IsA", emscripten::optional_override([](vtkImageStencilAlgorithm& self, const std::string & arg_0) -> int {  return self.IsA( arg_0.c_str());}))
    .class_function("SafeDownCast", &vtkImageStencilAlgorithm::SafeDownCast, emscripten::allow_raw_pointers())
    .function("NewInstance", &vtkImageStencilAlgorithm::NewInstance, emscripten::allow_raw_pointers())
    .class_function("GetNumberOfGenerationsFromBaseType", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkImageStencilAlgorithm::GetNumberOfGenerationsFromBaseType( arg_0.c_str());}))
    .function("GetNumberOfGenerationsFromBase", emscripten::optional_override([](vtkImageStencilAlgorithm& self, const std::string & arg_0) -> int {  return self.GetNumberOfGenerationsFromBase( arg_0.c_str());}))
    .function("SetOutput", &vtkImageStencilAlgorithm::SetOutput, emscripten::allow_raw_pointers())
    .function("GetOutput", &vtkImageStencilAlgorithm::GetOutput, emscripten::allow_raw_pointers());
}
