// JavaScript wrapper for vtkHyperTreeGridNonOrientedUnlimitedMooreSuperCursor with embind 
//
// This file was auto-generated using :
/*
node /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/bin/vtkWrapJavaScript.js \
 @/home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkCommonDataModel.js/vtkCommonDataModel.js.Release.args \
 -o \
 /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkCommonDataModel.js/vtkHyperTreeGridNonOrientedUnlimitedMooreSuperCursorEmbinding.cxx \
 /home/jmh/github/vtk/Common/DataModel/vtkHyperTreeGridNonOrientedUnlimitedMooreSuperCursor.h
*/
#include "vtkEmbindSmartPointerTrait.h"
#include <emscripten.h>
#include <string>
#include "vtkVariant.h"
#include "vtkObjectBase.h"
#include "vtkIndent.h"
#include "vtkHyperTreeGrid.h"
#include "vtkIdList.h"
#include "vtkHyperTreeGridNonOrientedUnlimitedMooreSuperCursor.h"

template<> void emscripten::internal::raw_destructor<vtkHyperTreeGridNonOrientedUnlimitedMooreSuperCursor>(vtkHyperTreeGridNonOrientedUnlimitedMooreSuperCursor * ptr){ ptr->Delete(); }
EMSCRIPTEN_BINDINGS(vtkHyperTreeGridNonOrientedUnlimitedMooreSuperCursor_class) {
  emscripten::class_<vtkHyperTreeGridNonOrientedUnlimitedMooreSuperCursor, emscripten::base<vtkHyperTreeGridNonOrientedUnlimitedSuperCursor>>("vtkHyperTreeGridNonOrientedUnlimitedMooreSuperCursor")
    .smart_ptr<vtkSmartPointer<vtkHyperTreeGridNonOrientedUnlimitedMooreSuperCursor>>("vtkSmartPointer<vtkHyperTreeGridNonOrientedUnlimitedMooreSuperCursor>")
    .constructor(&vtk::MakeVTKSmartPtr<vtkHyperTreeGridNonOrientedUnlimitedMooreSuperCursor>)
    .class_function("IsTypeOf", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkHyperTreeGridNonOrientedUnlimitedMooreSuperCursor::IsTypeOf( arg_0.c_str());}))
    .function("IsA", emscripten::optional_override([](vtkHyperTreeGridNonOrientedUnlimitedMooreSuperCursor& self, const std::string & arg_0) -> int {  return self.IsA( arg_0.c_str());}))
    .class_function("SafeDownCast", &vtkHyperTreeGridNonOrientedUnlimitedMooreSuperCursor::SafeDownCast, emscripten::allow_raw_pointers())
    .function("NewInstance", &vtkHyperTreeGridNonOrientedUnlimitedMooreSuperCursor::NewInstance, emscripten::allow_raw_pointers())
    .class_function("GetNumberOfGenerationsFromBaseType", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkHyperTreeGridNonOrientedUnlimitedMooreSuperCursor::GetNumberOfGenerationsFromBaseType( arg_0.c_str());}))
    .function("GetNumberOfGenerationsFromBase", emscripten::optional_override([](vtkHyperTreeGridNonOrientedUnlimitedMooreSuperCursor& self, const std::string & arg_0) -> int {  return self.GetNumberOfGenerationsFromBase( arg_0.c_str());}))
    .function("Initialize", &vtkHyperTreeGridNonOrientedUnlimitedMooreSuperCursor::Initialize, emscripten::allow_raw_pointers())
    .function("GetCornerCursors", &vtkHyperTreeGridNonOrientedUnlimitedMooreSuperCursor::GetCornerCursors, emscripten::allow_raw_pointers());
}
