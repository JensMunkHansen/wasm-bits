// JavaScript wrapper for vtkTemporalSmoothing with embind 
//
// This file was auto-generated using :
/*
node /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/bin/vtkWrapJavaScript.js \
 @/home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkFiltersTemporal.js/vtkFiltersTemporal.js.Release.args \
 -o \
 /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkFiltersTemporal.js/vtkTemporalSmoothingEmbinding.cxx \
 /home/jmh/github/vtk/Filters/Temporal/vtkTemporalSmoothing.h
*/
#include "vtkEmbindSmartPointerTrait.h"
#include <emscripten.h>
#include <string>
#include "vtkVariant.h"
#include "vtkObjectBase.h"
#include "vtkIndent.h"
#include "vtkTemporalSmoothing.h"

template<> void emscripten::internal::raw_destructor<vtkTemporalSmoothing>(vtkTemporalSmoothing * ptr){ ptr->Delete(); }
EMSCRIPTEN_BINDINGS(vtkTemporalSmoothing_class) {
  emscripten::class_<vtkTemporalSmoothing, emscripten::base<vtkPassInputTypeAlgorithm>>("vtkTemporalSmoothing")
    .smart_ptr<vtkSmartPointer<vtkTemporalSmoothing>>("vtkSmartPointer<vtkTemporalSmoothing>")
    .constructor(&vtk::MakeVTKSmartPtr<vtkTemporalSmoothing>)
    .class_function("IsTypeOf", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkTemporalSmoothing::IsTypeOf( arg_0.c_str());}))
    .function("IsA", emscripten::optional_override([](vtkTemporalSmoothing& self, const std::string & arg_0) -> int {  return self.IsA( arg_0.c_str());}))
    .class_function("SafeDownCast", &vtkTemporalSmoothing::SafeDownCast, emscripten::allow_raw_pointers())
    .function("NewInstance", &vtkTemporalSmoothing::NewInstance, emscripten::allow_raw_pointers())
    .class_function("GetNumberOfGenerationsFromBaseType", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkTemporalSmoothing::GetNumberOfGenerationsFromBaseType( arg_0.c_str());}))
    .function("GetNumberOfGenerationsFromBase", emscripten::optional_override([](vtkTemporalSmoothing& self, const std::string & arg_0) -> int {  return self.GetNumberOfGenerationsFromBase( arg_0.c_str());}))
    .function("GetTemporalWindowHalfWidth", &vtkTemporalSmoothing::GetTemporalWindowHalfWidth)
    .function("SetTemporalWindowHalfWidth", &vtkTemporalSmoothing::SetTemporalWindowHalfWidth);
}
