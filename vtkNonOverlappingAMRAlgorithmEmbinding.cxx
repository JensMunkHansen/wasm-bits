// JavaScript wrapper for vtkNonOverlappingAMRAlgorithm with embind 
//
// This file was auto-generated using :
/*
node /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/bin/vtkWrapJavaScript.js \
 @/home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkCommonExecutionModel.js/vtkCommonExecutionModel.js.Release.args \
 -o \
 /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkCommonExecutionModel.js/vtkNonOverlappingAMRAlgorithmEmbinding.cxx \
 /home/jmh/github/vtk/Common/ExecutionModel/vtkNonOverlappingAMRAlgorithm.h
*/
#include "vtkEmbindSmartPointerTrait.h"
#include <emscripten.h>
#include <string>
#include "vtkVariant.h"
#include "vtkObjectBase.h"
#include "vtkIndent.h"
#include "vtkNonOverlappingAMR.h"
#include "vtkNonOverlappingAMRAlgorithm.h"

template<> void emscripten::internal::raw_destructor<vtkNonOverlappingAMRAlgorithm>(vtkNonOverlappingAMRAlgorithm * ptr){ ptr->Delete(); }
EMSCRIPTEN_BINDINGS(vtkNonOverlappingAMRAlgorithm_class) {
  emscripten::class_<vtkNonOverlappingAMRAlgorithm, emscripten::base<vtkUniformGridAMRAlgorithm>>("vtkNonOverlappingAMRAlgorithm")
    .smart_ptr<vtkSmartPointer<vtkNonOverlappingAMRAlgorithm>>("vtkSmartPointer<vtkNonOverlappingAMRAlgorithm>")
    .constructor(&vtk::MakeVTKSmartPtr<vtkNonOverlappingAMRAlgorithm>)
    .class_function("IsTypeOf", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkNonOverlappingAMRAlgorithm::IsTypeOf( arg_0.c_str());}))
    .function("IsA", emscripten::optional_override([](vtkNonOverlappingAMRAlgorithm& self, const std::string & arg_0) -> int {  return self.IsA( arg_0.c_str());}))
    .class_function("SafeDownCast", &vtkNonOverlappingAMRAlgorithm::SafeDownCast, emscripten::allow_raw_pointers())
    .function("NewInstance", &vtkNonOverlappingAMRAlgorithm::NewInstance, emscripten::allow_raw_pointers())
    .class_function("GetNumberOfGenerationsFromBaseType", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkNonOverlappingAMRAlgorithm::GetNumberOfGenerationsFromBaseType( arg_0.c_str());}))
    .function("GetNumberOfGenerationsFromBase", emscripten::optional_override([](vtkNonOverlappingAMRAlgorithm& self, const std::string & arg_0) -> int {  return self.GetNumberOfGenerationsFromBase( arg_0.c_str());}))
    .function("GetOutput", emscripten::select_overload<vtkNonOverlappingAMR*(vtkNonOverlappingAMRAlgorithm&)>([](vtkNonOverlappingAMRAlgorithm& self) -> vtkNonOverlappingAMR* { return self.GetOutput(); }), emscripten::allow_raw_pointers())
    .function("GetOutput", emscripten::select_overload<vtkNonOverlappingAMR*(vtkNonOverlappingAMRAlgorithm&, int)>([](vtkNonOverlappingAMRAlgorithm& self, int arg_0) -> vtkNonOverlappingAMR* { return self.GetOutput( arg_0); }), emscripten::allow_raw_pointers());
}
