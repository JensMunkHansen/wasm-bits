// JavaScript wrapper for vtkOverlappingAMRAlgorithm with embind 
//
// This file was auto-generated using :
/*
node /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/bin/vtkWrapJavaScript.js \
 @/home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkCommonExecutionModel.js/vtkCommonExecutionModel.js.Release.args \
 -o \
 /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkCommonExecutionModel.js/vtkOverlappingAMRAlgorithmEmbinding.cxx \
 /home/jmh/github/vtk/Common/ExecutionModel/vtkOverlappingAMRAlgorithm.h
*/
#include "vtkEmbindSmartPointerTrait.h"
#include <emscripten.h>
#include <string>
#include "vtkVariant.h"
#include "vtkObjectBase.h"
#include "vtkIndent.h"
#include "vtkOverlappingAMR.h"
#include "vtkOverlappingAMRAlgorithm.h"

template<> void emscripten::internal::raw_destructor<vtkOverlappingAMRAlgorithm>(vtkOverlappingAMRAlgorithm * ptr){ ptr->Delete(); }
EMSCRIPTEN_BINDINGS(vtkOverlappingAMRAlgorithm_class) {
  emscripten::class_<vtkOverlappingAMRAlgorithm, emscripten::base<vtkUniformGridAMRAlgorithm>>("vtkOverlappingAMRAlgorithm")
    .smart_ptr<vtkSmartPointer<vtkOverlappingAMRAlgorithm>>("vtkSmartPointer<vtkOverlappingAMRAlgorithm>")
    .constructor(&vtk::MakeAvtkSmartPointer<vtkOverlappingAMRAlgorithm>)
    .class_function("IsTypeOf", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkOverlappingAMRAlgorithm::IsTypeOf( arg_0.c_str());}))
    .function("IsA", emscripten::optional_override([](vtkOverlappingAMRAlgorithm& self, const std::string & arg_0) -> int {  return self.IsA( arg_0.c_str());}))
    .class_function("SafeDownCast", &vtkOverlappingAMRAlgorithm::SafeDownCast, emscripten::allow_raw_pointers())
    .function("NewInstance", &vtkOverlappingAMRAlgorithm::NewInstance, emscripten::allow_raw_pointers())
    .class_function("GetNumberOfGenerationsFromBaseType", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkOverlappingAMRAlgorithm::GetNumberOfGenerationsFromBaseType( arg_0.c_str());}))
    .function("GetNumberOfGenerationsFromBase", emscripten::optional_override([](vtkOverlappingAMRAlgorithm& self, const std::string & arg_0) -> int {  return self.GetNumberOfGenerationsFromBase( arg_0.c_str());}))
    .function("GetOutput", emscripten::select_overload<vtkOverlappingAMR*(vtkOverlappingAMRAlgorithm&)>([](vtkOverlappingAMRAlgorithm& self) -> vtkOverlappingAMR* { return self.GetOutput(); }), emscripten::allow_raw_pointers())
    .function("GetOutput", emscripten::select_overload<vtkOverlappingAMR*(vtkOverlappingAMRAlgorithm&, int)>([](vtkOverlappingAMRAlgorithm& self, int arg_0) -> vtkOverlappingAMR* { return self.GetOutput( arg_0); }), emscripten::allow_raw_pointers());
}
