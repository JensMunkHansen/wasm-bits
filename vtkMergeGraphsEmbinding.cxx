// JavaScript wrapper for vtkMergeGraphs with embind 
//
// This file was auto-generated using :
/*
node /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/bin/vtkWrapJavaScript.js \
 @/home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkInfovisCore.js/vtkInfovisCore.js.Release.args \
 -o \
 /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkInfovisCore.js/vtkMergeGraphsEmbinding.cxx \
 /home/jmh/github/vtk/Infovis/Core/vtkMergeGraphs.h
*/
#include "vtkEmbindSmartPointerTrait.h"
#include <emscripten.h>
#include <string>
#include "vtkVariant.h"
#include "vtkObjectBase.h"
#include "vtkIndent.h"
#include "vtkMutableGraphHelper.h"
#include "vtkGraph.h"
#include "vtkMergeGraphs.h"

template<> void emscripten::internal::raw_destructor<vtkMergeGraphs>(vtkMergeGraphs * ptr){ ptr->Delete(); }
EMSCRIPTEN_BINDINGS(vtkMergeGraphs_class) {
  emscripten::class_<vtkMergeGraphs, emscripten::base<vtkGraphAlgorithm>>("vtkMergeGraphs")
    .smart_ptr<vtkSmartPointer<vtkMergeGraphs>>("vtkSmartPointer<vtkMergeGraphs>")
    .constructor(&vtk::MakeVTKSmartPtr<vtkMergeGraphs>)
    .class_function("IsTypeOf", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkMergeGraphs::IsTypeOf( arg_0.c_str());}))
    .function("IsA", emscripten::optional_override([](vtkMergeGraphs& self, const std::string & arg_0) -> int {  return self.IsA( arg_0.c_str());}))
    .class_function("SafeDownCast", &vtkMergeGraphs::SafeDownCast, emscripten::allow_raw_pointers())
    .function("NewInstance", &vtkMergeGraphs::NewInstance, emscripten::allow_raw_pointers())
    .class_function("GetNumberOfGenerationsFromBaseType", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkMergeGraphs::GetNumberOfGenerationsFromBaseType( arg_0.c_str());}))
    .function("GetNumberOfGenerationsFromBase", emscripten::optional_override([](vtkMergeGraphs& self, const std::string & arg_0) -> int {  return self.GetNumberOfGenerationsFromBase( arg_0.c_str());}))
    .function("ExtendGraph", &vtkMergeGraphs::ExtendGraph, emscripten::allow_raw_pointers())
    .function("SetUseEdgeWindow", &vtkMergeGraphs::SetUseEdgeWindow)
    .function("GetUseEdgeWindow", &vtkMergeGraphs::GetUseEdgeWindow)
    .function("UseEdgeWindowOn", &vtkMergeGraphs::UseEdgeWindowOn)
    .function("UseEdgeWindowOff", &vtkMergeGraphs::UseEdgeWindowOff)
    .function("SetEdgeWindowArrayName", emscripten::optional_override([](vtkMergeGraphs& self, const std::string & arg_0) -> void {  return self.SetEdgeWindowArrayName( arg_0.c_str());}))
    .function("GetEdgeWindowArrayName", emscripten::optional_override([](vtkMergeGraphs& self) -> std::string {  return self.GetEdgeWindowArrayName();}))
    .function("SetEdgeWindow", &vtkMergeGraphs::SetEdgeWindow)
    .function("GetEdgeWindow", &vtkMergeGraphs::GetEdgeWindow);
}
