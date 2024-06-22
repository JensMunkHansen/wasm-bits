// JavaScript wrapper for vtkDGIOResponder with embind 
//
// This file was auto-generated using :
/*
node /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/bin/vtkWrapJavaScript.js \
 @/home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkIOCellGrid.js/vtkIOCellGrid.js.Release.args \
 -o \
 /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkIOCellGrid.js/vtkDGIOResponderEmbinding.cxx \
 /home/jmh/github/vtk/IO/CellGrid/vtkDGIOResponder.h
*/
#include "vtkEmbindSmartPointerTrait.h"
#include <emscripten.h>
#include <string>
#include "vtkVariant.h"
#include "vtkObjectBase.h"
#include "vtkIndent.h"
#include "vtkCellGridIOQuery.h"
#include "vtkCellMetadata.h"
#include "vtkCellGridResponders.h"
#include "vtkDGIOResponder.h"

template<> void emscripten::internal::raw_destructor<vtkDGIOResponder>(vtkDGIOResponder * ptr){ ptr->Delete(); }
EMSCRIPTEN_BINDINGS(vtkDGIOResponder_class) {
  emscripten::class_<vtkDGIOResponder, emscripten::base<vtkCellGridResponder<vtkCellGridIOQuery>>>("vtkDGIOResponder")
    .smart_ptr<vtkSmartPointer<vtkDGIOResponder>>("vtkSmartPointer<vtkDGIOResponder>")
    .constructor(&vtk::MakeAvtkSmartPointer<vtkDGIOResponder>)
    .class_function("IsTypeOf", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkDGIOResponder::IsTypeOf( arg_0.c_str());}))
    .function("IsA", emscripten::optional_override([](vtkDGIOResponder& self, const std::string & arg_0) -> int {  return self.IsA( arg_0.c_str());}))
    .class_function("SafeDownCast", &vtkDGIOResponder::SafeDownCast, emscripten::allow_raw_pointers())
    .function("NewInstance", &vtkDGIOResponder::NewInstance, emscripten::allow_raw_pointers())
    .class_function("GetNumberOfGenerationsFromBaseType", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkDGIOResponder::GetNumberOfGenerationsFromBaseType( arg_0.c_str());}))
    .function("GetNumberOfGenerationsFromBase", emscripten::optional_override([](vtkDGIOResponder& self, const std::string & arg_0) -> int {  return self.GetNumberOfGenerationsFromBase( arg_0.c_str());}))
    .function("Query", &vtkDGIOResponder::Query, emscripten::allow_raw_pointers());
}
