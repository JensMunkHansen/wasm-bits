// JavaScript wrapper for vtkViewUpdater with embind 
//
// This file was auto-generated using :
/*
node /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/bin/vtkWrapJavaScript.js \
 @/home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkViewsInfovis.js/vtkViewsInfovis.js.Release.args \
 -o \
 /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkViewsInfovis.js/vtkViewUpdaterEmbinding.cxx \
 /home/jmh/github/vtk/Views/Infovis/vtkViewUpdater.h
*/
#include "vtkEmbindSmartPointerTrait.h"
#include <emscripten.h>
#include <string>
#include "vtkVariant.h"
#include "vtkObjectBase.h"
#include "vtkIndent.h"
#include "vtkView.h"
#include "vtkAnnotationLink.h"
#include "vtkViewUpdater.h"

template<> void emscripten::internal::raw_destructor<vtkViewUpdater>(vtkViewUpdater * ptr){ ptr->Delete(); }
EMSCRIPTEN_BINDINGS(vtkViewUpdater_class) {
  emscripten::class_<vtkViewUpdater, emscripten::base<vtkObject>>("vtkViewUpdater")
    .smart_ptr<vtkSmartPointer<vtkViewUpdater>>("vtkSmartPointer<vtkViewUpdater>")
    .constructor(&vtk::MakeVTKSmartPtr<vtkViewUpdater>)
    .class_function("IsTypeOf", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkViewUpdater::IsTypeOf( arg_0.c_str());}))
    .function("IsA", emscripten::optional_override([](vtkViewUpdater& self, const std::string & arg_0) -> int {  return self.IsA( arg_0.c_str());}))
    .class_function("SafeDownCast", &vtkViewUpdater::SafeDownCast, emscripten::allow_raw_pointers())
    .function("NewInstance", &vtkViewUpdater::NewInstance, emscripten::allow_raw_pointers())
    .class_function("GetNumberOfGenerationsFromBaseType", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkViewUpdater::GetNumberOfGenerationsFromBaseType( arg_0.c_str());}))
    .function("GetNumberOfGenerationsFromBase", emscripten::optional_override([](vtkViewUpdater& self, const std::string & arg_0) -> int {  return self.GetNumberOfGenerationsFromBase( arg_0.c_str());}))
    .function("AddView", &vtkViewUpdater::AddView, emscripten::allow_raw_pointers())
    .function("RemoveView", &vtkViewUpdater::RemoveView, emscripten::allow_raw_pointers())
    .function("AddAnnotationLink", &vtkViewUpdater::AddAnnotationLink, emscripten::allow_raw_pointers());
}
