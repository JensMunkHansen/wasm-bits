// JavaScript wrapper for vtkResliceCursorThickLineRepresentation with embind 
//
// This file was auto-generated using :
/*
node /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/bin/vtkWrapJavaScript.js \
 @/home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkInteractionWidgets.js/vtkInteractionWidgets.js.Release.args \
 -o \
 /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkInteractionWidgets.js/vtkResliceCursorThickLineRepresentationEmbinding.cxx \
 /home/jmh/github/vtk/Interaction/Widgets/vtkResliceCursorThickLineRepresentation.h
*/
#include "vtkEmbindSmartPointerTrait.h"
#include <emscripten.h>
#include <string>
#include "vtkVariant.h"
#include "vtkObjectBase.h"
#include "vtkIndent.h"
#include "vtkResliceCursorThickLineRepresentation.h"

template<> void emscripten::internal::raw_destructor<vtkResliceCursorThickLineRepresentation>(vtkResliceCursorThickLineRepresentation * ptr){ ptr->Delete(); }
EMSCRIPTEN_BINDINGS(vtkResliceCursorThickLineRepresentation_class) {
  emscripten::class_<vtkResliceCursorThickLineRepresentation, emscripten::base<vtkResliceCursorLineRepresentation>>("vtkResliceCursorThickLineRepresentation")
    .smart_ptr<vtkSmartPointer<vtkResliceCursorThickLineRepresentation>>("vtkSmartPointer<vtkResliceCursorThickLineRepresentation>")
    .constructor(&vtk::MakeAvtkSmartPointer<vtkResliceCursorThickLineRepresentation>)
    .class_function("IsTypeOf", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkResliceCursorThickLineRepresentation::IsTypeOf( arg_0.c_str());}))
    .function("IsA", emscripten::optional_override([](vtkResliceCursorThickLineRepresentation& self, const std::string & arg_0) -> int {  return self.IsA( arg_0.c_str());}))
    .class_function("SafeDownCast", &vtkResliceCursorThickLineRepresentation::SafeDownCast, emscripten::allow_raw_pointers())
    .function("NewInstance", &vtkResliceCursorThickLineRepresentation::NewInstance, emscripten::allow_raw_pointers())
    .class_function("GetNumberOfGenerationsFromBaseType", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkResliceCursorThickLineRepresentation::GetNumberOfGenerationsFromBaseType( arg_0.c_str());}))
    .function("GetNumberOfGenerationsFromBase", emscripten::optional_override([](vtkResliceCursorThickLineRepresentation& self, const std::string & arg_0) -> int {  return self.GetNumberOfGenerationsFromBase( arg_0.c_str());}))
    .function("CreateDefaultResliceAlgorithm", &vtkResliceCursorThickLineRepresentation::CreateDefaultResliceAlgorithm)
    .function("SetResliceParameters", &vtkResliceCursorThickLineRepresentation::SetResliceParameters);
}
