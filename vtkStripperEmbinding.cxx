// JavaScript wrapper for vtkStripper with embind 
//
// This file was auto-generated using :
/*
node /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/bin/vtkWrapJavaScript.js \
 @/home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkFiltersCore.js/vtkFiltersCore.js.Release.args \
 -o \
 /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkFiltersCore.js/vtkStripperEmbinding.cxx \
 /home/jmh/github/vtk/Filters/Core/vtkStripper.h
*/
#include "vtkEmbindSmartPointerTrait.h"
#include <emscripten.h>
#include <string>
#include "vtkVariant.h"
#include "vtkObjectBase.h"
#include "vtkIndent.h"
#include "vtkStripper.h"

template<> void emscripten::internal::raw_destructor<vtkStripper>(vtkStripper * ptr){ ptr->Delete(); }
EMSCRIPTEN_BINDINGS(vtkStripper_class) {
  emscripten::class_<vtkStripper, emscripten::base<vtkPolyDataAlgorithm>>("vtkStripper")
    .smart_ptr<vtkSmartPointer<vtkStripper>>("vtkSmartPointer<vtkStripper>")
    .constructor(&vtk::MakeVTKSmartPtr<vtkStripper>)
    .class_function("IsTypeOf", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkStripper::IsTypeOf( arg_0.c_str());}))
    .function("IsA", emscripten::optional_override([](vtkStripper& self, const std::string & arg_0) -> int {  return self.IsA( arg_0.c_str());}))
    .class_function("SafeDownCast", &vtkStripper::SafeDownCast, emscripten::allow_raw_pointers())
    .function("NewInstance", &vtkStripper::NewInstance, emscripten::allow_raw_pointers())
    .class_function("GetNumberOfGenerationsFromBaseType", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkStripper::GetNumberOfGenerationsFromBaseType( arg_0.c_str());}))
    .function("GetNumberOfGenerationsFromBase", emscripten::optional_override([](vtkStripper& self, const std::string & arg_0) -> int {  return self.GetNumberOfGenerationsFromBase( arg_0.c_str());}))
    .function("SetMaximumLength", &vtkStripper::SetMaximumLength)
    .function("GetMaximumLengthMinValue", &vtkStripper::GetMaximumLengthMinValue)
    .function("GetMaximumLengthMaxValue", &vtkStripper::GetMaximumLengthMaxValue)
    .function("GetMaximumLength", &vtkStripper::GetMaximumLength)
    .function("PassCellDataAsFieldDataOn", &vtkStripper::PassCellDataAsFieldDataOn)
    .function("PassCellDataAsFieldDataOff", &vtkStripper::PassCellDataAsFieldDataOff)
    .function("SetPassCellDataAsFieldData", &vtkStripper::SetPassCellDataAsFieldData)
    .function("GetPassCellDataAsFieldData", &vtkStripper::GetPassCellDataAsFieldData)
    .function("SetPassThroughCellIds", &vtkStripper::SetPassThroughCellIds)
    .function("GetPassThroughCellIds", &vtkStripper::GetPassThroughCellIds)
    .function("PassThroughCellIdsOn", &vtkStripper::PassThroughCellIdsOn)
    .function("PassThroughCellIdsOff", &vtkStripper::PassThroughCellIdsOff)
    .function("SetPassThroughPointIds", &vtkStripper::SetPassThroughPointIds)
    .function("GetPassThroughPointIds", &vtkStripper::GetPassThroughPointIds)
    .function("PassThroughPointIdsOn", &vtkStripper::PassThroughPointIdsOn)
    .function("PassThroughPointIdsOff", &vtkStripper::PassThroughPointIdsOff)
    .function("SetJoinContiguousSegments", &vtkStripper::SetJoinContiguousSegments)
    .function("GetJoinContiguousSegments", &vtkStripper::GetJoinContiguousSegments)
    .function("JoinContiguousSegmentsOn", &vtkStripper::JoinContiguousSegmentsOn)
    .function("JoinContiguousSegmentsOff", &vtkStripper::JoinContiguousSegmentsOff);
}
