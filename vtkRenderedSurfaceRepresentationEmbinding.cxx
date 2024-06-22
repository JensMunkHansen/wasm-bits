// JavaScript wrapper for vtkRenderedSurfaceRepresentation with embind 
//
// This file was auto-generated using :
/*
node /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/bin/vtkWrapJavaScript.js \
 @/home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkViewsInfovis.js/vtkViewsInfovis.js.Release.args \
 -o \
 /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkViewsInfovis.js/vtkRenderedSurfaceRepresentationEmbinding.cxx \
 /home/jmh/github/vtk/Views/Infovis/vtkRenderedSurfaceRepresentation.h
*/
#include "vtkEmbindSmartPointerTrait.h"
#include <emscripten.h>
#include <string>
#include "vtkVariant.h"
#include "vtkObjectBase.h"
#include "vtkIndent.h"
#include "vtkViewTheme.h"
#include "vtkRenderedSurfaceRepresentation.h"

template<> void emscripten::internal::raw_destructor<vtkRenderedSurfaceRepresentation>(vtkRenderedSurfaceRepresentation * ptr){ ptr->Delete(); }
EMSCRIPTEN_BINDINGS(vtkRenderedSurfaceRepresentation_class) {
  emscripten::class_<vtkRenderedSurfaceRepresentation, emscripten::base<vtkRenderedRepresentation>>("vtkRenderedSurfaceRepresentation")
    .smart_ptr<vtkSmartPointer<vtkRenderedSurfaceRepresentation>>("vtkSmartPointer<vtkRenderedSurfaceRepresentation>")
    .constructor(&vtk::MakeVTKSmartPtr<vtkRenderedSurfaceRepresentation>)
    .class_function("IsTypeOf", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkRenderedSurfaceRepresentation::IsTypeOf( arg_0.c_str());}))
    .function("IsA", emscripten::optional_override([](vtkRenderedSurfaceRepresentation& self, const std::string & arg_0) -> int {  return self.IsA( arg_0.c_str());}))
    .class_function("SafeDownCast", &vtkRenderedSurfaceRepresentation::SafeDownCast, emscripten::allow_raw_pointers())
    .function("NewInstance", &vtkRenderedSurfaceRepresentation::NewInstance, emscripten::allow_raw_pointers())
    .class_function("GetNumberOfGenerationsFromBaseType", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkRenderedSurfaceRepresentation::GetNumberOfGenerationsFromBaseType( arg_0.c_str());}))
    .function("GetNumberOfGenerationsFromBase", emscripten::optional_override([](vtkRenderedSurfaceRepresentation& self, const std::string & arg_0) -> int {  return self.GetNumberOfGenerationsFromBase( arg_0.c_str());}))
    .function("SetCellColorArrayName", emscripten::optional_override([](vtkRenderedSurfaceRepresentation& self, const std::string & arg_0) -> void {  return self.SetCellColorArrayName( arg_0.c_str());}))
    .function("GetCellColorArrayName", emscripten::optional_override([](vtkRenderedSurfaceRepresentation& self) -> std::string {  return self.GetCellColorArrayName();}))
    .function("ApplyViewTheme", &vtkRenderedSurfaceRepresentation::ApplyViewTheme, emscripten::allow_raw_pointers());
}
