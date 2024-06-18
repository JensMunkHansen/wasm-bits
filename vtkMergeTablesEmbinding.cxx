// JavaScript wrapper for vtkMergeTables with embind 
//
// This file was auto-generated using :
/*
node /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/bin/vtkWrapJavaScript.js \
 @/home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkInfovisCore.js/vtkInfovisCore.js.Release.args \
 -o \
 /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkInfovisCore.js/vtkMergeTablesEmbinding.cxx \
 /home/jmh/github/vtk/Infovis/Core/vtkMergeTables.h
*/
#include "vtkEmbindSmartPointerTrait.h"
#include <emscripten.h>
#include <string>
#include "vtkVariant.h"
#include "vtkObjectBase.h"
#include "vtkIndent.h"
#include "vtkMergeTables.h"

template<> void emscripten::internal::raw_destructor<vtkMergeTables>(vtkMergeTables * ptr){ ptr->Delete(); }
EMSCRIPTEN_BINDINGS(vtkMergeTables_class) {
  emscripten::class_<vtkMergeTables, emscripten::base<vtkTableAlgorithm>>("vtkMergeTables")
    .smart_ptr<vtkSmartPointer<vtkMergeTables>>("vtkSmartPointer<vtkMergeTables>")
    .constructor(&vtk::MakeAvtkSmartPointer<vtkMergeTables>)
    .class_function("IsTypeOf", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkMergeTables::IsTypeOf( arg_0.c_str());}))
    .function("IsA", emscripten::optional_override([](vtkMergeTables& self, const std::string & arg_0) -> int {  return self.IsA( arg_0.c_str());}))
    .class_function("SafeDownCast", &vtkMergeTables::SafeDownCast, emscripten::allow_raw_pointers())
    .function("NewInstance", &vtkMergeTables::NewInstance, emscripten::allow_raw_pointers())
    .class_function("GetNumberOfGenerationsFromBaseType", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkMergeTables::GetNumberOfGenerationsFromBaseType( arg_0.c_str());}))
    .function("GetNumberOfGenerationsFromBase", emscripten::optional_override([](vtkMergeTables& self, const std::string & arg_0) -> int {  return self.GetNumberOfGenerationsFromBase( arg_0.c_str());}))
    .function("SetFirstTablePrefix", emscripten::optional_override([](vtkMergeTables& self, const std::string & arg_0) -> void {  return self.SetFirstTablePrefix( arg_0.c_str());}))
    .function("GetFirstTablePrefix", emscripten::optional_override([](vtkMergeTables& self) -> std::string {  return self.GetFirstTablePrefix();}))
    .function("SetSecondTablePrefix", emscripten::optional_override([](vtkMergeTables& self, const std::string & arg_0) -> void {  return self.SetSecondTablePrefix( arg_0.c_str());}))
    .function("GetSecondTablePrefix", emscripten::optional_override([](vtkMergeTables& self) -> std::string {  return self.GetSecondTablePrefix();}))
    .function("SetMergeColumnsByName", &vtkMergeTables::SetMergeColumnsByName)
    .function("GetMergeColumnsByName", &vtkMergeTables::GetMergeColumnsByName)
    .function("MergeColumnsByNameOn", &vtkMergeTables::MergeColumnsByNameOn)
    .function("MergeColumnsByNameOff", &vtkMergeTables::MergeColumnsByNameOff)
    .function("SetPrefixAllButMerged", &vtkMergeTables::SetPrefixAllButMerged)
    .function("GetPrefixAllButMerged", &vtkMergeTables::GetPrefixAllButMerged)
    .function("PrefixAllButMergedOn", &vtkMergeTables::PrefixAllButMergedOn)
    .function("PrefixAllButMergedOff", &vtkMergeTables::PrefixAllButMergedOff);
}
