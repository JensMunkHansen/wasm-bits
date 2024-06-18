// JavaScript wrapper for vtkStreamSurface with embind 
//
// This file was auto-generated using :
/*
node /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/bin/vtkWrapJavaScript.js \
 @/home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkFiltersFlowPaths.js/vtkFiltersFlowPaths.js.Release.args \
 -o \
 /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkFiltersFlowPaths.js/vtkStreamSurfaceEmbinding.cxx \
 /home/jmh/github/vtk/Filters/FlowPaths/vtkStreamSurface.h
*/
#include "vtkEmbindSmartPointerTrait.h"
#include <emscripten.h>
#include <string>
#include "vtkVariant.h"
#include "vtkObjectBase.h"
#include "vtkIndent.h"
#include "vtkStreamSurface.h"

template<> void emscripten::internal::raw_destructor<vtkStreamSurface>(vtkStreamSurface * ptr){ ptr->Delete(); }
EMSCRIPTEN_BINDINGS(vtkStreamSurface_class) {
  emscripten::class_<vtkStreamSurface, emscripten::base<vtkStreamTracer>>("vtkStreamSurface")
    .smart_ptr<vtkSmartPointer<vtkStreamSurface>>("vtkSmartPointer<vtkStreamSurface>")
    .constructor(&vtk::MakeAvtkSmartPointer<vtkStreamSurface>)
    .class_function("IsTypeOf", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkStreamSurface::IsTypeOf( arg_0.c_str());}))
    .function("IsA", emscripten::optional_override([](vtkStreamSurface& self, const std::string & arg_0) -> int {  return self.IsA( arg_0.c_str());}))
    .class_function("SafeDownCast", &vtkStreamSurface::SafeDownCast, emscripten::allow_raw_pointers())
    .function("NewInstance", &vtkStreamSurface::NewInstance, emscripten::allow_raw_pointers())
    .class_function("GetNumberOfGenerationsFromBaseType", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkStreamSurface::GetNumberOfGenerationsFromBaseType( arg_0.c_str());}))
    .function("GetNumberOfGenerationsFromBase", emscripten::optional_override([](vtkStreamSurface& self, const std::string & arg_0) -> int {  return self.GetNumberOfGenerationsFromBase( arg_0.c_str());}))
    .function("SetUseIterativeSeeding", &vtkStreamSurface::SetUseIterativeSeeding)
    .function("GetUseIterativeSeeding", &vtkStreamSurface::GetUseIterativeSeeding)
    .function("UseIterativeSeedingOn", &vtkStreamSurface::UseIterativeSeedingOn)
    .function("UseIterativeSeedingOff", &vtkStreamSurface::UseIterativeSeedingOff);
}
