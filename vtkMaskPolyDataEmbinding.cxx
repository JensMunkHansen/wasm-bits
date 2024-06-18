// JavaScript wrapper for vtkMaskPolyData with embind 
//
// This file was auto-generated using :
/*
node /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/bin/vtkWrapJavaScript.js \
 @/home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkFiltersCore.js/vtkFiltersCore.js.Release.args \
 -o \
 /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkFiltersCore.js/vtkMaskPolyDataEmbinding.cxx \
 /home/jmh/github/vtk/Filters/Core/vtkMaskPolyData.h
*/
#include "vtkEmbindSmartPointerTrait.h"
#include <emscripten.h>
#include <string>
#include "vtkVariant.h"
#include "vtkObjectBase.h"
#include "vtkIndent.h"
#include "vtkMaskPolyData.h"

template<> void emscripten::internal::raw_destructor<vtkMaskPolyData>(vtkMaskPolyData * ptr){ ptr->Delete(); }
EMSCRIPTEN_BINDINGS(vtkMaskPolyData_class) {
  emscripten::class_<vtkMaskPolyData, emscripten::base<vtkPolyDataAlgorithm>>("vtkMaskPolyData")
    .smart_ptr<vtkSmartPointer<vtkMaskPolyData>>("vtkSmartPointer<vtkMaskPolyData>")
    .constructor(&vtk::MakeAvtkSmartPointer<vtkMaskPolyData>)
    .class_function("IsTypeOf", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkMaskPolyData::IsTypeOf( arg_0.c_str());}))
    .function("IsA", emscripten::optional_override([](vtkMaskPolyData& self, const std::string & arg_0) -> int {  return self.IsA( arg_0.c_str());}))
    .class_function("SafeDownCast", &vtkMaskPolyData::SafeDownCast, emscripten::allow_raw_pointers())
    .function("NewInstance", &vtkMaskPolyData::NewInstance, emscripten::allow_raw_pointers())
    .class_function("GetNumberOfGenerationsFromBaseType", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkMaskPolyData::GetNumberOfGenerationsFromBaseType( arg_0.c_str());}))
    .function("GetNumberOfGenerationsFromBase", emscripten::optional_override([](vtkMaskPolyData& self, const std::string & arg_0) -> int {  return self.GetNumberOfGenerationsFromBase( arg_0.c_str());}))
    .function("SetOnRatio", &vtkMaskPolyData::SetOnRatio)
    .function("GetOnRatioMinValue", &vtkMaskPolyData::GetOnRatioMinValue)
    .function("GetOnRatioMaxValue", &vtkMaskPolyData::GetOnRatioMaxValue)
    .function("GetOnRatio", &vtkMaskPolyData::GetOnRatio)
    .function("SetOffset", &vtkMaskPolyData::SetOffset)
    .function("GetOffsetMinValue", &vtkMaskPolyData::GetOffsetMinValue)
    .function("GetOffsetMaxValue", &vtkMaskPolyData::GetOffsetMaxValue)
    .function("GetOffset", &vtkMaskPolyData::GetOffset);
}
