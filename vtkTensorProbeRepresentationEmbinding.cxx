// JavaScript wrapper for vtkTensorProbeRepresentation with embind 
//
// This file was auto-generated using :
/*
node /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/bin/vtkWrapJavaScript.js \
 @/home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkInteractionWidgets.js/vtkInteractionWidgets.js.Release.args \
 -o \
 /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkInteractionWidgets.js/vtkTensorProbeRepresentationEmbinding.cxx \
 /home/jmh/github/vtk/Interaction/Widgets/vtkTensorProbeRepresentation.h
*/
#include "vtkEmbindSmartPointerTrait.h"
#include <emscripten.h>
#include <string>
#include "vtkVariant.h"
#include "vtkObjectBase.h"
#include "vtkIndent.h"
#include "vtkViewport.h"
#include "vtkPolyData.h"
#include "vtkPropCollection.h"
#include "vtkWindow.h"
#include "vtkTensorProbeRepresentation.h"

template<> void emscripten::internal::raw_destructor<vtkTensorProbeRepresentation>(vtkTensorProbeRepresentation * ptr){ ptr->Delete(); }
EMSCRIPTEN_BINDINGS(vtkTensorProbeRepresentation_class) {
  emscripten::class_<vtkTensorProbeRepresentation, emscripten::base<vtkWidgetRepresentation>>("vtkTensorProbeRepresentation")
    .class_function("IsTypeOf", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkTensorProbeRepresentation::IsTypeOf( arg_0.c_str());}))
    .function("IsA", emscripten::optional_override([](vtkTensorProbeRepresentation& self, const std::string & arg_0) -> int {  return self.IsA( arg_0.c_str());}))
    .class_function("SafeDownCast", &vtkTensorProbeRepresentation::SafeDownCast, emscripten::allow_raw_pointers())
    .function("NewInstance", &vtkTensorProbeRepresentation::NewInstance, emscripten::allow_raw_pointers())
    .class_function("GetNumberOfGenerationsFromBaseType", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkTensorProbeRepresentation::GetNumberOfGenerationsFromBaseType( arg_0.c_str());}))
    .function("GetNumberOfGenerationsFromBase", emscripten::optional_override([](vtkTensorProbeRepresentation& self, const std::string & arg_0) -> int {  return self.GetNumberOfGenerationsFromBase( arg_0.c_str());}))
    .function("BuildRepresentation", &vtkTensorProbeRepresentation::BuildRepresentation)
    .function("RenderOpaqueGeometry", &vtkTensorProbeRepresentation::RenderOpaqueGeometry, emscripten::allow_raw_pointers())
    .function("SetProbePosition", emscripten::select_overload<void(vtkTensorProbeRepresentation&, double, double, double)>([](vtkTensorProbeRepresentation& self, double arg_0, double arg_1, double arg_2) -> void { return self.SetProbePosition( arg_0, arg_1, arg_2); }))
    .function("SetProbeCellId", &vtkTensorProbeRepresentation::SetProbeCellId)
    .function("GetProbeCellId", &vtkTensorProbeRepresentation::GetProbeCellId)
    .function("SetTrajectory", &vtkTensorProbeRepresentation::SetTrajectory, emscripten::allow_raw_pointers())
    .function("Initialize", &vtkTensorProbeRepresentation::Initialize)
    .function("GetActors", &vtkTensorProbeRepresentation::GetActors, emscripten::allow_raw_pointers())
    .function("ReleaseGraphicsResources", &vtkTensorProbeRepresentation::ReleaseGraphicsResources, emscripten::allow_raw_pointers());
}
