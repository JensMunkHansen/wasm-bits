// JavaScript wrapper for vtkHyperTreeGridNonOrientedUnlimitedSuperCursor with embind 
//
// This file was auto-generated using :
/*
node /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/bin/vtkWrapJavaScript.js \
 @/home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkCommonDataModel.js/vtkCommonDataModel.js.Release.args \
 -o \
 /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkCommonDataModel.js/vtkHyperTreeGridNonOrientedUnlimitedSuperCursorEmbinding.cxx \
 /home/jmh/github/vtk/Common/DataModel/vtkHyperTreeGridNonOrientedUnlimitedSuperCursor.h
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
#include "vtkHyperTreeGridNonOrientedUnlimitedSuperCursor.h"

template<> void emscripten::internal::raw_destructor<vtkHyperTreeGridNonOrientedUnlimitedSuperCursor>(vtkHyperTreeGridNonOrientedUnlimitedSuperCursor * ptr){ ptr->Delete(); }
EMSCRIPTEN_BINDINGS(vtkHyperTreeGridNonOrientedUnlimitedSuperCursor_class) {
  emscripten::class_<vtkHyperTreeGridNonOrientedUnlimitedSuperCursor, emscripten::base<vtkObject>>("vtkHyperTreeGridNonOrientedUnlimitedSuperCursor")
    .class_function("IsTypeOf", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkHyperTreeGridNonOrientedUnlimitedSuperCursor::IsTypeOf( arg_0.c_str());}))
    .function("IsA", emscripten::optional_override([](vtkHyperTreeGridNonOrientedUnlimitedSuperCursor& self, const std::string & arg_0) -> int {  return self.IsA( arg_0.c_str());}))
    .class_function("SafeDownCast", &vtkHyperTreeGridNonOrientedUnlimitedSuperCursor::SafeDownCast, emscripten::allow_raw_pointers())
    .function("NewInstance", &vtkHyperTreeGridNonOrientedUnlimitedSuperCursor::NewInstance, emscripten::allow_raw_pointers())
    .class_function("GetNumberOfGenerationsFromBaseType", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkHyperTreeGridNonOrientedUnlimitedSuperCursor::GetNumberOfGenerationsFromBaseType( arg_0.c_str());}))
    .function("GetNumberOfGenerationsFromBase", emscripten::optional_override([](vtkHyperTreeGridNonOrientedUnlimitedSuperCursor& self, const std::string & arg_0) -> int {  return self.GetNumberOfGenerationsFromBase( arg_0.c_str());}))
    .function("Clone", &vtkHyperTreeGridNonOrientedUnlimitedSuperCursor::Clone, emscripten::allow_raw_pointers())
    .function("GetGrid", &vtkHyperTreeGridNonOrientedUnlimitedSuperCursor::GetGrid, emscripten::allow_raw_pointers())
    .function("HasTree", emscripten::select_overload<bool(vtkHyperTreeGridNonOrientedUnlimitedSuperCursor&)>([](vtkHyperTreeGridNonOrientedUnlimitedSuperCursor& self) -> bool { return self.HasTree(); }))
    .function("HasTree", emscripten::select_overload<bool(vtkHyperTreeGridNonOrientedUnlimitedSuperCursor&, unsigned int)>([](vtkHyperTreeGridNonOrientedUnlimitedSuperCursor& self, unsigned int arg_0) -> bool { return self.HasTree( arg_0); }))
    .function("GetTree", emscripten::select_overload<vtkHyperTree*(vtkHyperTreeGridNonOrientedUnlimitedSuperCursor&)>([](vtkHyperTreeGridNonOrientedUnlimitedSuperCursor& self) -> vtkHyperTree* { return self.GetTree(); }), emscripten::allow_raw_pointers())
    .function("GetTree", emscripten::select_overload<vtkHyperTree*(vtkHyperTreeGridNonOrientedUnlimitedSuperCursor&, unsigned int)>([](vtkHyperTreeGridNonOrientedUnlimitedSuperCursor& self, unsigned int arg_0) -> vtkHyperTree* { return self.GetTree( arg_0); }), emscripten::allow_raw_pointers())
    .function("GetVertexId", emscripten::select_overload<int(vtkHyperTreeGridNonOrientedUnlimitedSuperCursor&)>([](vtkHyperTreeGridNonOrientedUnlimitedSuperCursor& self) -> int { return self.GetVertexId(); }))
    .function("GetVertexId", emscripten::select_overload<int(vtkHyperTreeGridNonOrientedUnlimitedSuperCursor&, unsigned int)>([](vtkHyperTreeGridNonOrientedUnlimitedSuperCursor& self, unsigned int arg_0) -> int { return self.GetVertexId( arg_0); }))
    .function("GetGlobalNodeIndex", emscripten::select_overload<int(vtkHyperTreeGridNonOrientedUnlimitedSuperCursor&)>([](vtkHyperTreeGridNonOrientedUnlimitedSuperCursor& self) -> int { return self.GetGlobalNodeIndex(); }))
    .function("GetGlobalNodeIndex", emscripten::select_overload<int(vtkHyperTreeGridNonOrientedUnlimitedSuperCursor&, unsigned int)>([](vtkHyperTreeGridNonOrientedUnlimitedSuperCursor& self, unsigned int arg_0) -> int { return self.GetGlobalNodeIndex( arg_0); }))
    .function("GetDimension", &vtkHyperTreeGridNonOrientedUnlimitedSuperCursor::GetDimension)
    .function("GetNumberOfChildren", &vtkHyperTreeGridNonOrientedUnlimitedSuperCursor::GetNumberOfChildren)
    .function("SetGlobalIndexStart", &vtkHyperTreeGridNonOrientedUnlimitedSuperCursor::SetGlobalIndexStart)
    .function("SetGlobalIndexFromLocal", &vtkHyperTreeGridNonOrientedUnlimitedSuperCursor::SetGlobalIndexFromLocal)
    .function("GetOrigin", emscripten::optional_override([](vtkHyperTreeGridNonOrientedUnlimitedSuperCursor& self) -> std::uintptr_t {  return reinterpret_cast<std::uintptr_t>(self.GetOrigin()) / sizeof(double);}))
    .function("GetSize", emscripten::optional_override([](vtkHyperTreeGridNonOrientedUnlimitedSuperCursor& self) -> std::uintptr_t {  return reinterpret_cast<std::uintptr_t>(self.GetSize()) / sizeof(double);}))
    .function("SetMask", emscripten::select_overload<void(vtkHyperTreeGridNonOrientedUnlimitedSuperCursor&, bool)>([](vtkHyperTreeGridNonOrientedUnlimitedSuperCursor& self, bool arg_0) -> void { return self.SetMask( arg_0); }))
    .function("SetMask", emscripten::select_overload<void(vtkHyperTreeGridNonOrientedUnlimitedSuperCursor&, unsigned int, bool)>([](vtkHyperTreeGridNonOrientedUnlimitedSuperCursor& self, unsigned int arg_0, bool arg_1) -> void { return self.SetMask( arg_0, arg_1); }))
    .function("IsMasked", emscripten::select_overload<bool(vtkHyperTreeGridNonOrientedUnlimitedSuperCursor&)>([](vtkHyperTreeGridNonOrientedUnlimitedSuperCursor& self) -> bool { return self.IsMasked(); }))
    .function("IsMasked", emscripten::select_overload<bool(vtkHyperTreeGridNonOrientedUnlimitedSuperCursor&, unsigned int)>([](vtkHyperTreeGridNonOrientedUnlimitedSuperCursor& self, unsigned int arg_0) -> bool { return self.IsMasked( arg_0); }))
    .function("IsLeaf", emscripten::select_overload<bool(vtkHyperTreeGridNonOrientedUnlimitedSuperCursor&)>([](vtkHyperTreeGridNonOrientedUnlimitedSuperCursor& self) -> bool { return self.IsLeaf(); }))
    .function("IsLeaf", emscripten::select_overload<bool(vtkHyperTreeGridNonOrientedUnlimitedSuperCursor&, unsigned int)>([](vtkHyperTreeGridNonOrientedUnlimitedSuperCursor& self, unsigned int arg_0) -> bool { return self.IsLeaf( arg_0); }))
    .function("IsRealLeaf", emscripten::select_overload<bool(vtkHyperTreeGridNonOrientedUnlimitedSuperCursor&)>([](vtkHyperTreeGridNonOrientedUnlimitedSuperCursor& self) -> bool { return self.IsRealLeaf(); }))
    .function("IsRealLeaf", emscripten::select_overload<bool(vtkHyperTreeGridNonOrientedUnlimitedSuperCursor&, unsigned int)>([](vtkHyperTreeGridNonOrientedUnlimitedSuperCursor& self, unsigned int arg_0) -> bool { return self.IsRealLeaf( arg_0); }))
    .function("IsVirtualLeaf", emscripten::select_overload<bool(vtkHyperTreeGridNonOrientedUnlimitedSuperCursor&)>([](vtkHyperTreeGridNonOrientedUnlimitedSuperCursor& self) -> bool { return self.IsVirtualLeaf(); }))
    .function("IsVirtualLeaf", emscripten::select_overload<bool(vtkHyperTreeGridNonOrientedUnlimitedSuperCursor&, unsigned int)>([](vtkHyperTreeGridNonOrientedUnlimitedSuperCursor& self, unsigned int arg_0) -> bool { return self.IsVirtualLeaf( arg_0); }))
    .function("GetExtensivePropertyRatio", emscripten::select_overload<double(vtkHyperTreeGridNonOrientedUnlimitedSuperCursor&)>([](vtkHyperTreeGridNonOrientedUnlimitedSuperCursor& self) -> double { return self.GetExtensivePropertyRatio(); }))
    .function("GetExtensivePropertyRatio", emscripten::select_overload<double(vtkHyperTreeGridNonOrientedUnlimitedSuperCursor&, int)>([](vtkHyperTreeGridNonOrientedUnlimitedSuperCursor& self, int arg_0) -> double { return self.GetExtensivePropertyRatio( arg_0); }))
    .function("IsRoot", &vtkHyperTreeGridNonOrientedUnlimitedSuperCursor::IsRoot)
    .function("GetLevel", emscripten::select_overload<unsigned int(vtkHyperTreeGridNonOrientedUnlimitedSuperCursor&)>([](vtkHyperTreeGridNonOrientedUnlimitedSuperCursor& self) -> unsigned int { return self.GetLevel(); }))
    .function("GetLevel", emscripten::select_overload<unsigned int(vtkHyperTreeGridNonOrientedUnlimitedSuperCursor&, unsigned int)>([](vtkHyperTreeGridNonOrientedUnlimitedSuperCursor& self, unsigned int arg_0) -> unsigned int { return self.GetLevel( arg_0); }))
    .function("GetLastRealLevel", emscripten::select_overload<unsigned int(vtkHyperTreeGridNonOrientedUnlimitedSuperCursor&)>([](vtkHyperTreeGridNonOrientedUnlimitedSuperCursor& self) -> unsigned int { return self.GetLastRealLevel(); }))
    .function("GetLastRealLevel", emscripten::select_overload<unsigned int(vtkHyperTreeGridNonOrientedUnlimitedSuperCursor&, unsigned int)>([](vtkHyperTreeGridNonOrientedUnlimitedSuperCursor& self, unsigned int arg_0) -> unsigned int { return self.GetLastRealLevel( arg_0); }))
    .function("ToChild", &vtkHyperTreeGridNonOrientedUnlimitedSuperCursor::ToChild)
    .function("ToRoot", &vtkHyperTreeGridNonOrientedUnlimitedSuperCursor::ToRoot)
    .function("ToParent", &vtkHyperTreeGridNonOrientedUnlimitedSuperCursor::ToParent)
    .function("GetNumberOfCursors", &vtkHyperTreeGridNonOrientedUnlimitedSuperCursor::GetNumberOfCursors)
    .function("GetOrientedGeometryCursor", &vtkHyperTreeGridNonOrientedUnlimitedSuperCursor::GetOrientedGeometryCursor)
    .function("GetNonOrientedGeometryCursor", &vtkHyperTreeGridNonOrientedUnlimitedSuperCursor::GetNonOrientedGeometryCursor);
}
