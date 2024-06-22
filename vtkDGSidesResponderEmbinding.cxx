// JavaScript wrapper for vtkDGSidesResponder with embind 
//
// This file was auto-generated using :
/*
node /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/bin/vtkWrapJavaScript.js \
 @/home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkFiltersCellGrid.js/vtkFiltersCellGrid.js.Release.args \
 -o \
 /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkFiltersCellGrid.js/vtkDGSidesResponderEmbinding.cxx \
 /home/jmh/github/vtk/Filters/CellGrid/vtkDGSidesResponder.h
*/
#include "vtkEmbindSmartPointerTrait.h"
#include <emscripten.h>
#include <string>
#include "vtkVariant.h"
#include "vtkObjectBase.h"
#include "vtkCellGridSidesQuery.h"
#include "vtkCellMetadata.h"
#include "vtkCellGridResponders.h"
#include "vtkDGSidesResponder.h"

template<> void emscripten::internal::raw_destructor<vtkDGSidesResponder>(vtkDGSidesResponder * ptr){ ptr->Delete(); }
EMSCRIPTEN_BINDINGS(vtkDGSidesResponder_class) {
  emscripten::class_<vtkDGSidesResponder, emscripten::base<vtkCellGridResponder<vtkCellGridSidesQuery>>>("vtkDGSidesResponder")
    .smart_ptr<vtkSmartPointer<vtkDGSidesResponder>>("vtkSmartPointer<vtkDGSidesResponder>")
    .constructor(&vtk::MakeAvtkSmartPointer<vtkDGSidesResponder>)
    .class_function("IsTypeOf", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkDGSidesResponder::IsTypeOf( arg_0.c_str());}))
    .function("IsA", emscripten::optional_override([](vtkDGSidesResponder& self, const std::string & arg_0) -> int {  return self.IsA( arg_0.c_str());}))
    .class_function("SafeDownCast", &vtkDGSidesResponder::SafeDownCast, emscripten::allow_raw_pointers())
    .function("NewInstance", &vtkDGSidesResponder::NewInstance, emscripten::allow_raw_pointers())
    .class_function("GetNumberOfGenerationsFromBaseType", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkDGSidesResponder::GetNumberOfGenerationsFromBaseType( arg_0.c_str());}))
    .function("GetNumberOfGenerationsFromBase", emscripten::optional_override([](vtkDGSidesResponder& self, const std::string & arg_0) -> int {  return self.GetNumberOfGenerationsFromBase( arg_0.c_str());}))
    .function("Query", &vtkDGSidesResponder::Query, emscripten::allow_raw_pointers());
}
