// JavaScript wrapper for vtkGenericDataSetTessellator with embind 
//
// This file was auto-generated using :
/*
node /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/bin/vtkWrapJavaScript.js \
 @/home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkFiltersGeneric.js/vtkFiltersGeneric.js.Release.args \
 -o \
 /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkFiltersGeneric.js/vtkGenericDataSetTessellatorEmbinding.cxx \
 /home/jmh/github/vtk/Filters/Generic/vtkGenericDataSetTessellator.h
*/
#include "vtkEmbindSmartPointerTrait.h"
#include <emscripten.h>
#include <string>
#include "vtkVariant.h"
#include "vtkObjectBase.h"
#include "vtkIndent.h"
#include "vtkIncrementalPointLocator.h"
#include "vtkGenericDataSetTessellator.h"

template<> void emscripten::internal::raw_destructor<vtkGenericDataSetTessellator>(vtkGenericDataSetTessellator * ptr){ ptr->Delete(); }
EMSCRIPTEN_BINDINGS(vtkGenericDataSetTessellator_class) {
  emscripten::class_<vtkGenericDataSetTessellator, emscripten::base<vtkUnstructuredGridAlgorithm>>("vtkGenericDataSetTessellator")
    .smart_ptr<vtkSmartPointer<vtkGenericDataSetTessellator>>("vtkSmartPointer<vtkGenericDataSetTessellator>")
    .constructor(&vtk::MakeAvtkSmartPointer<vtkGenericDataSetTessellator>)
    .class_function("IsTypeOf", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkGenericDataSetTessellator::IsTypeOf( arg_0.c_str());}))
    .function("IsA", emscripten::optional_override([](vtkGenericDataSetTessellator& self, const std::string & arg_0) -> int {  return self.IsA( arg_0.c_str());}))
    .class_function("SafeDownCast", &vtkGenericDataSetTessellator::SafeDownCast, emscripten::allow_raw_pointers())
    .function("NewInstance", &vtkGenericDataSetTessellator::NewInstance, emscripten::allow_raw_pointers())
    .class_function("GetNumberOfGenerationsFromBaseType", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkGenericDataSetTessellator::GetNumberOfGenerationsFromBaseType( arg_0.c_str());}))
    .function("GetNumberOfGenerationsFromBase", emscripten::optional_override([](vtkGenericDataSetTessellator& self, const std::string & arg_0) -> int {  return self.GetNumberOfGenerationsFromBase( arg_0.c_str());}))
    .function("SetKeepCellIds", &vtkGenericDataSetTessellator::SetKeepCellIds)
    .function("GetKeepCellIds", &vtkGenericDataSetTessellator::GetKeepCellIds)
    .function("KeepCellIdsOn", &vtkGenericDataSetTessellator::KeepCellIdsOn)
    .function("KeepCellIdsOff", &vtkGenericDataSetTessellator::KeepCellIdsOff)
    .function("SetMerging", &vtkGenericDataSetTessellator::SetMerging)
    .function("GetMerging", &vtkGenericDataSetTessellator::GetMerging)
    .function("MergingOn", &vtkGenericDataSetTessellator::MergingOn)
    .function("MergingOff", &vtkGenericDataSetTessellator::MergingOff)
    .function("SetLocator", &vtkGenericDataSetTessellator::SetLocator, emscripten::allow_raw_pointers())
    .function("GetLocator", &vtkGenericDataSetTessellator::GetLocator, emscripten::allow_raw_pointers())
    .function("CreateDefaultLocator", &vtkGenericDataSetTessellator::CreateDefaultLocator)
    .function("GetMTime", &vtkGenericDataSetTessellator::GetMTime);
}
