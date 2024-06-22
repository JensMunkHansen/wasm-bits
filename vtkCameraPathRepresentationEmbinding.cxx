// JavaScript wrapper for vtkCameraPathRepresentation with embind 
//
// This file was auto-generated using :
/*
node /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/bin/vtkWrapJavaScript.js \
 @/home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkInteractionWidgets.js/vtkInteractionWidgets.js.Release.args \
 -o \
 /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkInteractionWidgets.js/vtkCameraPathRepresentationEmbinding.cxx \
 /home/jmh/github/vtk/Interaction/Widgets/vtkCameraPathRepresentation.h
*/
#include "vtkEmbindSmartPointerTrait.h"
#include <emscripten.h>
#include <string>
#include "vtkVariant.h"
#include "vtkObjectBase.h"
#include "vtkIndent.h"
#include "vtkParametricSpline.h"
#include "vtkPoints.h"
#include "vtkCamera.h"
#include "vtkCameraPathRepresentation.h"

template<> void emscripten::internal::raw_destructor<vtkCameraPathRepresentation>(vtkCameraPathRepresentation * ptr){ ptr->Delete(); }
EMSCRIPTEN_BINDINGS(vtkCameraPathRepresentation_class) {
  emscripten::class_<vtkCameraPathRepresentation, emscripten::base<vtkAbstractSplineRepresentation>>("vtkCameraPathRepresentation")
    .smart_ptr<vtkSmartPointer<vtkCameraPathRepresentation>>("vtkSmartPointer<vtkCameraPathRepresentation>")
    .constructor(&vtk::MakeVTKSmartPtr<vtkCameraPathRepresentation>)
    .class_function("IsTypeOf", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkCameraPathRepresentation::IsTypeOf( arg_0.c_str());}))
    .function("IsA", emscripten::optional_override([](vtkCameraPathRepresentation& self, const std::string & arg_0) -> int {  return self.IsA( arg_0.c_str());}))
    .class_function("SafeDownCast", &vtkCameraPathRepresentation::SafeDownCast, emscripten::allow_raw_pointers())
    .function("NewInstance", &vtkCameraPathRepresentation::NewInstance, emscripten::allow_raw_pointers())
    .class_function("GetNumberOfGenerationsFromBaseType", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkCameraPathRepresentation::GetNumberOfGenerationsFromBaseType( arg_0.c_str());}))
    .function("GetNumberOfGenerationsFromBase", emscripten::optional_override([](vtkCameraPathRepresentation& self, const std::string & arg_0) -> int {  return self.GetNumberOfGenerationsFromBase( arg_0.c_str());}))
    .function("SetDirectional", &vtkCameraPathRepresentation::SetDirectional)
    .function("SetNumberOfHandles", &vtkCameraPathRepresentation::SetNumberOfHandles)
    .function("SetParametricSpline", &vtkCameraPathRepresentation::SetParametricSpline, emscripten::allow_raw_pointers())
    .function("InitializeHandles", &vtkCameraPathRepresentation::InitializeHandles, emscripten::allow_raw_pointers())
    .function("BuildRepresentation", &vtkCameraPathRepresentation::BuildRepresentation)
    .function("AddCameraAt", &vtkCameraPathRepresentation::AddCameraAt, emscripten::allow_raw_pointers())
    .function("DeleteCameraAt", &vtkCameraPathRepresentation::DeleteCameraAt);
}
