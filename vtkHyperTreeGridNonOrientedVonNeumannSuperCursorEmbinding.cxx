// JavaScript wrapper for vtkHyperTreeGridNonOrientedVonNeumannSuperCursor with embind 
//
// This file was auto-generated using :
/*
node /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/bin/vtkWrapJavaScript.js \
 @/home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkCommonDataModel.js/vtkCommonDataModel.js.Release.args \
 -o \
 /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkCommonDataModel.js/vtkHyperTreeGridNonOrientedVonNeumannSuperCursorEmbinding.cxx \
 /home/jmh/github/vtk/Common/DataModel/vtkHyperTreeGridNonOrientedVonNeumannSuperCursor.h
*/
#include "vtkEmbindSmartPointerTrait.h"
#include <emscripten.h>
#include <string>
#include "vtkVariant.h"
#include "vtkObjectBase.h"
#include "vtkIndent.h"
#include "vtkHyperTreeGrid.h"
#include "vtkHyperTreeGridNonOrientedVonNeumannSuperCursor.h"

template<> void emscripten::internal::raw_destructor<vtkHyperTreeGridNonOrientedVonNeumannSuperCursor>(vtkHyperTreeGridNonOrientedVonNeumannSuperCursor * ptr){ ptr->Delete(); }
EMSCRIPTEN_BINDINGS(vtkHyperTreeGridNonOrientedVonNeumannSuperCursor_class) {
  emscripten::class_<vtkHyperTreeGridNonOrientedVonNeumannSuperCursor, emscripten::base<vtkHyperTreeGridNonOrientedSuperCursor>>("vtkHyperTreeGridNonOrientedVonNeumannSuperCursor")
    .smart_ptr<vtkSmartPointer<vtkHyperTreeGridNonOrientedVonNeumannSuperCursor>>("vtkSmartPointer<vtkHyperTreeGridNonOrientedVonNeumannSuperCursor>")
    .constructor(&vtk::MakeAvtkSmartPointer<vtkHyperTreeGridNonOrientedVonNeumannSuperCursor>)
    .class_function("IsTypeOf", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkHyperTreeGridNonOrientedVonNeumannSuperCursor::IsTypeOf( arg_0.c_str());}))
    .function("IsA", emscripten::optional_override([](vtkHyperTreeGridNonOrientedVonNeumannSuperCursor& self, const std::string & arg_0) -> int {  return self.IsA( arg_0.c_str());}))
    .class_function("SafeDownCast", &vtkHyperTreeGridNonOrientedVonNeumannSuperCursor::SafeDownCast, emscripten::allow_raw_pointers())
    .function("NewInstance", &vtkHyperTreeGridNonOrientedVonNeumannSuperCursor::NewInstance, emscripten::allow_raw_pointers())
    .class_function("GetNumberOfGenerationsFromBaseType", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkHyperTreeGridNonOrientedVonNeumannSuperCursor::GetNumberOfGenerationsFromBaseType( arg_0.c_str());}))
    .function("GetNumberOfGenerationsFromBase", emscripten::optional_override([](vtkHyperTreeGridNonOrientedVonNeumannSuperCursor& self, const std::string & arg_0) -> int {  return self.GetNumberOfGenerationsFromBase( arg_0.c_str());}))
    .function("Initialize", &vtkHyperTreeGridNonOrientedVonNeumannSuperCursor::Initialize, emscripten::allow_raw_pointers());
}
