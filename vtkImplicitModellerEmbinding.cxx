// JavaScript wrapper for vtkImplicitModeller with embind 
//
// This file was auto-generated using :
/*
node /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/bin/vtkWrapJavaScript.js \
 @/home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkFiltersHybrid.js/vtkFiltersHybrid.js.Release.args \
 -o \
 /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkFiltersHybrid.js/vtkImplicitModellerEmbinding.cxx \
 /home/jmh/github/vtk/Filters/Hybrid/vtkImplicitModeller.h
*/
#include "vtkEmbindSmartPointerTrait.h"
#include <emscripten.h>
#include <string>
#include "vtkVariant.h"
#include "vtkObjectBase.h"
#include "vtkIndent.h"
#include "vtkDataSet.h"
#include "vtkInformation.h"
#include "vtkInformationVector.h"
#include "vtkImplicitModeller.h"

EMSCRIPTEN_BINDINGS(vtkFiltersHybrid_vtkImplicitModeller_0_1_constants) {
  const struct { const char *name; int value; }
    constants[2] = {
      { "VTK_VOXEL_MODE", 0 },
      { "VTK_CELL_MODE", 1 },
  };
  for (int c = 0; c < 2; c++)
  {
    emscripten::constant(constants[c].name, constants[c].value);
  }
}
template<> void emscripten::internal::raw_destructor<vtkImplicitModeller>(vtkImplicitModeller * ptr){ ptr->Delete(); }
EMSCRIPTEN_BINDINGS(vtkImplicitModeller_class) {
  emscripten::class_<vtkImplicitModeller, emscripten::base<vtkImageAlgorithm>>("vtkImplicitModeller")
    .smart_ptr<vtkSmartPointer<vtkImplicitModeller>>("vtkSmartPointer<vtkImplicitModeller>")
    .constructor(&vtk::MakeAvtkSmartPointer<vtkImplicitModeller>)
    .class_function("IsTypeOf", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkImplicitModeller::IsTypeOf( arg_0.c_str());}))
    .function("IsA", emscripten::optional_override([](vtkImplicitModeller& self, const std::string & arg_0) -> int {  return self.IsA( arg_0.c_str());}))
    .class_function("SafeDownCast", &vtkImplicitModeller::SafeDownCast, emscripten::allow_raw_pointers())
    .function("NewInstance", &vtkImplicitModeller::NewInstance, emscripten::allow_raw_pointers())
    .class_function("GetNumberOfGenerationsFromBaseType", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkImplicitModeller::GetNumberOfGenerationsFromBaseType( arg_0.c_str());}))
    .function("GetNumberOfGenerationsFromBase", emscripten::optional_override([](vtkImplicitModeller& self, const std::string & arg_0) -> int {  return self.GetNumberOfGenerationsFromBase( arg_0.c_str());}))
    .function("ComputeModelBounds", &vtkImplicitModeller::ComputeModelBounds, emscripten::allow_raw_pointers())
    .function("SetSampleDimensions", emscripten::select_overload<void(vtkImplicitModeller&, int, int, int)>([](vtkImplicitModeller& self, int arg_0, int arg_1, int arg_2) -> void { return self.SetSampleDimensions( arg_0, arg_1, arg_2); }))
    .function("SetMaximumDistance", &vtkImplicitModeller::SetMaximumDistance)
    .function("GetMaximumDistanceMinValue", &vtkImplicitModeller::GetMaximumDistanceMinValue)
    .function("GetMaximumDistanceMaxValue", &vtkImplicitModeller::GetMaximumDistanceMaxValue)
    .function("GetMaximumDistance", &vtkImplicitModeller::GetMaximumDistance)
    .function("SetModelBounds", emscripten::select_overload<void(vtkImplicitModeller&, double, double, double, double, double, double)>([](vtkImplicitModeller& self, double arg_0, double arg_1, double arg_2, double arg_3, double arg_4, double arg_5) -> void { return self.SetModelBounds( arg_0, arg_1, arg_2, arg_3, arg_4, arg_5); }))
    .function("SetAdjustBounds", &vtkImplicitModeller::SetAdjustBounds)
    .function("GetAdjustBounds", &vtkImplicitModeller::GetAdjustBounds)
    .function("AdjustBoundsOn", &vtkImplicitModeller::AdjustBoundsOn)
    .function("AdjustBoundsOff", &vtkImplicitModeller::AdjustBoundsOff)
    .function("SetAdjustDistance", &vtkImplicitModeller::SetAdjustDistance)
    .function("GetAdjustDistanceMinValue", &vtkImplicitModeller::GetAdjustDistanceMinValue)
    .function("GetAdjustDistanceMaxValue", &vtkImplicitModeller::GetAdjustDistanceMaxValue)
    .function("GetAdjustDistance", &vtkImplicitModeller::GetAdjustDistance)
    .function("SetCapping", &vtkImplicitModeller::SetCapping)
    .function("GetCapping", &vtkImplicitModeller::GetCapping)
    .function("CappingOn", &vtkImplicitModeller::CappingOn)
    .function("CappingOff", &vtkImplicitModeller::CappingOff)
    .function("SetCapValue", &vtkImplicitModeller::SetCapValue)
    .function("GetCapValue", &vtkImplicitModeller::GetCapValue)
    .function("SetScaleToMaximumDistance", &vtkImplicitModeller::SetScaleToMaximumDistance)
    .function("GetScaleToMaximumDistance", &vtkImplicitModeller::GetScaleToMaximumDistance)
    .function("ScaleToMaximumDistanceOn", &vtkImplicitModeller::ScaleToMaximumDistanceOn)
    .function("ScaleToMaximumDistanceOff", &vtkImplicitModeller::ScaleToMaximumDistanceOff)
    .function("SetProcessMode", &vtkImplicitModeller::SetProcessMode)
    .function("GetProcessModeMinValue", &vtkImplicitModeller::GetProcessModeMinValue)
    .function("GetProcessModeMaxValue", &vtkImplicitModeller::GetProcessModeMaxValue)
    .function("GetProcessMode", &vtkImplicitModeller::GetProcessMode)
    .function("SetProcessModeToPerVoxel", &vtkImplicitModeller::SetProcessModeToPerVoxel)
    .function("SetProcessModeToPerCell", &vtkImplicitModeller::SetProcessModeToPerCell)
    .function("GetProcessModeAsString", emscripten::optional_override([](vtkImplicitModeller& self) -> std::string {  return self.GetProcessModeAsString();}))
    .function("SetLocatorMaxLevel", &vtkImplicitModeller::SetLocatorMaxLevel)
    .function("GetLocatorMaxLevel", &vtkImplicitModeller::GetLocatorMaxLevel)
    .function("SetNumberOfThreads", &vtkImplicitModeller::SetNumberOfThreads)
    .function("GetNumberOfThreadsMinValue", &vtkImplicitModeller::GetNumberOfThreadsMinValue)
    .function("GetNumberOfThreadsMaxValue", &vtkImplicitModeller::GetNumberOfThreadsMaxValue)
    .function("GetNumberOfThreads", &vtkImplicitModeller::GetNumberOfThreads)
    .function("SetOutputScalarType", &vtkImplicitModeller::SetOutputScalarType)
    .function("GetOutputScalarType", &vtkImplicitModeller::GetOutputScalarType)
    .function("SetOutputScalarTypeToFloat", &vtkImplicitModeller::SetOutputScalarTypeToFloat)
    .function("SetOutputScalarTypeToDouble", &vtkImplicitModeller::SetOutputScalarTypeToDouble)
    .function("SetOutputScalarTypeToInt", &vtkImplicitModeller::SetOutputScalarTypeToInt)
    .function("SetOutputScalarTypeToUnsignedInt", &vtkImplicitModeller::SetOutputScalarTypeToUnsignedInt)
    .function("SetOutputScalarTypeToLong", &vtkImplicitModeller::SetOutputScalarTypeToLong)
    .function("SetOutputScalarTypeToUnsignedLong", &vtkImplicitModeller::SetOutputScalarTypeToUnsignedLong)
    .function("SetOutputScalarTypeToShort", &vtkImplicitModeller::SetOutputScalarTypeToShort)
    .function("SetOutputScalarTypeToUnsignedShort", &vtkImplicitModeller::SetOutputScalarTypeToUnsignedShort)
    .function("SetOutputScalarTypeToUnsignedChar", &vtkImplicitModeller::SetOutputScalarTypeToUnsignedChar)
    .function("SetOutputScalarTypeToChar", &vtkImplicitModeller::SetOutputScalarTypeToChar)
    .function("StartAppend", emscripten::select_overload<void(vtkImplicitModeller&)>([](vtkImplicitModeller& self) -> void { return self.StartAppend(); }))
    .function("Append", &vtkImplicitModeller::Append, emscripten::allow_raw_pointers())
    .function("EndAppend", &vtkImplicitModeller::EndAppend);
}
