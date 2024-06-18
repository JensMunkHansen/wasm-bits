// JavaScript wrapper for vtkIOCellGrid with embind 
//
// This file was auto-generated using :
/*
node /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/bin/vtkWrapJavaScript.js \
 @/home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkIOCellGrid.js/vtkIOCellGrid.js.Release.args \
 -o \
 /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkIOCellGrid.js/vtkIOCellGridEmbinding.cxx \
 /home/jmh/github/vtk/IO/CellGrid/vtkIOCellGrid.h
*/
#include "vtkEmbindSmartPointerTrait.h"
#include <emscripten.h>
#include <string>
#include "vtkVariant.h"
#include "vtkObjectBase.h"
#include "vtkIndent.h"
#include "vtkIOCellGrid.h"

template<> void emscripten::internal::raw_destructor<vtkIOCellGrid>(vtkIOCellGrid * ptr){ ptr->Delete(); }
EMSCRIPTEN_BINDINGS(vtkIOCellGrid_class) {
  emscripten::class_<vtkIOCellGrid, emscripten::base<vtkObject>>("vtkIOCellGrid")
    .class_function("IsTypeOf", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkIOCellGrid::IsTypeOf( arg_0.c_str());}))
    .function("IsA", emscripten::optional_override([](vtkIOCellGrid& self, const std::string & arg_0) -> int {  return self.IsA( arg_0.c_str());}))
    .class_function("SafeDownCast", &vtkIOCellGrid::SafeDownCast, emscripten::allow_raw_pointers())
    .function("NewInstance", &vtkIOCellGrid::NewInstance, emscripten::allow_raw_pointers())
    .class_function("GetNumberOfGenerationsFromBaseType", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkIOCellGrid::GetNumberOfGenerationsFromBaseType( arg_0.c_str());}))
    .function("GetNumberOfGenerationsFromBase", emscripten::optional_override([](vtkIOCellGrid& self, const std::string & arg_0) -> int {  return self.GetNumberOfGenerationsFromBase( arg_0.c_str());}))
    .class_function("RegisterCellsAndResponders", &vtkIOCellGrid::RegisterCellsAndResponders);
}
