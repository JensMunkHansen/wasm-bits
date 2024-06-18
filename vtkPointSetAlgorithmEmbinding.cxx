// JavaScript wrapper for vtkPointSetAlgorithm with embind 
//
// This file was auto-generated using :
/*
node /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/bin/vtkWrapJavaScript.js \
 @/home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkCommonExecutionModel.js/vtkCommonExecutionModel.js.Release.args \
 -o \
 /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkCommonExecutionModel.js/vtkPointSetAlgorithmEmbinding.cxx \
 /home/jmh/github/vtk/Common/ExecutionModel/vtkPointSetAlgorithm.h
*/
#include "vtkEmbindSmartPointerTrait.h"
#include <emscripten.h>
#include <string>
#include "vtkVariant.h"
#include "vtkObjectBase.h"
#include "vtkIndent.h"
#include "vtkPointSet.h"
#include "vtkPolyData.h"
#include "vtkStructuredGrid.h"
#include "vtkUnstructuredGrid.h"
#include "vtkDataObject.h"
#include "vtkInformation.h"
#include "vtkInformationVector.h"
#include "vtkPointSetAlgorithm.h"

template<> void emscripten::internal::raw_destructor<vtkPointSetAlgorithm>(vtkPointSetAlgorithm * ptr){ ptr->Delete(); }
EMSCRIPTEN_BINDINGS(vtkPointSetAlgorithm_class) {
  emscripten::class_<vtkPointSetAlgorithm, emscripten::base<vtkAlgorithm>>("vtkPointSetAlgorithm")
    .smart_ptr<vtkSmartPointer<vtkPointSetAlgorithm>>("vtkSmartPointer<vtkPointSetAlgorithm>")
    .constructor(&vtk::MakeAvtkSmartPointer<vtkPointSetAlgorithm>)
    .class_function("IsTypeOf", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkPointSetAlgorithm::IsTypeOf( arg_0.c_str());}))
    .function("IsA", emscripten::optional_override([](vtkPointSetAlgorithm& self, const std::string & arg_0) -> int {  return self.IsA( arg_0.c_str());}))
    .class_function("SafeDownCast", &vtkPointSetAlgorithm::SafeDownCast, emscripten::allow_raw_pointers())
    .function("NewInstance", &vtkPointSetAlgorithm::NewInstance, emscripten::allow_raw_pointers())
    .class_function("GetNumberOfGenerationsFromBaseType", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkPointSetAlgorithm::GetNumberOfGenerationsFromBaseType( arg_0.c_str());}))
    .function("GetNumberOfGenerationsFromBase", emscripten::optional_override([](vtkPointSetAlgorithm& self, const std::string & arg_0) -> int {  return self.GetNumberOfGenerationsFromBase( arg_0.c_str());}))
    .function("GetOutput", emscripten::select_overload<vtkPointSet*(vtkPointSetAlgorithm&)>([](vtkPointSetAlgorithm& self) -> vtkPointSet* { return self.GetOutput(); }), emscripten::allow_raw_pointers())
    .function("GetOutput", emscripten::select_overload<vtkPointSet*(vtkPointSetAlgorithm&, int)>([](vtkPointSetAlgorithm& self, int arg_0) -> vtkPointSet* { return self.GetOutput( arg_0); }), emscripten::allow_raw_pointers())
    .function("GetPolyDataOutput", &vtkPointSetAlgorithm::GetPolyDataOutput, emscripten::allow_raw_pointers())
    .function("GetStructuredGridOutput", &vtkPointSetAlgorithm::GetStructuredGridOutput, emscripten::allow_raw_pointers())
    .function("GetUnstructuredGridOutput", &vtkPointSetAlgorithm::GetUnstructuredGridOutput, emscripten::allow_raw_pointers())
    .function("SetInputData", emscripten::select_overload<void(vtkPointSetAlgorithm&, vtkDataObject*)>([](vtkPointSetAlgorithm& self, vtkDataObject* arg_0) -> void { return self.SetInputData( arg_0); }), emscripten::allow_raw_pointers())
    .function("SetInputData", emscripten::select_overload<void(vtkPointSetAlgorithm&, vtkPointSet*)>([](vtkPointSetAlgorithm& self, vtkPointSet* arg_0) -> void { return self.SetInputData( arg_0); }), emscripten::allow_raw_pointers())
    .function("SetInputData", emscripten::select_overload<void(vtkPointSetAlgorithm&, int, vtkDataObject*)>([](vtkPointSetAlgorithm& self, int arg_0, vtkDataObject* arg_1) -> void { return self.SetInputData( arg_0, arg_1); }), emscripten::allow_raw_pointers())
    .function("SetInputData", emscripten::select_overload<void(vtkPointSetAlgorithm&, int, vtkPointSet*)>([](vtkPointSetAlgorithm& self, int arg_0, vtkPointSet* arg_1) -> void { return self.SetInputData( arg_0, arg_1); }), emscripten::allow_raw_pointers())
    .function("AddInputData", emscripten::select_overload<void(vtkPointSetAlgorithm&, vtkDataObject*)>([](vtkPointSetAlgorithm& self, vtkDataObject* arg_0) -> void { return self.AddInputData( arg_0); }), emscripten::allow_raw_pointers())
    .function("AddInputData", emscripten::select_overload<void(vtkPointSetAlgorithm&, vtkPointSet*)>([](vtkPointSetAlgorithm& self, vtkPointSet* arg_0) -> void { return self.AddInputData( arg_0); }), emscripten::allow_raw_pointers())
    .function("AddInputData", emscripten::select_overload<void(vtkPointSetAlgorithm&, int, vtkPointSet*)>([](vtkPointSetAlgorithm& self, int arg_0, vtkPointSet* arg_1) -> void { return self.AddInputData( arg_0, arg_1); }), emscripten::allow_raw_pointers())
    .function("AddInputData", emscripten::select_overload<void(vtkPointSetAlgorithm&, int, vtkDataObject*)>([](vtkPointSetAlgorithm& self, int arg_0, vtkDataObject* arg_1) -> void { return self.AddInputData( arg_0, arg_1); }), emscripten::allow_raw_pointers())
    .function("GetInput", &vtkPointSetAlgorithm::GetInput, emscripten::allow_raw_pointers());
}
