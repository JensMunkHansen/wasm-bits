// JavaScript wrapper for vtkEdgeTable with embind 
//
// This file was auto-generated using :
/*
node /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/bin/vtkWrapJavaScript.js \
 @/home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkCommonDataModel.js/vtkCommonDataModel.js.Release.args \
 -o \
 /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkCommonDataModel.js/vtkEdgeTableEmbinding.cxx \
 /home/jmh/github/vtk/Common/DataModel/vtkEdgeTable.h
*/
#include "vtkEmbindSmartPointerTrait.h"
#include <emscripten.h>
#include <string>
#include "vtkVariant.h"
#include "vtkObjectBase.h"
#include "vtkIndent.h"
#include "vtkPoints.h"
#include "vtkEdgeTable.h"

template<> void emscripten::internal::raw_destructor<vtkEdgeTable>(vtkEdgeTable * ptr){ ptr->Delete(); }
EMSCRIPTEN_BINDINGS(vtkEdgeTable_class) {
  emscripten::class_<vtkEdgeTable, emscripten::base<vtkObject>>("vtkEdgeTable")
    .smart_ptr<vtkSmartPointer<vtkEdgeTable>>("vtkSmartPointer<vtkEdgeTable>")
    .constructor(&vtk::MakeVTKSmartPtr<vtkEdgeTable>)
    .class_function("IsTypeOf", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkEdgeTable::IsTypeOf( arg_0.c_str());}))
    .function("IsA", emscripten::optional_override([](vtkEdgeTable& self, const std::string & arg_0) -> int {  return self.IsA( arg_0.c_str());}))
    .class_function("SafeDownCast", &vtkEdgeTable::SafeDownCast, emscripten::allow_raw_pointers())
    .function("NewInstance", &vtkEdgeTable::NewInstance, emscripten::allow_raw_pointers())
    .class_function("GetNumberOfGenerationsFromBaseType", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkEdgeTable::GetNumberOfGenerationsFromBaseType( arg_0.c_str());}))
    .function("GetNumberOfGenerationsFromBase", emscripten::optional_override([](vtkEdgeTable& self, const std::string & arg_0) -> int {  return self.GetNumberOfGenerationsFromBase( arg_0.c_str());}))
    .function("Initialize", &vtkEdgeTable::Initialize)
    .function("InitEdgeInsertion", &vtkEdgeTable::InitEdgeInsertion)
    .function("InsertEdge", emscripten::select_overload<int(vtkEdgeTable&, int, int)>([](vtkEdgeTable& self, int arg_0, int arg_1) -> int { return self.InsertEdge( arg_0, arg_1); }))
    .function("InsertEdge", emscripten::select_overload<void(vtkEdgeTable&, int, int, int)>([](vtkEdgeTable& self, int arg_0, int arg_1, int arg_2) -> void { return self.InsertEdge( arg_0, arg_1, arg_2); }))
    .function("InsertEdge", emscripten::select_overload<void(vtkEdgeTable&, int, int, std::uintptr_t)>([](vtkEdgeTable& self, int arg_0, int arg_1, std::uintptr_t arg_2) -> void { return self.InsertEdge( arg_0, arg_1,reinterpret_cast<void*>(arg_2)); }))
    .function("IsEdge", emscripten::select_overload<int(vtkEdgeTable&, int, int)>([](vtkEdgeTable& self, int arg_0, int arg_1) -> int { return self.IsEdge( arg_0, arg_1); }))
    .function("InitPointInsertion", &vtkEdgeTable::InitPointInsertion, emscripten::allow_raw_pointers())
    .function("GetNumberOfEdges", &vtkEdgeTable::GetNumberOfEdges)
    .function("InitTraversal", &vtkEdgeTable::InitTraversal)
    .function("Reset", &vtkEdgeTable::Reset);
}
