// JavaScript wrapper for vtkPolyLineSource with embind 
//
// This file was auto-generated using :
/*
node /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/bin/vtkWrapJavaScript.js \
 @/home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkFiltersSources.js/vtkFiltersSources.js.Release.args \
 -o \
 /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkFiltersSources.js/vtkPolyLineSourceEmbinding.cxx \
 /home/jmh/github/vtk/Filters/Sources/vtkPolyLineSource.h
*/
#include "vtkEmbindSmartPointerTrait.h"
#include <emscripten.h>
#include <string>
#include "vtkVariant.h"
#include "vtkObjectBase.h"
#include "vtkIndent.h"
#include "vtkPolyLineSource.h"

template<> void emscripten::internal::raw_destructor<vtkPolyLineSource>(vtkPolyLineSource * ptr){ ptr->Delete(); }
EMSCRIPTEN_BINDINGS(vtkPolyLineSource_class) {
  emscripten::class_<vtkPolyLineSource, emscripten::base<vtkPolyPointSource>>("vtkPolyLineSource")
    .smart_ptr<vtkSmartPointer<vtkPolyLineSource>>("vtkSmartPointer<vtkPolyLineSource>")
    .constructor(&vtk::MakeAvtkSmartPointer<vtkPolyLineSource>)
    .class_function("IsTypeOf", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkPolyLineSource::IsTypeOf( arg_0.c_str());}))
    .function("IsA", emscripten::optional_override([](vtkPolyLineSource& self, const std::string & arg_0) -> int {  return self.IsA( arg_0.c_str());}))
    .class_function("SafeDownCast", &vtkPolyLineSource::SafeDownCast, emscripten::allow_raw_pointers())
    .function("NewInstance", &vtkPolyLineSource::NewInstance, emscripten::allow_raw_pointers())
    .class_function("GetNumberOfGenerationsFromBaseType", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkPolyLineSource::GetNumberOfGenerationsFromBaseType( arg_0.c_str());}))
    .function("GetNumberOfGenerationsFromBase", emscripten::optional_override([](vtkPolyLineSource& self, const std::string & arg_0) -> int {  return self.GetNumberOfGenerationsFromBase( arg_0.c_str());}))
    .function("SetClosed", &vtkPolyLineSource::SetClosed)
    .function("GetClosed", &vtkPolyLineSource::GetClosed)
    .function("ClosedOn", &vtkPolyLineSource::ClosedOn)
    .function("ClosedOff", &vtkPolyLineSource::ClosedOff);
}
