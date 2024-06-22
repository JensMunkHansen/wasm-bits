// JavaScript wrapper for vtkSplineRepresentation with embind 
//
// This file was auto-generated using :
/*
node /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/bin/vtkWrapJavaScript.js \
 @/home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkInteractionWidgets.js/vtkInteractionWidgets.js.Release.args \
 -o \
 /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkInteractionWidgets.js/vtkSplineRepresentationEmbinding.cxx \
 /home/jmh/github/vtk/Interaction/Widgets/vtkSplineRepresentation.h
*/
#include "vtkEmbindSmartPointerTrait.h"
#include <emscripten.h>
#include <string>
#include "vtkVariant.h"
#include "vtkObjectBase.h"
#include "vtkIndent.h"
#include "vtkParametricSpline.h"
#include "vtkPoints.h"
#include "vtkSplineRepresentation.h"

template<> void emscripten::internal::raw_destructor<vtkSplineRepresentation>(vtkSplineRepresentation * ptr){ ptr->Delete(); }
EMSCRIPTEN_BINDINGS(vtkSplineRepresentation_class) {
  emscripten::class_<vtkSplineRepresentation, emscripten::base<vtkAbstractSplineRepresentation>>("vtkSplineRepresentation")
    .smart_ptr<vtkSmartPointer<vtkSplineRepresentation>>("vtkSmartPointer<vtkSplineRepresentation>")
    .constructor(&vtk::MakeAvtkSmartPointer<vtkSplineRepresentation>)
    .class_function("IsTypeOf", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkSplineRepresentation::IsTypeOf( arg_0.c_str());}))
    .function("IsA", emscripten::optional_override([](vtkSplineRepresentation& self, const std::string & arg_0) -> int {  return self.IsA( arg_0.c_str());}))
    .class_function("SafeDownCast", &vtkSplineRepresentation::SafeDownCast, emscripten::allow_raw_pointers())
    .function("NewInstance", &vtkSplineRepresentation::NewInstance, emscripten::allow_raw_pointers())
    .class_function("GetNumberOfGenerationsFromBaseType", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkSplineRepresentation::GetNumberOfGenerationsFromBaseType( arg_0.c_str());}))
    .function("GetNumberOfGenerationsFromBase", emscripten::optional_override([](vtkSplineRepresentation& self, const std::string & arg_0) -> int {  return self.GetNumberOfGenerationsFromBase( arg_0.c_str());}))
    .function("SetNumberOfHandles", &vtkSplineRepresentation::SetNumberOfHandles)
    .function("SetParametricSpline", &vtkSplineRepresentation::SetParametricSpline, emscripten::allow_raw_pointers())
    .function("InitializeHandles", &vtkSplineRepresentation::InitializeHandles, emscripten::allow_raw_pointers())
    .function("BuildRepresentation", &vtkSplineRepresentation::BuildRepresentation);
}
