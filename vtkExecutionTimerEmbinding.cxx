// JavaScript wrapper for vtkExecutionTimer with embind 
//
// This file was auto-generated using :
/*
node /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/bin/vtkWrapJavaScript.js \
 @/home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkFiltersCore.js/vtkFiltersCore.js.Release.args \
 -o \
 /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkFiltersCore.js/vtkExecutionTimerEmbinding.cxx \
 /home/jmh/github/vtk/Filters/Core/vtkExecutionTimer.h
*/
#include "vtkEmbindSmartPointerTrait.h"
#include <emscripten.h>
#include <string>
#include "vtkVariant.h"
#include "vtkObjectBase.h"
#include "vtkIndent.h"
#include "vtkAlgorithm.h"
#include "vtkExecutionTimer.h"

template<> void emscripten::internal::raw_destructor<vtkExecutionTimer>(vtkExecutionTimer * ptr){ ptr->Delete(); }
EMSCRIPTEN_BINDINGS(vtkExecutionTimer_class) {
  emscripten::class_<vtkExecutionTimer, emscripten::base<vtkObject>>("vtkExecutionTimer")
    .smart_ptr<vtkSmartPointer<vtkExecutionTimer>>("vtkSmartPointer<vtkExecutionTimer>")
    .constructor(&vtk::MakeAvtkSmartPointer<vtkExecutionTimer>)
    .class_function("IsTypeOf", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkExecutionTimer::IsTypeOf( arg_0.c_str());}))
    .function("IsA", emscripten::optional_override([](vtkExecutionTimer& self, const std::string & arg_0) -> int {  return self.IsA( arg_0.c_str());}))
    .class_function("SafeDownCast", &vtkExecutionTimer::SafeDownCast, emscripten::allow_raw_pointers())
    .function("NewInstance", &vtkExecutionTimer::NewInstance, emscripten::allow_raw_pointers())
    .class_function("GetNumberOfGenerationsFromBaseType", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkExecutionTimer::GetNumberOfGenerationsFromBaseType( arg_0.c_str());}))
    .function("GetNumberOfGenerationsFromBase", emscripten::optional_override([](vtkExecutionTimer& self, const std::string & arg_0) -> int {  return self.GetNumberOfGenerationsFromBase( arg_0.c_str());}))
    .function("SetFilter", &vtkExecutionTimer::SetFilter, emscripten::allow_raw_pointers())
    .function("GetFilter", &vtkExecutionTimer::GetFilter, emscripten::allow_raw_pointers())
    .function("GetElapsedCPUTime", &vtkExecutionTimer::GetElapsedCPUTime)
    .function("GetElapsedWallClockTime", &vtkExecutionTimer::GetElapsedWallClockTime);
}
