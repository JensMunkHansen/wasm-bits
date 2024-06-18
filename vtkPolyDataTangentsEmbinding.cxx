// JavaScript wrapper for vtkPolyDataTangents with embind 
//
// This file was auto-generated using :
/*
node /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/bin/vtkWrapJavaScript.js \
 @/home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkFiltersCore.js/vtkFiltersCore.js.Release.args \
 -o \
 /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkFiltersCore.js/vtkPolyDataTangentsEmbinding.cxx \
 /home/jmh/github/vtk/Filters/Core/vtkPolyDataTangents.h
*/
#include "vtkEmbindSmartPointerTrait.h"
#include <emscripten.h>
#include <string>
#include "vtkVariant.h"
#include "vtkObjectBase.h"
#include "vtkIndent.h"
#include "vtkPolyDataTangents.h"

template<> void emscripten::internal::raw_destructor<vtkPolyDataTangents>(vtkPolyDataTangents * ptr){ ptr->Delete(); }
EMSCRIPTEN_BINDINGS(vtkPolyDataTangents_class) {
  emscripten::class_<vtkPolyDataTangents, emscripten::base<vtkPolyDataAlgorithm>>("vtkPolyDataTangents")
    .smart_ptr<vtkSmartPointer<vtkPolyDataTangents>>("vtkSmartPointer<vtkPolyDataTangents>")
    .constructor(&vtk::MakeAvtkSmartPointer<vtkPolyDataTangents>)
    .class_function("IsTypeOf", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkPolyDataTangents::IsTypeOf( arg_0.c_str());}))
    .function("IsA", emscripten::optional_override([](vtkPolyDataTangents& self, const std::string & arg_0) -> int {  return self.IsA( arg_0.c_str());}))
    .class_function("SafeDownCast", &vtkPolyDataTangents::SafeDownCast, emscripten::allow_raw_pointers())
    .function("NewInstance", &vtkPolyDataTangents::NewInstance, emscripten::allow_raw_pointers())
    .class_function("GetNumberOfGenerationsFromBaseType", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkPolyDataTangents::GetNumberOfGenerationsFromBaseType( arg_0.c_str());}))
    .function("GetNumberOfGenerationsFromBase", emscripten::optional_override([](vtkPolyDataTangents& self, const std::string & arg_0) -> int {  return self.GetNumberOfGenerationsFromBase( arg_0.c_str());}))
    .function("SetComputePointTangents", &vtkPolyDataTangents::SetComputePointTangents)
    .function("GetComputePointTangents", &vtkPolyDataTangents::GetComputePointTangents)
    .function("ComputePointTangentsOn", &vtkPolyDataTangents::ComputePointTangentsOn)
    .function("ComputePointTangentsOff", &vtkPolyDataTangents::ComputePointTangentsOff)
    .function("SetComputeCellTangents", &vtkPolyDataTangents::SetComputeCellTangents)
    .function("GetComputeCellTangents", &vtkPolyDataTangents::GetComputeCellTangents)
    .function("ComputeCellTangentsOn", &vtkPolyDataTangents::ComputeCellTangentsOn)
    .function("ComputeCellTangentsOff", &vtkPolyDataTangents::ComputeCellTangentsOff);
}
