// JavaScript wrapper for vtkConvertSelection with embind 
//
// This file was auto-generated using :
/*
node /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/bin/vtkWrapJavaScript.js \
 @/home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkFiltersExtraction.js/vtkFiltersExtraction.js.Release.args \
 -o \
 /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkFiltersExtraction.js/vtkConvertSelectionEmbinding.cxx \
 /home/jmh/github/vtk/Filters/Extraction/vtkConvertSelection.h
*/
#include "vtkEmbindSmartPointerTrait.h"
#include <emscripten.h>
#include <string>
#include "vtkVariant.h"
#include "vtkObjectBase.h"
#include "vtkIndent.h"
#include "vtkAlgorithmOutput.h"
#include "vtkStringArray.h"
#include "vtkExtractSelection.h"
#include "vtkSelection.h"
#include "vtkDataObject.h"
#include "vtkIdTypeArray.h"
#include "vtkGraph.h"
#include "vtkDataSet.h"
#include "vtkTable.h"
#include "vtkConvertSelection.h"

template<> void emscripten::internal::raw_destructor<vtkConvertSelection>(vtkConvertSelection * ptr){ ptr->Delete(); }
EMSCRIPTEN_BINDINGS(vtkConvertSelection_class) {
  emscripten::class_<vtkConvertSelection, emscripten::base<vtkSelectionAlgorithm>>("vtkConvertSelection")
    .smart_ptr<vtkSmartPointer<vtkConvertSelection>>("vtkSmartPointer<vtkConvertSelection>")
    .constructor(&vtk::MakeAvtkSmartPointer<vtkConvertSelection>)
    .class_function("IsTypeOf", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkConvertSelection::IsTypeOf( arg_0.c_str());}))
    .function("IsA", emscripten::optional_override([](vtkConvertSelection& self, const std::string & arg_0) -> int {  return self.IsA( arg_0.c_str());}))
    .class_function("SafeDownCast", &vtkConvertSelection::SafeDownCast, emscripten::allow_raw_pointers())
    .function("NewInstance", &vtkConvertSelection::NewInstance, emscripten::allow_raw_pointers())
    .class_function("GetNumberOfGenerationsFromBaseType", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkConvertSelection::GetNumberOfGenerationsFromBaseType( arg_0.c_str());}))
    .function("GetNumberOfGenerationsFromBase", emscripten::optional_override([](vtkConvertSelection& self, const std::string & arg_0) -> int {  return self.GetNumberOfGenerationsFromBase( arg_0.c_str());}))
    .function("SetDataObjectConnection", &vtkConvertSelection::SetDataObjectConnection, emscripten::allow_raw_pointers())
    .function("SetInputFieldType", &vtkConvertSelection::SetInputFieldType)
    .function("GetInputFieldType", &vtkConvertSelection::GetInputFieldType)
    .function("SetOutputType", &vtkConvertSelection::SetOutputType)
    .function("GetOutputType", &vtkConvertSelection::GetOutputType)
    .function("SetArrayName", emscripten::optional_override([](vtkConvertSelection& self, const std::string & arg_0) -> void {  return self.SetArrayName( arg_0.c_str());}))
    .function("GetArrayName", emscripten::optional_override([](vtkConvertSelection& self) -> std::string {  return self.GetArrayName();}))
    .function("SetArrayNames", &vtkConvertSelection::SetArrayNames, emscripten::allow_raw_pointers())
    .function("GetArrayNames", &vtkConvertSelection::GetArrayNames, emscripten::allow_raw_pointers())
    .function("AddArrayName", emscripten::optional_override([](vtkConvertSelection& self, const std::string & arg_0) -> void {  return self.AddArrayName( arg_0.c_str());}))
    .function("ClearArrayNames", &vtkConvertSelection::ClearArrayNames)
    .function("SetMatchAnyValues", &vtkConvertSelection::SetMatchAnyValues)
    .function("GetMatchAnyValues", &vtkConvertSelection::GetMatchAnyValues)
    .function("MatchAnyValuesOn", &vtkConvertSelection::MatchAnyValuesOn)
    .function("MatchAnyValuesOff", &vtkConvertSelection::MatchAnyValuesOff)
    .function("SetAllowMissingArray", &vtkConvertSelection::SetAllowMissingArray)
    .function("GetAllowMissingArray", &vtkConvertSelection::GetAllowMissingArray)
    .function("AllowMissingArrayOn", &vtkConvertSelection::AllowMissingArrayOn)
    .function("AllowMissingArrayOff", &vtkConvertSelection::AllowMissingArrayOff)
    .function("SetSelectionExtractor", &vtkConvertSelection::SetSelectionExtractor, emscripten::allow_raw_pointers())
    .function("GetSelectionExtractor", &vtkConvertSelection::GetSelectionExtractor, emscripten::allow_raw_pointers())
    .class_function("ToIndexSelection", &vtkConvertSelection::ToIndexSelection, emscripten::allow_raw_pointers())
    .class_function("ToGlobalIdSelection", &vtkConvertSelection::ToGlobalIdSelection, emscripten::allow_raw_pointers())
    .class_function("ToPedigreeIdSelection", &vtkConvertSelection::ToPedigreeIdSelection, emscripten::allow_raw_pointers())
    .class_function("ToValueSelection", emscripten::select_overload<vtkSelection*( vtkSelection*, vtkDataObject*, const std::string &)>([]( vtkSelection* arg_0, vtkDataObject* arg_1, const std::string & arg_2) -> vtkSelection* { return vtkConvertSelection::ToValueSelection( arg_0, arg_1, arg_2.c_str()); }), emscripten::allow_raw_pointers())
    .class_function("ToValueSelection", emscripten::select_overload<vtkSelection*( vtkSelection*, vtkDataObject*, vtkStringArray*)>([]( vtkSelection* arg_0, vtkDataObject* arg_1, vtkStringArray* arg_2) -> vtkSelection* { return vtkConvertSelection::ToValueSelection( arg_0, arg_1, arg_2); }), emscripten::allow_raw_pointers())
    .class_function("GetSelectedItems", &vtkConvertSelection::GetSelectedItems, emscripten::allow_raw_pointers())
    .class_function("GetSelectedVertices", &vtkConvertSelection::GetSelectedVertices, emscripten::allow_raw_pointers())
    .class_function("GetSelectedEdges", &vtkConvertSelection::GetSelectedEdges, emscripten::allow_raw_pointers())
    .class_function("GetSelectedPoints", &vtkConvertSelection::GetSelectedPoints, emscripten::allow_raw_pointers())
    .class_function("GetSelectedCells", &vtkConvertSelection::GetSelectedCells, emscripten::allow_raw_pointers())
    .class_function("GetSelectedRows", &vtkConvertSelection::GetSelectedRows, emscripten::allow_raw_pointers())
    .class_function("ToSelectionType", &vtkConvertSelection::ToSelectionType, emscripten::allow_raw_pointers());
}
