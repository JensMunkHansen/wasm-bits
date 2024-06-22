// JavaScript wrapper for vtkReverseSense with embind 
//
// This file was auto-generated using :
/*
node /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/bin/vtkWrapJavaScript.js \
 @/home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkFiltersCore.js/vtkFiltersCore.js.Release.args \
 -o \
 /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkFiltersCore.js/vtkReverseSenseEmbinding.cxx \
 /home/jmh/github/vtk/Filters/Core/vtkReverseSense.h
*/
#include "vtkEmbindSmartPointerTrait.h"
#include <emscripten.h>
#include <string>
#include "vtkVariant.h"
#include "vtkObjectBase.h"
#include "vtkIndent.h"
#include "vtkReverseSense.h"

template<> void emscripten::internal::raw_destructor<vtkReverseSense>(vtkReverseSense * ptr){ ptr->Delete(); }
EMSCRIPTEN_BINDINGS(vtkReverseSense_class) {
  emscripten::class_<vtkReverseSense, emscripten::base<vtkPolyDataAlgorithm>>("vtkReverseSense")
    .smart_ptr<vtkSmartPointer<vtkReverseSense>>("vtkSmartPointer<vtkReverseSense>")
    .constructor(&vtk::MakeVTKSmartPtr<vtkReverseSense>)
    .class_function("IsTypeOf", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkReverseSense::IsTypeOf( arg_0.c_str());}))
    .function("IsA", emscripten::optional_override([](vtkReverseSense& self, const std::string & arg_0) -> int {  return self.IsA( arg_0.c_str());}))
    .class_function("SafeDownCast", &vtkReverseSense::SafeDownCast, emscripten::allow_raw_pointers())
    .function("NewInstance", &vtkReverseSense::NewInstance, emscripten::allow_raw_pointers())
    .class_function("GetNumberOfGenerationsFromBaseType", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkReverseSense::GetNumberOfGenerationsFromBaseType( arg_0.c_str());}))
    .function("GetNumberOfGenerationsFromBase", emscripten::optional_override([](vtkReverseSense& self, const std::string & arg_0) -> int {  return self.GetNumberOfGenerationsFromBase( arg_0.c_str());}))
    .function("SetReverseCells", &vtkReverseSense::SetReverseCells)
    .function("GetReverseCells", &vtkReverseSense::GetReverseCells)
    .function("ReverseCellsOn", &vtkReverseSense::ReverseCellsOn)
    .function("ReverseCellsOff", &vtkReverseSense::ReverseCellsOff)
    .function("SetReverseNormals", &vtkReverseSense::SetReverseNormals)
    .function("GetReverseNormals", &vtkReverseSense::GetReverseNormals)
    .function("ReverseNormalsOn", &vtkReverseSense::ReverseNormalsOn)
    .function("ReverseNormalsOff", &vtkReverseSense::ReverseNormalsOff);
}
