// JavaScript wrapper for vtkExplicitStructuredGridToUnstructuredGrid with embind 
//
// This file was auto-generated using :
/*
node /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/bin/vtkWrapJavaScript.js \
 @/home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkFiltersCore.js/vtkFiltersCore.js.Release.args \
 -o \
 /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkFiltersCore.js/vtkExplicitStructuredGridToUnstructuredGridEmbinding.cxx \
 /home/jmh/github/vtk/Filters/Core/vtkExplicitStructuredGridToUnstructuredGrid.h
*/
#include "vtkEmbindSmartPointerTrait.h"
#include <emscripten.h>
#include <string>
#include "vtkVariant.h"
#include "vtkObjectBase.h"
#include "vtkIndent.h"
#include "vtkExplicitStructuredGridToUnstructuredGrid.h"

template<> void emscripten::internal::raw_destructor<vtkExplicitStructuredGridToUnstructuredGrid>(vtkExplicitStructuredGridToUnstructuredGrid * ptr){ ptr->Delete(); }
EMSCRIPTEN_BINDINGS(vtkExplicitStructuredGridToUnstructuredGrid_class) {
  emscripten::class_<vtkExplicitStructuredGridToUnstructuredGrid, emscripten::base<vtkUnstructuredGridAlgorithm>>("vtkExplicitStructuredGridToUnstructuredGrid")
    .smart_ptr<vtkSmartPointer<vtkExplicitStructuredGridToUnstructuredGrid>>("vtkSmartPointer<vtkExplicitStructuredGridToUnstructuredGrid>")
    .constructor(&vtk::MakeAvtkSmartPointer<vtkExplicitStructuredGridToUnstructuredGrid>)
    .class_function("IsTypeOf", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkExplicitStructuredGridToUnstructuredGrid::IsTypeOf( arg_0.c_str());}))
    .function("IsA", emscripten::optional_override([](vtkExplicitStructuredGridToUnstructuredGrid& self, const std::string & arg_0) -> int {  return self.IsA( arg_0.c_str());}))
    .class_function("SafeDownCast", &vtkExplicitStructuredGridToUnstructuredGrid::SafeDownCast, emscripten::allow_raw_pointers())
    .function("NewInstance", &vtkExplicitStructuredGridToUnstructuredGrid::NewInstance, emscripten::allow_raw_pointers())
    .class_function("GetNumberOfGenerationsFromBaseType", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkExplicitStructuredGridToUnstructuredGrid::GetNumberOfGenerationsFromBaseType( arg_0.c_str());}))
    .function("GetNumberOfGenerationsFromBase", emscripten::optional_override([](vtkExplicitStructuredGridToUnstructuredGrid& self, const std::string & arg_0) -> int {  return self.GetNumberOfGenerationsFromBase( arg_0.c_str());}));
}
