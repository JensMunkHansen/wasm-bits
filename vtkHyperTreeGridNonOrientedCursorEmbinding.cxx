// JavaScript wrapper for vtkHyperTreeGridNonOrientedCursor with embind 
//
// This file was auto-generated using :
/*
node /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/bin/vtkWrapJavaScript.js \
 @/home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkCommonDataModel.js/vtkCommonDataModel.js.Release.args \
 -o \
 /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkCommonDataModel.js/vtkHyperTreeGridNonOrientedCursorEmbinding.cxx \
 /home/jmh/github/vtk/Common/DataModel/vtkHyperTreeGridNonOrientedCursor.h
*/
#include "vtkEmbindSmartPointerTrait.h"
#include <emscripten.h>
#include <string>
#include "vtkVariant.h"
#include "vtkObjectBase.h"
#include "vtkIndent.h"
#include "vtkHyperTreeGrid.h"
#include "vtkHyperTree.h"
#include "vtkHyperTreeGridNonOrientedCursor.h"

template<> void emscripten::internal::raw_destructor<vtkHyperTreeGridNonOrientedCursor>(vtkHyperTreeGridNonOrientedCursor * ptr){ ptr->Delete(); }
EMSCRIPTEN_BINDINGS(vtkHyperTreeGridNonOrientedCursor_class) {
  emscripten::class_<vtkHyperTreeGridNonOrientedCursor, emscripten::base<vtkObject>>("vtkHyperTreeGridNonOrientedCursor")
    .smart_ptr<vtkSmartPointer<vtkHyperTreeGridNonOrientedCursor>>("vtkSmartPointer<vtkHyperTreeGridNonOrientedCursor>")
    .constructor(&vtk::MakeAvtkSmartPointer<vtkHyperTreeGridNonOrientedCursor>)
    .class_function("IsTypeOf", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkHyperTreeGridNonOrientedCursor::IsTypeOf( arg_0.c_str());}))
    .function("IsA", emscripten::optional_override([](vtkHyperTreeGridNonOrientedCursor& self, const std::string & arg_0) -> int {  return self.IsA( arg_0.c_str());}))
    .class_function("SafeDownCast", &vtkHyperTreeGridNonOrientedCursor::SafeDownCast, emscripten::allow_raw_pointers())
    .function("NewInstance", &vtkHyperTreeGridNonOrientedCursor::NewInstance, emscripten::allow_raw_pointers())
    .class_function("GetNumberOfGenerationsFromBaseType", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkHyperTreeGridNonOrientedCursor::GetNumberOfGenerationsFromBaseType( arg_0.c_str());}))
    .function("GetNumberOfGenerationsFromBase", emscripten::optional_override([](vtkHyperTreeGridNonOrientedCursor& self, const std::string & arg_0) -> int {  return self.GetNumberOfGenerationsFromBase( arg_0.c_str());}))
    .function("Clone", &vtkHyperTreeGridNonOrientedCursor::Clone, emscripten::allow_raw_pointers())
    .function("Initialize", emscripten::select_overload<void(vtkHyperTreeGridNonOrientedCursor&, vtkHyperTreeGrid*, int, bool)>([](vtkHyperTreeGridNonOrientedCursor& self, vtkHyperTreeGrid* arg_0, int arg_1, bool arg_2) -> void { return self.Initialize( arg_0, arg_1, arg_2); }), emscripten::allow_raw_pointers())
    .function("Initialize", emscripten::select_overload<void(vtkHyperTreeGridNonOrientedCursor&, vtkHyperTreeGrid*, vtkHyperTree*, unsigned int, int)>([](vtkHyperTreeGridNonOrientedCursor& self, vtkHyperTreeGrid* arg_0, vtkHyperTree* arg_1, unsigned int arg_2, int arg_3) -> void { return self.Initialize( arg_0, arg_1, arg_2, arg_3); }), emscripten::allow_raw_pointers())
    .function("GetGrid", &vtkHyperTreeGridNonOrientedCursor::GetGrid, emscripten::allow_raw_pointers())
    .function("HasTree", &vtkHyperTreeGridNonOrientedCursor::HasTree)
    .function("GetTree", &vtkHyperTreeGridNonOrientedCursor::GetTree, emscripten::allow_raw_pointers())
    .function("GetVertexId", &vtkHyperTreeGridNonOrientedCursor::GetVertexId)
    .function("GetGlobalNodeIndex", &vtkHyperTreeGridNonOrientedCursor::GetGlobalNodeIndex)
    .function("GetDimension", &vtkHyperTreeGridNonOrientedCursor::GetDimension)
    .function("GetNumberOfChildren", &vtkHyperTreeGridNonOrientedCursor::GetNumberOfChildren)
    .function("SetGlobalIndexStart", &vtkHyperTreeGridNonOrientedCursor::SetGlobalIndexStart)
    .function("SetGlobalIndexFromLocal", &vtkHyperTreeGridNonOrientedCursor::SetGlobalIndexFromLocal)
    .function("SetMask", &vtkHyperTreeGridNonOrientedCursor::SetMask)
    .function("IsMasked", &vtkHyperTreeGridNonOrientedCursor::IsMasked)
    .function("IsLeaf", &vtkHyperTreeGridNonOrientedCursor::IsLeaf)
    .function("SubdivideLeaf", &vtkHyperTreeGridNonOrientedCursor::SubdivideLeaf)
    .function("IsRoot", &vtkHyperTreeGridNonOrientedCursor::IsRoot)
    .function("GetLevel", &vtkHyperTreeGridNonOrientedCursor::GetLevel)
    .function("ToChild", &vtkHyperTreeGridNonOrientedCursor::ToChild)
    .function("ToRoot", &vtkHyperTreeGridNonOrientedCursor::ToRoot)
    .function("ToParent", &vtkHyperTreeGridNonOrientedCursor::ToParent);
}
