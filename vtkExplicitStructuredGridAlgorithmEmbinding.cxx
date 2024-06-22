// JavaScript wrapper for vtkExplicitStructuredGridAlgorithm with embind 
//
// This file was auto-generated using :
/*
node /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/bin/vtkWrapJavaScript.js \
 @/home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkCommonExecutionModel.js/vtkCommonExecutionModel.js.Release.args \
 -o \
 /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkCommonExecutionModel.js/vtkExplicitStructuredGridAlgorithmEmbinding.cxx \
 /home/jmh/github/vtk/Common/ExecutionModel/vtkExplicitStructuredGridAlgorithm.h
*/
#include "vtkEmbindSmartPointerTrait.h"
#include <emscripten.h>
#include <string>
#include "vtkVariant.h"
#include "vtkObjectBase.h"
#include "vtkIndent.h"
#include "vtkExplicitStructuredGrid.h"
#include "vtkDataObject.h"
#include "vtkInformation.h"
#include "vtkInformationVector.h"
#include "vtkExplicitStructuredGridAlgorithm.h"

template<> void emscripten::internal::raw_destructor<vtkExplicitStructuredGridAlgorithm>(vtkExplicitStructuredGridAlgorithm * ptr){ ptr->Delete(); }
EMSCRIPTEN_BINDINGS(vtkExplicitStructuredGridAlgorithm_class) {
  emscripten::class_<vtkExplicitStructuredGridAlgorithm, emscripten::base<vtkAlgorithm>>("vtkExplicitStructuredGridAlgorithm")
    .smart_ptr<vtkSmartPointer<vtkExplicitStructuredGridAlgorithm>>("vtkSmartPointer<vtkExplicitStructuredGridAlgorithm>")
    .constructor(&vtk::MakeVTKSmartPtr<vtkExplicitStructuredGridAlgorithm>)
    .class_function("IsTypeOf", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkExplicitStructuredGridAlgorithm::IsTypeOf( arg_0.c_str());}))
    .function("IsA", emscripten::optional_override([](vtkExplicitStructuredGridAlgorithm& self, const std::string & arg_0) -> int {  return self.IsA( arg_0.c_str());}))
    .class_function("SafeDownCast", &vtkExplicitStructuredGridAlgorithm::SafeDownCast, emscripten::allow_raw_pointers())
    .function("NewInstance", &vtkExplicitStructuredGridAlgorithm::NewInstance, emscripten::allow_raw_pointers())
    .class_function("GetNumberOfGenerationsFromBaseType", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkExplicitStructuredGridAlgorithm::GetNumberOfGenerationsFromBaseType( arg_0.c_str());}))
    .function("GetNumberOfGenerationsFromBase", emscripten::optional_override([](vtkExplicitStructuredGridAlgorithm& self, const std::string & arg_0) -> int {  return self.GetNumberOfGenerationsFromBase( arg_0.c_str());}))
    .function("GetOutput", emscripten::select_overload<vtkExplicitStructuredGrid*(vtkExplicitStructuredGridAlgorithm&)>([](vtkExplicitStructuredGridAlgorithm& self) -> vtkExplicitStructuredGrid* { return self.GetOutput(); }), emscripten::allow_raw_pointers())
    .function("GetOutput", emscripten::select_overload<vtkExplicitStructuredGrid*(vtkExplicitStructuredGridAlgorithm&, int)>([](vtkExplicitStructuredGridAlgorithm& self, int arg_0) -> vtkExplicitStructuredGrid* { return self.GetOutput( arg_0); }), emscripten::allow_raw_pointers())
    .function("SetOutput", &vtkExplicitStructuredGridAlgorithm::SetOutput, emscripten::allow_raw_pointers())
    .function("GetInput", emscripten::select_overload<vtkDataObject*(vtkExplicitStructuredGridAlgorithm&)>([](vtkExplicitStructuredGridAlgorithm& self) -> vtkDataObject* { return self.GetInput(); }), emscripten::allow_raw_pointers())
    .function("GetInput", emscripten::select_overload<vtkDataObject*(vtkExplicitStructuredGridAlgorithm&, int)>([](vtkExplicitStructuredGridAlgorithm& self, int arg_0) -> vtkDataObject* { return self.GetInput( arg_0); }), emscripten::allow_raw_pointers())
    .function("GetExplicitStructuredGridInput", &vtkExplicitStructuredGridAlgorithm::GetExplicitStructuredGridInput, emscripten::allow_raw_pointers())
    .function("SetInputData", emscripten::select_overload<void(vtkExplicitStructuredGridAlgorithm&, vtkDataObject*)>([](vtkExplicitStructuredGridAlgorithm& self, vtkDataObject* arg_0) -> void { return self.SetInputData( arg_0); }), emscripten::allow_raw_pointers())
    .function("SetInputData", emscripten::select_overload<void(vtkExplicitStructuredGridAlgorithm&, int, vtkDataObject*)>([](vtkExplicitStructuredGridAlgorithm& self, int arg_0, vtkDataObject* arg_1) -> void { return self.SetInputData( arg_0, arg_1); }), emscripten::allow_raw_pointers())
    .function("AddInputData", emscripten::select_overload<void(vtkExplicitStructuredGridAlgorithm&, vtkDataObject*)>([](vtkExplicitStructuredGridAlgorithm& self, vtkDataObject* arg_0) -> void { return self.AddInputData( arg_0); }), emscripten::allow_raw_pointers())
    .function("AddInputData", emscripten::select_overload<void(vtkExplicitStructuredGridAlgorithm&, int, vtkDataObject*)>([](vtkExplicitStructuredGridAlgorithm& self, int arg_0, vtkDataObject* arg_1) -> void { return self.AddInputData( arg_0, arg_1); }), emscripten::allow_raw_pointers());
}
