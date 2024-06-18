// JavaScript wrapper for vtkLogoRepresentation with embind 
//
// This file was auto-generated using :
/*
node /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/bin/vtkWrapJavaScript.js \
 @/home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkInteractionWidgets.js/vtkInteractionWidgets.js.Release.args \
 -o \
 /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkInteractionWidgets.js/vtkLogoRepresentationEmbinding.cxx \
 /home/jmh/github/vtk/Interaction/Widgets/vtkLogoRepresentation.h
*/
#include "vtkEmbindSmartPointerTrait.h"
#include <emscripten.h>
#include <string>
#include "vtkVariant.h"
#include "vtkObjectBase.h"
#include "vtkIndent.h"
#include "vtkImageData.h"
#include "vtkProperty2D.h"
#include "vtkPropCollection.h"
#include "vtkWindow.h"
#include "vtkViewport.h"
#include "vtkLogoRepresentation.h"

template<> void emscripten::internal::raw_destructor<vtkLogoRepresentation>(vtkLogoRepresentation * ptr){ ptr->Delete(); }
EMSCRIPTEN_BINDINGS(vtkLogoRepresentation_class) {
  emscripten::class_<vtkLogoRepresentation, emscripten::base<vtkBorderRepresentation>>("vtkLogoRepresentation")
    .smart_ptr<vtkSmartPointer<vtkLogoRepresentation>>("vtkSmartPointer<vtkLogoRepresentation>")
    .constructor(&vtk::MakeAvtkSmartPointer<vtkLogoRepresentation>)
    .class_function("IsTypeOf", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkLogoRepresentation::IsTypeOf( arg_0.c_str());}))
    .function("IsA", emscripten::optional_override([](vtkLogoRepresentation& self, const std::string & arg_0) -> int {  return self.IsA( arg_0.c_str());}))
    .class_function("SafeDownCast", &vtkLogoRepresentation::SafeDownCast, emscripten::allow_raw_pointers())
    .function("NewInstance", &vtkLogoRepresentation::NewInstance, emscripten::allow_raw_pointers())
    .class_function("GetNumberOfGenerationsFromBaseType", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkLogoRepresentation::GetNumberOfGenerationsFromBaseType( arg_0.c_str());}))
    .function("GetNumberOfGenerationsFromBase", emscripten::optional_override([](vtkLogoRepresentation& self, const std::string & arg_0) -> int {  return self.GetNumberOfGenerationsFromBase( arg_0.c_str());}))
    .function("SetImage", &vtkLogoRepresentation::SetImage, emscripten::allow_raw_pointers())
    .function("GetImage", &vtkLogoRepresentation::GetImage, emscripten::allow_raw_pointers())
    .function("SetImageProperty", &vtkLogoRepresentation::SetImageProperty, emscripten::allow_raw_pointers())
    .function("GetImageProperty", &vtkLogoRepresentation::GetImageProperty, emscripten::allow_raw_pointers())
    .function("BuildRepresentation", &vtkLogoRepresentation::BuildRepresentation)
    .function("GetActors2D", &vtkLogoRepresentation::GetActors2D, emscripten::allow_raw_pointers())
    .function("ReleaseGraphicsResources", &vtkLogoRepresentation::ReleaseGraphicsResources, emscripten::allow_raw_pointers())
    .function("RenderOverlay", &vtkLogoRepresentation::RenderOverlay, emscripten::allow_raw_pointers());
}
