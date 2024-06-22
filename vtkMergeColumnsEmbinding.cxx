// JavaScript wrapper for vtkMergeColumns with embind 
//
// This file was auto-generated using :
/*
node /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/bin/vtkWrapJavaScript.js \
 @/home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkInfovisCore.js/vtkInfovisCore.js.Release.args \
 -o \
 /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkInfovisCore.js/vtkMergeColumnsEmbinding.cxx \
 /home/jmh/github/vtk/Infovis/Core/vtkMergeColumns.h
*/
#include "vtkEmbindSmartPointerTrait.h"
#include <emscripten.h>
#include <string>
#include "vtkVariant.h"
#include "vtkObjectBase.h"
#include "vtkIndent.h"
#include "vtkMergeColumns.h"

template<> void emscripten::internal::raw_destructor<vtkMergeColumns>(vtkMergeColumns * ptr){ ptr->Delete(); }
EMSCRIPTEN_BINDINGS(vtkMergeColumns_class) {
  emscripten::class_<vtkMergeColumns, emscripten::base<vtkTableAlgorithm>>("vtkMergeColumns")
    .smart_ptr<vtkSmartPointer<vtkMergeColumns>>("vtkSmartPointer<vtkMergeColumns>")
    .constructor(&vtk::MakeAvtkSmartPointer<vtkMergeColumns>)
    .class_function("IsTypeOf", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkMergeColumns::IsTypeOf( arg_0.c_str());}))
    .function("IsA", emscripten::optional_override([](vtkMergeColumns& self, const std::string & arg_0) -> int {  return self.IsA( arg_0.c_str());}))
    .class_function("SafeDownCast", &vtkMergeColumns::SafeDownCast, emscripten::allow_raw_pointers())
    .function("NewInstance", &vtkMergeColumns::NewInstance, emscripten::allow_raw_pointers())
    .class_function("GetNumberOfGenerationsFromBaseType", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkMergeColumns::GetNumberOfGenerationsFromBaseType( arg_0.c_str());}))
    .function("GetNumberOfGenerationsFromBase", emscripten::optional_override([](vtkMergeColumns& self, const std::string & arg_0) -> int {  return self.GetNumberOfGenerationsFromBase( arg_0.c_str());}))
    .function("SetMergedColumnName", emscripten::optional_override([](vtkMergeColumns& self, const std::string & arg_0) -> void {  return self.SetMergedColumnName( arg_0.c_str());}))
    .function("GetMergedColumnName", emscripten::optional_override([](vtkMergeColumns& self) -> std::string {  return self.GetMergedColumnName();}));
}
