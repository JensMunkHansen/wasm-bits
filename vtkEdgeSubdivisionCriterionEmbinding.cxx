// JavaScript wrapper for vtkEdgeSubdivisionCriterion with embind 
//
// This file was auto-generated using :
/*
node /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/bin/vtkWrapJavaScript.js \
 @/home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkFiltersCore.js/vtkFiltersCore.js.Release.args \
 -o \
 /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkFiltersCore.js/vtkEdgeSubdivisionCriterionEmbinding.cxx \
 /home/jmh/github/vtk/Filters/Core/vtkEdgeSubdivisionCriterion.h
*/
#include "vtkEmbindSmartPointerTrait.h"
#include <emscripten.h>
#include <string>
#include "vtkVariant.h"
#include "vtkObjectBase.h"
#include "vtkIndent.h"
#include "vtkStreamingTessellator.h"
#include "vtkEdgeSubdivisionCriterion.h"

template<> void emscripten::internal::raw_destructor<vtkEdgeSubdivisionCriterion>(vtkEdgeSubdivisionCriterion * ptr){ ptr->Delete(); }
EMSCRIPTEN_BINDINGS(vtkEdgeSubdivisionCriterion_class) {
  emscripten::class_<vtkEdgeSubdivisionCriterion, emscripten::base<vtkObject>>("vtkEdgeSubdivisionCriterion")
    .class_function("IsTypeOf", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkEdgeSubdivisionCriterion::IsTypeOf( arg_0.c_str());}))
    .function("IsA", emscripten::optional_override([](vtkEdgeSubdivisionCriterion& self, const std::string & arg_0) -> int {  return self.IsA( arg_0.c_str());}))
    .class_function("SafeDownCast", &vtkEdgeSubdivisionCriterion::SafeDownCast, emscripten::allow_raw_pointers())
    .function("NewInstance", &vtkEdgeSubdivisionCriterion::NewInstance, emscripten::allow_raw_pointers())
    .class_function("GetNumberOfGenerationsFromBaseType", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkEdgeSubdivisionCriterion::GetNumberOfGenerationsFromBaseType( arg_0.c_str());}))
    .function("GetNumberOfGenerationsFromBase", emscripten::optional_override([](vtkEdgeSubdivisionCriterion& self, const std::string & arg_0) -> int {  return self.GetNumberOfGenerationsFromBase( arg_0.c_str());}))
    .function("PassField", &vtkEdgeSubdivisionCriterion::PassField, emscripten::allow_raw_pointers())
    .function("ResetFieldList", &vtkEdgeSubdivisionCriterion::ResetFieldList)
    .function("DontPassField", &vtkEdgeSubdivisionCriterion::DontPassField, emscripten::allow_raw_pointers())
    .function("GetFieldIds", emscripten::optional_override([](vtkEdgeSubdivisionCriterion& self) -> std::uintptr_t {  return reinterpret_cast<std::uintptr_t>(self.GetFieldIds()) / sizeof(int);}))
    .function("GetFieldOffsets", emscripten::optional_override([](vtkEdgeSubdivisionCriterion& self) -> std::uintptr_t {  return reinterpret_cast<std::uintptr_t>(self.GetFieldOffsets()) / sizeof(int);}))
    .function("GetOutputField", &vtkEdgeSubdivisionCriterion::GetOutputField)
    .function("GetNumberOfFields", &vtkEdgeSubdivisionCriterion::GetNumberOfFields);
}
