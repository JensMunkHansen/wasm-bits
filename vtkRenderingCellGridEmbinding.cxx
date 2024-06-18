// JavaScript wrapper for vtkRenderingCellGrid with embind 
//
// This file was auto-generated using :
/*
node /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/bin/vtkWrapJavaScript.js \
 @/home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkRenderingCellGrid.js/vtkRenderingCellGrid.js.Release.args \
 -o \
 /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkRenderingCellGrid.js/vtkRenderingCellGridEmbinding.cxx \
 /home/jmh/github/vtk/Rendering/CellGrid/vtkRenderingCellGrid.h
*/
#include "vtkEmbindSmartPointerTrait.h"
#include <emscripten.h>
#include <string>
#include "vtkVariant.h"
#include "vtkObjectBase.h"
#include "vtkIndent.h"
#include "vtkRenderingCellGrid.h"

template<> void emscripten::internal::raw_destructor<vtkRenderingCellGrid>(vtkRenderingCellGrid * ptr){ ptr->Delete(); }
EMSCRIPTEN_BINDINGS(vtkRenderingCellGrid_class) {
  emscripten::class_<vtkRenderingCellGrid, emscripten::base<vtkObject>>("vtkRenderingCellGrid")
    .class_function("IsTypeOf", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkRenderingCellGrid::IsTypeOf( arg_0.c_str());}))
    .function("IsA", emscripten::optional_override([](vtkRenderingCellGrid& self, const std::string & arg_0) -> int {  return self.IsA( arg_0.c_str());}))
    .class_function("SafeDownCast", &vtkRenderingCellGrid::SafeDownCast, emscripten::allow_raw_pointers())
    .function("NewInstance", &vtkRenderingCellGrid::NewInstance, emscripten::allow_raw_pointers())
    .class_function("GetNumberOfGenerationsFromBaseType", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkRenderingCellGrid::GetNumberOfGenerationsFromBaseType( arg_0.c_str());}))
    .function("GetNumberOfGenerationsFromBase", emscripten::optional_override([](vtkRenderingCellGrid& self, const std::string & arg_0) -> int {  return self.GetNumberOfGenerationsFromBase( arg_0.c_str());}))
    .class_function("RegisterCellsAndResponders", &vtkRenderingCellGrid::RegisterCellsAndResponders);
}
