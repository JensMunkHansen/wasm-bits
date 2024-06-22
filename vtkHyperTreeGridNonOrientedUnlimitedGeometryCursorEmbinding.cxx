// JavaScript wrapper for vtkHyperTreeGridNonOrientedUnlimitedGeometryCursor with embind 
//
// This file was auto-generated using :
/*
node /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/bin/vtkWrapJavaScript.js \
 @/home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkCommonDataModel.js/vtkCommonDataModel.js.Release.args \
 -o \
 /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkCommonDataModel.js/vtkHyperTreeGridNonOrientedUnlimitedGeometryCursorEmbinding.cxx \
 /home/jmh/github/vtk/Common/DataModel/vtkHyperTreeGridNonOrientedUnlimitedGeometryCursor.h
*/
#include "vtkEmbindSmartPointerTrait.h"
#include <emscripten.h>
#include <string>
#include "vtkVariant.h"
#include "vtkObjectBase.h"
#include "vtkIndent.h"
#include "vtkHyperTreeGrid.h"
#include "vtkHyperTree.h"
#include "vtkSmartPointer.h"
#include "vtkHyperTreeGridNonOrientedUnlimitedGeometryCursor.h"

template<> void emscripten::internal::raw_destructor<vtkHyperTreeGridNonOrientedUnlimitedGeometryCursor>(vtkHyperTreeGridNonOrientedUnlimitedGeometryCursor * ptr){ ptr->Delete(); }
EMSCRIPTEN_BINDINGS(vtkHyperTreeGridNonOrientedUnlimitedGeometryCursor_class) {
  emscripten::class_<vtkHyperTreeGridNonOrientedUnlimitedGeometryCursor, emscripten::base<vtkObject>>("vtkHyperTreeGridNonOrientedUnlimitedGeometryCursor")
    .smart_ptr<vtkSmartPointer<vtkHyperTreeGridNonOrientedUnlimitedGeometryCursor>>("vtkSmartPointer<vtkHyperTreeGridNonOrientedUnlimitedGeometryCursor>")
    .constructor(&vtk::MakeVTKSmartPtr<vtkHyperTreeGridNonOrientedUnlimitedGeometryCursor>)
    .class_function("IsTypeOf", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkHyperTreeGridNonOrientedUnlimitedGeometryCursor::IsTypeOf( arg_0.c_str());}))
    .function("IsA", emscripten::optional_override([](vtkHyperTreeGridNonOrientedUnlimitedGeometryCursor& self, const std::string & arg_0) -> int {  return self.IsA( arg_0.c_str());}))
    .class_function("SafeDownCast", &vtkHyperTreeGridNonOrientedUnlimitedGeometryCursor::SafeDownCast, emscripten::allow_raw_pointers())
    .function("NewInstance", &vtkHyperTreeGridNonOrientedUnlimitedGeometryCursor::NewInstance, emscripten::allow_raw_pointers())
    .class_function("GetNumberOfGenerationsFromBaseType", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkHyperTreeGridNonOrientedUnlimitedGeometryCursor::GetNumberOfGenerationsFromBaseType( arg_0.c_str());}))
    .function("GetNumberOfGenerationsFromBase", emscripten::optional_override([](vtkHyperTreeGridNonOrientedUnlimitedGeometryCursor& self, const std::string & arg_0) -> int {  return self.GetNumberOfGenerationsFromBase( arg_0.c_str());}))
    .function("Clone", &vtkHyperTreeGridNonOrientedUnlimitedGeometryCursor::Clone, emscripten::allow_raw_pointers())
    .function("Initialize", emscripten::select_overload<void(vtkHyperTreeGridNonOrientedUnlimitedGeometryCursor&, vtkHyperTreeGrid*, int, bool)>([](vtkHyperTreeGridNonOrientedUnlimitedGeometryCursor& self, vtkHyperTreeGrid* arg_0, int arg_1, bool arg_2) -> void { return self.Initialize( arg_0, arg_1, arg_2); }), emscripten::allow_raw_pointers())
    .function("Initialize", emscripten::select_overload<void(vtkHyperTreeGridNonOrientedUnlimitedGeometryCursor&, vtkHyperTreeGrid*, vtkHyperTree*, unsigned int, int, std::uintptr_t)>([](vtkHyperTreeGridNonOrientedUnlimitedGeometryCursor& self, vtkHyperTreeGrid* arg_0, vtkHyperTree* arg_1, unsigned int arg_2, int arg_3, std::uintptr_t arg_4) -> void { return self.Initialize( arg_0, arg_1, arg_2, arg_3,reinterpret_cast<double*>(arg_4 * sizeof(double))); }), emscripten::allow_raw_pointers())
    .function("Initialize", emscripten::select_overload<void(vtkHyperTreeGridNonOrientedUnlimitedGeometryCursor&, vtkHyperTreeGridNonOrientedUnlimitedGeometryCursor*)>([](vtkHyperTreeGridNonOrientedUnlimitedGeometryCursor& self, vtkHyperTreeGridNonOrientedUnlimitedGeometryCursor* arg_0) -> void { return self.Initialize( arg_0); }), emscripten::allow_raw_pointers())
    .function("HasTree", &vtkHyperTreeGridNonOrientedUnlimitedGeometryCursor::HasTree)
    .function("GetTree", &vtkHyperTreeGridNonOrientedUnlimitedGeometryCursor::GetTree, emscripten::allow_raw_pointers())
    .function("GetVertexId", &vtkHyperTreeGridNonOrientedUnlimitedGeometryCursor::GetVertexId)
    .function("GetGlobalNodeIndex", &vtkHyperTreeGridNonOrientedUnlimitedGeometryCursor::GetGlobalNodeIndex)
    .function("GetDimension", &vtkHyperTreeGridNonOrientedUnlimitedGeometryCursor::GetDimension)
    .function("GetNumberOfChildren", &vtkHyperTreeGridNonOrientedUnlimitedGeometryCursor::GetNumberOfChildren)
    .function("SetGlobalIndexStart", &vtkHyperTreeGridNonOrientedUnlimitedGeometryCursor::SetGlobalIndexStart)
    .function("SetGlobalIndexFromLocal", &vtkHyperTreeGridNonOrientedUnlimitedGeometryCursor::SetGlobalIndexFromLocal)
    .function("GetOrigin", emscripten::optional_override([](vtkHyperTreeGridNonOrientedUnlimitedGeometryCursor& self) -> std::uintptr_t {  return reinterpret_cast<std::uintptr_t>(self.GetOrigin()) / sizeof(double);}))
    .function("GetSize", emscripten::optional_override([](vtkHyperTreeGridNonOrientedUnlimitedGeometryCursor& self) -> std::uintptr_t {  return reinterpret_cast<std::uintptr_t>(self.GetSize()) / sizeof(double);}))
    .function("SetMask", &vtkHyperTreeGridNonOrientedUnlimitedGeometryCursor::SetMask)
    .function("IsMasked", &vtkHyperTreeGridNonOrientedUnlimitedGeometryCursor::IsMasked)
    .function("IsLeaf", &vtkHyperTreeGridNonOrientedUnlimitedGeometryCursor::IsLeaf)
    .function("IsRealLeaf", &vtkHyperTreeGridNonOrientedUnlimitedGeometryCursor::IsRealLeaf)
    .function("IsVirtualLeaf", &vtkHyperTreeGridNonOrientedUnlimitedGeometryCursor::IsVirtualLeaf)
    .function("IsRoot", &vtkHyperTreeGridNonOrientedUnlimitedGeometryCursor::IsRoot)
    .function("GetLevel", &vtkHyperTreeGridNonOrientedUnlimitedGeometryCursor::GetLevel)
    .function("GetLastRealLevel", &vtkHyperTreeGridNonOrientedUnlimitedGeometryCursor::GetLastRealLevel)
    .function("ToChild", &vtkHyperTreeGridNonOrientedUnlimitedGeometryCursor::ToChild)
    .function("ToRoot", &vtkHyperTreeGridNonOrientedUnlimitedGeometryCursor::ToRoot)
    .function("ToParent", &vtkHyperTreeGridNonOrientedUnlimitedGeometryCursor::ToParent)
    .function("GetHyperTreeGridOrientedGeometryCursor", &vtkHyperTreeGridNonOrientedUnlimitedGeometryCursor::GetHyperTreeGridOrientedGeometryCursor, emscripten::allow_raw_pointers())
    .function("GetHyperTreeGridNonOrientedGeometryCursor", &vtkHyperTreeGridNonOrientedUnlimitedGeometryCursor::GetHyperTreeGridNonOrientedGeometryCursor, emscripten::allow_raw_pointers());
}
