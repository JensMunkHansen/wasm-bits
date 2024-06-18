// JavaScript wrapper for vtkCellGridElevationQuery with embind 
//
// This file was auto-generated using :
/*
node /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/bin/vtkWrapJavaScript.js \
 @/home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkFiltersCellGrid.js/vtkFiltersCellGrid.js.Release.args \
 -o \
 /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkFiltersCellGrid.js/vtkCellGridElevationQueryEmbinding.cxx \
 /home/jmh/github/vtk/Filters/CellGrid/vtkCellGridElevationQuery.h
*/
#include "vtkEmbindSmartPointerTrait.h"
#include <emscripten.h>
#include <string>
#include "vtkVariant.h"
#include "vtkObjectBase.h"
#include "vtkIndent.h"
#include "vtkCellGridElevationQuery.h"

template<> void emscripten::internal::raw_destructor<vtkCellGridElevationQuery>(vtkCellGridElevationQuery * ptr){ ptr->Delete(); }
EMSCRIPTEN_BINDINGS(vtkCellGridElevationQuery_class) {
  emscripten::class_<vtkCellGridElevationQuery, emscripten::base<vtkCellGridQuery>>("vtkCellGridElevationQuery")
    .smart_ptr<vtkSmartPointer<vtkCellGridElevationQuery>>("vtkSmartPointer<vtkCellGridElevationQuery>")
    .constructor(&vtk::MakeAvtkSmartPointer<vtkCellGridElevationQuery>)
    .class_function("IsTypeOf", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkCellGridElevationQuery::IsTypeOf( arg_0.c_str());}))
    .function("IsA", emscripten::optional_override([](vtkCellGridElevationQuery& self, const std::string & arg_0) -> int {  return self.IsA( arg_0.c_str());}))
    .class_function("SafeDownCast", &vtkCellGridElevationQuery::SafeDownCast, emscripten::allow_raw_pointers())
    .function("NewInstance", &vtkCellGridElevationQuery::NewInstance, emscripten::allow_raw_pointers())
    .class_function("GetNumberOfGenerationsFromBaseType", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkCellGridElevationQuery::GetNumberOfGenerationsFromBaseType( arg_0.c_str());}))
    .function("GetNumberOfGenerationsFromBase", emscripten::optional_override([](vtkCellGridElevationQuery& self, const std::string & arg_0) -> int {  return self.GetNumberOfGenerationsFromBase( arg_0.c_str());}))
    .function("Initialize", &vtkCellGridElevationQuery::Initialize)
    .function("Finalize", &vtkCellGridElevationQuery::Finalize);
}
