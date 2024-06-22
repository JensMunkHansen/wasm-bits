// JavaScript wrapper for vtkLineWidget2 with embind 
//
// This file was auto-generated using :
/*
node /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/bin/vtkWrapJavaScript.js \
 @/home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkInteractionWidgets.js/vtkInteractionWidgets.js.Release.args \
 -o \
 /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkInteractionWidgets.js/vtkLineWidget2Embinding.cxx \
 /home/jmh/github/vtk/Interaction/Widgets/vtkLineWidget2.h
*/
#include "vtkEmbindSmartPointerTrait.h"
#include <emscripten.h>
#include <string>
#include "vtkVariant.h"
#include "vtkObjectBase.h"
#include "vtkIndent.h"
#include "vtkLineRepresentation.h"
#include "vtkLineWidget2.h"

EMSCRIPTEN_BINDINGS(vtkInteractionWidgets_vtkLineWidget2_class_enums) {
}
template<> void emscripten::internal::raw_destructor<vtkLineWidget2>(vtkLineWidget2 * ptr){ ptr->Delete(); }
EMSCRIPTEN_BINDINGS(vtkLineWidget2_class) {
  emscripten::class_<vtkLineWidget2, emscripten::base<vtkAbstractWidget>>("vtkLineWidget2")
    .smart_ptr<vtkSmartPointer<vtkLineWidget2>>("vtkSmartPointer<vtkLineWidget2>")
    .constructor(&vtk::MakeVTKSmartPtr<vtkLineWidget2>)
    .class_function("IsTypeOf", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkLineWidget2::IsTypeOf( arg_0.c_str());}))
    .function("IsA", emscripten::optional_override([](vtkLineWidget2& self, const std::string & arg_0) -> int {  return self.IsA( arg_0.c_str());}))
    .class_function("SafeDownCast", &vtkLineWidget2::SafeDownCast, emscripten::allow_raw_pointers())
    .function("NewInstance", &vtkLineWidget2::NewInstance, emscripten::allow_raw_pointers())
    .class_function("GetNumberOfGenerationsFromBaseType", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkLineWidget2::GetNumberOfGenerationsFromBaseType( arg_0.c_str());}))
    .function("GetNumberOfGenerationsFromBase", emscripten::optional_override([](vtkLineWidget2& self, const std::string & arg_0) -> int {  return self.GetNumberOfGenerationsFromBase( arg_0.c_str());}))
    .function("SetEnabled", &vtkLineWidget2::SetEnabled)
    .function("SetRepresentation", &vtkLineWidget2::SetRepresentation, emscripten::allow_raw_pointers())
    .function("GetLineRepresentation", &vtkLineWidget2::GetLineRepresentation, emscripten::allow_raw_pointers())
    .function("CreateDefaultRepresentation", &vtkLineWidget2::CreateDefaultRepresentation)
    .function("SetProcessEvents", &vtkLineWidget2::SetProcessEvents);
}
