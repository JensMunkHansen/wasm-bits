// JavaScript wrapper for vtkRectilinearGridAlgorithm with embind 
//
// This file was auto-generated using :
/*
node /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/bin/vtkWrapJavaScript.js \
 @/home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkCommonExecutionModel.js/vtkCommonExecutionModel.js.Release.args \
 -o \
 /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkCommonExecutionModel.js/vtkRectilinearGridAlgorithmEmbinding.cxx \
 /home/jmh/github/vtk/Common/ExecutionModel/vtkRectilinearGridAlgorithm.h
*/
#include "vtkEmbindSmartPointerTrait.h"
#include <emscripten.h>
#include <string>
#include "vtkVariant.h"
#include "vtkObjectBase.h"
#include "vtkIndent.h"
#include "vtkRectilinearGrid.h"
#include "vtkDataObject.h"
#include "vtkInformation.h"
#include "vtkInformationVector.h"
#include "vtkRectilinearGridAlgorithm.h"

template<> void emscripten::internal::raw_destructor<vtkRectilinearGridAlgorithm>(vtkRectilinearGridAlgorithm * ptr){ ptr->Delete(); }
EMSCRIPTEN_BINDINGS(vtkRectilinearGridAlgorithm_class) {
  emscripten::class_<vtkRectilinearGridAlgorithm, emscripten::base<vtkAlgorithm>>("vtkRectilinearGridAlgorithm")
    .smart_ptr<vtkSmartPointer<vtkRectilinearGridAlgorithm>>("vtkSmartPointer<vtkRectilinearGridAlgorithm>")
    .constructor(&vtk::MakeVTKSmartPtr<vtkRectilinearGridAlgorithm>)
    .class_function("IsTypeOf", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkRectilinearGridAlgorithm::IsTypeOf( arg_0.c_str());}))
    .function("IsA", emscripten::optional_override([](vtkRectilinearGridAlgorithm& self, const std::string & arg_0) -> int {  return self.IsA( arg_0.c_str());}))
    .class_function("SafeDownCast", &vtkRectilinearGridAlgorithm::SafeDownCast, emscripten::allow_raw_pointers())
    .function("NewInstance", &vtkRectilinearGridAlgorithm::NewInstance, emscripten::allow_raw_pointers())
    .class_function("GetNumberOfGenerationsFromBaseType", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkRectilinearGridAlgorithm::GetNumberOfGenerationsFromBaseType( arg_0.c_str());}))
    .function("GetNumberOfGenerationsFromBase", emscripten::optional_override([](vtkRectilinearGridAlgorithm& self, const std::string & arg_0) -> int {  return self.GetNumberOfGenerationsFromBase( arg_0.c_str());}))
    .function("GetOutput", emscripten::select_overload<vtkRectilinearGrid*(vtkRectilinearGridAlgorithm&)>([](vtkRectilinearGridAlgorithm& self) -> vtkRectilinearGrid* { return self.GetOutput(); }), emscripten::allow_raw_pointers())
    .function("GetOutput", emscripten::select_overload<vtkRectilinearGrid*(vtkRectilinearGridAlgorithm&, int)>([](vtkRectilinearGridAlgorithm& self, int arg_0) -> vtkRectilinearGrid* { return self.GetOutput( arg_0); }), emscripten::allow_raw_pointers())
    .function("SetOutput", &vtkRectilinearGridAlgorithm::SetOutput, emscripten::allow_raw_pointers())
    .function("GetInput", emscripten::select_overload<vtkDataObject*(vtkRectilinearGridAlgorithm&)>([](vtkRectilinearGridAlgorithm& self) -> vtkDataObject* { return self.GetInput(); }), emscripten::allow_raw_pointers())
    .function("GetInput", emscripten::select_overload<vtkDataObject*(vtkRectilinearGridAlgorithm&, int)>([](vtkRectilinearGridAlgorithm& self, int arg_0) -> vtkDataObject* { return self.GetInput( arg_0); }), emscripten::allow_raw_pointers())
    .function("GetRectilinearGridInput", &vtkRectilinearGridAlgorithm::GetRectilinearGridInput, emscripten::allow_raw_pointers())
    .function("SetInputData", emscripten::select_overload<void(vtkRectilinearGridAlgorithm&, vtkDataObject*)>([](vtkRectilinearGridAlgorithm& self, vtkDataObject* arg_0) -> void { return self.SetInputData( arg_0); }), emscripten::allow_raw_pointers())
    .function("SetInputData", emscripten::select_overload<void(vtkRectilinearGridAlgorithm&, int, vtkDataObject*)>([](vtkRectilinearGridAlgorithm& self, int arg_0, vtkDataObject* arg_1) -> void { return self.SetInputData( arg_0, arg_1); }), emscripten::allow_raw_pointers())
    .function("AddInputData", emscripten::select_overload<void(vtkRectilinearGridAlgorithm&, vtkDataObject*)>([](vtkRectilinearGridAlgorithm& self, vtkDataObject* arg_0) -> void { return self.AddInputData( arg_0); }), emscripten::allow_raw_pointers())
    .function("AddInputData", emscripten::select_overload<void(vtkRectilinearGridAlgorithm&, int, vtkDataObject*)>([](vtkRectilinearGridAlgorithm& self, int arg_0, vtkDataObject* arg_1) -> void { return self.AddInputData( arg_0, arg_1); }), emscripten::allow_raw_pointers());
}
