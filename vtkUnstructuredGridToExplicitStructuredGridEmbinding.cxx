// JavaScript wrapper for vtkUnstructuredGridToExplicitStructuredGrid with embind 
//
// This file was auto-generated using :
/*
node /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/bin/vtkWrapJavaScript.js \
 @/home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkFiltersCore.js/vtkFiltersCore.js.Release.args \
 -o \
 /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkFiltersCore.js/vtkUnstructuredGridToExplicitStructuredGridEmbinding.cxx \
 /home/jmh/github/vtk/Filters/Core/vtkUnstructuredGridToExplicitStructuredGrid.h
*/
#include "vtkEmbindSmartPointerTrait.h"
#include <emscripten.h>
#include <string>
#include "vtkVariant.h"
#include "vtkObjectBase.h"
#include "vtkIndent.h"
#include "vtkUnstructuredGridToExplicitStructuredGrid.h"

template<> void emscripten::internal::raw_destructor<vtkUnstructuredGridToExplicitStructuredGrid>(vtkUnstructuredGridToExplicitStructuredGrid * ptr){ ptr->Delete(); }
EMSCRIPTEN_BINDINGS(vtkUnstructuredGridToExplicitStructuredGrid_class) {
  emscripten::class_<vtkUnstructuredGridToExplicitStructuredGrid, emscripten::base<vtkExplicitStructuredGridAlgorithm>>("vtkUnstructuredGridToExplicitStructuredGrid")
    .smart_ptr<vtkSmartPointer<vtkUnstructuredGridToExplicitStructuredGrid>>("vtkSmartPointer<vtkUnstructuredGridToExplicitStructuredGrid>")
    .constructor(&vtk::MakeAvtkSmartPointer<vtkUnstructuredGridToExplicitStructuredGrid>)
    .class_function("IsTypeOf", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkUnstructuredGridToExplicitStructuredGrid::IsTypeOf( arg_0.c_str());}))
    .function("IsA", emscripten::optional_override([](vtkUnstructuredGridToExplicitStructuredGrid& self, const std::string & arg_0) -> int {  return self.IsA( arg_0.c_str());}))
    .class_function("SafeDownCast", &vtkUnstructuredGridToExplicitStructuredGrid::SafeDownCast, emscripten::allow_raw_pointers())
    .function("NewInstance", &vtkUnstructuredGridToExplicitStructuredGrid::NewInstance, emscripten::allow_raw_pointers())
    .class_function("GetNumberOfGenerationsFromBaseType", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkUnstructuredGridToExplicitStructuredGrid::GetNumberOfGenerationsFromBaseType( arg_0.c_str());}))
    .function("GetNumberOfGenerationsFromBase", emscripten::optional_override([](vtkUnstructuredGridToExplicitStructuredGrid& self, const std::string & arg_0) -> int {  return self.GetNumberOfGenerationsFromBase( arg_0.c_str());}))
    .function("SetWholeExtent", emscripten::select_overload<void(vtkUnstructuredGridToExplicitStructuredGrid&, int, int, int, int, int, int)>([](vtkUnstructuredGridToExplicitStructuredGrid& self, int arg_0, int arg_1, int arg_2, int arg_3, int arg_4, int arg_5) -> void { return self.SetWholeExtent( arg_0, arg_1, arg_2, arg_3, arg_4, arg_5); }));
}
