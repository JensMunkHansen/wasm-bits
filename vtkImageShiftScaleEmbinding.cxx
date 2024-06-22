// JavaScript wrapper for vtkImageShiftScale with embind 
//
// This file was auto-generated using :
/*
node /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/bin/vtkWrapJavaScript.js \
 @/home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkImagingCore.js/vtkImagingCore.js.Release.args \
 -o \
 /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkImagingCore.js/vtkImageShiftScaleEmbinding.cxx \
 /home/jmh/github/vtk/Imaging/Core/vtkImageShiftScale.h
*/
#include "vtkEmbindSmartPointerTrait.h"
#include <emscripten.h>
#include <string>
#include "vtkVariant.h"
#include "vtkObjectBase.h"
#include "vtkIndent.h"
#include "vtkImageShiftScale.h"

template<> void emscripten::internal::raw_destructor<vtkImageShiftScale>(vtkImageShiftScale * ptr){ ptr->Delete(); }
EMSCRIPTEN_BINDINGS(vtkImageShiftScale_class) {
  emscripten::class_<vtkImageShiftScale, emscripten::base<vtkThreadedImageAlgorithm>>("vtkImageShiftScale")
    .smart_ptr<vtkSmartPointer<vtkImageShiftScale>>("vtkSmartPointer<vtkImageShiftScale>")
    .constructor(&vtk::MakeAvtkSmartPointer<vtkImageShiftScale>)
    .class_function("IsTypeOf", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkImageShiftScale::IsTypeOf( arg_0.c_str());}))
    .function("IsA", emscripten::optional_override([](vtkImageShiftScale& self, const std::string & arg_0) -> int {  return self.IsA( arg_0.c_str());}))
    .class_function("SafeDownCast", &vtkImageShiftScale::SafeDownCast, emscripten::allow_raw_pointers())
    .function("NewInstance", &vtkImageShiftScale::NewInstance, emscripten::allow_raw_pointers())
    .class_function("GetNumberOfGenerationsFromBaseType", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkImageShiftScale::GetNumberOfGenerationsFromBaseType( arg_0.c_str());}))
    .function("GetNumberOfGenerationsFromBase", emscripten::optional_override([](vtkImageShiftScale& self, const std::string & arg_0) -> int {  return self.GetNumberOfGenerationsFromBase( arg_0.c_str());}))
    .function("SetShift", &vtkImageShiftScale::SetShift)
    .function("GetShift", &vtkImageShiftScale::GetShift)
    .function("SetScale", &vtkImageShiftScale::SetScale)
    .function("GetScale", &vtkImageShiftScale::GetScale)
    .function("SetOutputScalarType", &vtkImageShiftScale::SetOutputScalarType)
    .function("GetOutputScalarType", &vtkImageShiftScale::GetOutputScalarType)
    .function("SetOutputScalarTypeToDouble", &vtkImageShiftScale::SetOutputScalarTypeToDouble)
    .function("SetOutputScalarTypeToFloat", &vtkImageShiftScale::SetOutputScalarTypeToFloat)
    .function("SetOutputScalarTypeToLong", &vtkImageShiftScale::SetOutputScalarTypeToLong)
    .function("SetOutputScalarTypeToUnsignedLong", &vtkImageShiftScale::SetOutputScalarTypeToUnsignedLong)
    .function("SetOutputScalarTypeToInt", &vtkImageShiftScale::SetOutputScalarTypeToInt)
    .function("SetOutputScalarTypeToUnsignedInt", &vtkImageShiftScale::SetOutputScalarTypeToUnsignedInt)
    .function("SetOutputScalarTypeToShort", &vtkImageShiftScale::SetOutputScalarTypeToShort)
    .function("SetOutputScalarTypeToUnsignedShort", &vtkImageShiftScale::SetOutputScalarTypeToUnsignedShort)
    .function("SetOutputScalarTypeToChar", &vtkImageShiftScale::SetOutputScalarTypeToChar)
    .function("SetOutputScalarTypeToUnsignedChar", &vtkImageShiftScale::SetOutputScalarTypeToUnsignedChar)
    .function("SetClampOverflow", &vtkImageShiftScale::SetClampOverflow)
    .function("GetClampOverflow", &vtkImageShiftScale::GetClampOverflow)
    .function("ClampOverflowOn", &vtkImageShiftScale::ClampOverflowOn)
    .function("ClampOverflowOff", &vtkImageShiftScale::ClampOverflowOff);
}
