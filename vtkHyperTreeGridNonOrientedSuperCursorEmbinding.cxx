// JavaScript wrapper for vtkHyperTreeGridNonOrientedSuperCursor with embind 
//
// This file was auto-generated using :
/*
node /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/bin/vtkWrapJavaScript.js \
 @/home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkCommonDataModel.js/vtkCommonDataModel.js.Release.args \
 -o \
 /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkCommonDataModel.js/vtkHyperTreeGridNonOrientedSuperCursorEmbinding.cxx \
 /home/jmh/github/vtk/Common/DataModel/vtkHyperTreeGridNonOrientedSuperCursor.h
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
#include "vtkHyperTreeGridNonOrientedSuperCursor.h"

template<> void emscripten::internal::raw_destructor<vtkHyperTreeGridNonOrientedSuperCursor>(vtkHyperTreeGridNonOrientedSuperCursor * ptr){ ptr->Delete(); }
EMSCRIPTEN_BINDINGS(vtkHyperTreeGridNonOrientedSuperCursor_class) {
  emscripten::class_<vtkHyperTreeGridNonOrientedSuperCursor, emscripten::base<vtkObject>>("vtkHyperTreeGridNonOrientedSuperCursor")
    .class_function("IsTypeOf", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkHyperTreeGridNonOrientedSuperCursor::IsTypeOf( arg_0.c_str());}))
    .function("IsA", emscripten::optional_override([](vtkHyperTreeGridNonOrientedSuperCursor& self, const std::string & arg_0) -> int {  return self.IsA( arg_0.c_str());}))
    .class_function("SafeDownCast", &vtkHyperTreeGridNonOrientedSuperCursor::SafeDownCast, emscripten::allow_raw_pointers())
    .function("NewInstance", &vtkHyperTreeGridNonOrientedSuperCursor::NewInstance, emscripten::allow_raw_pointers())
    .class_function("GetNumberOfGenerationsFromBaseType", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkHyperTreeGridNonOrientedSuperCursor::GetNumberOfGenerationsFromBaseType( arg_0.c_str());}))
    .function("GetNumberOfGenerationsFromBase", emscripten::optional_override([](vtkHyperTreeGridNonOrientedSuperCursor& self, const std::string & arg_0) -> int {  return self.GetNumberOfGenerationsFromBase( arg_0.c_str());}))
    .function("Clone", &vtkHyperTreeGridNonOrientedSuperCursor::Clone, emscripten::allow_raw_pointers())
    .function("GetGrid", &vtkHyperTreeGridNonOrientedSuperCursor::GetGrid, emscripten::allow_raw_pointers())
    .function("HasTree", emscripten::select_overload<bool(vtkHyperTreeGridNonOrientedSuperCursor&)>([](vtkHyperTreeGridNonOrientedSuperCursor& self) -> bool { return self.HasTree(); }))
    .function("HasTree", emscripten::select_overload<bool(vtkHyperTreeGridNonOrientedSuperCursor&, unsigned int)>([](vtkHyperTreeGridNonOrientedSuperCursor& self, unsigned int arg_0) -> bool { return self.HasTree( arg_0); }))
    .function("GetTree", emscripten::select_overload<vtkHyperTree*(vtkHyperTreeGridNonOrientedSuperCursor&)>([](vtkHyperTreeGridNonOrientedSuperCursor& self) -> vtkHyperTree* { return self.GetTree(); }), emscripten::allow_raw_pointers())
    .function("GetTree", emscripten::select_overload<vtkHyperTree*(vtkHyperTreeGridNonOrientedSuperCursor&, unsigned int)>([](vtkHyperTreeGridNonOrientedSuperCursor& self, unsigned int arg_0) -> vtkHyperTree* { return self.GetTree( arg_0); }), emscripten::allow_raw_pointers())
    .function("GetVertexId", emscripten::select_overload<int(vtkHyperTreeGridNonOrientedSuperCursor&)>([](vtkHyperTreeGridNonOrientedSuperCursor& self) -> int { return self.GetVertexId(); }))
    .function("GetVertexId", emscripten::select_overload<int(vtkHyperTreeGridNonOrientedSuperCursor&, unsigned int)>([](vtkHyperTreeGridNonOrientedSuperCursor& self, unsigned int arg_0) -> int { return self.GetVertexId( arg_0); }))
    .function("GetGlobalNodeIndex", emscripten::select_overload<int(vtkHyperTreeGridNonOrientedSuperCursor&)>([](vtkHyperTreeGridNonOrientedSuperCursor& self) -> int { return self.GetGlobalNodeIndex(); }))
    .function("GetGlobalNodeIndex", emscripten::select_overload<int(vtkHyperTreeGridNonOrientedSuperCursor&, unsigned int)>([](vtkHyperTreeGridNonOrientedSuperCursor& self, unsigned int arg_0) -> int { return self.GetGlobalNodeIndex( arg_0); }))
    .function("GetDimension", &vtkHyperTreeGridNonOrientedSuperCursor::GetDimension)
    .function("GetNumberOfChildren", &vtkHyperTreeGridNonOrientedSuperCursor::GetNumberOfChildren)
    .function("SetGlobalIndexStart", &vtkHyperTreeGridNonOrientedSuperCursor::SetGlobalIndexStart)
    .function("SetGlobalIndexFromLocal", &vtkHyperTreeGridNonOrientedSuperCursor::SetGlobalIndexFromLocal)
    .function("GetOrigin", emscripten::select_overload<std::uintptr_t(vtkHyperTreeGridNonOrientedSuperCursor&)>([](vtkHyperTreeGridNonOrientedSuperCursor& self) -> std::uintptr_t { return reinterpret_cast<std::uintptr_t>(self.GetOrigin()); }))
    .function("GetOrigin", emscripten::select_overload<std::uintptr_t(vtkHyperTreeGridNonOrientedSuperCursor&, unsigned int)>([](vtkHyperTreeGridNonOrientedSuperCursor& self, unsigned int arg_0) -> std::uintptr_t { return reinterpret_cast<std::uintptr_t>(self.GetOrigin( arg_0)); }))
    .function("GetSize", emscripten::optional_override([](vtkHyperTreeGridNonOrientedSuperCursor& self) -> std::uintptr_t {  return reinterpret_cast<std::uintptr_t>(self.GetSize()) / sizeof(double);}))
    .function("SetMask", emscripten::select_overload<void(vtkHyperTreeGridNonOrientedSuperCursor&, bool)>([](vtkHyperTreeGridNonOrientedSuperCursor& self, bool arg_0) -> void { return self.SetMask( arg_0); }))
    .function("SetMask", emscripten::select_overload<void(vtkHyperTreeGridNonOrientedSuperCursor&, unsigned int, bool)>([](vtkHyperTreeGridNonOrientedSuperCursor& self, unsigned int arg_0, bool arg_1) -> void { return self.SetMask( arg_0, arg_1); }))
    .function("IsMasked", emscripten::select_overload<bool(vtkHyperTreeGridNonOrientedSuperCursor&)>([](vtkHyperTreeGridNonOrientedSuperCursor& self) -> bool { return self.IsMasked(); }))
    .function("IsMasked", emscripten::select_overload<bool(vtkHyperTreeGridNonOrientedSuperCursor&, unsigned int)>([](vtkHyperTreeGridNonOrientedSuperCursor& self, unsigned int arg_0) -> bool { return self.IsMasked( arg_0); }))
    .function("IsLeaf", emscripten::select_overload<bool(vtkHyperTreeGridNonOrientedSuperCursor&)>([](vtkHyperTreeGridNonOrientedSuperCursor& self) -> bool { return self.IsLeaf(); }))
    .function("IsLeaf", emscripten::select_overload<bool(vtkHyperTreeGridNonOrientedSuperCursor&, unsigned int)>([](vtkHyperTreeGridNonOrientedSuperCursor& self, unsigned int arg_0) -> bool { return self.IsLeaf( arg_0); }))
    .function("SubdivideLeaf", &vtkHyperTreeGridNonOrientedSuperCursor::SubdivideLeaf)
    .function("IsRoot", &vtkHyperTreeGridNonOrientedSuperCursor::IsRoot)
    .function("GetLevel", emscripten::select_overload<unsigned int(vtkHyperTreeGridNonOrientedSuperCursor&)>([](vtkHyperTreeGridNonOrientedSuperCursor& self) -> unsigned int { return self.GetLevel(); }))
    .function("GetLevel", emscripten::select_overload<unsigned int(vtkHyperTreeGridNonOrientedSuperCursor&, unsigned int)>([](vtkHyperTreeGridNonOrientedSuperCursor& self, unsigned int arg_0) -> unsigned int { return self.GetLevel( arg_0); }))
    .function("ToChild", &vtkHyperTreeGridNonOrientedSuperCursor::ToChild)
    .function("ToRoot", &vtkHyperTreeGridNonOrientedSuperCursor::ToRoot)
    .function("ToParent", &vtkHyperTreeGridNonOrientedSuperCursor::ToParent)
    .function("GetNumberOfCursors", &vtkHyperTreeGridNonOrientedSuperCursor::GetNumberOfCursors)
    .function("GetIndiceCentralCursor", &vtkHyperTreeGridNonOrientedSuperCursor::GetIndiceCentralCursor)
    .function("GetOrientedGeometryCursor", &vtkHyperTreeGridNonOrientedSuperCursor::GetOrientedGeometryCursor)
    .function("GetNonOrientedGeometryCursor", &vtkHyperTreeGridNonOrientedSuperCursor::GetNonOrientedGeometryCursor);
}
