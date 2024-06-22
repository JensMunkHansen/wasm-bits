// JavaScript wrapper for vtkThresholdPoints with embind 
//
// This file was auto-generated using :
/*
node /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/bin/vtkWrapJavaScript.js \
 @/home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkFiltersCore.js/vtkFiltersCore.js.Release.args \
 -o \
 /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkFiltersCore.js/vtkThresholdPointsEmbinding.cxx \
 /home/jmh/github/vtk/Filters/Core/vtkThresholdPoints.h
*/
#include "vtkEmbindSmartPointerTrait.h"
#include <emscripten.h>
#include <string>
#include "vtkVariant.h"
#include "vtkObjectBase.h"
#include "vtkIndent.h"
#include "vtkThresholdPoints.h"

template<> void emscripten::internal::raw_destructor<vtkThresholdPoints>(vtkThresholdPoints * ptr){ ptr->Delete(); }
EMSCRIPTEN_BINDINGS(vtkThresholdPoints_class) {
  emscripten::class_<vtkThresholdPoints, emscripten::base<vtkPolyDataAlgorithm>>("vtkThresholdPoints")
    .smart_ptr<vtkSmartPointer<vtkThresholdPoints>>("vtkSmartPointer<vtkThresholdPoints>")
    .constructor(&vtk::MakeAvtkSmartPointer<vtkThresholdPoints>)
    .class_function("IsTypeOf", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkThresholdPoints::IsTypeOf( arg_0.c_str());}))
    .function("IsA", emscripten::optional_override([](vtkThresholdPoints& self, const std::string & arg_0) -> int {  return self.IsA( arg_0.c_str());}))
    .class_function("SafeDownCast", &vtkThresholdPoints::SafeDownCast, emscripten::allow_raw_pointers())
    .function("NewInstance", &vtkThresholdPoints::NewInstance, emscripten::allow_raw_pointers())
    .class_function("GetNumberOfGenerationsFromBaseType", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkThresholdPoints::GetNumberOfGenerationsFromBaseType( arg_0.c_str());}))
    .function("GetNumberOfGenerationsFromBase", emscripten::optional_override([](vtkThresholdPoints& self, const std::string & arg_0) -> int {  return self.GetNumberOfGenerationsFromBase( arg_0.c_str());}))
    .function("ThresholdByLower", &vtkThresholdPoints::ThresholdByLower)
    .function("ThresholdByUpper", &vtkThresholdPoints::ThresholdByUpper)
    .function("ThresholdBetween", &vtkThresholdPoints::ThresholdBetween)
    .function("SetUpperThreshold", &vtkThresholdPoints::SetUpperThreshold)
    .function("GetUpperThreshold", &vtkThresholdPoints::GetUpperThreshold)
    .function("SetLowerThreshold", &vtkThresholdPoints::SetLowerThreshold)
    .function("GetLowerThreshold", &vtkThresholdPoints::GetLowerThreshold)
    .function("SetInputArrayComponent", &vtkThresholdPoints::SetInputArrayComponent)
    .function("GetInputArrayComponent", &vtkThresholdPoints::GetInputArrayComponent)
    .function("SetOutputPointsPrecision", &vtkThresholdPoints::SetOutputPointsPrecision)
    .function("GetOutputPointsPrecision", &vtkThresholdPoints::GetOutputPointsPrecision);
}
