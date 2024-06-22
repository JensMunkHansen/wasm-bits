// JavaScript wrapper for vtkMoleculeAlgorithm with embind 
//
// This file was auto-generated using :
/*
node /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/bin/vtkWrapJavaScript.js \
 @/home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkCommonExecutionModel.js/vtkCommonExecutionModel.js.Release.args \
 -o \
 /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkCommonExecutionModel.js/vtkMoleculeAlgorithmEmbinding.cxx \
 /home/jmh/github/vtk/Common/ExecutionModel/vtkMoleculeAlgorithm.h
*/
#include "vtkEmbindSmartPointerTrait.h"
#include <emscripten.h>
#include <string>
#include "vtkVariant.h"
#include "vtkObjectBase.h"
#include "vtkIndent.h"
#include "vtkMolecule.h"
#include "vtkInformation.h"
#include "vtkInformationVector.h"
#include "vtkDataObject.h"
#include "vtkMoleculeAlgorithm.h"

template<> void emscripten::internal::raw_destructor<vtkMoleculeAlgorithm>(vtkMoleculeAlgorithm * ptr){ ptr->Delete(); }
EMSCRIPTEN_BINDINGS(vtkMoleculeAlgorithm_class) {
  emscripten::class_<vtkMoleculeAlgorithm, emscripten::base<vtkAlgorithm>>("vtkMoleculeAlgorithm")
    .smart_ptr<vtkSmartPointer<vtkMoleculeAlgorithm>>("vtkSmartPointer<vtkMoleculeAlgorithm>")
    .constructor(&vtk::MakeVTKSmartPtr<vtkMoleculeAlgorithm>)
    .class_function("IsTypeOf", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkMoleculeAlgorithm::IsTypeOf( arg_0.c_str());}))
    .function("IsA", emscripten::optional_override([](vtkMoleculeAlgorithm& self, const std::string & arg_0) -> int {  return self.IsA( arg_0.c_str());}))
    .class_function("SafeDownCast", &vtkMoleculeAlgorithm::SafeDownCast, emscripten::allow_raw_pointers())
    .function("NewInstance", &vtkMoleculeAlgorithm::NewInstance, emscripten::allow_raw_pointers())
    .class_function("GetNumberOfGenerationsFromBaseType", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkMoleculeAlgorithm::GetNumberOfGenerationsFromBaseType( arg_0.c_str());}))
    .function("GetNumberOfGenerationsFromBase", emscripten::optional_override([](vtkMoleculeAlgorithm& self, const std::string & arg_0) -> int {  return self.GetNumberOfGenerationsFromBase( arg_0.c_str());}))
    .function("GetOutput", emscripten::select_overload<vtkMolecule*(vtkMoleculeAlgorithm&)>([](vtkMoleculeAlgorithm& self) -> vtkMolecule* { return self.GetOutput(); }), emscripten::allow_raw_pointers())
    .function("GetOutput", emscripten::select_overload<vtkMolecule*(vtkMoleculeAlgorithm&, int)>([](vtkMoleculeAlgorithm& self, int arg_0) -> vtkMolecule* { return self.GetOutput( arg_0); }), emscripten::allow_raw_pointers())
    .function("SetOutput", &vtkMoleculeAlgorithm::SetOutput, emscripten::allow_raw_pointers())
    .function("GetInput", emscripten::select_overload<vtkDataObject*(vtkMoleculeAlgorithm&)>([](vtkMoleculeAlgorithm& self) -> vtkDataObject* { return self.GetInput(); }), emscripten::allow_raw_pointers())
    .function("GetInput", emscripten::select_overload<vtkDataObject*(vtkMoleculeAlgorithm&, int)>([](vtkMoleculeAlgorithm& self, int arg_0) -> vtkDataObject* { return self.GetInput( arg_0); }), emscripten::allow_raw_pointers())
    .function("GetMoleculeInput", &vtkMoleculeAlgorithm::GetMoleculeInput, emscripten::allow_raw_pointers())
    .function("SetInputData", emscripten::select_overload<void(vtkMoleculeAlgorithm&, vtkDataObject*)>([](vtkMoleculeAlgorithm& self, vtkDataObject* arg_0) -> void { return self.SetInputData( arg_0); }), emscripten::allow_raw_pointers())
    .function("SetInputData", emscripten::select_overload<void(vtkMoleculeAlgorithm&, int, vtkDataObject*)>([](vtkMoleculeAlgorithm& self, int arg_0, vtkDataObject* arg_1) -> void { return self.SetInputData( arg_0, arg_1); }), emscripten::allow_raw_pointers())
    .function("AddInputData", emscripten::select_overload<void(vtkMoleculeAlgorithm&, vtkDataObject*)>([](vtkMoleculeAlgorithm& self, vtkDataObject* arg_0) -> void { return self.AddInputData( arg_0); }), emscripten::allow_raw_pointers())
    .function("AddInputData", emscripten::select_overload<void(vtkMoleculeAlgorithm&, int, vtkDataObject*)>([](vtkMoleculeAlgorithm& self, int arg_0, vtkDataObject* arg_1) -> void { return self.AddInputData( arg_0, arg_1); }), emscripten::allow_raw_pointers());
}
