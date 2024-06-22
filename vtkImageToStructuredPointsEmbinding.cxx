// JavaScript wrapper for vtkImageToStructuredPoints with embind 
//
// This file was auto-generated using :
/*
node /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/bin/vtkWrapJavaScript.js \
 @/home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkCommonExecutionModel.js/vtkCommonExecutionModel.js.Release.args \
 -o \
 /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkCommonExecutionModel.js/vtkImageToStructuredPointsEmbinding.cxx \
 /home/jmh/github/vtk/Common/ExecutionModel/vtkImageToStructuredPoints.h
*/
#include "vtkEmbindSmartPointerTrait.h"
#include <emscripten.h>
#include <string>
#include "vtkVariant.h"
#include "vtkObjectBase.h"
#include "vtkIndent.h"
#include "vtkImageData.h"
#include "vtkStructuredPoints.h"
#include "vtkImageToStructuredPoints.h"

template<> void emscripten::internal::raw_destructor<vtkImageToStructuredPoints>(vtkImageToStructuredPoints * ptr){ ptr->Delete(); }
EMSCRIPTEN_BINDINGS(vtkImageToStructuredPoints_class) {
  emscripten::class_<vtkImageToStructuredPoints, emscripten::base<vtkImageAlgorithm>>("vtkImageToStructuredPoints")
    .smart_ptr<vtkSmartPointer<vtkImageToStructuredPoints>>("vtkSmartPointer<vtkImageToStructuredPoints>")
    .constructor(&vtk::MakeVTKSmartPtr<vtkImageToStructuredPoints>)
    .class_function("IsTypeOf", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkImageToStructuredPoints::IsTypeOf( arg_0.c_str());}))
    .function("IsA", emscripten::optional_override([](vtkImageToStructuredPoints& self, const std::string & arg_0) -> int {  return self.IsA( arg_0.c_str());}))
    .class_function("SafeDownCast", &vtkImageToStructuredPoints::SafeDownCast, emscripten::allow_raw_pointers())
    .function("NewInstance", &vtkImageToStructuredPoints::NewInstance, emscripten::allow_raw_pointers())
    .class_function("GetNumberOfGenerationsFromBaseType", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkImageToStructuredPoints::GetNumberOfGenerationsFromBaseType( arg_0.c_str());}))
    .function("GetNumberOfGenerationsFromBase", emscripten::optional_override([](vtkImageToStructuredPoints& self, const std::string & arg_0) -> int {  return self.GetNumberOfGenerationsFromBase( arg_0.c_str());}))
    .function("SetVectorInputData", &vtkImageToStructuredPoints::SetVectorInputData, emscripten::allow_raw_pointers())
    .function("GetVectorInput", &vtkImageToStructuredPoints::GetVectorInput, emscripten::allow_raw_pointers())
    .function("GetStructuredPointsOutput", &vtkImageToStructuredPoints::GetStructuredPointsOutput, emscripten::allow_raw_pointers());
}
