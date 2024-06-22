// JavaScript wrapper for vtkGraphEdge with embind 
//
// This file was auto-generated using :
/*
node /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/bin/vtkWrapJavaScript.js \
 @/home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkCommonDataModel.js/vtkCommonDataModel.js.Release.args \
 -o \
 /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkCommonDataModel.js/vtkGraphEdgeEmbinding.cxx \
 /home/jmh/github/vtk/Common/DataModel/vtkGraphEdge.h
*/
#include "vtkEmbindSmartPointerTrait.h"
#include <emscripten.h>
#include <string>
#include "vtkVariant.h"
#include "vtkObjectBase.h"
#include "vtkIndent.h"
#include "vtkGraphEdge.h"

template<> void emscripten::internal::raw_destructor<vtkGraphEdge>(vtkGraphEdge * ptr){ ptr->Delete(); }
EMSCRIPTEN_BINDINGS(vtkGraphEdge_class) {
  emscripten::class_<vtkGraphEdge, emscripten::base<vtkObject>>("vtkGraphEdge")
    .smart_ptr<vtkSmartPointer<vtkGraphEdge>>("vtkSmartPointer<vtkGraphEdge>")
    .constructor(&vtk::MakeVTKSmartPtr<vtkGraphEdge>)
    .class_function("IsTypeOf", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkGraphEdge::IsTypeOf( arg_0.c_str());}))
    .function("IsA", emscripten::optional_override([](vtkGraphEdge& self, const std::string & arg_0) -> int {  return self.IsA( arg_0.c_str());}))
    .class_function("SafeDownCast", &vtkGraphEdge::SafeDownCast, emscripten::allow_raw_pointers())
    .function("NewInstance", &vtkGraphEdge::NewInstance, emscripten::allow_raw_pointers())
    .class_function("GetNumberOfGenerationsFromBaseType", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkGraphEdge::GetNumberOfGenerationsFromBaseType( arg_0.c_str());}))
    .function("GetNumberOfGenerationsFromBase", emscripten::optional_override([](vtkGraphEdge& self, const std::string & arg_0) -> int {  return self.GetNumberOfGenerationsFromBase( arg_0.c_str());}))
    .function("SetSource", &vtkGraphEdge::SetSource)
    .function("GetSource", &vtkGraphEdge::GetSource)
    .function("SetTarget", &vtkGraphEdge::SetTarget)
    .function("GetTarget", &vtkGraphEdge::GetTarget)
    .function("SetId", &vtkGraphEdge::SetId)
    .function("GetId", &vtkGraphEdge::GetId);
}
