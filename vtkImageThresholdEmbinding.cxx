// JavaScript wrapper for vtkImageThreshold with embind 
//
// This file was auto-generated using :
/*
node /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/bin/vtkWrapJavaScript.js \
 @/home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkImagingCore.js/vtkImagingCore.js.Release.args \
 -o \
 /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkImagingCore.js/vtkImageThresholdEmbinding.cxx \
 /home/jmh/github/vtk/Imaging/Core/vtkImageThreshold.h
*/
#include "vtkEmbindSmartPointerTrait.h"
#include <emscripten.h>
#include <string>
#include "vtkVariant.h"
#include "vtkObjectBase.h"
#include "vtkIndent.h"
#include "vtkImageThreshold.h"

template<> void emscripten::internal::raw_destructor<vtkImageThreshold>(vtkImageThreshold * ptr){ ptr->Delete(); }
EMSCRIPTEN_BINDINGS(vtkImageThreshold_class) {
  emscripten::class_<vtkImageThreshold, emscripten::base<vtkThreadedImageAlgorithm>>("vtkImageThreshold")
    .smart_ptr<vtkSmartPointer<vtkImageThreshold>>("vtkSmartPointer<vtkImageThreshold>")
    .constructor(&vtk::MakeAvtkSmartPointer<vtkImageThreshold>)
    .class_function("IsTypeOf", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkImageThreshold::IsTypeOf( arg_0.c_str());}))
    .function("IsA", emscripten::optional_override([](vtkImageThreshold& self, const std::string & arg_0) -> int {  return self.IsA( arg_0.c_str());}))
    .class_function("SafeDownCast", &vtkImageThreshold::SafeDownCast, emscripten::allow_raw_pointers())
    .function("NewInstance", &vtkImageThreshold::NewInstance, emscripten::allow_raw_pointers())
    .class_function("GetNumberOfGenerationsFromBaseType", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkImageThreshold::GetNumberOfGenerationsFromBaseType( arg_0.c_str());}))
    .function("GetNumberOfGenerationsFromBase", emscripten::optional_override([](vtkImageThreshold& self, const std::string & arg_0) -> int {  return self.GetNumberOfGenerationsFromBase( arg_0.c_str());}))
    .function("ThresholdByUpper", &vtkImageThreshold::ThresholdByUpper)
    .function("ThresholdByLower", &vtkImageThreshold::ThresholdByLower)
    .function("ThresholdBetween", &vtkImageThreshold::ThresholdBetween)
    .function("SetReplaceIn", &vtkImageThreshold::SetReplaceIn)
    .function("GetReplaceIn", &vtkImageThreshold::GetReplaceIn)
    .function("ReplaceInOn", &vtkImageThreshold::ReplaceInOn)
    .function("ReplaceInOff", &vtkImageThreshold::ReplaceInOff)
    .function("SetInValue", &vtkImageThreshold::SetInValue)
    .function("GetInValue", &vtkImageThreshold::GetInValue)
    .function("SetReplaceOut", &vtkImageThreshold::SetReplaceOut)
    .function("GetReplaceOut", &vtkImageThreshold::GetReplaceOut)
    .function("ReplaceOutOn", &vtkImageThreshold::ReplaceOutOn)
    .function("ReplaceOutOff", &vtkImageThreshold::ReplaceOutOff)
    .function("SetOutValue", &vtkImageThreshold::SetOutValue)
    .function("GetOutValue", &vtkImageThreshold::GetOutValue)
    .function("GetUpperThreshold", &vtkImageThreshold::GetUpperThreshold)
    .function("GetLowerThreshold", &vtkImageThreshold::GetLowerThreshold)
    .function("SetOutputScalarType", &vtkImageThreshold::SetOutputScalarType)
    .function("GetOutputScalarType", &vtkImageThreshold::GetOutputScalarType)
    .function("SetOutputScalarTypeToDouble", &vtkImageThreshold::SetOutputScalarTypeToDouble)
    .function("SetOutputScalarTypeToFloat", &vtkImageThreshold::SetOutputScalarTypeToFloat)
    .function("SetOutputScalarTypeToLong", &vtkImageThreshold::SetOutputScalarTypeToLong)
    .function("SetOutputScalarTypeToUnsignedLong", &vtkImageThreshold::SetOutputScalarTypeToUnsignedLong)
    .function("SetOutputScalarTypeToInt", &vtkImageThreshold::SetOutputScalarTypeToInt)
    .function("SetOutputScalarTypeToUnsignedInt", &vtkImageThreshold::SetOutputScalarTypeToUnsignedInt)
    .function("SetOutputScalarTypeToShort", &vtkImageThreshold::SetOutputScalarTypeToShort)
    .function("SetOutputScalarTypeToUnsignedShort", &vtkImageThreshold::SetOutputScalarTypeToUnsignedShort)
    .function("SetOutputScalarTypeToChar", &vtkImageThreshold::SetOutputScalarTypeToChar)
    .function("SetOutputScalarTypeToSignedChar", &vtkImageThreshold::SetOutputScalarTypeToSignedChar)
    .function("SetOutputScalarTypeToUnsignedChar", &vtkImageThreshold::SetOutputScalarTypeToUnsignedChar);
}
