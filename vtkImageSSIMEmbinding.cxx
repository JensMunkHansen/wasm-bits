// JavaScript wrapper for vtkImageSSIM with embind 
//
// This file was auto-generated using :
/*
node /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/bin/vtkWrapJavaScript.js \
 @/home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkImagingCore.js/vtkImagingCore.js.Release.args \
 -o \
 /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkImagingCore.js/vtkImageSSIMEmbinding.cxx \
 /home/jmh/github/vtk/Imaging/Core/vtkImageSSIM.h
*/
#include "vtkEmbindSmartPointerTrait.h"
#include <emscripten.h>
#include <string>
#include "vtkVariant.h"
#include "vtkObjectBase.h"
#include "vtkIndent.h"
#include "vtkAlgorithmOutput.h"
#include "vtkDataObject.h"
#include "vtkImageSSIM.h"

template<> void emscripten::internal::raw_destructor<vtkImageSSIM>(vtkImageSSIM * ptr){ ptr->Delete(); }
EMSCRIPTEN_BINDINGS(vtkImageSSIM_class) {
  emscripten::class_<vtkImageSSIM, emscripten::base<vtkThreadedImageAlgorithm>>("vtkImageSSIM")
    .smart_ptr<vtkSmartPointer<vtkImageSSIM>>("vtkSmartPointer<vtkImageSSIM>")
    .constructor(&vtk::MakeAvtkSmartPointer<vtkImageSSIM>)
    .class_function("IsTypeOf", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkImageSSIM::IsTypeOf( arg_0.c_str());}))
    .function("IsA", emscripten::optional_override([](vtkImageSSIM& self, const std::string & arg_0) -> int {  return self.IsA( arg_0.c_str());}))
    .class_function("SafeDownCast", &vtkImageSSIM::SafeDownCast, emscripten::allow_raw_pointers())
    .function("NewInstance", &vtkImageSSIM::NewInstance, emscripten::allow_raw_pointers())
    .class_function("GetNumberOfGenerationsFromBaseType", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkImageSSIM::GetNumberOfGenerationsFromBaseType( arg_0.c_str());}))
    .function("GetNumberOfGenerationsFromBase", emscripten::optional_override([](vtkImageSSIM& self, const std::string & arg_0) -> int {  return self.GetNumberOfGenerationsFromBase( arg_0.c_str());}))
    .function("SetImageConnection", &vtkImageSSIM::SetImageConnection, emscripten::allow_raw_pointers())
    .function("SetImageData", &vtkImageSSIM::SetImageData, emscripten::allow_raw_pointers())
    .function("SetInputToLab", &vtkImageSSIM::SetInputToLab)
    .function("SetInputToRGB", &vtkImageSSIM::SetInputToRGB)
    .function("SetInputToGrayscale", &vtkImageSSIM::SetInputToGrayscale)
    .function("SetInputRange", emscripten::optional_override([](vtkImageSSIM& self, std::vector<int>& arg_0) -> void {  return self.SetInputRange( arg_0);}))
    .function("SetClampNegativeValues", &vtkImageSSIM::SetClampNegativeValues)
    .function("GetClampNegativeValues", &vtkImageSSIM::GetClampNegativeValues)
    .function("ClampNegativeValuesOn", &vtkImageSSIM::ClampNegativeValuesOn)
    .function("ClampNegativeValuesOff", &vtkImageSSIM::ClampNegativeValuesOff)
    .function("SetPatchRadius", &vtkImageSSIM::SetPatchRadius)
    .function("GetPatchRadius", &vtkImageSSIM::GetPatchRadius);
}
