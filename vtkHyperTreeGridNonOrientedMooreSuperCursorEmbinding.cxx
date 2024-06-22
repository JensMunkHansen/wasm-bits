// JavaScript wrapper for vtkHyperTreeGridNonOrientedMooreSuperCursor with embind 
//
// This file was auto-generated using :
/*
node /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/bin/vtkWrapJavaScript.js \
 @/home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkCommonDataModel.js/vtkCommonDataModel.js.Release.args \
 -o \
 /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkCommonDataModel.js/vtkHyperTreeGridNonOrientedMooreSuperCursorEmbinding.cxx \
 /home/jmh/github/vtk/Common/DataModel/vtkHyperTreeGridNonOrientedMooreSuperCursor.h
*/
#include "vtkEmbindSmartPointerTrait.h"
#include <emscripten.h>
#include <string>
#include "vtkVariant.h"
#include "vtkObjectBase.h"
#include "vtkIndent.h"
#include "vtkHyperTreeGrid.h"
#include "vtkIdList.h"
#include "vtkHyperTreeGridNonOrientedMooreSuperCursor.h"

template<> void emscripten::internal::raw_destructor<vtkHyperTreeGridNonOrientedMooreSuperCursor>(vtkHyperTreeGridNonOrientedMooreSuperCursor * ptr){ ptr->Delete(); }
EMSCRIPTEN_BINDINGS(vtkHyperTreeGridNonOrientedMooreSuperCursor_class) {
  emscripten::class_<vtkHyperTreeGridNonOrientedMooreSuperCursor, emscripten::base<vtkHyperTreeGridNonOrientedSuperCursor>>("vtkHyperTreeGridNonOrientedMooreSuperCursor")
    .smart_ptr<vtkSmartPointer<vtkHyperTreeGridNonOrientedMooreSuperCursor>>("vtkSmartPointer<vtkHyperTreeGridNonOrientedMooreSuperCursor>")
    .constructor(&vtk::MakeVTKSmartPtr<vtkHyperTreeGridNonOrientedMooreSuperCursor>)
    .class_function("IsTypeOf", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkHyperTreeGridNonOrientedMooreSuperCursor::IsTypeOf( arg_0.c_str());}))
    .function("IsA", emscripten::optional_override([](vtkHyperTreeGridNonOrientedMooreSuperCursor& self, const std::string & arg_0) -> int {  return self.IsA( arg_0.c_str());}))
    .class_function("SafeDownCast", &vtkHyperTreeGridNonOrientedMooreSuperCursor::SafeDownCast, emscripten::allow_raw_pointers())
    .function("NewInstance", &vtkHyperTreeGridNonOrientedMooreSuperCursor::NewInstance, emscripten::allow_raw_pointers())
    .class_function("GetNumberOfGenerationsFromBaseType", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkHyperTreeGridNonOrientedMooreSuperCursor::GetNumberOfGenerationsFromBaseType( arg_0.c_str());}))
    .function("GetNumberOfGenerationsFromBase", emscripten::optional_override([](vtkHyperTreeGridNonOrientedMooreSuperCursor& self, const std::string & arg_0) -> int {  return self.GetNumberOfGenerationsFromBase( arg_0.c_str());}))
    .function("Initialize", &vtkHyperTreeGridNonOrientedMooreSuperCursor::Initialize, emscripten::allow_raw_pointers())
    .function("GetCornerCursors", &vtkHyperTreeGridNonOrientedMooreSuperCursor::GetCornerCursors, emscripten::allow_raw_pointers());
}
