// JavaScript wrapper for vtkTreeAlgorithm with embind 
//
// This file was auto-generated using :
/*
node /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/bin/vtkWrapJavaScript.js \
 @/home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkCommonExecutionModel.js/vtkCommonExecutionModel.js.Release.args \
 -o \
 /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkCommonExecutionModel.js/vtkTreeAlgorithmEmbinding.cxx \
 /home/jmh/github/vtk/Common/ExecutionModel/vtkTreeAlgorithm.h
*/
#include "vtkEmbindSmartPointerTrait.h"
#include <emscripten.h>
#include <string>
#include "vtkVariant.h"
#include "vtkObjectBase.h"
#include "vtkIndent.h"
#include "vtkInformation.h"
#include "vtkInformationVector.h"
#include "vtkTree.h"
#include "vtkDataObject.h"
#include "vtkTreeAlgorithm.h"

template<> void emscripten::internal::raw_destructor<vtkTreeAlgorithm>(vtkTreeAlgorithm * ptr){ ptr->Delete(); }
EMSCRIPTEN_BINDINGS(vtkTreeAlgorithm_class) {
  emscripten::class_<vtkTreeAlgorithm, emscripten::base<vtkAlgorithm>>("vtkTreeAlgorithm")
    .smart_ptr<vtkSmartPointer<vtkTreeAlgorithm>>("vtkSmartPointer<vtkTreeAlgorithm>")
    .constructor(&vtk::MakeAvtkSmartPointer<vtkTreeAlgorithm>)
    .class_function("IsTypeOf", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkTreeAlgorithm::IsTypeOf( arg_0.c_str());}))
    .function("IsA", emscripten::optional_override([](vtkTreeAlgorithm& self, const std::string & arg_0) -> int {  return self.IsA( arg_0.c_str());}))
    .class_function("SafeDownCast", &vtkTreeAlgorithm::SafeDownCast, emscripten::allow_raw_pointers())
    .function("NewInstance", &vtkTreeAlgorithm::NewInstance, emscripten::allow_raw_pointers())
    .class_function("GetNumberOfGenerationsFromBaseType", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkTreeAlgorithm::GetNumberOfGenerationsFromBaseType( arg_0.c_str());}))
    .function("GetNumberOfGenerationsFromBase", emscripten::optional_override([](vtkTreeAlgorithm& self, const std::string & arg_0) -> int {  return self.GetNumberOfGenerationsFromBase( arg_0.c_str());}))
    .function("GetOutput", emscripten::select_overload<vtkTree*(vtkTreeAlgorithm&)>([](vtkTreeAlgorithm& self) -> vtkTree* { return self.GetOutput(); }), emscripten::allow_raw_pointers())
    .function("GetOutput", emscripten::select_overload<vtkTree*(vtkTreeAlgorithm&, int)>([](vtkTreeAlgorithm& self, int arg_0) -> vtkTree* { return self.GetOutput( arg_0); }), emscripten::allow_raw_pointers())
    .function("SetInputData", emscripten::select_overload<void(vtkTreeAlgorithm&, vtkDataObject*)>([](vtkTreeAlgorithm& self, vtkDataObject* arg_0) -> void { return self.SetInputData( arg_0); }), emscripten::allow_raw_pointers())
    .function("SetInputData", emscripten::select_overload<void(vtkTreeAlgorithm&, int, vtkDataObject*)>([](vtkTreeAlgorithm& self, int arg_0, vtkDataObject* arg_1) -> void { return self.SetInputData( arg_0, arg_1); }), emscripten::allow_raw_pointers());
}
