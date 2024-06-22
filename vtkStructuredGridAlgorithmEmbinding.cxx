// JavaScript wrapper for vtkStructuredGridAlgorithm with embind 
//
// This file was auto-generated using :
/*
node /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/bin/vtkWrapJavaScript.js \
 @/home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkCommonExecutionModel.js/vtkCommonExecutionModel.js.Release.args \
 -o \
 /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkCommonExecutionModel.js/vtkStructuredGridAlgorithmEmbinding.cxx \
 /home/jmh/github/vtk/Common/ExecutionModel/vtkStructuredGridAlgorithm.h
*/
#include "vtkEmbindSmartPointerTrait.h"
#include <emscripten.h>
#include <string>
#include "vtkVariant.h"
#include "vtkObjectBase.h"
#include "vtkIndent.h"
#include "vtkStructuredGrid.h"
#include "vtkDataObject.h"
#include "vtkInformation.h"
#include "vtkInformationVector.h"
#include "vtkStructuredGridAlgorithm.h"

template<> void emscripten::internal::raw_destructor<vtkStructuredGridAlgorithm>(vtkStructuredGridAlgorithm * ptr){ ptr->Delete(); }
EMSCRIPTEN_BINDINGS(vtkStructuredGridAlgorithm_class) {
  emscripten::class_<vtkStructuredGridAlgorithm, emscripten::base<vtkAlgorithm>>("vtkStructuredGridAlgorithm")
    .smart_ptr<vtkSmartPointer<vtkStructuredGridAlgorithm>>("vtkSmartPointer<vtkStructuredGridAlgorithm>")
    .constructor(&vtk::MakeVTKSmartPtr<vtkStructuredGridAlgorithm>)
    .class_function("IsTypeOf", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkStructuredGridAlgorithm::IsTypeOf( arg_0.c_str());}))
    .function("IsA", emscripten::optional_override([](vtkStructuredGridAlgorithm& self, const std::string & arg_0) -> int {  return self.IsA( arg_0.c_str());}))
    .class_function("SafeDownCast", &vtkStructuredGridAlgorithm::SafeDownCast, emscripten::allow_raw_pointers())
    .function("NewInstance", &vtkStructuredGridAlgorithm::NewInstance, emscripten::allow_raw_pointers())
    .class_function("GetNumberOfGenerationsFromBaseType", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkStructuredGridAlgorithm::GetNumberOfGenerationsFromBaseType( arg_0.c_str());}))
    .function("GetNumberOfGenerationsFromBase", emscripten::optional_override([](vtkStructuredGridAlgorithm& self, const std::string & arg_0) -> int {  return self.GetNumberOfGenerationsFromBase( arg_0.c_str());}))
    .function("GetOutput", emscripten::select_overload<vtkStructuredGrid*(vtkStructuredGridAlgorithm&)>([](vtkStructuredGridAlgorithm& self) -> vtkStructuredGrid* { return self.GetOutput(); }), emscripten::allow_raw_pointers())
    .function("GetOutput", emscripten::select_overload<vtkStructuredGrid*(vtkStructuredGridAlgorithm&, int)>([](vtkStructuredGridAlgorithm& self, int arg_0) -> vtkStructuredGrid* { return self.GetOutput( arg_0); }), emscripten::allow_raw_pointers())
    .function("SetOutput", &vtkStructuredGridAlgorithm::SetOutput, emscripten::allow_raw_pointers())
    .function("GetInput", emscripten::select_overload<vtkDataObject*(vtkStructuredGridAlgorithm&)>([](vtkStructuredGridAlgorithm& self) -> vtkDataObject* { return self.GetInput(); }), emscripten::allow_raw_pointers())
    .function("GetInput", emscripten::select_overload<vtkDataObject*(vtkStructuredGridAlgorithm&, int)>([](vtkStructuredGridAlgorithm& self, int arg_0) -> vtkDataObject* { return self.GetInput( arg_0); }), emscripten::allow_raw_pointers())
    .function("GetStructuredGridInput", &vtkStructuredGridAlgorithm::GetStructuredGridInput, emscripten::allow_raw_pointers())
    .function("SetInputData", emscripten::select_overload<void(vtkStructuredGridAlgorithm&, vtkDataObject*)>([](vtkStructuredGridAlgorithm& self, vtkDataObject* arg_0) -> void { return self.SetInputData( arg_0); }), emscripten::allow_raw_pointers())
    .function("SetInputData", emscripten::select_overload<void(vtkStructuredGridAlgorithm&, int, vtkDataObject*)>([](vtkStructuredGridAlgorithm& self, int arg_0, vtkDataObject* arg_1) -> void { return self.SetInputData( arg_0, arg_1); }), emscripten::allow_raw_pointers())
    .function("AddInputData", emscripten::select_overload<void(vtkStructuredGridAlgorithm&, vtkDataObject*)>([](vtkStructuredGridAlgorithm& self, vtkDataObject* arg_0) -> void { return self.AddInputData( arg_0); }), emscripten::allow_raw_pointers())
    .function("AddInputData", emscripten::select_overload<void(vtkStructuredGridAlgorithm&, int, vtkDataObject*)>([](vtkStructuredGridAlgorithm& self, int arg_0, vtkDataObject* arg_1) -> void { return self.AddInputData( arg_0, arg_1); }), emscripten::allow_raw_pointers());
}
