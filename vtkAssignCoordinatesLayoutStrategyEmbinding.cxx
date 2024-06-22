// JavaScript wrapper for vtkAssignCoordinatesLayoutStrategy with embind 
//
// This file was auto-generated using :
/*
node /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/bin/vtkWrapJavaScript.js \
 @/home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkInfovisLayout.js/vtkInfovisLayout.js.Release.args \
 -o \
 /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkInfovisLayout.js/vtkAssignCoordinatesLayoutStrategyEmbinding.cxx \
 /home/jmh/github/vtk/Infovis/Layout/vtkAssignCoordinatesLayoutStrategy.h
*/
#include "vtkEmbindSmartPointerTrait.h"
#include <emscripten.h>
#include <string>
#include "vtkVariant.h"
#include "vtkObjectBase.h"
#include "vtkIndent.h"
#include "vtkAssignCoordinatesLayoutStrategy.h"

template<> void emscripten::internal::raw_destructor<vtkAssignCoordinatesLayoutStrategy>(vtkAssignCoordinatesLayoutStrategy * ptr){ ptr->Delete(); }
EMSCRIPTEN_BINDINGS(vtkAssignCoordinatesLayoutStrategy_class) {
  emscripten::class_<vtkAssignCoordinatesLayoutStrategy, emscripten::base<vtkGraphLayoutStrategy>>("vtkAssignCoordinatesLayoutStrategy")
    .smart_ptr<vtkSmartPointer<vtkAssignCoordinatesLayoutStrategy>>("vtkSmartPointer<vtkAssignCoordinatesLayoutStrategy>")
    .constructor(&vtk::MakeAvtkSmartPointer<vtkAssignCoordinatesLayoutStrategy>)
    .class_function("IsTypeOf", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkAssignCoordinatesLayoutStrategy::IsTypeOf( arg_0.c_str());}))
    .function("IsA", emscripten::optional_override([](vtkAssignCoordinatesLayoutStrategy& self, const std::string & arg_0) -> int {  return self.IsA( arg_0.c_str());}))
    .class_function("SafeDownCast", &vtkAssignCoordinatesLayoutStrategy::SafeDownCast, emscripten::allow_raw_pointers())
    .function("NewInstance", &vtkAssignCoordinatesLayoutStrategy::NewInstance, emscripten::allow_raw_pointers())
    .class_function("GetNumberOfGenerationsFromBaseType", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkAssignCoordinatesLayoutStrategy::GetNumberOfGenerationsFromBaseType( arg_0.c_str());}))
    .function("GetNumberOfGenerationsFromBase", emscripten::optional_override([](vtkAssignCoordinatesLayoutStrategy& self, const std::string & arg_0) -> int {  return self.GetNumberOfGenerationsFromBase( arg_0.c_str());}))
    .function("SetXCoordArrayName", emscripten::optional_override([](vtkAssignCoordinatesLayoutStrategy& self, const std::string & arg_0) -> void {  return self.SetXCoordArrayName( arg_0.c_str());}))
    .function("GetXCoordArrayName", emscripten::optional_override([](vtkAssignCoordinatesLayoutStrategy& self) -> std::string {  return self.GetXCoordArrayName();}))
    .function("SetYCoordArrayName", emscripten::optional_override([](vtkAssignCoordinatesLayoutStrategy& self, const std::string & arg_0) -> void {  return self.SetYCoordArrayName( arg_0.c_str());}))
    .function("GetYCoordArrayName", emscripten::optional_override([](vtkAssignCoordinatesLayoutStrategy& self) -> std::string {  return self.GetYCoordArrayName();}))
    .function("SetZCoordArrayName", emscripten::optional_override([](vtkAssignCoordinatesLayoutStrategy& self, const std::string & arg_0) -> void {  return self.SetZCoordArrayName( arg_0.c_str());}))
    .function("GetZCoordArrayName", emscripten::optional_override([](vtkAssignCoordinatesLayoutStrategy& self) -> std::string {  return self.GetZCoordArrayName();}))
    .function("Layout", &vtkAssignCoordinatesLayoutStrategy::Layout);
}
