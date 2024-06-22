// JavaScript wrapper for vtkHyperTreeGridOrientedGeometryCursor with embind 
//
// This file was auto-generated using :
/*
node /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/bin/vtkWrapJavaScript.js \
 @/home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkCommonDataModel.js/vtkCommonDataModel.js.Release.args \
 -o \
 /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkCommonDataModel.js/vtkHyperTreeGridOrientedGeometryCursorEmbinding.cxx \
 /home/jmh/github/vtk/Common/DataModel/vtkHyperTreeGridOrientedGeometryCursor.h
*/
#include "vtkEmbindSmartPointerTrait.h"
#include <emscripten.h>
#include <string>
#include "vtkVariant.h"
#include "vtkObjectBase.h"
#include "vtkIndent.h"
#include "vtkHyperTreeGrid.h"
#include "vtkHyperTree.h"
#include "vtkHyperTreeGridOrientedGeometryCursor.h"

template<> void emscripten::internal::raw_destructor<vtkHyperTreeGridOrientedGeometryCursor>(vtkHyperTreeGridOrientedGeometryCursor * ptr){ ptr->Delete(); }
EMSCRIPTEN_BINDINGS(vtkHyperTreeGridOrientedGeometryCursor_class) {
  emscripten::class_<vtkHyperTreeGridOrientedGeometryCursor, emscripten::base<vtkObject>>("vtkHyperTreeGridOrientedGeometryCursor")
    .smart_ptr<vtkSmartPointer<vtkHyperTreeGridOrientedGeometryCursor>>("vtkSmartPointer<vtkHyperTreeGridOrientedGeometryCursor>")
    .constructor(&vtk::MakeVTKSmartPtr<vtkHyperTreeGridOrientedGeometryCursor>)
    .class_function("IsTypeOf", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkHyperTreeGridOrientedGeometryCursor::IsTypeOf( arg_0.c_str());}))
    .function("IsA", emscripten::optional_override([](vtkHyperTreeGridOrientedGeometryCursor& self, const std::string & arg_0) -> int {  return self.IsA( arg_0.c_str());}))
    .class_function("SafeDownCast", &vtkHyperTreeGridOrientedGeometryCursor::SafeDownCast, emscripten::allow_raw_pointers())
    .function("NewInstance", &vtkHyperTreeGridOrientedGeometryCursor::NewInstance, emscripten::allow_raw_pointers())
    .class_function("GetNumberOfGenerationsFromBaseType", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkHyperTreeGridOrientedGeometryCursor::GetNumberOfGenerationsFromBaseType( arg_0.c_str());}))
    .function("GetNumberOfGenerationsFromBase", emscripten::optional_override([](vtkHyperTreeGridOrientedGeometryCursor& self, const std::string & arg_0) -> int {  return self.GetNumberOfGenerationsFromBase( arg_0.c_str());}))
    .function("Clone", &vtkHyperTreeGridOrientedGeometryCursor::Clone, emscripten::allow_raw_pointers())
    .function("Initialize", emscripten::select_overload<void(vtkHyperTreeGridOrientedGeometryCursor&, vtkHyperTreeGrid*, int, bool)>([](vtkHyperTreeGridOrientedGeometryCursor& self, vtkHyperTreeGrid* arg_0, int arg_1, bool arg_2) -> void { return self.Initialize( arg_0, arg_1, arg_2); }), emscripten::allow_raw_pointers())
    .function("Initialize", emscripten::select_overload<void(vtkHyperTreeGridOrientedGeometryCursor&, vtkHyperTreeGrid*, vtkHyperTree*, unsigned int, int, std::uintptr_t)>([](vtkHyperTreeGridOrientedGeometryCursor& self, vtkHyperTreeGrid* arg_0, vtkHyperTree* arg_1, unsigned int arg_2, int arg_3, std::uintptr_t arg_4) -> void { return self.Initialize( arg_0, arg_1, arg_2, arg_3,reinterpret_cast<double*>(arg_4 * sizeof(double))); }), emscripten::allow_raw_pointers())
    .function("Initialize", emscripten::select_overload<void(vtkHyperTreeGridOrientedGeometryCursor&, vtkHyperTreeGridOrientedGeometryCursor*)>([](vtkHyperTreeGridOrientedGeometryCursor& self, vtkHyperTreeGridOrientedGeometryCursor* arg_0) -> void { return self.Initialize( arg_0); }), emscripten::allow_raw_pointers())
    .function("HasTree", &vtkHyperTreeGridOrientedGeometryCursor::HasTree)
    .function("GetTree", &vtkHyperTreeGridOrientedGeometryCursor::GetTree, emscripten::allow_raw_pointers())
    .function("GetVertexId", &vtkHyperTreeGridOrientedGeometryCursor::GetVertexId)
    .function("GetGlobalNodeIndex", &vtkHyperTreeGridOrientedGeometryCursor::GetGlobalNodeIndex)
    .function("GetDimension", &vtkHyperTreeGridOrientedGeometryCursor::GetDimension)
    .function("GetNumberOfChildren", &vtkHyperTreeGridOrientedGeometryCursor::GetNumberOfChildren)
    .function("SetGlobalIndexStart", &vtkHyperTreeGridOrientedGeometryCursor::SetGlobalIndexStart)
    .function("SetGlobalIndexFromLocal", &vtkHyperTreeGridOrientedGeometryCursor::SetGlobalIndexFromLocal)
    .function("GetOrigin", emscripten::optional_override([](vtkHyperTreeGridOrientedGeometryCursor& self) -> std::uintptr_t {  return reinterpret_cast<std::uintptr_t>(self.GetOrigin()) / sizeof(double);}))
    .function("GetSize", emscripten::optional_override([](vtkHyperTreeGridOrientedGeometryCursor& self) -> std::uintptr_t {  return reinterpret_cast<std::uintptr_t>(self.GetSize()) / sizeof(double);}))
    .function("SetMask", &vtkHyperTreeGridOrientedGeometryCursor::SetMask)
    .function("IsMasked", &vtkHyperTreeGridOrientedGeometryCursor::IsMasked)
    .function("IsLeaf", &vtkHyperTreeGridOrientedGeometryCursor::IsLeaf)
    .function("SubdivideLeaf", &vtkHyperTreeGridOrientedGeometryCursor::SubdivideLeaf)
    .function("IsRoot", &vtkHyperTreeGridOrientedGeometryCursor::IsRoot)
    .function("GetLevel", &vtkHyperTreeGridOrientedGeometryCursor::GetLevel)
    .function("ToChild", &vtkHyperTreeGridOrientedGeometryCursor::ToChild);
}
