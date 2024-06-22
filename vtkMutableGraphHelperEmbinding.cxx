// JavaScript wrapper for vtkMutableGraphHelper with embind 
//
// This file was auto-generated using :
/*
node /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/bin/vtkWrapJavaScript.js \
 @/home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkInfovisCore.js/vtkInfovisCore.js.Release.args \
 -o \
 /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkInfovisCore.js/vtkMutableGraphHelperEmbinding.cxx \
 /home/jmh/github/vtk/Infovis/Core/vtkMutableGraphHelper.h
*/
#include "vtkEmbindSmartPointerTrait.h"
#include <emscripten.h>
#include <string>
#include "vtkVariant.h"
#include "vtkObjectBase.h"
#include "vtkIndent.h"
#include "vtkGraph.h"
#include "vtkGraphEdge.h"
#include "vtkIdTypeArray.h"
#include "vtkMutableGraphHelper.h"

template<> void emscripten::internal::raw_destructor<vtkMutableGraphHelper>(vtkMutableGraphHelper * ptr){ ptr->Delete(); }
EMSCRIPTEN_BINDINGS(vtkMutableGraphHelper_class) {
  emscripten::class_<vtkMutableGraphHelper, emscripten::base<vtkObject>>("vtkMutableGraphHelper")
    .smart_ptr<vtkSmartPointer<vtkMutableGraphHelper>>("vtkSmartPointer<vtkMutableGraphHelper>")
    .constructor(&vtk::MakeVTKSmartPtr<vtkMutableGraphHelper>)
    .class_function("IsTypeOf", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkMutableGraphHelper::IsTypeOf( arg_0.c_str());}))
    .function("IsA", emscripten::optional_override([](vtkMutableGraphHelper& self, const std::string & arg_0) -> int {  return self.IsA( arg_0.c_str());}))
    .class_function("SafeDownCast", &vtkMutableGraphHelper::SafeDownCast, emscripten::allow_raw_pointers())
    .function("NewInstance", &vtkMutableGraphHelper::NewInstance, emscripten::allow_raw_pointers())
    .class_function("GetNumberOfGenerationsFromBaseType", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkMutableGraphHelper::GetNumberOfGenerationsFromBaseType( arg_0.c_str());}))
    .function("GetNumberOfGenerationsFromBase", emscripten::optional_override([](vtkMutableGraphHelper& self, const std::string & arg_0) -> int {  return self.GetNumberOfGenerationsFromBase( arg_0.c_str());}))
    .function("SetGraph", &vtkMutableGraphHelper::SetGraph, emscripten::allow_raw_pointers())
    .function("GetGraph", &vtkMutableGraphHelper::GetGraph, emscripten::allow_raw_pointers())
    .function("AddEdge", &vtkMutableGraphHelper::AddEdge)
    .function("AddGraphEdge", &vtkMutableGraphHelper::AddGraphEdge, emscripten::allow_raw_pointers())
    .function("AddVertex", &vtkMutableGraphHelper::AddVertex)
    .function("RemoveVertex", &vtkMutableGraphHelper::RemoveVertex)
    .function("RemoveVertices", &vtkMutableGraphHelper::RemoveVertices, emscripten::allow_raw_pointers())
    .function("RemoveEdge", &vtkMutableGraphHelper::RemoveEdge)
    .function("RemoveEdges", &vtkMutableGraphHelper::RemoveEdges, emscripten::allow_raw_pointers());
}
