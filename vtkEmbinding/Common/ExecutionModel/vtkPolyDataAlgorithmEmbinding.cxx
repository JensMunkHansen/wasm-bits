// JavaScript wrapper for vtkPolyDataAlgorithm with embind 
#include "vtkEmbindSmartPointerTraits.h"
#include <emscripten.h>
#include <string>
#include "vtkVariant.h"
#include "vtkObjectBase.h"
#include "vtkIndent.h"
#include "vtkPolyData.h"
#include "vtkDataObject.h"
#include "vtkInformation.h"
#include "vtkInformationVector.h"
#include "vtkPolyDataAlgorithm.h"

template<> void emscripten::internal::raw_destructor<vtkPolyDataAlgorithm>(vtkPolyDataAlgorithm * ptr){ ptr->Delete(); }
EMSCRIPTEN_BINDINGS(vtkPolyDataAlgorithm_class) {
  emscripten::class_<vtkPolyDataAlgorithm, emscripten::base<vtkAlgorithm>>("vtkPolyDataAlgorithm")
    .smart_ptr<vtkSmartPointer<vtkPolyDataAlgorithm>>("vtkSmartPointer<vtkPolyDataAlgorithm>")
    .constructor(&vtk::MakeVTKSmartPtr<vtkPolyDataAlgorithm>)
    .class_function("IsTypeOf", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkPolyDataAlgorithm::IsTypeOf( arg_0.c_str());}))
    .function("IsA", emscripten::optional_override([](vtkPolyDataAlgorithm& self, const std::string & arg_0) -> int {  return self.IsA( arg_0.c_str());}))
    .class_function("SafeDownCast", &vtkPolyDataAlgorithm::SafeDownCast, emscripten::allow_raw_pointers())
    .function("NewInstance", &vtkPolyDataAlgorithm::NewInstance, emscripten::allow_raw_pointers())
    .class_function("GetNumberOfGenerationsFromBaseType", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkPolyDataAlgorithm::GetNumberOfGenerationsFromBaseType( arg_0.c_str());}))
    .function("GetNumberOfGenerationsFromBase", emscripten::optional_override([](vtkPolyDataAlgorithm& self, const std::string & arg_0) -> int {  return self.GetNumberOfGenerationsFromBase( arg_0.c_str());}))
    .function("GetOutput", emscripten::select_overload<vtkPolyData*(vtkPolyDataAlgorithm&)>([](vtkPolyDataAlgorithm& self) -> vtkPolyData* { return self.GetOutput(); }), emscripten::allow_raw_pointers())
    .function("GetOutput", emscripten::select_overload<vtkPolyData*(vtkPolyDataAlgorithm&, int)>([](vtkPolyDataAlgorithm& self, int arg_0) -> vtkPolyData* { return self.GetOutput( arg_0); }), emscripten::allow_raw_pointers())
    .function("SetOutput", &vtkPolyDataAlgorithm::SetOutput, emscripten::allow_raw_pointers())
    .function("GetInput", emscripten::select_overload<vtkDataObject*(vtkPolyDataAlgorithm&)>([](vtkPolyDataAlgorithm& self) -> vtkDataObject* { return self.GetInput(); }), emscripten::allow_raw_pointers())
    .function("GetInput", emscripten::select_overload<vtkDataObject*(vtkPolyDataAlgorithm&, int)>([](vtkPolyDataAlgorithm& self, int arg_0) -> vtkDataObject* { return self.GetInput( arg_0); }), emscripten::allow_raw_pointers())
    .function("GetPolyDataInput", &vtkPolyDataAlgorithm::GetPolyDataInput, emscripten::allow_raw_pointers())
    .function("SetInputData", emscripten::select_overload<void(vtkPolyDataAlgorithm&, vtkDataObject*)>([](vtkPolyDataAlgorithm& self, vtkDataObject* arg_0) -> void { return self.SetInputData( arg_0); }), emscripten::allow_raw_pointers())
    .function("SetInputData", emscripten::select_overload<void(vtkPolyDataAlgorithm&, int, vtkDataObject*)>([](vtkPolyDataAlgorithm& self, int arg_0, vtkDataObject* arg_1) -> void { return self.SetInputData( arg_0, arg_1); }), emscripten::allow_raw_pointers())
    .function("AddInputData", emscripten::select_overload<void(vtkPolyDataAlgorithm&, vtkDataObject*)>([](vtkPolyDataAlgorithm& self, vtkDataObject* arg_0) -> void { return self.AddInputData( arg_0); }), emscripten::allow_raw_pointers())
    .function("AddInputData", emscripten::select_overload<void(vtkPolyDataAlgorithm&, int, vtkDataObject*)>([](vtkPolyDataAlgorithm& self, int arg_0, vtkDataObject* arg_1) -> void { return self.AddInputData( arg_0, arg_1); }), emscripten::allow_raw_pointers());
}
