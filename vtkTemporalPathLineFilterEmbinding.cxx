// JavaScript wrapper for vtkTemporalPathLineFilter with embind 
//
// This file was auto-generated using :
/*
node /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/bin/vtkWrapJavaScript.js \
 @/home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkFiltersGeneral.js/vtkFiltersGeneral.js.Release.args \
 -o \
 /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkFiltersGeneral.js/vtkTemporalPathLineFilterEmbinding.cxx \
 /home/jmh/github/vtk/Filters/General/vtkTemporalPathLineFilter.h
*/
#include "vtkEmbindSmartPointerTrait.h"
#include <emscripten.h>
#include <string>
#include "vtkVariant.h"
#include "vtkObjectBase.h"
#include "vtkIndent.h"
#include "vtkAlgorithmOutput.h"
#include "vtkDataSet.h"
#include "vtkTemporalPathLineFilter.h"

template<> void emscripten::internal::raw_destructor<vtkTemporalPathLineFilter>(vtkTemporalPathLineFilter * ptr){ ptr->Delete(); }
EMSCRIPTEN_BINDINGS(vtkTemporalPathLineFilter_class) {
  emscripten::class_<vtkTemporalPathLineFilter, emscripten::base<vtkPolyDataAlgorithm>>("vtkTemporalPathLineFilter")
    .smart_ptr<vtkSmartPointer<vtkTemporalPathLineFilter>>("vtkSmartPointer<vtkTemporalPathLineFilter>")
    .constructor(&vtk::MakeVTKSmartPtr<vtkTemporalPathLineFilter>)
    .class_function("IsTypeOf", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkTemporalPathLineFilter::IsTypeOf( arg_0.c_str());}))
    .function("IsA", emscripten::optional_override([](vtkTemporalPathLineFilter& self, const std::string & arg_0) -> int {  return self.IsA( arg_0.c_str());}))
    .class_function("SafeDownCast", &vtkTemporalPathLineFilter::SafeDownCast, emscripten::allow_raw_pointers())
    .function("NewInstance", &vtkTemporalPathLineFilter::NewInstance, emscripten::allow_raw_pointers())
    .class_function("GetNumberOfGenerationsFromBaseType", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkTemporalPathLineFilter::GetNumberOfGenerationsFromBaseType( arg_0.c_str());}))
    .function("GetNumberOfGenerationsFromBase", emscripten::optional_override([](vtkTemporalPathLineFilter& self, const std::string & arg_0) -> int {  return self.GetNumberOfGenerationsFromBase( arg_0.c_str());}))
    .class_function("TimeStepsArrayName", emscripten::optional_override([]() -> std::string {  return vtkTemporalPathLineFilter::TimeStepsArrayName();}))
    .function("SetMaskPoints", &vtkTemporalPathLineFilter::SetMaskPoints)
    .function("GetMaskPoints", &vtkTemporalPathLineFilter::GetMaskPoints)
    .function("SetMaxTrackLength", &vtkTemporalPathLineFilter::SetMaxTrackLength)
    .function("GetMaxTrackLength", &vtkTemporalPathLineFilter::GetMaxTrackLength)
    .function("SetIdChannelArray", emscripten::optional_override([](vtkTemporalPathLineFilter& self, const std::string & arg_0) -> void {  return self.SetIdChannelArray( arg_0.c_str());}))
    .function("GetIdChannelArray", emscripten::optional_override([](vtkTemporalPathLineFilter& self) -> std::string {  return self.GetIdChannelArray();}))
    .function("SetMaxStepDistance", emscripten::select_overload<void(vtkTemporalPathLineFilter&, double, double, double)>([](vtkTemporalPathLineFilter& self, double arg_0, double arg_1, double arg_2) -> void { return self.SetMaxStepDistance( arg_0, arg_1, arg_2); }))
    .function("SetKeepDeadTrails", &vtkTemporalPathLineFilter::SetKeepDeadTrails)
    .function("GetKeepDeadTrails", &vtkTemporalPathLineFilter::GetKeepDeadTrails)
    .function("Flush", &vtkTemporalPathLineFilter::Flush)
    .function("SetSelectionConnection", &vtkTemporalPathLineFilter::SetSelectionConnection, emscripten::allow_raw_pointers())
    .function("SetSelectionData", &vtkTemporalPathLineFilter::SetSelectionData, emscripten::allow_raw_pointers());
}
