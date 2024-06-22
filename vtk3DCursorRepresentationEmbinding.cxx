// JavaScript wrapper for vtk3DCursorRepresentation with embind 
//
// This file was auto-generated using :
/*
node /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/bin/vtkWrapJavaScript.js \
 @/home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkInteractionWidgets.js/vtkInteractionWidgets.js.Release.args \
 -o \
 /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkInteractionWidgets.js/vtk3DCursorRepresentationEmbinding.cxx \
 /home/jmh/github/vtk/Interaction/Widgets/vtk3DCursorRepresentation.h
*/
#include "vtkEmbindSmartPointerTrait.h"
#include <emscripten.h>
#include <string>
#include "vtkVariant.h"
#include "vtkObjectBase.h"
#include "vtkIndent.h"
#include "vtkWindow.h"
#include "vtkViewport.h"
#include "vtkActor.h"
#include "vtk3DCursorRepresentation.h"

EMSCRIPTEN_BINDINGS(vtkInteractionWidgets_vtk3DCursorRepresentation_class_enums) {
}
template<> void emscripten::internal::raw_destructor<vtk3DCursorRepresentation>(vtk3DCursorRepresentation * ptr){ ptr->Delete(); }
EMSCRIPTEN_BINDINGS(vtk3DCursorRepresentation_class) {
  using CursorShape=vtk3DCursorRepresentation::CursorShape;
  emscripten::class_<vtk3DCursorRepresentation, emscripten::base<vtkWidgetRepresentation>>("vtk3DCursorRepresentation")
    .smart_ptr<vtkSmartPointer<vtk3DCursorRepresentation>>("vtkSmartPointer<vtk3DCursorRepresentation>")
    .constructor(&vtk::MakeVTKSmartPtr<vtk3DCursorRepresentation>)
    .class_function("IsTypeOf", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtk3DCursorRepresentation::IsTypeOf( arg_0.c_str());}))
    .function("IsA", emscripten::optional_override([](vtk3DCursorRepresentation& self, const std::string & arg_0) -> int {  return self.IsA( arg_0.c_str());}))
    .class_function("SafeDownCast", &vtk3DCursorRepresentation::SafeDownCast, emscripten::allow_raw_pointers())
    .function("NewInstance", &vtk3DCursorRepresentation::NewInstance, emscripten::allow_raw_pointers())
    .class_function("GetNumberOfGenerationsFromBaseType", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtk3DCursorRepresentation::GetNumberOfGenerationsFromBaseType( arg_0.c_str());}))
    .function("GetNumberOfGenerationsFromBase", emscripten::optional_override([](vtk3DCursorRepresentation& self, const std::string & arg_0) -> int {  return self.GetNumberOfGenerationsFromBase( arg_0.c_str());}))
    .function("BuildRepresentation", &vtk3DCursorRepresentation::BuildRepresentation)
    .function("ReleaseGraphicsResources", &vtk3DCursorRepresentation::ReleaseGraphicsResources, emscripten::allow_raw_pointers())
    .function("RenderOpaqueGeometry", &vtk3DCursorRepresentation::RenderOpaqueGeometry, emscripten::allow_raw_pointers())
    .function("SetCursorShape", &vtk3DCursorRepresentation::SetCursorShape)
    .function("GetShape", &vtk3DCursorRepresentation::GetShape)
    .function("SetCustomCursor", &vtk3DCursorRepresentation::SetCustomCursor, emscripten::allow_raw_pointers())
    .function("GetCustomCursor", &vtk3DCursorRepresentation::GetCustomCursor, emscripten::allow_raw_pointers());
}
EMSCRIPTEN_BINDINGS(vtkInteractionWidgets_vtk3DCursorRepresentation_0_2_constants) {
    typedef vtk3DCursorRepresentation::CursorShape cxx_enum_type;

  const struct { const char *name; cxx_enum_type value; }
    constants[3] = {
      { "vtk3DCursorRepresentation_CursorShape_CROSS_SHAPE", vtk3DCursorRepresentation::CROSS_SHAPE },
      { "vtk3DCursorRepresentation_CursorShape_SPHERE_SHAPE", vtk3DCursorRepresentation::SPHERE_SHAPE },
      { "vtk3DCursorRepresentation_CursorShape_CUSTOM_SHAPE", vtk3DCursorRepresentation::CUSTOM_SHAPE },
  };
  for (int c = 0; c < 3; c++)
  {
    emscripten::constant(constants[c].name, static_cast<int>(constants[c].value));
  }
}
