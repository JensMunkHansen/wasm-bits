// JavaScript wrapper for vtkEndFor with embind 
//
// This file was auto-generated using :
/*
node /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/bin/vtkWrapJavaScript.js \
 @/home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkCommonExecutionModel.js/vtkCommonExecutionModel.js.Release.args \
 -o \
 /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkCommonExecutionModel.js/vtkEndForEmbinding.cxx \
 /home/jmh/github/vtk/Common/ExecutionModel/vtkEndFor.h
*/
#include "vtkEmbindSmartPointerTrait.h"
#include <emscripten.h>
#include <string>
#include "vtkVariant.h"
#include "vtkObjectBase.h"
#include "vtkIndent.h"
#include "vtkExecutionAggregator.h"
#include "vtkEndFor.h"

template<> void emscripten::internal::raw_destructor<vtkEndFor>(vtkEndFor * ptr){ ptr->Delete(); }
EMSCRIPTEN_BINDINGS(vtkEndFor_class) {
  emscripten::class_<vtkEndFor, emscripten::base<vtkDataObjectAlgorithm>>("vtkEndFor")
    .smart_ptr<vtkSmartPointer<vtkEndFor>>("vtkSmartPointer<vtkEndFor>")
    .constructor(&vtk::MakeVTKSmartPtr<vtkEndFor>)
    .class_function("IsTypeOf", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkEndFor::IsTypeOf( arg_0.c_str());}))
    .function("IsA", emscripten::optional_override([](vtkEndFor& self, const std::string & arg_0) -> int {  return self.IsA( arg_0.c_str());}))
    .class_function("SafeDownCast", &vtkEndFor::SafeDownCast, emscripten::allow_raw_pointers())
    .function("NewInstance", &vtkEndFor::NewInstance, emscripten::allow_raw_pointers())
    .class_function("GetNumberOfGenerationsFromBaseType", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkEndFor::GetNumberOfGenerationsFromBaseType( arg_0.c_str());}))
    .function("GetNumberOfGenerationsFromBase", emscripten::optional_override([](vtkEndFor& self, const std::string & arg_0) -> int {  return self.GetNumberOfGenerationsFromBase( arg_0.c_str());}))
    .function("SetAggregator", &vtkEndFor::SetAggregator, emscripten::allow_raw_pointers());
}
