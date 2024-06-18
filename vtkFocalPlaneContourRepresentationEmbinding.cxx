// JavaScript wrapper for vtkFocalPlaneContourRepresentation with embind 
//
// This file was auto-generated using :
/*
node /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/bin/vtkWrapJavaScript.js \
 @/home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkInteractionWidgets.js/vtkInteractionWidgets.js.Release.args \
 -o \
 /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkInteractionWidgets.js/vtkFocalPlaneContourRepresentationEmbinding.cxx \
 /home/jmh/github/vtk/Interaction/Widgets/vtkFocalPlaneContourRepresentation.h
*/
#include "vtkEmbindSmartPointerTrait.h"
#include <emscripten.h>
#include <string>
#include "vtkVariant.h"
#include "vtkObjectBase.h"
#include "vtkIndent.h"
#include "vtkFocalPlaneContourRepresentation.h"

template<> void emscripten::internal::raw_destructor<vtkFocalPlaneContourRepresentation>(vtkFocalPlaneContourRepresentation * ptr){ ptr->Delete(); }
EMSCRIPTEN_BINDINGS(vtkFocalPlaneContourRepresentation_class) {
  emscripten::class_<vtkFocalPlaneContourRepresentation, emscripten::base<vtkContourRepresentation>>("vtkFocalPlaneContourRepresentation")
    .class_function("IsTypeOf", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkFocalPlaneContourRepresentation::IsTypeOf( arg_0.c_str());}))
    .function("IsA", emscripten::optional_override([](vtkFocalPlaneContourRepresentation& self, const std::string & arg_0) -> int {  return self.IsA( arg_0.c_str());}))
    .class_function("SafeDownCast", &vtkFocalPlaneContourRepresentation::SafeDownCast, emscripten::allow_raw_pointers())
    .function("NewInstance", &vtkFocalPlaneContourRepresentation::NewInstance, emscripten::allow_raw_pointers())
    .class_function("GetNumberOfGenerationsFromBaseType", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkFocalPlaneContourRepresentation::GetNumberOfGenerationsFromBaseType( arg_0.c_str());}))
    .function("GetNumberOfGenerationsFromBase", emscripten::optional_override([](vtkFocalPlaneContourRepresentation& self, const std::string & arg_0) -> int {  return self.GetNumberOfGenerationsFromBase( arg_0.c_str());}))
    .function("UpdateContourWorldPositionsBasedOnDisplayPositions", &vtkFocalPlaneContourRepresentation::UpdateContourWorldPositionsBasedOnDisplayPositions)
    .function("UpdateContour", &vtkFocalPlaneContourRepresentation::UpdateContour)
    .function("UpdateLines", &vtkFocalPlaneContourRepresentation::UpdateLines);
}
