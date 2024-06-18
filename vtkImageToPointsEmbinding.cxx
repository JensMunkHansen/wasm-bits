// JavaScript wrapper for vtkImageToPoints with embind 
//
// This file was auto-generated using :
/*
node /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/bin/vtkWrapJavaScript.js \
 @/home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkImagingHybrid.js/vtkImagingHybrid.js.Release.args \
 -o \
 /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkImagingHybrid.js/vtkImageToPointsEmbinding.cxx \
 /home/jmh/github/vtk/Imaging/Hybrid/vtkImageToPoints.h
*/
#include "vtkEmbindSmartPointerTrait.h"
#include <emscripten.h>
#include <string>
#include "vtkVariant.h"
#include "vtkObjectBase.h"
#include "vtkIndent.h"
#include "vtkAlgorithmOutput.h"
#include "vtkImageStencilData.h"
#include "vtkImageToPoints.h"

template<> void emscripten::internal::raw_destructor<vtkImageToPoints>(vtkImageToPoints * ptr){ ptr->Delete(); }
EMSCRIPTEN_BINDINGS(vtkImageToPoints_class) {
  emscripten::class_<vtkImageToPoints, emscripten::base<vtkPolyDataAlgorithm>>("vtkImageToPoints")
    .smart_ptr<vtkSmartPointer<vtkImageToPoints>>("vtkSmartPointer<vtkImageToPoints>")
    .constructor(&vtk::MakeAvtkSmartPointer<vtkImageToPoints>)
    .class_function("IsTypeOf", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkImageToPoints::IsTypeOf( arg_0.c_str());}))
    .function("IsA", emscripten::optional_override([](vtkImageToPoints& self, const std::string & arg_0) -> int {  return self.IsA( arg_0.c_str());}))
    .class_function("SafeDownCast", &vtkImageToPoints::SafeDownCast, emscripten::allow_raw_pointers())
    .function("NewInstance", &vtkImageToPoints::NewInstance, emscripten::allow_raw_pointers())
    .class_function("GetNumberOfGenerationsFromBaseType", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkImageToPoints::GetNumberOfGenerationsFromBaseType( arg_0.c_str());}))
    .function("GetNumberOfGenerationsFromBase", emscripten::optional_override([](vtkImageToPoints& self, const std::string & arg_0) -> int {  return self.GetNumberOfGenerationsFromBase( arg_0.c_str());}))
    .function("SetStencilConnection", &vtkImageToPoints::SetStencilConnection, emscripten::allow_raw_pointers())
    .function("GetStencilConnection", &vtkImageToPoints::GetStencilConnection, emscripten::allow_raw_pointers())
    .function("SetStencilData", &vtkImageToPoints::SetStencilData, emscripten::allow_raw_pointers())
    .function("SetOutputPointsPrecision", &vtkImageToPoints::SetOutputPointsPrecision)
    .function("GetOutputPointsPrecision", &vtkImageToPoints::GetOutputPointsPrecision);
}
