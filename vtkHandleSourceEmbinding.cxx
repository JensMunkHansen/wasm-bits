// JavaScript wrapper for vtkHandleSource with embind 
//
// This file was auto-generated using :
/*
node /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/bin/vtkWrapJavaScript.js \
 @/home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkFiltersSources.js/vtkFiltersSources.js.Release.args \
 -o \
 /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkFiltersSources.js/vtkHandleSourceEmbinding.cxx \
 /home/jmh/github/vtk/Filters/Sources/vtkHandleSource.h
*/
#include "vtkEmbindSmartPointerTrait.h"
#include <emscripten.h>
#include <string>
#include "vtkVariant.h"
#include "vtkObjectBase.h"
#include "vtkIndent.h"
#include "vtkHandleSource.h"

template<> void emscripten::internal::raw_destructor<vtkHandleSource>(vtkHandleSource * ptr){ ptr->Delete(); }
EMSCRIPTEN_BINDINGS(vtkHandleSource_class) {
  emscripten::class_<vtkHandleSource, emscripten::base<vtkPolyDataAlgorithm>>("vtkHandleSource")
    .class_function("IsTypeOf", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkHandleSource::IsTypeOf( arg_0.c_str());}))
    .function("IsA", emscripten::optional_override([](vtkHandleSource& self, const std::string & arg_0) -> int {  return self.IsA( arg_0.c_str());}))
    .class_function("SafeDownCast", &vtkHandleSource::SafeDownCast, emscripten::allow_raw_pointers())
    .function("NewInstance", &vtkHandleSource::NewInstance, emscripten::allow_raw_pointers())
    .class_function("GetNumberOfGenerationsFromBaseType", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkHandleSource::GetNumberOfGenerationsFromBaseType( arg_0.c_str());}))
    .function("GetNumberOfGenerationsFromBase", emscripten::optional_override([](vtkHandleSource& self, const std::string & arg_0) -> int {  return self.GetNumberOfGenerationsFromBase( arg_0.c_str());}))
    .function("SetDirectional", &vtkHandleSource::SetDirectional)
    .function("GetDirectional", &vtkHandleSource::GetDirectional)
    .function("DirectionalOn", &vtkHandleSource::DirectionalOn)
    .function("DirectionalOff", &vtkHandleSource::DirectionalOff)
    .function("SetSize", &vtkHandleSource::SetSize)
    .function("GetSize", &vtkHandleSource::GetSize);
}
