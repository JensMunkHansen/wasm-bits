// JavaScript wrapper for vtkDGElevationResponder with embind 
//
// This file was auto-generated using :
/*
node /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/bin/vtkWrapJavaScript.js \
 @/home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkFiltersCellGrid.js/vtkFiltersCellGrid.js.Release.args \
 -o \
 /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkFiltersCellGrid.js/vtkDGElevationResponderEmbinding.cxx \
 /home/jmh/github/vtk/Filters/CellGrid/vtkDGElevationResponder.h
*/
#include "vtkEmbindSmartPointerTrait.h"
#include <emscripten.h>
#include <string>
#include "vtkVariant.h"
#include "vtkObjectBase.h"
#include "vtkIndent.h"
#include "vtkCellGridElevationQuery.h"
#include "vtkCellMetadata.h"
#include "vtkCellGridResponders.h"
#include "vtkDGElevationResponder.h"

template<> void emscripten::internal::raw_destructor<vtkDGElevationResponder>(vtkDGElevationResponder * ptr){ ptr->Delete(); }
EMSCRIPTEN_BINDINGS(vtkDGElevationResponder_class) {
  emscripten::class_<vtkDGElevationResponder, emscripten::base<vtkCellGridResponder<vtkCellGridElevationQuery>>>("vtkDGElevationResponder")
    .smart_ptr<vtkSmartPointer<vtkDGElevationResponder>>("vtkSmartPointer<vtkDGElevationResponder>")
    .constructor(&vtk::MakeVTKSmartPtr<vtkDGElevationResponder>)
    .class_function("IsTypeOf", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkDGElevationResponder::IsTypeOf( arg_0.c_str());}))
    .function("IsA", emscripten::optional_override([](vtkDGElevationResponder& self, const std::string & arg_0) -> int {  return self.IsA( arg_0.c_str());}))
    .class_function("SafeDownCast", &vtkDGElevationResponder::SafeDownCast, emscripten::allow_raw_pointers())
    .function("NewInstance", &vtkDGElevationResponder::NewInstance, emscripten::allow_raw_pointers())
    .class_function("GetNumberOfGenerationsFromBaseType", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkDGElevationResponder::GetNumberOfGenerationsFromBaseType( arg_0.c_str());}))
    .function("GetNumberOfGenerationsFromBase", emscripten::optional_override([](vtkDGElevationResponder& self, const std::string & arg_0) -> int {  return self.GetNumberOfGenerationsFromBase( arg_0.c_str());}))
    .function("Query", &vtkDGElevationResponder::Query, emscripten::allow_raw_pointers());
}
