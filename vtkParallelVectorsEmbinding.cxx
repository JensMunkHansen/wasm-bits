// JavaScript wrapper for vtkParallelVectors with embind 
//
// This file was auto-generated using :
/*
node /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/bin/vtkWrapJavaScript.js \
 @/home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkFiltersFlowPaths.js/vtkFiltersFlowPaths.js.Release.args \
 -o \
 /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkFiltersFlowPaths.js/vtkParallelVectorsEmbinding.cxx \
 /home/jmh/github/vtk/Filters/FlowPaths/vtkParallelVectors.h
*/
#include "vtkEmbindSmartPointerTrait.h"
#include <emscripten.h>
#include <string>
#include "vtkVariant.h"
#include "vtkObjectBase.h"
#include "vtkIndent.h"
#include "vtkParallelVectors.h"

template<> void emscripten::internal::raw_destructor<vtkParallelVectors>(vtkParallelVectors * ptr){ ptr->Delete(); }
EMSCRIPTEN_BINDINGS(vtkParallelVectors_class) {
  emscripten::class_<vtkParallelVectors, emscripten::base<vtkPolyDataAlgorithm>>("vtkParallelVectors")
    .smart_ptr<vtkSmartPointer<vtkParallelVectors>>("vtkSmartPointer<vtkParallelVectors>")
    .constructor(&vtk::MakeAvtkSmartPointer<vtkParallelVectors>)
    .class_function("IsTypeOf", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkParallelVectors::IsTypeOf( arg_0.c_str());}))
    .function("IsA", emscripten::optional_override([](vtkParallelVectors& self, const std::string & arg_0) -> int {  return self.IsA( arg_0.c_str());}))
    .class_function("SafeDownCast", &vtkParallelVectors::SafeDownCast, emscripten::allow_raw_pointers())
    .function("NewInstance", &vtkParallelVectors::NewInstance, emscripten::allow_raw_pointers())
    .class_function("GetNumberOfGenerationsFromBaseType", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkParallelVectors::GetNumberOfGenerationsFromBaseType( arg_0.c_str());}))
    .function("GetNumberOfGenerationsFromBase", emscripten::optional_override([](vtkParallelVectors& self, const std::string & arg_0) -> int {  return self.GetNumberOfGenerationsFromBase( arg_0.c_str());}))
    .function("SetFirstVectorFieldName", emscripten::optional_override([](vtkParallelVectors& self, const std::string & arg_0) -> void {  return self.SetFirstVectorFieldName( arg_0.c_str());}))
    .function("GetFirstVectorFieldName", emscripten::optional_override([](vtkParallelVectors& self) -> std::string {  return self.GetFirstVectorFieldName();}))
    .function("SetSecondVectorFieldName", emscripten::optional_override([](vtkParallelVectors& self, const std::string & arg_0) -> void {  return self.SetSecondVectorFieldName( arg_0.c_str());}))
    .function("GetSecondVectorFieldName", emscripten::optional_override([](vtkParallelVectors& self) -> std::string {  return self.GetSecondVectorFieldName();}));
}
