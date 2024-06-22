// JavaScript wrapper for vtkUniformGridAMRAlgorithm with embind 
//
// This file was auto-generated using :
/*
node /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/bin/vtkWrapJavaScript.js \
 @/home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkCommonExecutionModel.js/vtkCommonExecutionModel.js.Release.args \
 -o \
 /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkCommonExecutionModel.js/vtkUniformGridAMRAlgorithmEmbinding.cxx \
 /home/jmh/github/vtk/Common/ExecutionModel/vtkUniformGridAMRAlgorithm.h
*/
#include "vtkEmbindSmartPointerTrait.h"
#include <emscripten.h>
#include <string>
#include "vtkVariant.h"
#include "vtkObjectBase.h"
#include "vtkIndent.h"
#include "vtkUniformGridAMR.h"
#include "vtkDataObject.h"
#include "vtkInformation.h"
#include "vtkInformationVector.h"
#include "vtkUniformGridAMRAlgorithm.h"

template<> void emscripten::internal::raw_destructor<vtkUniformGridAMRAlgorithm>(vtkUniformGridAMRAlgorithm * ptr){ ptr->Delete(); }
EMSCRIPTEN_BINDINGS(vtkUniformGridAMRAlgorithm_class) {
  emscripten::class_<vtkUniformGridAMRAlgorithm, emscripten::base<vtkAlgorithm>>("vtkUniformGridAMRAlgorithm")
    .smart_ptr<vtkSmartPointer<vtkUniformGridAMRAlgorithm>>("vtkSmartPointer<vtkUniformGridAMRAlgorithm>")
    .constructor(&vtk::MakeVTKSmartPtr<vtkUniformGridAMRAlgorithm>)
    .class_function("IsTypeOf", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkUniformGridAMRAlgorithm::IsTypeOf( arg_0.c_str());}))
    .function("IsA", emscripten::optional_override([](vtkUniformGridAMRAlgorithm& self, const std::string & arg_0) -> int {  return self.IsA( arg_0.c_str());}))
    .class_function("SafeDownCast", &vtkUniformGridAMRAlgorithm::SafeDownCast, emscripten::allow_raw_pointers())
    .function("NewInstance", &vtkUniformGridAMRAlgorithm::NewInstance, emscripten::allow_raw_pointers())
    .class_function("GetNumberOfGenerationsFromBaseType", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkUniformGridAMRAlgorithm::GetNumberOfGenerationsFromBaseType( arg_0.c_str());}))
    .function("GetNumberOfGenerationsFromBase", emscripten::optional_override([](vtkUniformGridAMRAlgorithm& self, const std::string & arg_0) -> int {  return self.GetNumberOfGenerationsFromBase( arg_0.c_str());}))
    .function("GetOutput", emscripten::select_overload<vtkUniformGridAMR*(vtkUniformGridAMRAlgorithm&)>([](vtkUniformGridAMRAlgorithm& self) -> vtkUniformGridAMR* { return self.GetOutput(); }), emscripten::allow_raw_pointers())
    .function("GetOutput", emscripten::select_overload<vtkUniformGridAMR*(vtkUniformGridAMRAlgorithm&, int)>([](vtkUniformGridAMRAlgorithm& self, int arg_0) -> vtkUniformGridAMR* { return self.GetOutput( arg_0); }), emscripten::allow_raw_pointers())
    .function("SetInputData", emscripten::select_overload<void(vtkUniformGridAMRAlgorithm&, vtkDataObject*)>([](vtkUniformGridAMRAlgorithm& self, vtkDataObject* arg_0) -> void { return self.SetInputData( arg_0); }), emscripten::allow_raw_pointers())
    .function("SetInputData", emscripten::select_overload<void(vtkUniformGridAMRAlgorithm&, int, vtkDataObject*)>([](vtkUniformGridAMRAlgorithm& self, int arg_0, vtkDataObject* arg_1) -> void { return self.SetInputData( arg_0, arg_1); }), emscripten::allow_raw_pointers());
}
