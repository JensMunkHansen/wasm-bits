// JavaScript wrapper for vtkArrayRename with embind 
//
// This file was auto-generated using :
/*
node /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/bin/vtkWrapJavaScript.js \
 @/home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkFiltersCore.js/vtkFiltersCore.js.Release.args \
 -o \
 /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkFiltersCore.js/vtkArrayRenameEmbinding.cxx \
 /home/jmh/github/vtk/Filters/Core/vtkArrayRename.h
*/
#include "vtkEmbindSmartPointerTrait.h"
#include <emscripten.h>
#include <string>
#include "vtkVariant.h"
#include "vtkObjectBase.h"
#include "vtkIndent.h"
#include "vtkArrayRename.h"

template<> void emscripten::internal::raw_destructor<vtkArrayRename>(vtkArrayRename * ptr){ ptr->Delete(); }
EMSCRIPTEN_BINDINGS(vtkArrayRename_class) {
  emscripten::class_<vtkArrayRename, emscripten::base<vtkPassInputTypeAlgorithm>>("vtkArrayRename")
    .smart_ptr<vtkSmartPointer<vtkArrayRename>>("vtkSmartPointer<vtkArrayRename>")
    .constructor(&vtk::MakeVTKSmartPtr<vtkArrayRename>)
    .class_function("IsTypeOf", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkArrayRename::IsTypeOf( arg_0.c_str());}))
    .function("IsA", emscripten::optional_override([](vtkArrayRename& self, const std::string & arg_0) -> int {  return self.IsA( arg_0.c_str());}))
    .class_function("SafeDownCast", &vtkArrayRename::SafeDownCast, emscripten::allow_raw_pointers())
    .function("NewInstance", &vtkArrayRename::NewInstance, emscripten::allow_raw_pointers())
    .class_function("GetNumberOfGenerationsFromBaseType", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkArrayRename::GetNumberOfGenerationsFromBaseType( arg_0.c_str());}))
    .function("GetNumberOfGenerationsFromBase", emscripten::optional_override([](vtkArrayRename& self, const std::string & arg_0) -> int {  return self.GetNumberOfGenerationsFromBase( arg_0.c_str());}))
    .function("GetNumberOfArrays", &vtkArrayRename::GetNumberOfArrays)
    .function("GetArrayOriginalName", emscripten::optional_override([](vtkArrayRename& self, int arg_0, int arg_1) -> std::string {  return self.GetArrayOriginalName( arg_0, arg_1);}))
    .function("GetArrayNewName", emscripten::optional_override([](vtkArrayRename& self, int arg_0, int arg_1) -> std::string {  return self.GetArrayNewName( arg_0, arg_1);}))
    .function("SetArrayName", emscripten::select_overload<void(vtkArrayRename&, int, int, const std::string &)>([](vtkArrayRename& self, int arg_0, int arg_1, const std::string & arg_2) -> void { return self.SetArrayName( arg_0, arg_1, arg_2.c_str()); }))
    .function("SetArrayName", emscripten::select_overload<void(vtkArrayRename&, int, const std::string &, const std::string &)>([](vtkArrayRename& self, int arg_0, const std::string & arg_1, const std::string & arg_2) -> void { return self.SetArrayName( arg_0, arg_1.c_str(), arg_2.c_str()); }))
    .function("ClearMapping", &vtkArrayRename::ClearMapping)
    .function("GetNumberOfPointArrays", &vtkArrayRename::GetNumberOfPointArrays)
    .function("GetPointArrayOriginalName", emscripten::optional_override([](vtkArrayRename& self, int arg_0) -> std::string {  return self.GetPointArrayOriginalName( arg_0);}))
    .function("GetPointArrayNewName", emscripten::optional_override([](vtkArrayRename& self, int arg_0) -> std::string {  return self.GetPointArrayNewName( arg_0);}))
    .function("SetPointArrayName", emscripten::select_overload<void(vtkArrayRename&, int, const std::string &)>([](vtkArrayRename& self, int arg_0, const std::string & arg_1) -> void { return self.SetPointArrayName( arg_0, arg_1.c_str()); }))
    .function("SetPointArrayName", emscripten::select_overload<void(vtkArrayRename&, const std::string &, const std::string &)>([](vtkArrayRename& self, const std::string & arg_0, const std::string & arg_1) -> void { return self.SetPointArrayName( arg_0.c_str(), arg_1.c_str()); }))
    .function("ClearPointMapping", &vtkArrayRename::ClearPointMapping)
    .function("GetNumberOfCellArrays", &vtkArrayRename::GetNumberOfCellArrays)
    .function("GetCellArrayOriginalName", emscripten::optional_override([](vtkArrayRename& self, int arg_0) -> std::string {  return self.GetCellArrayOriginalName( arg_0);}))
    .function("GetCellArrayNewName", emscripten::optional_override([](vtkArrayRename& self, int arg_0) -> std::string {  return self.GetCellArrayNewName( arg_0);}))
    .function("SetCellArrayName", emscripten::select_overload<void(vtkArrayRename&, int, const std::string &)>([](vtkArrayRename& self, int arg_0, const std::string & arg_1) -> void { return self.SetCellArrayName( arg_0, arg_1.c_str()); }))
    .function("SetCellArrayName", emscripten::select_overload<void(vtkArrayRename&, const std::string &, const std::string &)>([](vtkArrayRename& self, const std::string & arg_0, const std::string & arg_1) -> void { return self.SetCellArrayName( arg_0.c_str(), arg_1.c_str()); }))
    .function("ClearCellMapping", &vtkArrayRename::ClearCellMapping)
    .function("GetNumberOfFieldArrays", &vtkArrayRename::GetNumberOfFieldArrays)
    .function("GetFieldArrayOriginalName", emscripten::optional_override([](vtkArrayRename& self, int arg_0) -> std::string {  return self.GetFieldArrayOriginalName( arg_0);}))
    .function("GetFieldArrayNewName", emscripten::optional_override([](vtkArrayRename& self, int arg_0) -> std::string {  return self.GetFieldArrayNewName( arg_0);}))
    .function("SetFieldArrayName", emscripten::select_overload<void(vtkArrayRename&, int, const std::string &)>([](vtkArrayRename& self, int arg_0, const std::string & arg_1) -> void { return self.SetFieldArrayName( arg_0, arg_1.c_str()); }))
    .function("SetFieldArrayName", emscripten::select_overload<void(vtkArrayRename&, const std::string &, const std::string &)>([](vtkArrayRename& self, const std::string & arg_0, const std::string & arg_1) -> void { return self.SetFieldArrayName( arg_0.c_str(), arg_1.c_str()); }))
    .function("ClearFieldMapping", &vtkArrayRename::ClearFieldMapping)
    .function("GetNumberOfVertexArrays", &vtkArrayRename::GetNumberOfVertexArrays)
    .function("GetVertexArrayOriginalName", emscripten::optional_override([](vtkArrayRename& self, int arg_0) -> std::string {  return self.GetVertexArrayOriginalName( arg_0);}))
    .function("GetVertexArrayNewName", emscripten::optional_override([](vtkArrayRename& self, int arg_0) -> std::string {  return self.GetVertexArrayNewName( arg_0);}))
    .function("SetVertexArrayName", emscripten::select_overload<void(vtkArrayRename&, int, const std::string &)>([](vtkArrayRename& self, int arg_0, const std::string & arg_1) -> void { return self.SetVertexArrayName( arg_0, arg_1.c_str()); }))
    .function("SetVertexArrayName", emscripten::select_overload<void(vtkArrayRename&, const std::string &, const std::string &)>([](vtkArrayRename& self, const std::string & arg_0, const std::string & arg_1) -> void { return self.SetVertexArrayName( arg_0.c_str(), arg_1.c_str()); }))
    .function("ClearVertexMapping", &vtkArrayRename::ClearVertexMapping)
    .function("GetNumberOfEdgeArrays", &vtkArrayRename::GetNumberOfEdgeArrays)
    .function("GetEdgeArrayOriginalName", emscripten::optional_override([](vtkArrayRename& self, int arg_0) -> std::string {  return self.GetEdgeArrayOriginalName( arg_0);}))
    .function("GetEdgeArrayNewName", emscripten::optional_override([](vtkArrayRename& self, int arg_0) -> std::string {  return self.GetEdgeArrayNewName( arg_0);}))
    .function("SetEdgeArrayName", emscripten::select_overload<void(vtkArrayRename&, int, const std::string &)>([](vtkArrayRename& self, int arg_0, const std::string & arg_1) -> void { return self.SetEdgeArrayName( arg_0, arg_1.c_str()); }))
    .function("SetEdgeArrayName", emscripten::select_overload<void(vtkArrayRename&, const std::string &, const std::string &)>([](vtkArrayRename& self, const std::string & arg_0, const std::string & arg_1) -> void { return self.SetEdgeArrayName( arg_0.c_str(), arg_1.c_str()); }))
    .function("ClearEdgeMapping", &vtkArrayRename::ClearEdgeMapping)
    .function("GetNumberOfRowArrays", &vtkArrayRename::GetNumberOfRowArrays)
    .function("GetRowArrayOriginalName", emscripten::optional_override([](vtkArrayRename& self, int arg_0) -> std::string {  return self.GetRowArrayOriginalName( arg_0);}))
    .function("GetRowArrayNewName", emscripten::optional_override([](vtkArrayRename& self, int arg_0) -> std::string {  return self.GetRowArrayNewName( arg_0);}))
    .function("SetRowArrayName", emscripten::select_overload<void(vtkArrayRename&, int, const std::string &)>([](vtkArrayRename& self, int arg_0, const std::string & arg_1) -> void { return self.SetRowArrayName( arg_0, arg_1.c_str()); }))
    .function("SetRowArrayName", emscripten::select_overload<void(vtkArrayRename&, const std::string &, const std::string &)>([](vtkArrayRename& self, const std::string & arg_0, const std::string & arg_1) -> void { return self.SetRowArrayName( arg_0.c_str(), arg_1.c_str()); }))
    .function("ClearRowMapping", &vtkArrayRename::ClearRowMapping)
    .function("ClearAll", &vtkArrayRename::ClearAll);
}
