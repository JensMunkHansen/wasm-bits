// JavaScript wrapper for vtkTemporalShiftScale with embind 
//
// This file was auto-generated using :
/*
node /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/bin/vtkWrapJavaScript.js \
 @/home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkFiltersHybrid.js/vtkFiltersHybrid.js.Release.args \
 -o \
 /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkFiltersHybrid.js/vtkTemporalShiftScaleEmbinding.cxx \
 /home/jmh/github/vtk/Filters/Hybrid/vtkTemporalShiftScale.h
*/
#include "vtkEmbindSmartPointerTrait.h"
#include <emscripten.h>
#include <string>
#include "vtkVariant.h"
#include "vtkObjectBase.h"
#include "vtkIndent.h"
#include "vtkTemporalShiftScale.h"

template<> void emscripten::internal::raw_destructor<vtkTemporalShiftScale>(vtkTemporalShiftScale * ptr){ ptr->Delete(); }
EMSCRIPTEN_BINDINGS(vtkTemporalShiftScale_class) {
  emscripten::class_<vtkTemporalShiftScale, emscripten::base<vtkAlgorithm>>("vtkTemporalShiftScale")
    .smart_ptr<vtkSmartPointer<vtkTemporalShiftScale>>("vtkSmartPointer<vtkTemporalShiftScale>")
    .constructor(&vtk::MakeVTKSmartPtr<vtkTemporalShiftScale>)
    .class_function("IsTypeOf", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkTemporalShiftScale::IsTypeOf( arg_0.c_str());}))
    .function("IsA", emscripten::optional_override([](vtkTemporalShiftScale& self, const std::string & arg_0) -> int {  return self.IsA( arg_0.c_str());}))
    .class_function("SafeDownCast", &vtkTemporalShiftScale::SafeDownCast, emscripten::allow_raw_pointers())
    .function("NewInstance", &vtkTemporalShiftScale::NewInstance, emscripten::allow_raw_pointers())
    .class_function("GetNumberOfGenerationsFromBaseType", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkTemporalShiftScale::GetNumberOfGenerationsFromBaseType( arg_0.c_str());}))
    .function("GetNumberOfGenerationsFromBase", emscripten::optional_override([](vtkTemporalShiftScale& self, const std::string & arg_0) -> int {  return self.GetNumberOfGenerationsFromBase( arg_0.c_str());}))
    .function("SetPreShift", &vtkTemporalShiftScale::SetPreShift)
    .function("GetPreShift", &vtkTemporalShiftScale::GetPreShift)
    .function("SetPostShift", &vtkTemporalShiftScale::SetPostShift)
    .function("GetPostShift", &vtkTemporalShiftScale::GetPostShift)
    .function("SetScale", &vtkTemporalShiftScale::SetScale)
    .function("GetScale", &vtkTemporalShiftScale::GetScale)
    .function("SetPeriodic", &vtkTemporalShiftScale::SetPeriodic)
    .function("GetPeriodic", &vtkTemporalShiftScale::GetPeriodic)
    .function("PeriodicOn", &vtkTemporalShiftScale::PeriodicOn)
    .function("PeriodicOff", &vtkTemporalShiftScale::PeriodicOff)
    .function("SetPeriodicEndCorrection", &vtkTemporalShiftScale::SetPeriodicEndCorrection)
    .function("GetPeriodicEndCorrection", &vtkTemporalShiftScale::GetPeriodicEndCorrection)
    .function("PeriodicEndCorrectionOn", &vtkTemporalShiftScale::PeriodicEndCorrectionOn)
    .function("PeriodicEndCorrectionOff", &vtkTemporalShiftScale::PeriodicEndCorrectionOff)
    .function("SetMaximumNumberOfPeriods", &vtkTemporalShiftScale::SetMaximumNumberOfPeriods)
    .function("GetMaximumNumberOfPeriods", &vtkTemporalShiftScale::GetMaximumNumberOfPeriods);
}
