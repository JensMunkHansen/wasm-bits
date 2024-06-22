// JavaScript wrapper for vtkUnstructuredGridBaseAlgorithm with embind 
//
// This file was auto-generated using :
/*
node /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/bin/vtkWrapJavaScript.js \
 @/home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkCommonExecutionModel.js/vtkCommonExecutionModel.js.Release.args \
 -o \
 /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkCommonExecutionModel.js/vtkUnstructuredGridBaseAlgorithmEmbinding.cxx \
 /home/jmh/github/vtk/Common/ExecutionModel/vtkUnstructuredGridBaseAlgorithm.h
*/
#include "vtkEmbindSmartPointerTrait.h"
#include <emscripten.h>
#include <string>
#include "vtkVariant.h"
#include "vtkObjectBase.h"
#include "vtkIndent.h"
#include "vtkUnstructuredGridBase.h"
#include "vtkDataObject.h"
#include "vtkInformation.h"
#include "vtkInformationVector.h"
#include "vtkUnstructuredGridBaseAlgorithm.h"

template<> void emscripten::internal::raw_destructor<vtkUnstructuredGridBaseAlgorithm>(vtkUnstructuredGridBaseAlgorithm * ptr){ ptr->Delete(); }
EMSCRIPTEN_BINDINGS(vtkUnstructuredGridBaseAlgorithm_class) {
  emscripten::class_<vtkUnstructuredGridBaseAlgorithm, emscripten::base<vtkAlgorithm>>("vtkUnstructuredGridBaseAlgorithm")
    .smart_ptr<vtkSmartPointer<vtkUnstructuredGridBaseAlgorithm>>("vtkSmartPointer<vtkUnstructuredGridBaseAlgorithm>")
    .constructor(&vtk::MakeAvtkSmartPointer<vtkUnstructuredGridBaseAlgorithm>)
    .class_function("IsTypeOf", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkUnstructuredGridBaseAlgorithm::IsTypeOf( arg_0.c_str());}))
    .function("IsA", emscripten::optional_override([](vtkUnstructuredGridBaseAlgorithm& self, const std::string & arg_0) -> int {  return self.IsA( arg_0.c_str());}))
    .class_function("SafeDownCast", &vtkUnstructuredGridBaseAlgorithm::SafeDownCast, emscripten::allow_raw_pointers())
    .function("NewInstance", &vtkUnstructuredGridBaseAlgorithm::NewInstance, emscripten::allow_raw_pointers())
    .class_function("GetNumberOfGenerationsFromBaseType", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkUnstructuredGridBaseAlgorithm::GetNumberOfGenerationsFromBaseType( arg_0.c_str());}))
    .function("GetNumberOfGenerationsFromBase", emscripten::optional_override([](vtkUnstructuredGridBaseAlgorithm& self, const std::string & arg_0) -> int {  return self.GetNumberOfGenerationsFromBase( arg_0.c_str());}))
    .function("GetOutput", emscripten::select_overload<vtkUnstructuredGridBase*(vtkUnstructuredGridBaseAlgorithm&)>([](vtkUnstructuredGridBaseAlgorithm& self) -> vtkUnstructuredGridBase* { return self.GetOutput(); }), emscripten::allow_raw_pointers())
    .function("GetOutput", emscripten::select_overload<vtkUnstructuredGridBase*(vtkUnstructuredGridBaseAlgorithm&, int)>([](vtkUnstructuredGridBaseAlgorithm& self, int arg_0) -> vtkUnstructuredGridBase* { return self.GetOutput( arg_0); }), emscripten::allow_raw_pointers())
    .function("SetOutput", &vtkUnstructuredGridBaseAlgorithm::SetOutput, emscripten::allow_raw_pointers())
    .function("SetInputData", emscripten::select_overload<void(vtkUnstructuredGridBaseAlgorithm&, vtkDataObject*)>([](vtkUnstructuredGridBaseAlgorithm& self, vtkDataObject* arg_0) -> void { return self.SetInputData( arg_0); }), emscripten::allow_raw_pointers())
    .function("SetInputData", emscripten::select_overload<void(vtkUnstructuredGridBaseAlgorithm&, int, vtkDataObject*)>([](vtkUnstructuredGridBaseAlgorithm& self, int arg_0, vtkDataObject* arg_1) -> void { return self.SetInputData( arg_0, arg_1); }), emscripten::allow_raw_pointers())
    .function("AddInputData", emscripten::select_overload<void(vtkUnstructuredGridBaseAlgorithm&, vtkDataObject*)>([](vtkUnstructuredGridBaseAlgorithm& self, vtkDataObject* arg_0) -> void { return self.AddInputData( arg_0); }), emscripten::allow_raw_pointers())
    .function("AddInputData", emscripten::select_overload<void(vtkUnstructuredGridBaseAlgorithm&, int, vtkDataObject*)>([](vtkUnstructuredGridBaseAlgorithm& self, int arg_0, vtkDataObject* arg_1) -> void { return self.AddInputData( arg_0, arg_1); }), emscripten::allow_raw_pointers());
}
