// JavaScript wrapper for vtkVolumeOfRevolutionFilter with embind 
//
// This file was auto-generated using :
/*
node /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/bin/vtkWrapJavaScript.js \
 @/home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkFiltersModeling.js/vtkFiltersModeling.js.Release.args \
 -o \
 /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkFiltersModeling.js/vtkVolumeOfRevolutionFilterEmbinding.cxx \
 /home/jmh/github/vtk/Filters/Modeling/vtkVolumeOfRevolutionFilter.h
*/
#include "vtkEmbindSmartPointerTrait.h"
#include <emscripten.h>
#include <string>
#include "vtkVariant.h"
#include "vtkObjectBase.h"
#include "vtkIndent.h"
#include "vtkVolumeOfRevolutionFilter.h"

template<> void emscripten::internal::raw_destructor<vtkVolumeOfRevolutionFilter>(vtkVolumeOfRevolutionFilter * ptr){ ptr->Delete(); }
EMSCRIPTEN_BINDINGS(vtkVolumeOfRevolutionFilter_class) {
  emscripten::class_<vtkVolumeOfRevolutionFilter, emscripten::base<vtkUnstructuredGridAlgorithm>>("vtkVolumeOfRevolutionFilter")
    .smart_ptr<vtkSmartPointer<vtkVolumeOfRevolutionFilter>>("vtkSmartPointer<vtkVolumeOfRevolutionFilter>")
    .constructor(&vtk::MakeAvtkSmartPointer<vtkVolumeOfRevolutionFilter>)
    .class_function("IsTypeOf", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkVolumeOfRevolutionFilter::IsTypeOf( arg_0.c_str());}))
    .function("IsA", emscripten::optional_override([](vtkVolumeOfRevolutionFilter& self, const std::string & arg_0) -> int {  return self.IsA( arg_0.c_str());}))
    .class_function("SafeDownCast", &vtkVolumeOfRevolutionFilter::SafeDownCast, emscripten::allow_raw_pointers())
    .function("NewInstance", &vtkVolumeOfRevolutionFilter::NewInstance, emscripten::allow_raw_pointers())
    .class_function("GetNumberOfGenerationsFromBaseType", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkVolumeOfRevolutionFilter::GetNumberOfGenerationsFromBaseType( arg_0.c_str());}))
    .function("GetNumberOfGenerationsFromBase", emscripten::optional_override([](vtkVolumeOfRevolutionFilter& self, const std::string & arg_0) -> int {  return self.GetNumberOfGenerationsFromBase( arg_0.c_str());}))
    .function("SetResolution", &vtkVolumeOfRevolutionFilter::SetResolution)
    .function("GetResolutionMinValue", &vtkVolumeOfRevolutionFilter::GetResolutionMinValue)
    .function("GetResolutionMaxValue", &vtkVolumeOfRevolutionFilter::GetResolutionMaxValue)
    .function("GetResolution", &vtkVolumeOfRevolutionFilter::GetResolution)
    .function("SetSweepAngle", &vtkVolumeOfRevolutionFilter::SetSweepAngle)
    .function("GetSweepAngleMinValue", &vtkVolumeOfRevolutionFilter::GetSweepAngleMinValue)
    .function("GetSweepAngleMaxValue", &vtkVolumeOfRevolutionFilter::GetSweepAngleMaxValue)
    .function("GetSweepAngle", &vtkVolumeOfRevolutionFilter::GetSweepAngle)
    .function("SetAxisPosition", emscripten::select_overload<void(vtkVolumeOfRevolutionFilter&, double, double, double)>([](vtkVolumeOfRevolutionFilter& self, double arg_0, double arg_1, double arg_2) -> void { return self.SetAxisPosition( arg_0, arg_1, arg_2); }))
    .function("SetAxisDirection", emscripten::select_overload<void(vtkVolumeOfRevolutionFilter&, double, double, double)>([](vtkVolumeOfRevolutionFilter& self, double arg_0, double arg_1, double arg_2) -> void { return self.SetAxisDirection( arg_0, arg_1, arg_2); }))
    .function("SetOutputPointsPrecision", &vtkVolumeOfRevolutionFilter::SetOutputPointsPrecision)
    .function("GetOutputPointsPrecisionMinValue", &vtkVolumeOfRevolutionFilter::GetOutputPointsPrecisionMinValue)
    .function("GetOutputPointsPrecisionMaxValue", &vtkVolumeOfRevolutionFilter::GetOutputPointsPrecisionMaxValue)
    .function("GetOutputPointsPrecision", &vtkVolumeOfRevolutionFilter::GetOutputPointsPrecision);
}
