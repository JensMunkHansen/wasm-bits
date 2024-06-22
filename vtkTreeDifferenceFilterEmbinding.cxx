// JavaScript wrapper for vtkTreeDifferenceFilter with embind 
//
// This file was auto-generated using :
/*
node /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/bin/vtkWrapJavaScript.js \
 @/home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkInfovisCore.js/vtkInfovisCore.js.Release.args \
 -o \
 /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkInfovisCore.js/vtkTreeDifferenceFilterEmbinding.cxx \
 /home/jmh/github/vtk/Infovis/Core/vtkTreeDifferenceFilter.h
*/
#include "vtkEmbindSmartPointerTrait.h"
#include <emscripten.h>
#include <string>
#include "vtkVariant.h"
#include "vtkObjectBase.h"
#include "vtkIndent.h"
#include "vtkTreeDifferenceFilter.h"

template<> void emscripten::internal::raw_destructor<vtkTreeDifferenceFilter>(vtkTreeDifferenceFilter * ptr){ ptr->Delete(); }
EMSCRIPTEN_BINDINGS(vtkTreeDifferenceFilter_class) {
  emscripten::class_<vtkTreeDifferenceFilter, emscripten::base<vtkGraphAlgorithm>>("vtkTreeDifferenceFilter")
    .smart_ptr<vtkSmartPointer<vtkTreeDifferenceFilter>>("vtkSmartPointer<vtkTreeDifferenceFilter>")
    .constructor(&vtk::MakeVTKSmartPtr<vtkTreeDifferenceFilter>)
    .class_function("IsTypeOf", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkTreeDifferenceFilter::IsTypeOf( arg_0.c_str());}))
    .function("IsA", emscripten::optional_override([](vtkTreeDifferenceFilter& self, const std::string & arg_0) -> int {  return self.IsA( arg_0.c_str());}))
    .class_function("SafeDownCast", &vtkTreeDifferenceFilter::SafeDownCast, emscripten::allow_raw_pointers())
    .function("NewInstance", &vtkTreeDifferenceFilter::NewInstance, emscripten::allow_raw_pointers())
    .class_function("GetNumberOfGenerationsFromBaseType", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkTreeDifferenceFilter::GetNumberOfGenerationsFromBaseType( arg_0.c_str());}))
    .function("GetNumberOfGenerationsFromBase", emscripten::optional_override([](vtkTreeDifferenceFilter& self, const std::string & arg_0) -> int {  return self.GetNumberOfGenerationsFromBase( arg_0.c_str());}))
    .function("SetIdArrayName", emscripten::optional_override([](vtkTreeDifferenceFilter& self, const std::string & arg_0) -> void {  return self.SetIdArrayName( arg_0.c_str());}))
    .function("GetIdArrayName", emscripten::optional_override([](vtkTreeDifferenceFilter& self) -> std::string {  return self.GetIdArrayName();}))
    .function("SetComparisonArrayName", emscripten::optional_override([](vtkTreeDifferenceFilter& self, const std::string & arg_0) -> void {  return self.SetComparisonArrayName( arg_0.c_str());}))
    .function("GetComparisonArrayName", emscripten::optional_override([](vtkTreeDifferenceFilter& self) -> std::string {  return self.GetComparisonArrayName();}))
    .function("SetOutputArrayName", emscripten::optional_override([](vtkTreeDifferenceFilter& self, const std::string & arg_0) -> void {  return self.SetOutputArrayName( arg_0.c_str());}))
    .function("GetOutputArrayName", emscripten::optional_override([](vtkTreeDifferenceFilter& self) -> std::string {  return self.GetOutputArrayName();}))
    .function("SetComparisonArrayIsVertexData", &vtkTreeDifferenceFilter::SetComparisonArrayIsVertexData)
    .function("GetComparisonArrayIsVertexData", &vtkTreeDifferenceFilter::GetComparisonArrayIsVertexData);
}
