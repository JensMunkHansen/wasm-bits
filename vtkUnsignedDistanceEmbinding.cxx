// JavaScript wrapper for vtkUnsignedDistance with embind 
//
// This file was auto-generated using :
/*
node /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/bin/vtkWrapJavaScript.js \
 @/home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkFiltersPoints.js/vtkFiltersPoints.js.Release.args \
 -o \
 /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkFiltersPoints.js/vtkUnsignedDistanceEmbinding.cxx \
 /home/jmh/github/vtk/Filters/Points/vtkUnsignedDistance.h
*/
#include "vtkEmbindSmartPointerTrait.h"
#include <emscripten.h>
#include <string>
#include "vtkVariant.h"
#include "vtkObjectBase.h"
#include "vtkIndent.h"
#include "vtkAbstractPointLocator.h"
#include "vtkPolyData.h"
#include "vtkInformation.h"
#include "vtkInformationVector.h"
#include "vtkUnsignedDistance.h"

template<> void emscripten::internal::raw_destructor<vtkUnsignedDistance>(vtkUnsignedDistance * ptr){ ptr->Delete(); }
EMSCRIPTEN_BINDINGS(vtkUnsignedDistance_class) {
  emscripten::class_<vtkUnsignedDistance, emscripten::base<vtkImageAlgorithm>>("vtkUnsignedDistance")
    .smart_ptr<vtkSmartPointer<vtkUnsignedDistance>>("vtkSmartPointer<vtkUnsignedDistance>")
    .constructor(&vtk::MakeAvtkSmartPointer<vtkUnsignedDistance>)
    .class_function("IsTypeOf", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkUnsignedDistance::IsTypeOf( arg_0.c_str());}))
    .function("IsA", emscripten::optional_override([](vtkUnsignedDistance& self, const std::string & arg_0) -> int {  return self.IsA( arg_0.c_str());}))
    .class_function("SafeDownCast", &vtkUnsignedDistance::SafeDownCast, emscripten::allow_raw_pointers())
    .function("NewInstance", &vtkUnsignedDistance::NewInstance, emscripten::allow_raw_pointers())
    .class_function("GetNumberOfGenerationsFromBaseType", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkUnsignedDistance::GetNumberOfGenerationsFromBaseType( arg_0.c_str());}))
    .function("GetNumberOfGenerationsFromBase", emscripten::optional_override([](vtkUnsignedDistance& self, const std::string & arg_0) -> int {  return self.GetNumberOfGenerationsFromBase( arg_0.c_str());}))
    .function("SetDimensions", emscripten::select_overload<void(vtkUnsignedDistance&, int, int, int)>([](vtkUnsignedDistance& self, int arg_0, int arg_1, int arg_2) -> void { return self.SetDimensions( arg_0, arg_1, arg_2); }))
    .function("SetBounds", emscripten::select_overload<void(vtkUnsignedDistance&, double, double, double, double, double, double)>([](vtkUnsignedDistance& self, double arg_0, double arg_1, double arg_2, double arg_3, double arg_4, double arg_5) -> void { return self.SetBounds( arg_0, arg_1, arg_2, arg_3, arg_4, arg_5); }))
    .function("SetAdjustBounds", &vtkUnsignedDistance::SetAdjustBounds)
    .function("GetAdjustBounds", &vtkUnsignedDistance::GetAdjustBounds)
    .function("AdjustBoundsOn", &vtkUnsignedDistance::AdjustBoundsOn)
    .function("AdjustBoundsOff", &vtkUnsignedDistance::AdjustBoundsOff)
    .function("SetAdjustDistance", &vtkUnsignedDistance::SetAdjustDistance)
    .function("GetAdjustDistanceMinValue", &vtkUnsignedDistance::GetAdjustDistanceMinValue)
    .function("GetAdjustDistanceMaxValue", &vtkUnsignedDistance::GetAdjustDistanceMaxValue)
    .function("GetAdjustDistance", &vtkUnsignedDistance::GetAdjustDistance)
    .function("SetRadius", &vtkUnsignedDistance::SetRadius)
    .function("GetRadiusMinValue", &vtkUnsignedDistance::GetRadiusMinValue)
    .function("GetRadiusMaxValue", &vtkUnsignedDistance::GetRadiusMaxValue)
    .function("GetRadius", &vtkUnsignedDistance::GetRadius)
    .function("SetLocator", &vtkUnsignedDistance::SetLocator, emscripten::allow_raw_pointers())
    .function("GetLocator", &vtkUnsignedDistance::GetLocator, emscripten::allow_raw_pointers())
    .function("SetCapping", &vtkUnsignedDistance::SetCapping)
    .function("GetCapping", &vtkUnsignedDistance::GetCapping)
    .function("CappingOn", &vtkUnsignedDistance::CappingOn)
    .function("CappingOff", &vtkUnsignedDistance::CappingOff)
    .function("SetCapValue", &vtkUnsignedDistance::SetCapValue)
    .function("GetCapValue", &vtkUnsignedDistance::GetCapValue)
    .function("SetOutputScalarType", &vtkUnsignedDistance::SetOutputScalarType)
    .function("GetOutputScalarType", &vtkUnsignedDistance::GetOutputScalarType)
    .function("SetOutputScalarTypeToFloat", &vtkUnsignedDistance::SetOutputScalarTypeToFloat)
    .function("SetOutputScalarTypeToDouble", &vtkUnsignedDistance::SetOutputScalarTypeToDouble)
    .function("StartAppend", &vtkUnsignedDistance::StartAppend)
    .function("Append", &vtkUnsignedDistance::Append, emscripten::allow_raw_pointers())
    .function("EndAppend", &vtkUnsignedDistance::EndAppend);
}
