// JavaScript wrapper for vtkHyperTreeGridOrientedCursor with embind 
//
// This file was auto-generated using :
/*
node /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/bin/vtkWrapJavaScript.js \
 @/home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkCommonDataModel.js/vtkCommonDataModel.js.Release.args \
 -o \
 /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkCommonDataModel.js/vtkHyperTreeGridOrientedCursorEmbinding.cxx \
 /home/jmh/github/vtk/Common/DataModel/vtkHyperTreeGridOrientedCursor.h
*/
#include "vtkEmbindSmartPointerTrait.h"
#include <emscripten.h>
#include <string>
#include "vtkVariant.h"
#include "vtkObjectBase.h"
#include "vtkIndent.h"
#include "vtkHyperTreeGrid.h"
#include "vtkHyperTree.h"
#include "vtkHyperTreeGridOrientedCursor.h"

template<> void emscripten::internal::raw_destructor<vtkHyperTreeGridOrientedCursor>(vtkHyperTreeGridOrientedCursor * ptr){ ptr->Delete(); }
EMSCRIPTEN_BINDINGS(vtkHyperTreeGridOrientedCursor_class) {
  emscripten::class_<vtkHyperTreeGridOrientedCursor, emscripten::base<vtkObject>>("vtkHyperTreeGridOrientedCursor")
    .smart_ptr<vtkSmartPointer<vtkHyperTreeGridOrientedCursor>>("vtkSmartPointer<vtkHyperTreeGridOrientedCursor>")
    .constructor(&vtk::MakeAvtkSmartPointer<vtkHyperTreeGridOrientedCursor>)
    .class_function("IsTypeOf", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkHyperTreeGridOrientedCursor::IsTypeOf( arg_0.c_str());}))
    .function("IsA", emscripten::optional_override([](vtkHyperTreeGridOrientedCursor& self, const std::string & arg_0) -> int {  return self.IsA( arg_0.c_str());}))
    .class_function("SafeDownCast", &vtkHyperTreeGridOrientedCursor::SafeDownCast, emscripten::allow_raw_pointers())
    .function("NewInstance", &vtkHyperTreeGridOrientedCursor::NewInstance, emscripten::allow_raw_pointers())
    .class_function("GetNumberOfGenerationsFromBaseType", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkHyperTreeGridOrientedCursor::GetNumberOfGenerationsFromBaseType( arg_0.c_str());}))
    .function("GetNumberOfGenerationsFromBase", emscripten::optional_override([](vtkHyperTreeGridOrientedCursor& self, const std::string & arg_0) -> int {  return self.GetNumberOfGenerationsFromBase( arg_0.c_str());}))
    .function("Clone", &vtkHyperTreeGridOrientedCursor::Clone, emscripten::allow_raw_pointers())
    .function("Initialize", emscripten::select_overload<void(vtkHyperTreeGridOrientedCursor&, vtkHyperTreeGrid*, int, bool)>([](vtkHyperTreeGridOrientedCursor& self, vtkHyperTreeGrid* arg_0, int arg_1, bool arg_2) -> void { return self.Initialize( arg_0, arg_1, arg_2); }), emscripten::allow_raw_pointers())
    .function("Initialize", emscripten::select_overload<void(vtkHyperTreeGridOrientedCursor&, vtkHyperTreeGrid*, vtkHyperTree*, unsigned int, int)>([](vtkHyperTreeGridOrientedCursor& self, vtkHyperTreeGrid* arg_0, vtkHyperTree* arg_1, unsigned int arg_2, int arg_3) -> void { return self.Initialize( arg_0, arg_1, arg_2, arg_3); }), emscripten::allow_raw_pointers())
    .function("GetGrid", &vtkHyperTreeGridOrientedCursor::GetGrid, emscripten::allow_raw_pointers())
    .function("HasTree", &vtkHyperTreeGridOrientedCursor::HasTree)
    .function("GetTree", &vtkHyperTreeGridOrientedCursor::GetTree, emscripten::allow_raw_pointers())
    .function("GetVertexId", &vtkHyperTreeGridOrientedCursor::GetVertexId)
    .function("GetGlobalNodeIndex", &vtkHyperTreeGridOrientedCursor::GetGlobalNodeIndex)
    .function("GetDimension", &vtkHyperTreeGridOrientedCursor::GetDimension)
    .function("GetNumberOfChildren", &vtkHyperTreeGridOrientedCursor::GetNumberOfChildren)
    .function("SetGlobalIndexStart", &vtkHyperTreeGridOrientedCursor::SetGlobalIndexStart)
    .function("SetGlobalIndexFromLocal", &vtkHyperTreeGridOrientedCursor::SetGlobalIndexFromLocal)
    .function("SetMask", &vtkHyperTreeGridOrientedCursor::SetMask)
    .function("IsMasked", &vtkHyperTreeGridOrientedCursor::IsMasked)
    .function("IsLeaf", &vtkHyperTreeGridOrientedCursor::IsLeaf)
    .function("SubdivideLeaf", &vtkHyperTreeGridOrientedCursor::SubdivideLeaf)
    .function("IsRoot", &vtkHyperTreeGridOrientedCursor::IsRoot)
    .function("GetLevel", &vtkHyperTreeGridOrientedCursor::GetLevel)
    .function("ToChild", &vtkHyperTreeGridOrientedCursor::ToChild);
}
