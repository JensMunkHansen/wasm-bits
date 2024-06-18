// JavaScript wrapper for vtkUnstructuredGridAlgorithm with embind 
//
// This file was auto-generated using :
/*
node /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/bin/vtkWrapJavaScript.js \
 @/home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkCommonExecutionModel.js/vtkCommonExecutionModel.js.Release.args \
 -o \
 /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkCommonExecutionModel.js/vtkUnstructuredGridAlgorithmEmbinding.cxx \
 /home/jmh/github/vtk/Common/ExecutionModel/vtkUnstructuredGridAlgorithm.h
*/
#include "vtkEmbindSmartPointerTrait.h"
#include <emscripten.h>
#include <string>
#include "vtkVariant.h"
#include "vtkObjectBase.h"
#include "vtkIndent.h"
#include "vtkUnstructuredGrid.h"
#include "vtkDataObject.h"
#include "vtkInformation.h"
#include "vtkInformationVector.h"
#include "vtkUnstructuredGridAlgorithm.h"

template<> void emscripten::internal::raw_destructor<vtkUnstructuredGridAlgorithm>(vtkUnstructuredGridAlgorithm * ptr){ ptr->Delete(); }
EMSCRIPTEN_BINDINGS(vtkUnstructuredGridAlgorithm_class) {
  emscripten::class_<vtkUnstructuredGridAlgorithm, emscripten::base<vtkAlgorithm>>("vtkUnstructuredGridAlgorithm")
    .smart_ptr<vtkSmartPointer<vtkUnstructuredGridAlgorithm>>("vtkSmartPointer<vtkUnstructuredGridAlgorithm>")
    .constructor(&vtk::MakeAvtkSmartPointer<vtkUnstructuredGridAlgorithm>)
    .class_function("IsTypeOf", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkUnstructuredGridAlgorithm::IsTypeOf( arg_0.c_str());}))
    .function("IsA", emscripten::optional_override([](vtkUnstructuredGridAlgorithm& self, const std::string & arg_0) -> int {  return self.IsA( arg_0.c_str());}))
    .class_function("SafeDownCast", &vtkUnstructuredGridAlgorithm::SafeDownCast, emscripten::allow_raw_pointers())
    .function("NewInstance", &vtkUnstructuredGridAlgorithm::NewInstance, emscripten::allow_raw_pointers())
    .class_function("GetNumberOfGenerationsFromBaseType", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkUnstructuredGridAlgorithm::GetNumberOfGenerationsFromBaseType( arg_0.c_str());}))
    .function("GetNumberOfGenerationsFromBase", emscripten::optional_override([](vtkUnstructuredGridAlgorithm& self, const std::string & arg_0) -> int {  return self.GetNumberOfGenerationsFromBase( arg_0.c_str());}))
    .function("GetOutput", emscripten::select_overload<vtkUnstructuredGrid*(vtkUnstructuredGridAlgorithm&)>([](vtkUnstructuredGridAlgorithm& self) -> vtkUnstructuredGrid* { return self.GetOutput(); }), emscripten::allow_raw_pointers())
    .function("GetOutput", emscripten::select_overload<vtkUnstructuredGrid*(vtkUnstructuredGridAlgorithm&, int)>([](vtkUnstructuredGridAlgorithm& self, int arg_0) -> vtkUnstructuredGrid* { return self.GetOutput( arg_0); }), emscripten::allow_raw_pointers())
    .function("SetOutput", &vtkUnstructuredGridAlgorithm::SetOutput, emscripten::allow_raw_pointers())
    .function("GetInput", emscripten::select_overload<vtkDataObject*(vtkUnstructuredGridAlgorithm&, int)>([](vtkUnstructuredGridAlgorithm& self, int arg_0) -> vtkDataObject* { return self.GetInput( arg_0); }), emscripten::allow_raw_pointers())
    .function("GetInput", emscripten::select_overload<vtkDataObject*(vtkUnstructuredGridAlgorithm&)>([](vtkUnstructuredGridAlgorithm& self) -> vtkDataObject* { return self.GetInput(); }), emscripten::allow_raw_pointers())
    .function("GetUnstructuredGridInput", &vtkUnstructuredGridAlgorithm::GetUnstructuredGridInput, emscripten::allow_raw_pointers())
    .function("SetInputData", emscripten::select_overload<void(vtkUnstructuredGridAlgorithm&, vtkDataObject*)>([](vtkUnstructuredGridAlgorithm& self, vtkDataObject* arg_0) -> void { return self.SetInputData( arg_0); }), emscripten::allow_raw_pointers())
    .function("SetInputData", emscripten::select_overload<void(vtkUnstructuredGridAlgorithm&, int, vtkDataObject*)>([](vtkUnstructuredGridAlgorithm& self, int arg_0, vtkDataObject* arg_1) -> void { return self.SetInputData( arg_0, arg_1); }), emscripten::allow_raw_pointers())
    .function("AddInputData", emscripten::select_overload<void(vtkUnstructuredGridAlgorithm&, vtkDataObject*)>([](vtkUnstructuredGridAlgorithm& self, vtkDataObject* arg_0) -> void { return self.AddInputData( arg_0); }), emscripten::allow_raw_pointers())
    .function("AddInputData", emscripten::select_overload<void(vtkUnstructuredGridAlgorithm&, int, vtkDataObject*)>([](vtkUnstructuredGridAlgorithm& self, int arg_0, vtkDataObject* arg_1) -> void { return self.AddInputData( arg_0, arg_1); }), emscripten::allow_raw_pointers());
}
