// JavaScript wrapper for vtkDGRangeResponder with embind 
//
// This file was auto-generated using :
/*
node /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/bin/vtkWrapJavaScript.js \
 @/home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkFiltersCellGrid.js/vtkFiltersCellGrid.js.Release.args \
 -o \
 /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkFiltersCellGrid.js/vtkDGRangeResponderEmbinding.cxx \
 /home/jmh/github/vtk/Filters/CellGrid/vtkDGRangeResponder.h
*/
#include "vtkEmbindSmartPointerTrait.h"
#include <emscripten.h>
#include <string>
#include "vtkVariant.h"
#include "vtkObjectBase.h"
#include "vtkCellGridRangeQuery.h"
#include "vtkCellMetadata.h"
#include "vtkCellGridResponders.h"
#include "vtkDGRangeResponder.h"

template<> void emscripten::internal::raw_destructor<vtkDGRangeResponder>(vtkDGRangeResponder * ptr){ ptr->Delete(); }
EMSCRIPTEN_BINDINGS(vtkDGRangeResponder_class) {
  emscripten::class_<vtkDGRangeResponder, emscripten::base<vtkCellGridResponder<vtkCellGridRangeQuery>>>("vtkDGRangeResponder")
    .smart_ptr<vtkSmartPointer<vtkDGRangeResponder>>("vtkSmartPointer<vtkDGRangeResponder>")
    .constructor(&vtk::MakeAvtkSmartPointer<vtkDGRangeResponder>)
    .class_function("IsTypeOf", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkDGRangeResponder::IsTypeOf( arg_0.c_str());}))
    .function("IsA", emscripten::optional_override([](vtkDGRangeResponder& self, const std::string & arg_0) -> int {  return self.IsA( arg_0.c_str());}))
    .class_function("SafeDownCast", &vtkDGRangeResponder::SafeDownCast, emscripten::allow_raw_pointers())
    .function("NewInstance", &vtkDGRangeResponder::NewInstance, emscripten::allow_raw_pointers())
    .class_function("GetNumberOfGenerationsFromBaseType", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkDGRangeResponder::GetNumberOfGenerationsFromBaseType( arg_0.c_str());}))
    .function("GetNumberOfGenerationsFromBase", emscripten::optional_override([](vtkDGRangeResponder& self, const std::string & arg_0) -> int {  return self.GetNumberOfGenerationsFromBase( arg_0.c_str());}))
    .function("Query", &vtkDGRangeResponder::Query, emscripten::allow_raw_pointers());
}
