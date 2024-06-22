// JavaScript wrapper for vtkEllipsoidTensorProbeRepresentation with embind 
//
// This file was auto-generated using :
/*
node /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/bin/vtkWrapJavaScript.js \
 @/home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkInteractionWidgets.js/vtkInteractionWidgets.js.Release.args \
 -o \
 /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkInteractionWidgets.js/vtkEllipsoidTensorProbeRepresentationEmbinding.cxx \
 /home/jmh/github/vtk/Interaction/Widgets/vtkEllipsoidTensorProbeRepresentation.h
*/
#include "vtkEmbindSmartPointerTrait.h"
#include <emscripten.h>
#include <string>
#include "vtkVariant.h"
#include "vtkObjectBase.h"
#include "vtkIndent.h"
#include "vtkViewport.h"
#include "vtkPropCollection.h"
#include "vtkWindow.h"
#include "vtkEllipsoidTensorProbeRepresentation.h"

template<> void emscripten::internal::raw_destructor<vtkEllipsoidTensorProbeRepresentation>(vtkEllipsoidTensorProbeRepresentation * ptr){ ptr->Delete(); }
EMSCRIPTEN_BINDINGS(vtkEllipsoidTensorProbeRepresentation_class) {
  emscripten::class_<vtkEllipsoidTensorProbeRepresentation, emscripten::base<vtkTensorProbeRepresentation>>("vtkEllipsoidTensorProbeRepresentation")
    .smart_ptr<vtkSmartPointer<vtkEllipsoidTensorProbeRepresentation>>("vtkSmartPointer<vtkEllipsoidTensorProbeRepresentation>")
    .constructor(&vtk::MakeVTKSmartPtr<vtkEllipsoidTensorProbeRepresentation>)
    .class_function("IsTypeOf", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkEllipsoidTensorProbeRepresentation::IsTypeOf( arg_0.c_str());}))
    .function("IsA", emscripten::optional_override([](vtkEllipsoidTensorProbeRepresentation& self, const std::string & arg_0) -> int {  return self.IsA( arg_0.c_str());}))
    .class_function("SafeDownCast", &vtkEllipsoidTensorProbeRepresentation::SafeDownCast, emscripten::allow_raw_pointers())
    .function("NewInstance", &vtkEllipsoidTensorProbeRepresentation::NewInstance, emscripten::allow_raw_pointers())
    .class_function("GetNumberOfGenerationsFromBaseType", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkEllipsoidTensorProbeRepresentation::GetNumberOfGenerationsFromBaseType( arg_0.c_str());}))
    .function("GetNumberOfGenerationsFromBase", emscripten::optional_override([](vtkEllipsoidTensorProbeRepresentation& self, const std::string & arg_0) -> int {  return self.GetNumberOfGenerationsFromBase( arg_0.c_str());}))
    .function("BuildRepresentation", &vtkEllipsoidTensorProbeRepresentation::BuildRepresentation)
    .function("RenderOpaqueGeometry", &vtkEllipsoidTensorProbeRepresentation::RenderOpaqueGeometry, emscripten::allow_raw_pointers())
    .function("GetActors", &vtkEllipsoidTensorProbeRepresentation::GetActors, emscripten::allow_raw_pointers())
    .function("ReleaseGraphicsResources", &vtkEllipsoidTensorProbeRepresentation::ReleaseGraphicsResources, emscripten::allow_raw_pointers())
    .function("RegisterPickers", &vtkEllipsoidTensorProbeRepresentation::RegisterPickers);
}
