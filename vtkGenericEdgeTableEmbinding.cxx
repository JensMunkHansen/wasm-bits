// JavaScript wrapper for vtkGenericEdgeTable with embind 
//
// This file was auto-generated using :
/*
node /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/bin/vtkWrapJavaScript.js \
 @/home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkCommonDataModel.js/vtkCommonDataModel.js.Release.args \
 -o \
 /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkCommonDataModel.js/vtkGenericEdgeTableEmbinding.cxx \
 /home/jmh/github/vtk/Common/DataModel/vtkGenericEdgeTable.h
*/
#include "vtkEmbindSmartPointerTrait.h"
#include <emscripten.h>
#include <string>
#include "vtkVariant.h"
#include "vtkObjectBase.h"
#include "vtkIndent.h"
#include "vtkGenericEdgeTable.h"

template<> void emscripten::internal::raw_destructor<vtkGenericEdgeTable>(vtkGenericEdgeTable * ptr){ ptr->Delete(); }
EMSCRIPTEN_BINDINGS(vtkGenericEdgeTable_class) {
  emscripten::class_<vtkGenericEdgeTable, emscripten::base<vtkObject>>("vtkGenericEdgeTable")
    .smart_ptr<vtkSmartPointer<vtkGenericEdgeTable>>("vtkSmartPointer<vtkGenericEdgeTable>")
    .constructor(&vtk::MakeAvtkSmartPointer<vtkGenericEdgeTable>)
    .class_function("IsTypeOf", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkGenericEdgeTable::IsTypeOf( arg_0.c_str());}))
    .function("IsA", emscripten::optional_override([](vtkGenericEdgeTable& self, const std::string & arg_0) -> int {  return self.IsA( arg_0.c_str());}))
    .class_function("SafeDownCast", &vtkGenericEdgeTable::SafeDownCast, emscripten::allow_raw_pointers())
    .function("NewInstance", &vtkGenericEdgeTable::NewInstance, emscripten::allow_raw_pointers())
    .class_function("GetNumberOfGenerationsFromBaseType", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkGenericEdgeTable::GetNumberOfGenerationsFromBaseType( arg_0.c_str());}))
    .function("GetNumberOfGenerationsFromBase", emscripten::optional_override([](vtkGenericEdgeTable& self, const std::string & arg_0) -> int {  return self.GetNumberOfGenerationsFromBase( arg_0.c_str());}))
    .function("InsertEdge", emscripten::select_overload<void(vtkGenericEdgeTable&, int, int, int, int)>([](vtkGenericEdgeTable& self, int arg_0, int arg_1, int arg_2, int arg_3) -> void { return self.InsertEdge( arg_0, arg_1, arg_2, arg_3); }))
    .function("RemoveEdge", &vtkGenericEdgeTable::RemoveEdge)
    .function("IncrementEdgeReferenceCount", &vtkGenericEdgeTable::IncrementEdgeReferenceCount)
    .function("CheckEdgeReferenceCount", &vtkGenericEdgeTable::CheckEdgeReferenceCount)
    .function("Initialize", &vtkGenericEdgeTable::Initialize)
    .function("GetNumberOfComponents", &vtkGenericEdgeTable::GetNumberOfComponents)
    .function("SetNumberOfComponents", &vtkGenericEdgeTable::SetNumberOfComponents)
    .function("CheckPoint", emscripten::select_overload<int(vtkGenericEdgeTable&, int)>([](vtkGenericEdgeTable& self, int arg_0) -> int { return self.CheckPoint( arg_0); }))
    .function("RemovePoint", &vtkGenericEdgeTable::RemovePoint)
    .function("IncrementPointReferenceCount", &vtkGenericEdgeTable::IncrementPointReferenceCount)
    .function("DumpTable", &vtkGenericEdgeTable::DumpTable)
    .function("LoadFactor", &vtkGenericEdgeTable::LoadFactor);
}
