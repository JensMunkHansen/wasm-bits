// JavaScript wrapper for vtkShrinkPolyData with embind 
//
// This file was auto-generated using :
/*
node /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/bin/vtkWrapJavaScript.js \
 @/home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkFiltersGeneral.js/vtkFiltersGeneral.js.Release.args \
 -o \
 /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkFiltersGeneral.js/vtkShrinkPolyDataEmbinding.cxx \
 /home/jmh/github/vtk/Filters/General/vtkShrinkPolyData.h
*/
#include "vtkEmbindSmartPointerTrait.h"
#include <emscripten.h>
#include <string>
#include "vtkVariant.h"
#include "vtkObjectBase.h"
#include "vtkIndent.h"
#include "vtkShrinkPolyData.h"

template<> void emscripten::internal::raw_destructor<vtkShrinkPolyData>(vtkShrinkPolyData * ptr){ ptr->Delete(); }
EMSCRIPTEN_BINDINGS(vtkShrinkPolyData_class) {
  emscripten::class_<vtkShrinkPolyData, emscripten::base<vtkPolyDataAlgorithm>>("vtkShrinkPolyData")
    .smart_ptr<vtkSmartPointer<vtkShrinkPolyData>>("vtkSmartPointer<vtkShrinkPolyData>")
    .constructor(&vtk::MakeVTKSmartPtr<vtkShrinkPolyData>)
    .class_function("IsTypeOf", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkShrinkPolyData::IsTypeOf( arg_0.c_str());}))
    .function("IsA", emscripten::optional_override([](vtkShrinkPolyData& self, const std::string & arg_0) -> int {  return self.IsA( arg_0.c_str());}))
    .class_function("SafeDownCast", &vtkShrinkPolyData::SafeDownCast, emscripten::allow_raw_pointers())
    .function("NewInstance", &vtkShrinkPolyData::NewInstance, emscripten::allow_raw_pointers())
    .class_function("GetNumberOfGenerationsFromBaseType", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkShrinkPolyData::GetNumberOfGenerationsFromBaseType( arg_0.c_str());}))
    .function("GetNumberOfGenerationsFromBase", emscripten::optional_override([](vtkShrinkPolyData& self, const std::string & arg_0) -> int {  return self.GetNumberOfGenerationsFromBase( arg_0.c_str());}))
    .function("SetShrinkFactor", &vtkShrinkPolyData::SetShrinkFactor)
    .function("GetShrinkFactorMinValue", &vtkShrinkPolyData::GetShrinkFactorMinValue)
    .function("GetShrinkFactorMaxValue", &vtkShrinkPolyData::GetShrinkFactorMaxValue)
    .function("GetShrinkFactor", &vtkShrinkPolyData::GetShrinkFactor);
}
