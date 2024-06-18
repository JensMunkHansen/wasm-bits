// JavaScript wrapper for vtkPolyDataToUnstructuredGrid with embind 
//
// This file was auto-generated using :
/*
node /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/bin/vtkWrapJavaScript.js \
 @/home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkFiltersCore.js/vtkFiltersCore.js.Release.args \
 -o \
 /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkFiltersCore.js/vtkPolyDataToUnstructuredGridEmbinding.cxx \
 /home/jmh/github/vtk/Filters/Core/vtkPolyDataToUnstructuredGrid.h
*/
#include "vtkEmbindSmartPointerTrait.h"
#include <emscripten.h>
#include <string>
#include "vtkVariant.h"
#include "vtkObjectBase.h"
#include "vtkIndent.h"
#include "vtkPolyData.h"
#include "vtkPolyDataToUnstructuredGrid.h"

template<> void emscripten::internal::raw_destructor<vtkPolyDataToUnstructuredGrid>(vtkPolyDataToUnstructuredGrid * ptr){ ptr->Delete(); }
EMSCRIPTEN_BINDINGS(vtkPolyDataToUnstructuredGrid_class) {
  emscripten::class_<vtkPolyDataToUnstructuredGrid, emscripten::base<vtkUnstructuredGridAlgorithm>>("vtkPolyDataToUnstructuredGrid")
    .smart_ptr<vtkSmartPointer<vtkPolyDataToUnstructuredGrid>>("vtkSmartPointer<vtkPolyDataToUnstructuredGrid>")
    .constructor(&vtk::MakeAvtkSmartPointer<vtkPolyDataToUnstructuredGrid>)
    .class_function("IsTypeOf", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkPolyDataToUnstructuredGrid::IsTypeOf( arg_0.c_str());}))
    .function("IsA", emscripten::optional_override([](vtkPolyDataToUnstructuredGrid& self, const std::string & arg_0) -> int {  return self.IsA( arg_0.c_str());}))
    .class_function("SafeDownCast", &vtkPolyDataToUnstructuredGrid::SafeDownCast, emscripten::allow_raw_pointers())
    .function("NewInstance", &vtkPolyDataToUnstructuredGrid::NewInstance, emscripten::allow_raw_pointers())
    .class_function("GetNumberOfGenerationsFromBaseType", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkPolyDataToUnstructuredGrid::GetNumberOfGenerationsFromBaseType( arg_0.c_str());}))
    .function("GetNumberOfGenerationsFromBase", emscripten::optional_override([](vtkPolyDataToUnstructuredGrid& self, const std::string & arg_0) -> int {  return self.GetNumberOfGenerationsFromBase( arg_0.c_str());}))
    .class_function("CanBeProcessedFast", &vtkPolyDataToUnstructuredGrid::CanBeProcessedFast, emscripten::allow_raw_pointers());
}
