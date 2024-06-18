// JavaScript wrapper for vtkAssignCoordinates with embind 
//
// This file was auto-generated using :
/*
node /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/bin/vtkWrapJavaScript.js \
 @/home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkInfovisLayout.js/vtkInfovisLayout.js.Release.args \
 -o \
 /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkInfovisLayout.js/vtkAssignCoordinatesEmbinding.cxx \
 /home/jmh/github/vtk/Infovis/Layout/vtkAssignCoordinates.h
*/
#include "vtkEmbindSmartPointerTrait.h"
#include <emscripten.h>
#include <string>
#include "vtkVariant.h"
#include "vtkObjectBase.h"
#include "vtkIndent.h"
#include "vtkAssignCoordinates.h"

template<> void emscripten::internal::raw_destructor<vtkAssignCoordinates>(vtkAssignCoordinates * ptr){ ptr->Delete(); }
EMSCRIPTEN_BINDINGS(vtkAssignCoordinates_class) {
  emscripten::class_<vtkAssignCoordinates, emscripten::base<vtkPassInputTypeAlgorithm>>("vtkAssignCoordinates")
    .smart_ptr<vtkSmartPointer<vtkAssignCoordinates>>("vtkSmartPointer<vtkAssignCoordinates>")
    .constructor(&vtk::MakeAvtkSmartPointer<vtkAssignCoordinates>)
    .class_function("IsTypeOf", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkAssignCoordinates::IsTypeOf( arg_0.c_str());}))
    .function("IsA", emscripten::optional_override([](vtkAssignCoordinates& self, const std::string & arg_0) -> int {  return self.IsA( arg_0.c_str());}))
    .class_function("SafeDownCast", &vtkAssignCoordinates::SafeDownCast, emscripten::allow_raw_pointers())
    .function("NewInstance", &vtkAssignCoordinates::NewInstance, emscripten::allow_raw_pointers())
    .class_function("GetNumberOfGenerationsFromBaseType", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkAssignCoordinates::GetNumberOfGenerationsFromBaseType( arg_0.c_str());}))
    .function("GetNumberOfGenerationsFromBase", emscripten::optional_override([](vtkAssignCoordinates& self, const std::string & arg_0) -> int {  return self.GetNumberOfGenerationsFromBase( arg_0.c_str());}))
    .function("SetXCoordArrayName", emscripten::optional_override([](vtkAssignCoordinates& self, const std::string & arg_0) -> void {  return self.SetXCoordArrayName( arg_0.c_str());}))
    .function("GetXCoordArrayName", emscripten::optional_override([](vtkAssignCoordinates& self) -> std::string {  return self.GetXCoordArrayName();}))
    .function("SetYCoordArrayName", emscripten::optional_override([](vtkAssignCoordinates& self, const std::string & arg_0) -> void {  return self.SetYCoordArrayName( arg_0.c_str());}))
    .function("GetYCoordArrayName", emscripten::optional_override([](vtkAssignCoordinates& self) -> std::string {  return self.GetYCoordArrayName();}))
    .function("SetZCoordArrayName", emscripten::optional_override([](vtkAssignCoordinates& self, const std::string & arg_0) -> void {  return self.SetZCoordArrayName( arg_0.c_str());}))
    .function("GetZCoordArrayName", emscripten::optional_override([](vtkAssignCoordinates& self) -> std::string {  return self.GetZCoordArrayName();}))
    .function("SetJitter", &vtkAssignCoordinates::SetJitter);
}
