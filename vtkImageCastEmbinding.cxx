// JavaScript wrapper for vtkImageCast with embind 
//
// This file was auto-generated using :
/*
node /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/bin/vtkWrapJavaScript.js \
 @/home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkImagingCore.js/vtkImagingCore.js.Release.args \
 -o \
 /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkImagingCore.js/vtkImageCastEmbinding.cxx \
 /home/jmh/github/vtk/Imaging/Core/vtkImageCast.h
*/
#include "vtkEmbindSmartPointerTrait.h"
#include <emscripten.h>
#include <string>
#include "vtkVariant.h"
#include "vtkObjectBase.h"
#include "vtkIndent.h"
#include "vtkImageCast.h"

template<> void emscripten::internal::raw_destructor<vtkImageCast>(vtkImageCast * ptr){ ptr->Delete(); }
EMSCRIPTEN_BINDINGS(vtkImageCast_class) {
  emscripten::class_<vtkImageCast, emscripten::base<vtkThreadedImageAlgorithm>>("vtkImageCast")
    .smart_ptr<vtkSmartPointer<vtkImageCast>>("vtkSmartPointer<vtkImageCast>")
    .constructor(&vtk::MakeAvtkSmartPointer<vtkImageCast>)
    .class_function("IsTypeOf", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkImageCast::IsTypeOf( arg_0.c_str());}))
    .function("IsA", emscripten::optional_override([](vtkImageCast& self, const std::string & arg_0) -> int {  return self.IsA( arg_0.c_str());}))
    .class_function("SafeDownCast", &vtkImageCast::SafeDownCast, emscripten::allow_raw_pointers())
    .function("NewInstance", &vtkImageCast::NewInstance, emscripten::allow_raw_pointers())
    .class_function("GetNumberOfGenerationsFromBaseType", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkImageCast::GetNumberOfGenerationsFromBaseType( arg_0.c_str());}))
    .function("GetNumberOfGenerationsFromBase", emscripten::optional_override([](vtkImageCast& self, const std::string & arg_0) -> int {  return self.GetNumberOfGenerationsFromBase( arg_0.c_str());}))
    .function("SetOutputScalarType", &vtkImageCast::SetOutputScalarType)
    .function("GetOutputScalarType", &vtkImageCast::GetOutputScalarType)
    .function("SetOutputScalarTypeToFloat", &vtkImageCast::SetOutputScalarTypeToFloat)
    .function("SetOutputScalarTypeToDouble", &vtkImageCast::SetOutputScalarTypeToDouble)
    .function("SetOutputScalarTypeToInt", &vtkImageCast::SetOutputScalarTypeToInt)
    .function("SetOutputScalarTypeToUnsignedInt", &vtkImageCast::SetOutputScalarTypeToUnsignedInt)
    .function("SetOutputScalarTypeToLong", &vtkImageCast::SetOutputScalarTypeToLong)
    .function("SetOutputScalarTypeToUnsignedLong", &vtkImageCast::SetOutputScalarTypeToUnsignedLong)
    .function("SetOutputScalarTypeToShort", &vtkImageCast::SetOutputScalarTypeToShort)
    .function("SetOutputScalarTypeToUnsignedShort", &vtkImageCast::SetOutputScalarTypeToUnsignedShort)
    .function("SetOutputScalarTypeToUnsignedChar", &vtkImageCast::SetOutputScalarTypeToUnsignedChar)
    .function("SetOutputScalarTypeToChar", &vtkImageCast::SetOutputScalarTypeToChar)
    .function("SetClampOverflow", &vtkImageCast::SetClampOverflow)
    .function("GetClampOverflow", &vtkImageCast::GetClampOverflow)
    .function("ClampOverflowOn", &vtkImageCast::ClampOverflowOn)
    .function("ClampOverflowOff", &vtkImageCast::ClampOverflowOff);
}
