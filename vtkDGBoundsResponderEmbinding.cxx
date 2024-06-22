// JavaScript wrapper for vtkDGBoundsResponder with embind 
//
// This file was auto-generated using :
/*
node /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/bin/vtkWrapJavaScript.js \
 @/home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkFiltersCellGrid.js/vtkFiltersCellGrid.js.Release.args \
 -o \
 /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkFiltersCellGrid.js/vtkDGBoundsResponderEmbinding.cxx \
 /home/jmh/github/vtk/Filters/CellGrid/vtkDGBoundsResponder.h
*/
#include "vtkEmbindSmartPointerTrait.h"
#include <emscripten.h>
#include <string>
#include "vtkVariant.h"
#include "vtkObjectBase.h"
#include "vtkCellGridBoundsQuery.h"
#include "vtkCellMetadata.h"
#include "vtkCellGridResponders.h"
#include "vtkDGBoundsResponder.h"

template<> void emscripten::internal::raw_destructor<vtkDGBoundsResponder>(vtkDGBoundsResponder * ptr){ ptr->Delete(); }
EMSCRIPTEN_BINDINGS(vtkDGBoundsResponder_class) {
  emscripten::class_<vtkDGBoundsResponder, emscripten::base<vtkCellGridResponder<vtkCellGridBoundsQuery>>>("vtkDGBoundsResponder")
    .smart_ptr<vtkSmartPointer<vtkDGBoundsResponder>>("vtkSmartPointer<vtkDGBoundsResponder>")
    .constructor(&vtk::MakeVTKSmartPtr<vtkDGBoundsResponder>)
    .class_function("IsTypeOf", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkDGBoundsResponder::IsTypeOf( arg_0.c_str());}))
    .function("IsA", emscripten::optional_override([](vtkDGBoundsResponder& self, const std::string & arg_0) -> int {  return self.IsA( arg_0.c_str());}))
    .class_function("SafeDownCast", &vtkDGBoundsResponder::SafeDownCast, emscripten::allow_raw_pointers())
    .function("NewInstance", &vtkDGBoundsResponder::NewInstance, emscripten::allow_raw_pointers())
    .class_function("GetNumberOfGenerationsFromBaseType", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkDGBoundsResponder::GetNumberOfGenerationsFromBaseType( arg_0.c_str());}))
    .function("GetNumberOfGenerationsFromBase", emscripten::optional_override([](vtkDGBoundsResponder& self, const std::string & arg_0) -> int {  return self.GetNumberOfGenerationsFromBase( arg_0.c_str());}))
    .function("Query", &vtkDGBoundsResponder::Query, emscripten::allow_raw_pointers());
}
