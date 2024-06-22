// JavaScript wrapper for vtkSplineWidget2 with embind 
//
// This file was auto-generated using :
/*
node /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/bin/vtkWrapJavaScript.js \
 @/home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkInteractionWidgets.js/vtkInteractionWidgets.js.Release.args \
 -o \
 /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkInteractionWidgets.js/vtkSplineWidget2Embinding.cxx \
 /home/jmh/github/vtk/Interaction/Widgets/vtkSplineWidget2.h
*/
#include "vtkEmbindSmartPointerTrait.h"
#include <emscripten.h>
#include <string>
#include "vtkVariant.h"
#include "vtkObjectBase.h"
#include "vtkIndent.h"
#include "vtkSplineRepresentation.h"
#include "vtkSplineWidget2.h"

EMSCRIPTEN_BINDINGS(vtkInteractionWidgets_vtkSplineWidget2_class_enums) {
}
template<> void emscripten::internal::raw_destructor<vtkSplineWidget2>(vtkSplineWidget2 * ptr){ ptr->Delete(); }
EMSCRIPTEN_BINDINGS(vtkSplineWidget2_class) {
  emscripten::class_<vtkSplineWidget2, emscripten::base<vtkAbstractWidget>>("vtkSplineWidget2")
    .smart_ptr<vtkSmartPointer<vtkSplineWidget2>>("vtkSmartPointer<vtkSplineWidget2>")
    .constructor(&vtk::MakeAvtkSmartPointer<vtkSplineWidget2>)
    .class_function("IsTypeOf", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkSplineWidget2::IsTypeOf( arg_0.c_str());}))
    .function("IsA", emscripten::optional_override([](vtkSplineWidget2& self, const std::string & arg_0) -> int {  return self.IsA( arg_0.c_str());}))
    .class_function("SafeDownCast", &vtkSplineWidget2::SafeDownCast, emscripten::allow_raw_pointers())
    .function("NewInstance", &vtkSplineWidget2::NewInstance, emscripten::allow_raw_pointers())
    .class_function("GetNumberOfGenerationsFromBaseType", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkSplineWidget2::GetNumberOfGenerationsFromBaseType( arg_0.c_str());}))
    .function("GetNumberOfGenerationsFromBase", emscripten::optional_override([](vtkSplineWidget2& self, const std::string & arg_0) -> int {  return self.GetNumberOfGenerationsFromBase( arg_0.c_str());}))
    .function("SetRepresentation", &vtkSplineWidget2::SetRepresentation, emscripten::allow_raw_pointers())
    .function("SetEnabled", &vtkSplineWidget2::SetEnabled)
    .function("CreateDefaultRepresentation", &vtkSplineWidget2::CreateDefaultRepresentation);
}
