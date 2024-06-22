// JavaScript wrapper for vtkEnSight6Reader with embind 
//
// This file was auto-generated using :
/*
node /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/bin/vtkWrapJavaScript.js \
 @/home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkIOEnSight.js/vtkIOEnSight.js.Release.args \
 -o \
 /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkIOEnSight.js/vtkEnSight6ReaderEmbinding.cxx \
 /home/jmh/github/vtk/IO/EnSight/vtkEnSight6Reader.h
*/
#include "vtkEmbindSmartPointerTrait.h"
#include <emscripten.h>
#include <string>
#include "vtkVariant.h"
#include "vtkObjectBase.h"
#include "vtkIndent.h"
#include "vtkEnSight6Reader.h"

template<> void emscripten::internal::raw_destructor<vtkEnSight6Reader>(vtkEnSight6Reader * ptr){ ptr->Delete(); }
EMSCRIPTEN_BINDINGS(vtkEnSight6Reader_class) {
  emscripten::class_<vtkEnSight6Reader, emscripten::base<vtkEnSightReader>>("vtkEnSight6Reader")
    .smart_ptr<vtkSmartPointer<vtkEnSight6Reader>>("vtkSmartPointer<vtkEnSight6Reader>")
    .constructor(&vtk::MakeVTKSmartPtr<vtkEnSight6Reader>)
    .class_function("IsTypeOf", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkEnSight6Reader::IsTypeOf( arg_0.c_str());}))
    .function("IsA", emscripten::optional_override([](vtkEnSight6Reader& self, const std::string & arg_0) -> int {  return self.IsA( arg_0.c_str());}))
    .class_function("SafeDownCast", &vtkEnSight6Reader::SafeDownCast, emscripten::allow_raw_pointers())
    .function("NewInstance", &vtkEnSight6Reader::NewInstance, emscripten::allow_raw_pointers())
    .class_function("GetNumberOfGenerationsFromBaseType", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkEnSight6Reader::GetNumberOfGenerationsFromBaseType( arg_0.c_str());}))
    .function("GetNumberOfGenerationsFromBase", emscripten::optional_override([](vtkEnSight6Reader& self, const std::string & arg_0) -> int {  return self.GetNumberOfGenerationsFromBase( arg_0.c_str());}));
}
