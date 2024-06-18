// JavaScript wrapper for vtkCleanUnstructuredGridCells with embind 
//
// This file was auto-generated using :
/*
node /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/bin/vtkWrapJavaScript.js \
 @/home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkFiltersGeneral.js/vtkFiltersGeneral.js.Release.args \
 -o \
 /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkFiltersGeneral.js/vtkCleanUnstructuredGridCellsEmbinding.cxx \
 /home/jmh/github/vtk/Filters/General/vtkCleanUnstructuredGridCells.h
*/
#include "vtkEmbindSmartPointerTrait.h"
#include <emscripten.h>
#include <string>
#include "vtkVariant.h"
#include "vtkObjectBase.h"
#include "vtkIndent.h"
#include "vtkCleanUnstructuredGridCells.h"

template<> void emscripten::internal::raw_destructor<vtkCleanUnstructuredGridCells>(vtkCleanUnstructuredGridCells * ptr){ ptr->Delete(); }
EMSCRIPTEN_BINDINGS(vtkCleanUnstructuredGridCells_class) {
  emscripten::class_<vtkCleanUnstructuredGridCells, emscripten::base<vtkUnstructuredGridAlgorithm>>("vtkCleanUnstructuredGridCells")
    .smart_ptr<vtkSmartPointer<vtkCleanUnstructuredGridCells>>("vtkSmartPointer<vtkCleanUnstructuredGridCells>")
    .constructor(&vtk::MakeAvtkSmartPointer<vtkCleanUnstructuredGridCells>)
    .class_function("IsTypeOf", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkCleanUnstructuredGridCells::IsTypeOf( arg_0.c_str());}))
    .function("IsA", emscripten::optional_override([](vtkCleanUnstructuredGridCells& self, const std::string & arg_0) -> int {  return self.IsA( arg_0.c_str());}))
    .class_function("SafeDownCast", &vtkCleanUnstructuredGridCells::SafeDownCast, emscripten::allow_raw_pointers())
    .function("NewInstance", &vtkCleanUnstructuredGridCells::NewInstance, emscripten::allow_raw_pointers())
    .class_function("GetNumberOfGenerationsFromBaseType", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkCleanUnstructuredGridCells::GetNumberOfGenerationsFromBaseType( arg_0.c_str());}))
    .function("GetNumberOfGenerationsFromBase", emscripten::optional_override([](vtkCleanUnstructuredGridCells& self, const std::string & arg_0) -> int {  return self.GetNumberOfGenerationsFromBase( arg_0.c_str());}));
}
