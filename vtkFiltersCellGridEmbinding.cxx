// JavaScript wrapper for vtkFiltersCellGrid with embind 
//
// This file was auto-generated using :
/*
node /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/bin/vtkWrapJavaScript.js \
 @/home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkFiltersCellGrid.js/vtkFiltersCellGrid.js.Release.args \
 -o \
 /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkFiltersCellGrid.js/vtkFiltersCellGridEmbinding.cxx \
 /home/jmh/github/vtk/Filters/CellGrid/vtkFiltersCellGrid.h
*/
#include "vtkEmbindSmartPointerTrait.h"
#include <emscripten.h>
#include <string>
#include "vtkVariant.h"
#include "vtkObjectBase.h"
#include "vtkIndent.h"
#include "vtkFiltersCellGrid.h"

template<> void emscripten::internal::raw_destructor<vtkFiltersCellGrid>(vtkFiltersCellGrid * ptr){ ptr->Delete(); }
EMSCRIPTEN_BINDINGS(vtkFiltersCellGrid_class) {
  emscripten::class_<vtkFiltersCellGrid, emscripten::base<vtkObject>>("vtkFiltersCellGrid")
    .class_function("IsTypeOf", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkFiltersCellGrid::IsTypeOf( arg_0.c_str());}))
    .function("IsA", emscripten::optional_override([](vtkFiltersCellGrid& self, const std::string & arg_0) -> int {  return self.IsA( arg_0.c_str());}))
    .class_function("SafeDownCast", &vtkFiltersCellGrid::SafeDownCast, emscripten::allow_raw_pointers())
    .function("NewInstance", &vtkFiltersCellGrid::NewInstance, emscripten::allow_raw_pointers())
    .class_function("GetNumberOfGenerationsFromBaseType", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkFiltersCellGrid::GetNumberOfGenerationsFromBaseType( arg_0.c_str());}))
    .function("GetNumberOfGenerationsFromBase", emscripten::optional_override([](vtkFiltersCellGrid& self, const std::string & arg_0) -> int {  return self.GetNumberOfGenerationsFromBase( arg_0.c_str());}))
    .class_function("RegisterCellsAndResponders", &vtkFiltersCellGrid::RegisterCellsAndResponders);
}
