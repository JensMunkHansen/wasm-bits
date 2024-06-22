// JavaScript wrapper for vtkImageOrthoPlanes with embind 
//
// This file was auto-generated using :
/*
node /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/bin/vtkWrapJavaScript.js \
 @/home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkInteractionWidgets.js/vtkInteractionWidgets.js.Release.args \
 -o \
 /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkInteractionWidgets.js/vtkImageOrthoPlanesEmbinding.cxx \
 /home/jmh/github/vtk/Interaction/Widgets/vtkImageOrthoPlanes.h
*/
#include "vtkEmbindSmartPointerTrait.h"
#include <emscripten.h>
#include <string>
#include "vtkVariant.h"
#include "vtkObjectBase.h"
#include "vtkIndent.h"
#include "vtkImagePlaneWidget.h"
#include "vtkTransform.h"
#include "vtkImageOrthoPlanes.h"

template<> void emscripten::internal::raw_destructor<vtkImageOrthoPlanes>(vtkImageOrthoPlanes * ptr){ ptr->Delete(); }
EMSCRIPTEN_BINDINGS(vtkImageOrthoPlanes_class) {
  emscripten::class_<vtkImageOrthoPlanes, emscripten::base<vtkObject>>("vtkImageOrthoPlanes")
    .smart_ptr<vtkSmartPointer<vtkImageOrthoPlanes>>("vtkSmartPointer<vtkImageOrthoPlanes>")
    .constructor(&vtk::MakeAvtkSmartPointer<vtkImageOrthoPlanes>)
    .class_function("IsTypeOf", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkImageOrthoPlanes::IsTypeOf( arg_0.c_str());}))
    .function("IsA", emscripten::optional_override([](vtkImageOrthoPlanes& self, const std::string & arg_0) -> int {  return self.IsA( arg_0.c_str());}))
    .class_function("SafeDownCast", &vtkImageOrthoPlanes::SafeDownCast, emscripten::allow_raw_pointers())
    .function("NewInstance", &vtkImageOrthoPlanes::NewInstance, emscripten::allow_raw_pointers())
    .class_function("GetNumberOfGenerationsFromBaseType", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkImageOrthoPlanes::GetNumberOfGenerationsFromBaseType( arg_0.c_str());}))
    .function("GetNumberOfGenerationsFromBase", emscripten::optional_override([](vtkImageOrthoPlanes& self, const std::string & arg_0) -> int {  return self.GetNumberOfGenerationsFromBase( arg_0.c_str());}))
    .function("SetPlane", &vtkImageOrthoPlanes::SetPlane, emscripten::allow_raw_pointers())
    .function("GetPlane", &vtkImageOrthoPlanes::GetPlane, emscripten::allow_raw_pointers())
    .function("ResetPlanes", &vtkImageOrthoPlanes::ResetPlanes)
    .function("GetTransform", &vtkImageOrthoPlanes::GetTransform, emscripten::allow_raw_pointers())
    .function("HandlePlaneEvent", &vtkImageOrthoPlanes::HandlePlaneEvent, emscripten::allow_raw_pointers());
}
