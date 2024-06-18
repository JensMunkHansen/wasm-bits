// JavaScript wrapper for vtkUnstructuredGridToCellGrid with embind 
//
// This file was auto-generated using :
/*
node /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/bin/vtkWrapJavaScript.js \
 @/home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkFiltersCellGrid.js/vtkFiltersCellGrid.js.Release.args \
 -o \
 /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkFiltersCellGrid.js/vtkUnstructuredGridToCellGridEmbinding.cxx \
 /home/jmh/github/vtk/Filters/CellGrid/vtkUnstructuredGridToCellGrid.h
*/
#include "vtkEmbindSmartPointerTrait.h"
#include <emscripten.h>
#include <string>
#include "vtkVariant.h"
#include "vtkObjectBase.h"
#include "vtkIndent.h"
#include "vtkStringToken.h"
#include "vtkUnstructuredGridToCellGrid.h"

template<> void emscripten::internal::raw_destructor<vtkUnstructuredGridToCellGrid>(vtkUnstructuredGridToCellGrid * ptr){ ptr->Delete(); }
EMSCRIPTEN_BINDINGS(vtkUnstructuredGridToCellGrid_class) {
  emscripten::class_<vtkUnstructuredGridToCellGrid, emscripten::base<vtkPartitionedDataSetCollectionAlgorithm>>("vtkUnstructuredGridToCellGrid")
    .smart_ptr<vtkSmartPointer<vtkUnstructuredGridToCellGrid>>("vtkSmartPointer<vtkUnstructuredGridToCellGrid>")
    .constructor(&vtk::MakeAvtkSmartPointer<vtkUnstructuredGridToCellGrid>)
    .class_function("IsTypeOf", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkUnstructuredGridToCellGrid::IsTypeOf( arg_0.c_str());}))
    .function("IsA", emscripten::optional_override([](vtkUnstructuredGridToCellGrid& self, const std::string & arg_0) -> int {  return self.IsA( arg_0.c_str());}))
    .class_function("SafeDownCast", &vtkUnstructuredGridToCellGrid::SafeDownCast, emscripten::allow_raw_pointers())
    .function("NewInstance", &vtkUnstructuredGridToCellGrid::NewInstance, emscripten::allow_raw_pointers())
    .class_function("GetNumberOfGenerationsFromBaseType", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkUnstructuredGridToCellGrid::GetNumberOfGenerationsFromBaseType( arg_0.c_str());}))
    .function("GetNumberOfGenerationsFromBase", emscripten::optional_override([](vtkUnstructuredGridToCellGrid& self, const std::string & arg_0) -> int {  return self.GetNumberOfGenerationsFromBase( arg_0.c_str());}))
    .function("Reset", &vtkUnstructuredGridToCellGrid::Reset)
    .function("AddPreferredOutputType", &vtkUnstructuredGridToCellGrid::AddPreferredOutputType);
}
