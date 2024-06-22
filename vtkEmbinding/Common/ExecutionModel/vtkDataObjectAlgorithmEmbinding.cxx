// JavaScript wrapper for vtkDataObjectAlgorithm with embind 
#include "vtkEmbindSmartPointerTraits.h"
#include <emscripten.h>
#include <string>
#include "vtkVariant.h"
#include "vtkObjectBase.h"
#include "vtkIndent.h"
#include "vtkDataObject.h"
#include "vtkInformation.h"
#include "vtkInformationVector.h"
#include "vtkDataObjectAlgorithm.h"

template<> void emscripten::internal::raw_destructor<vtkDataObjectAlgorithm>(vtkDataObjectAlgorithm * ptr){ ptr->Delete(); }
EMSCRIPTEN_BINDINGS(vtkDataObjectAlgorithm_class) {
  emscripten::class_<vtkDataObjectAlgorithm, emscripten::base<vtkAlgorithm>>("vtkDataObjectAlgorithm")
    .smart_ptr<vtkSmartPointer<vtkDataObjectAlgorithm>>("vtkSmartPointer<vtkDataObjectAlgorithm>")
    .constructor(&vtk::MakeVTKSmartPtr<vtkDataObjectAlgorithm>)
    .class_function("IsTypeOf", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkDataObjectAlgorithm::IsTypeOf( arg_0.c_str());}))
    .function("IsA", emscripten::optional_override([](vtkDataObjectAlgorithm& self, const std::string & arg_0) -> int {  return self.IsA( arg_0.c_str());}))
    .class_function("SafeDownCast", &vtkDataObjectAlgorithm::SafeDownCast, emscripten::allow_raw_pointers())
    .function("NewInstance", &vtkDataObjectAlgorithm::NewInstance, emscripten::allow_raw_pointers())
    .class_function("GetNumberOfGenerationsFromBaseType", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkDataObjectAlgorithm::GetNumberOfGenerationsFromBaseType( arg_0.c_str());}))
    .function("GetNumberOfGenerationsFromBase", emscripten::optional_override([](vtkDataObjectAlgorithm& self, const std::string & arg_0) -> int {  return self.GetNumberOfGenerationsFromBase( arg_0.c_str());}))
    .function("GetOutput", emscripten::select_overload<vtkDataObject*(vtkDataObjectAlgorithm&)>([](vtkDataObjectAlgorithm& self) -> vtkDataObject* { return self.GetOutput(); }), emscripten::allow_raw_pointers())
    .function("GetOutput", emscripten::select_overload<vtkDataObject*(vtkDataObjectAlgorithm&, int)>([](vtkDataObjectAlgorithm& self, int arg_0) -> vtkDataObject* { return self.GetOutput( arg_0); }), emscripten::allow_raw_pointers())
    .function("SetOutput", &vtkDataObjectAlgorithm::SetOutput, emscripten::allow_raw_pointers())
    .function("GetInput", emscripten::select_overload<vtkDataObject*(vtkDataObjectAlgorithm&)>([](vtkDataObjectAlgorithm& self) -> vtkDataObject* { return self.GetInput(); }), emscripten::allow_raw_pointers())
    .function("GetInput", emscripten::select_overload<vtkDataObject*(vtkDataObjectAlgorithm&, int)>([](vtkDataObjectAlgorithm& self, int arg_0) -> vtkDataObject* { return self.GetInput( arg_0); }), emscripten::allow_raw_pointers())
    .function("SetInputData", emscripten::select_overload<void(vtkDataObjectAlgorithm&, vtkDataObject*)>([](vtkDataObjectAlgorithm& self, vtkDataObject* arg_0) -> void { return self.SetInputData( arg_0); }), emscripten::allow_raw_pointers())
    .function("SetInputData", emscripten::select_overload<void(vtkDataObjectAlgorithm&, int, vtkDataObject*)>([](vtkDataObjectAlgorithm& self, int arg_0, vtkDataObject* arg_1) -> void { return self.SetInputData( arg_0, arg_1); }), emscripten::allow_raw_pointers())
    .function("AddInputData", emscripten::select_overload<void(vtkDataObjectAlgorithm&, vtkDataObject*)>([](vtkDataObjectAlgorithm& self, vtkDataObject* arg_0) -> void { return self.AddInputData( arg_0); }), emscripten::allow_raw_pointers())
    .function("AddInputData", emscripten::select_overload<void(vtkDataObjectAlgorithm&, int, vtkDataObject*)>([](vtkDataObjectAlgorithm& self, int arg_0, vtkDataObject* arg_1) -> void { return self.AddInputData( arg_0, arg_1); }), emscripten::allow_raw_pointers());
}
