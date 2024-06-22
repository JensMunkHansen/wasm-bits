// JavaScript wrapper for vtkTimeRange with embind 
//
// This file was auto-generated using :
/*
node /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/bin/vtkWrapJavaScript.js \
 @/home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkCommonExecutionModel.js/vtkCommonExecutionModel.js.Release.args \
 -o \
 /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkCommonExecutionModel.js/vtkTimeRangeEmbinding.cxx \
 /home/jmh/github/vtk/Common/ExecutionModel/vtkTimeRange.h
*/
#include "vtkEmbindSmartPointerTrait.h"
#include <emscripten.h>
#include <string>
#include "vtkVariant.h"
#include "vtkObjectBase.h"
#include "vtkIndent.h"
#include "vtkInformationVector.h"
#include "vtkTimeRange.h"

template<> void emscripten::internal::raw_destructor<vtkTimeRange>(vtkTimeRange * ptr){ ptr->Delete(); }
EMSCRIPTEN_BINDINGS(vtkTimeRange_class) {
  emscripten::class_<vtkTimeRange, emscripten::base<vtkExecutionRange>>("vtkTimeRange")
    .smart_ptr<vtkSmartPointer<vtkTimeRange>>("vtkSmartPointer<vtkTimeRange>")
    .constructor(&vtk::MakeAvtkSmartPointer<vtkTimeRange>)
    .class_function("IsTypeOf", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkTimeRange::IsTypeOf( arg_0.c_str());}))
    .function("IsA", emscripten::optional_override([](vtkTimeRange& self, const std::string & arg_0) -> int {  return self.IsA( arg_0.c_str());}))
    .class_function("SafeDownCast", &vtkTimeRange::SafeDownCast, emscripten::allow_raw_pointers())
    .function("NewInstance", &vtkTimeRange::NewInstance, emscripten::allow_raw_pointers())
    .class_function("GetNumberOfGenerationsFromBaseType", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkTimeRange::GetNumberOfGenerationsFromBaseType( arg_0.c_str());}))
    .function("GetNumberOfGenerationsFromBase", emscripten::optional_override([](vtkTimeRange& self, const std::string & arg_0) -> int {  return self.GetNumberOfGenerationsFromBase( arg_0.c_str());}))
    .function("Size", &vtkTimeRange::Size);
}
