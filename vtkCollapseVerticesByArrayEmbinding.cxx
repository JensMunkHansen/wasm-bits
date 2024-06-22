// JavaScript wrapper for vtkCollapseVerticesByArray with embind 
//
// This file was auto-generated using :
/*
node /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/bin/vtkWrapJavaScript.js \
 @/home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkInfovisCore.js/vtkInfovisCore.js.Release.args \
 -o \
 /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkInfovisCore.js/vtkCollapseVerticesByArrayEmbinding.cxx \
 /home/jmh/github/vtk/Infovis/Core/vtkCollapseVerticesByArray.h
*/
#include "vtkEmbindSmartPointerTrait.h"
#include <emscripten.h>
#include <string>
#include "vtkVariant.h"
#include "vtkObjectBase.h"
#include "vtkIndent.h"
#include "vtkCollapseVerticesByArray.h"

template<> void emscripten::internal::raw_destructor<vtkCollapseVerticesByArray>(vtkCollapseVerticesByArray * ptr){ ptr->Delete(); }
EMSCRIPTEN_BINDINGS(vtkCollapseVerticesByArray_class) {
  emscripten::class_<vtkCollapseVerticesByArray, emscripten::base<vtkGraphAlgorithm>>("vtkCollapseVerticesByArray")
    .smart_ptr<vtkSmartPointer<vtkCollapseVerticesByArray>>("vtkSmartPointer<vtkCollapseVerticesByArray>")
    .constructor(&vtk::MakeAvtkSmartPointer<vtkCollapseVerticesByArray>)
    .class_function("IsTypeOf", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkCollapseVerticesByArray::IsTypeOf( arg_0.c_str());}))
    .function("IsA", emscripten::optional_override([](vtkCollapseVerticesByArray& self, const std::string & arg_0) -> int {  return self.IsA( arg_0.c_str());}))
    .class_function("SafeDownCast", &vtkCollapseVerticesByArray::SafeDownCast, emscripten::allow_raw_pointers())
    .function("NewInstance", &vtkCollapseVerticesByArray::NewInstance, emscripten::allow_raw_pointers())
    .class_function("GetNumberOfGenerationsFromBaseType", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkCollapseVerticesByArray::GetNumberOfGenerationsFromBaseType( arg_0.c_str());}))
    .function("GetNumberOfGenerationsFromBase", emscripten::optional_override([](vtkCollapseVerticesByArray& self, const std::string & arg_0) -> int {  return self.GetNumberOfGenerationsFromBase( arg_0.c_str());}))
    .function("GetAllowSelfLoops", &vtkCollapseVerticesByArray::GetAllowSelfLoops)
    .function("SetAllowSelfLoops", &vtkCollapseVerticesByArray::SetAllowSelfLoops)
    .function("AllowSelfLoopsOn", &vtkCollapseVerticesByArray::AllowSelfLoopsOn)
    .function("AllowSelfLoopsOff", &vtkCollapseVerticesByArray::AllowSelfLoopsOff)
    .function("AddAggregateEdgeArray", emscripten::optional_override([](vtkCollapseVerticesByArray& self, const std::string & arg_0) -> void {  return self.AddAggregateEdgeArray( arg_0.c_str());}))
    .function("ClearAggregateEdgeArray", &vtkCollapseVerticesByArray::ClearAggregateEdgeArray)
    .function("GetVertexArray", emscripten::optional_override([](vtkCollapseVerticesByArray& self) -> std::string {  return self.GetVertexArray();}))
    .function("SetVertexArray", emscripten::optional_override([](vtkCollapseVerticesByArray& self, const std::string & arg_0) -> void {  return self.SetVertexArray( arg_0.c_str());}))
    .function("GetCountEdgesCollapsed", &vtkCollapseVerticesByArray::GetCountEdgesCollapsed)
    .function("SetCountEdgesCollapsed", &vtkCollapseVerticesByArray::SetCountEdgesCollapsed)
    .function("CountEdgesCollapsedOn", &vtkCollapseVerticesByArray::CountEdgesCollapsedOn)
    .function("CountEdgesCollapsedOff", &vtkCollapseVerticesByArray::CountEdgesCollapsedOff)
    .function("GetEdgesCollapsedArray", emscripten::optional_override([](vtkCollapseVerticesByArray& self) -> std::string {  return self.GetEdgesCollapsedArray();}))
    .function("SetEdgesCollapsedArray", emscripten::optional_override([](vtkCollapseVerticesByArray& self, const std::string & arg_0) -> void {  return self.SetEdgesCollapsedArray( arg_0.c_str());}))
    .function("GetCountVerticesCollapsed", &vtkCollapseVerticesByArray::GetCountVerticesCollapsed)
    .function("SetCountVerticesCollapsed", &vtkCollapseVerticesByArray::SetCountVerticesCollapsed)
    .function("CountVerticesCollapsedOn", &vtkCollapseVerticesByArray::CountVerticesCollapsedOn)
    .function("CountVerticesCollapsedOff", &vtkCollapseVerticesByArray::CountVerticesCollapsedOff)
    .function("GetVerticesCollapsedArray", emscripten::optional_override([](vtkCollapseVerticesByArray& self) -> std::string {  return self.GetVerticesCollapsedArray();}))
    .function("SetVerticesCollapsedArray", emscripten::optional_override([](vtkCollapseVerticesByArray& self, const std::string & arg_0) -> void {  return self.SetVerticesCollapsedArray( arg_0.c_str());}));
}
