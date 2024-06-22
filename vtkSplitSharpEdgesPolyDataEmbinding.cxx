// JavaScript wrapper for vtkSplitSharpEdgesPolyData with embind 
//
// This file was auto-generated using :
/*
node /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/bin/vtkWrapJavaScript.js \
 @/home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkFiltersCore.js/vtkFiltersCore.js.Release.args \
 -o \
 /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkFiltersCore.js/vtkSplitSharpEdgesPolyDataEmbinding.cxx \
 /home/jmh/github/vtk/Filters/Core/vtkSplitSharpEdgesPolyData.h
*/
#include "vtkEmbindSmartPointerTrait.h"
#include <emscripten.h>
#include <string>
#include "vtkVariant.h"
#include "vtkObjectBase.h"
#include "vtkIndent.h"
#include "vtkSplitSharpEdgesPolyData.h"

template<> void emscripten::internal::raw_destructor<vtkSplitSharpEdgesPolyData>(vtkSplitSharpEdgesPolyData * ptr){ ptr->Delete(); }
EMSCRIPTEN_BINDINGS(vtkSplitSharpEdgesPolyData_class) {
  emscripten::class_<vtkSplitSharpEdgesPolyData, emscripten::base<vtkPolyDataAlgorithm>>("vtkSplitSharpEdgesPolyData")
    .smart_ptr<vtkSmartPointer<vtkSplitSharpEdgesPolyData>>("vtkSmartPointer<vtkSplitSharpEdgesPolyData>")
    .constructor(&vtk::MakeVTKSmartPtr<vtkSplitSharpEdgesPolyData>)
    .class_function("IsTypeOf", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkSplitSharpEdgesPolyData::IsTypeOf( arg_0.c_str());}))
    .function("IsA", emscripten::optional_override([](vtkSplitSharpEdgesPolyData& self, const std::string & arg_0) -> int {  return self.IsA( arg_0.c_str());}))
    .class_function("SafeDownCast", &vtkSplitSharpEdgesPolyData::SafeDownCast, emscripten::allow_raw_pointers())
    .function("NewInstance", &vtkSplitSharpEdgesPolyData::NewInstance, emscripten::allow_raw_pointers())
    .class_function("GetNumberOfGenerationsFromBaseType", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkSplitSharpEdgesPolyData::GetNumberOfGenerationsFromBaseType( arg_0.c_str());}))
    .function("GetNumberOfGenerationsFromBase", emscripten::optional_override([](vtkSplitSharpEdgesPolyData& self, const std::string & arg_0) -> int {  return self.GetNumberOfGenerationsFromBase( arg_0.c_str());}))
    .function("SetFeatureAngle", &vtkSplitSharpEdgesPolyData::SetFeatureAngle)
    .function("GetFeatureAngleMinValue", &vtkSplitSharpEdgesPolyData::GetFeatureAngleMinValue)
    .function("GetFeatureAngleMaxValue", &vtkSplitSharpEdgesPolyData::GetFeatureAngleMaxValue)
    .function("GetFeatureAngle", &vtkSplitSharpEdgesPolyData::GetFeatureAngle)
    .function("SetOutputPointsPrecision", &vtkSplitSharpEdgesPolyData::SetOutputPointsPrecision)
    .function("GetOutputPointsPrecisionMinValue", &vtkSplitSharpEdgesPolyData::GetOutputPointsPrecisionMinValue)
    .function("GetOutputPointsPrecisionMaxValue", &vtkSplitSharpEdgesPolyData::GetOutputPointsPrecisionMaxValue)
    .function("GetOutputPointsPrecision", &vtkSplitSharpEdgesPolyData::GetOutputPointsPrecision);
}
