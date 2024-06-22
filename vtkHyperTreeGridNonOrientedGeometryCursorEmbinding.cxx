// JavaScript wrapper for vtkHyperTreeGridNonOrientedGeometryCursor with embind 
//
// This file was auto-generated using :
/*
node /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/bin/vtkWrapJavaScript.js \
 @/home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkCommonDataModel.js/vtkCommonDataModel.js.Release.args \
 -o \
 /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkCommonDataModel.js/vtkHyperTreeGridNonOrientedGeometryCursorEmbinding.cxx \
 /home/jmh/github/vtk/Common/DataModel/vtkHyperTreeGridNonOrientedGeometryCursor.h
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
#include "vtkHyperTreeGridNonOrientedGeometryCursor.h"

template<> void emscripten::internal::raw_destructor<vtkHyperTreeGridNonOrientedGeometryCursor>(vtkHyperTreeGridNonOrientedGeometryCursor * ptr){ ptr->Delete(); }
EMSCRIPTEN_BINDINGS(vtkHyperTreeGridNonOrientedGeometryCursor_class) {
  emscripten::class_<vtkHyperTreeGridNonOrientedGeometryCursor, emscripten::base<vtkObject>>("vtkHyperTreeGridNonOrientedGeometryCursor")
    .smart_ptr<vtkSmartPointer<vtkHyperTreeGridNonOrientedGeometryCursor>>("vtkSmartPointer<vtkHyperTreeGridNonOrientedGeometryCursor>")
    .constructor(&vtk::MakeVTKSmartPtr<vtkHyperTreeGridNonOrientedGeometryCursor>)
    .class_function("IsTypeOf", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkHyperTreeGridNonOrientedGeometryCursor::IsTypeOf( arg_0.c_str());}))
    .function("IsA", emscripten::optional_override([](vtkHyperTreeGridNonOrientedGeometryCursor& self, const std::string & arg_0) -> int {  return self.IsA( arg_0.c_str());}))
    .class_function("SafeDownCast", &vtkHyperTreeGridNonOrientedGeometryCursor::SafeDownCast, emscripten::allow_raw_pointers())
    .function("NewInstance", &vtkHyperTreeGridNonOrientedGeometryCursor::NewInstance, emscripten::allow_raw_pointers())
    .class_function("GetNumberOfGenerationsFromBaseType", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkHyperTreeGridNonOrientedGeometryCursor::GetNumberOfGenerationsFromBaseType( arg_0.c_str());}))
    .function("GetNumberOfGenerationsFromBase", emscripten::optional_override([](vtkHyperTreeGridNonOrientedGeometryCursor& self, const std::string & arg_0) -> int {  return self.GetNumberOfGenerationsFromBase( arg_0.c_str());}))
    .function("Clone", &vtkHyperTreeGridNonOrientedGeometryCursor::Clone, emscripten::allow_raw_pointers())
    .function("Initialize", emscripten::select_overload<void(vtkHyperTreeGridNonOrientedGeometryCursor&, vtkHyperTreeGrid*, int, bool)>([](vtkHyperTreeGridNonOrientedGeometryCursor& self, vtkHyperTreeGrid* arg_0, int arg_1, bool arg_2) -> void { return self.Initialize( arg_0, arg_1, arg_2); }), emscripten::allow_raw_pointers())
    .function("Initialize", emscripten::select_overload<void(vtkHyperTreeGridNonOrientedGeometryCursor&, vtkHyperTreeGrid*, vtkHyperTree*, unsigned int, int, std::uintptr_t)>([](vtkHyperTreeGridNonOrientedGeometryCursor& self, vtkHyperTreeGrid* arg_0, vtkHyperTree* arg_1, unsigned int arg_2, int arg_3, std::uintptr_t arg_4) -> void { return self.Initialize( arg_0, arg_1, arg_2, arg_3,reinterpret_cast<double*>(arg_4 * sizeof(double))); }), emscripten::allow_raw_pointers())
    .function("Initialize", emscripten::select_overload<void(vtkHyperTreeGridNonOrientedGeometryCursor&, vtkHyperTreeGridNonOrientedGeometryCursor*)>([](vtkHyperTreeGridNonOrientedGeometryCursor& self, vtkHyperTreeGridNonOrientedGeometryCursor* arg_0) -> void { return self.Initialize( arg_0); }), emscripten::allow_raw_pointers())
    .function("HasTree", &vtkHyperTreeGridNonOrientedGeometryCursor::HasTree)
    .function("GetTree", &vtkHyperTreeGridNonOrientedGeometryCursor::GetTree, emscripten::allow_raw_pointers())
    .function("GetVertexId", &vtkHyperTreeGridNonOrientedGeometryCursor::GetVertexId)
    .function("GetGlobalNodeIndex", &vtkHyperTreeGridNonOrientedGeometryCursor::GetGlobalNodeIndex)
    .function("GetDimension", &vtkHyperTreeGridNonOrientedGeometryCursor::GetDimension)
    .function("GetNumberOfChildren", &vtkHyperTreeGridNonOrientedGeometryCursor::GetNumberOfChildren)
    .function("SetGlobalIndexStart", &vtkHyperTreeGridNonOrientedGeometryCursor::SetGlobalIndexStart)
    .function("SetGlobalIndexFromLocal", &vtkHyperTreeGridNonOrientedGeometryCursor::SetGlobalIndexFromLocal)
    .function("GetOrigin", emscripten::optional_override([](vtkHyperTreeGridNonOrientedGeometryCursor& self) -> std::uintptr_t {  return reinterpret_cast<std::uintptr_t>(self.GetOrigin()) / sizeof(double);}))
    .function("GetSize", emscripten::optional_override([](vtkHyperTreeGridNonOrientedGeometryCursor& self) -> std::uintptr_t {  return reinterpret_cast<std::uintptr_t>(self.GetSize()) / sizeof(double);}))
    .function("SetMask", &vtkHyperTreeGridNonOrientedGeometryCursor::SetMask)
    .function("IsMasked", &vtkHyperTreeGridNonOrientedGeometryCursor::IsMasked)
    .function("IsLeaf", &vtkHyperTreeGridNonOrientedGeometryCursor::IsLeaf)
    .function("SubdivideLeaf", &vtkHyperTreeGridNonOrientedGeometryCursor::SubdivideLeaf)
    .function("IsRoot", &vtkHyperTreeGridNonOrientedGeometryCursor::IsRoot)
    .function("GetLevel", &vtkHyperTreeGridNonOrientedGeometryCursor::GetLevel)
    .function("ToChild", &vtkHyperTreeGridNonOrientedGeometryCursor::ToChild)
    .function("ToRoot", &vtkHyperTreeGridNonOrientedGeometryCursor::ToRoot)
    .function("ToParent", &vtkHyperTreeGridNonOrientedGeometryCursor::ToParent)
    .function("GetHyperTreeGridOrientedGeometryCursor", &vtkHyperTreeGridNonOrientedGeometryCursor::GetHyperTreeGridOrientedGeometryCursor, emscripten::allow_raw_pointers());
}
