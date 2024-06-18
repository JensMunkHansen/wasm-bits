// JavaScript wrapper for vtkSampleFunction with embind 
//
// This file was auto-generated using :
/*
node /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/bin/vtkWrapJavaScript.js \
 @/home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkImagingHybrid.js/vtkImagingHybrid.js.Release.args \
 -o \
 /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkImagingHybrid.js/vtkSampleFunctionEmbinding.cxx \
 /home/jmh/github/vtk/Imaging/Hybrid/vtkSampleFunction.h
*/
#include "vtkEmbindSmartPointerTrait.h"
#include <emscripten.h>
#include <string>
#include "vtkVariant.h"
#include "vtkObjectBase.h"
#include "vtkIndent.h"
#include "vtkImplicitFunction.h"
#include "vtkSampleFunction.h"

template<> void emscripten::internal::raw_destructor<vtkSampleFunction>(vtkSampleFunction * ptr){ ptr->Delete(); }
EMSCRIPTEN_BINDINGS(vtkSampleFunction_class) {
  emscripten::class_<vtkSampleFunction, emscripten::base<vtkImageAlgorithm>>("vtkSampleFunction")
    .smart_ptr<vtkSmartPointer<vtkSampleFunction>>("vtkSmartPointer<vtkSampleFunction>")
    .constructor(&vtk::MakeAvtkSmartPointer<vtkSampleFunction>)
    .class_function("IsTypeOf", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkSampleFunction::IsTypeOf( arg_0.c_str());}))
    .function("IsA", emscripten::optional_override([](vtkSampleFunction& self, const std::string & arg_0) -> int {  return self.IsA( arg_0.c_str());}))
    .class_function("SafeDownCast", &vtkSampleFunction::SafeDownCast, emscripten::allow_raw_pointers())
    .function("NewInstance", &vtkSampleFunction::NewInstance, emscripten::allow_raw_pointers())
    .class_function("GetNumberOfGenerationsFromBaseType", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkSampleFunction::GetNumberOfGenerationsFromBaseType( arg_0.c_str());}))
    .function("GetNumberOfGenerationsFromBase", emscripten::optional_override([](vtkSampleFunction& self, const std::string & arg_0) -> int {  return self.GetNumberOfGenerationsFromBase( arg_0.c_str());}))
    .function("SetImplicitFunction", &vtkSampleFunction::SetImplicitFunction, emscripten::allow_raw_pointers())
    .function("GetImplicitFunction", &vtkSampleFunction::GetImplicitFunction, emscripten::allow_raw_pointers())
    .function("SetOutputScalarType", &vtkSampleFunction::SetOutputScalarType)
    .function("GetOutputScalarType", &vtkSampleFunction::GetOutputScalarType)
    .function("SetOutputScalarTypeToDouble", &vtkSampleFunction::SetOutputScalarTypeToDouble)
    .function("SetOutputScalarTypeToFloat", &vtkSampleFunction::SetOutputScalarTypeToFloat)
    .function("SetOutputScalarTypeToLong", &vtkSampleFunction::SetOutputScalarTypeToLong)
    .function("SetOutputScalarTypeToUnsignedLong", &vtkSampleFunction::SetOutputScalarTypeToUnsignedLong)
    .function("SetOutputScalarTypeToInt", &vtkSampleFunction::SetOutputScalarTypeToInt)
    .function("SetOutputScalarTypeToUnsignedInt", &vtkSampleFunction::SetOutputScalarTypeToUnsignedInt)
    .function("SetOutputScalarTypeToShort", &vtkSampleFunction::SetOutputScalarTypeToShort)
    .function("SetOutputScalarTypeToUnsignedShort", &vtkSampleFunction::SetOutputScalarTypeToUnsignedShort)
    .function("SetOutputScalarTypeToChar", &vtkSampleFunction::SetOutputScalarTypeToChar)
    .function("SetOutputScalarTypeToUnsignedChar", &vtkSampleFunction::SetOutputScalarTypeToUnsignedChar)
    .function("SetSampleDimensions", emscripten::select_overload<void(vtkSampleFunction&, int, int, int)>([](vtkSampleFunction& self, int arg_0, int arg_1, int arg_2) -> void { return self.SetSampleDimensions( arg_0, arg_1, arg_2); }))
    .function("SetModelBounds", emscripten::select_overload<void(vtkSampleFunction&, double, double, double, double, double, double)>([](vtkSampleFunction& self, double arg_0, double arg_1, double arg_2, double arg_3, double arg_4, double arg_5) -> void { return self.SetModelBounds( arg_0, arg_1, arg_2, arg_3, arg_4, arg_5); }))
    .function("SetCapping", &vtkSampleFunction::SetCapping)
    .function("GetCapping", &vtkSampleFunction::GetCapping)
    .function("CappingOn", &vtkSampleFunction::CappingOn)
    .function("CappingOff", &vtkSampleFunction::CappingOff)
    .function("SetCapValue", &vtkSampleFunction::SetCapValue)
    .function("GetCapValue", &vtkSampleFunction::GetCapValue)
    .function("SetComputeNormals", &vtkSampleFunction::SetComputeNormals)
    .function("GetComputeNormals", &vtkSampleFunction::GetComputeNormals)
    .function("ComputeNormalsOn", &vtkSampleFunction::ComputeNormalsOn)
    .function("ComputeNormalsOff", &vtkSampleFunction::ComputeNormalsOff)
    .function("SetScalarArrayName", emscripten::optional_override([](vtkSampleFunction& self, const std::string & arg_0) -> void {  return self.SetScalarArrayName( arg_0.c_str());}))
    .function("GetScalarArrayName", emscripten::optional_override([](vtkSampleFunction& self) -> std::string {  return self.GetScalarArrayName();}))
    .function("SetNormalArrayName", emscripten::optional_override([](vtkSampleFunction& self, const std::string & arg_0) -> void {  return self.SetNormalArrayName( arg_0.c_str());}))
    .function("GetNormalArrayName", emscripten::optional_override([](vtkSampleFunction& self) -> std::string {  return self.GetNormalArrayName();}))
    .function("GetMTime", &vtkSampleFunction::GetMTime);
}
