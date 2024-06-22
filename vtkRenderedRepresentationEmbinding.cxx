// JavaScript wrapper for vtkRenderedRepresentation with embind 
//
// This file was auto-generated using :
/*
node /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/bin/vtkWrapJavaScript.js \
 @/home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkViewsInfovis.js/vtkViewsInfovis.js.Release.args \
 -o \
 /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkViewsInfovis.js/vtkRenderedRepresentationEmbinding.cxx \
 /home/jmh/github/vtk/Views/Infovis/vtkRenderedRepresentation.h
*/
#include "vtkEmbindSmartPointerTrait.h"
#include <emscripten.h>
#include <string>
#include "vtkVariant.h"
#include "vtkObjectBase.h"
#include "vtkIndent.h"
#include "vtkRenderedRepresentation.h"

template<> void emscripten::internal::raw_destructor<vtkRenderedRepresentation>(vtkRenderedRepresentation * ptr){ ptr->Delete(); }
EMSCRIPTEN_BINDINGS(vtkRenderedRepresentation_class) {
  emscripten::class_<vtkRenderedRepresentation, emscripten::base<vtkDataRepresentation>>("vtkRenderedRepresentation")
    .smart_ptr<vtkSmartPointer<vtkRenderedRepresentation>>("vtkSmartPointer<vtkRenderedRepresentation>")
    .constructor(&vtk::MakeVTKSmartPtr<vtkRenderedRepresentation>)
    .class_function("IsTypeOf", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkRenderedRepresentation::IsTypeOf( arg_0.c_str());}))
    .function("IsA", emscripten::optional_override([](vtkRenderedRepresentation& self, const std::string & arg_0) -> int {  return self.IsA( arg_0.c_str());}))
    .class_function("SafeDownCast", &vtkRenderedRepresentation::SafeDownCast, emscripten::allow_raw_pointers())
    .function("NewInstance", &vtkRenderedRepresentation::NewInstance, emscripten::allow_raw_pointers())
    .class_function("GetNumberOfGenerationsFromBaseType", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkRenderedRepresentation::GetNumberOfGenerationsFromBaseType( arg_0.c_str());}))
    .function("GetNumberOfGenerationsFromBase", emscripten::optional_override([](vtkRenderedRepresentation& self, const std::string & arg_0) -> int {  return self.GetNumberOfGenerationsFromBase( arg_0.c_str());}))
    .function("SetLabelRenderMode", &vtkRenderedRepresentation::SetLabelRenderMode)
    .function("GetLabelRenderMode", &vtkRenderedRepresentation::GetLabelRenderMode);
}
