// JavaScript wrapper for vtkHyperTreeGridAlgorithm with embind 
//
// This file was auto-generated using :
/*
node /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/bin/vtkWrapJavaScript.js \
 @/home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkCommonExecutionModel.js/vtkCommonExecutionModel.js.Release.args \
 -o \
 /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkCommonExecutionModel.js/vtkHyperTreeGridAlgorithmEmbinding.cxx \
 /home/jmh/github/vtk/Common/ExecutionModel/vtkHyperTreeGridAlgorithm.h
*/
#include "vtkEmbindSmartPointerTrait.h"
#include <emscripten.h>
#include <string>
#include "vtkVariant.h"
#include "vtkObjectBase.h"
#include "vtkIndent.h"
#include "vtkDataObject.h"
#include "vtkHyperTreeGrid.h"
#include "vtkPolyData.h"
#include "vtkUnstructuredGrid.h"
#include "vtkInformation.h"
#include "vtkInformationVector.h"
#include "vtkHyperTreeGridAlgorithm.h"

template<> void emscripten::internal::raw_destructor<vtkHyperTreeGridAlgorithm>(vtkHyperTreeGridAlgorithm * ptr){ ptr->Delete(); }
EMSCRIPTEN_BINDINGS(vtkHyperTreeGridAlgorithm_class) {
  emscripten::class_<vtkHyperTreeGridAlgorithm, emscripten::base<vtkAlgorithm>>("vtkHyperTreeGridAlgorithm")
    .class_function("IsTypeOf", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkHyperTreeGridAlgorithm::IsTypeOf( arg_0.c_str());}))
    .function("IsA", emscripten::optional_override([](vtkHyperTreeGridAlgorithm& self, const std::string & arg_0) -> int {  return self.IsA( arg_0.c_str());}))
    .class_function("SafeDownCast", &vtkHyperTreeGridAlgorithm::SafeDownCast, emscripten::allow_raw_pointers())
    .function("NewInstance", &vtkHyperTreeGridAlgorithm::NewInstance, emscripten::allow_raw_pointers())
    .class_function("GetNumberOfGenerationsFromBaseType", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkHyperTreeGridAlgorithm::GetNumberOfGenerationsFromBaseType( arg_0.c_str());}))
    .function("GetNumberOfGenerationsFromBase", emscripten::optional_override([](vtkHyperTreeGridAlgorithm& self, const std::string & arg_0) -> int {  return self.GetNumberOfGenerationsFromBase( arg_0.c_str());}))
    .function("GetOutput", emscripten::select_overload<vtkDataObject*(vtkHyperTreeGridAlgorithm&)>([](vtkHyperTreeGridAlgorithm& self) -> vtkDataObject* { return self.GetOutput(); }), emscripten::allow_raw_pointers())
    .function("GetOutput", emscripten::select_overload<vtkDataObject*(vtkHyperTreeGridAlgorithm&, int)>([](vtkHyperTreeGridAlgorithm& self, int arg_0) -> vtkDataObject* { return self.GetOutput( arg_0); }), emscripten::allow_raw_pointers())
    .function("SetOutput", &vtkHyperTreeGridAlgorithm::SetOutput, emscripten::allow_raw_pointers())
    .function("GetHyperTreeGridOutput", emscripten::select_overload<vtkHyperTreeGrid*(vtkHyperTreeGridAlgorithm&)>([](vtkHyperTreeGridAlgorithm& self) -> vtkHyperTreeGrid* { return self.GetHyperTreeGridOutput(); }), emscripten::allow_raw_pointers())
    .function("GetHyperTreeGridOutput", emscripten::select_overload<vtkHyperTreeGrid*(vtkHyperTreeGridAlgorithm&, int)>([](vtkHyperTreeGridAlgorithm& self, int arg_0) -> vtkHyperTreeGrid* { return self.GetHyperTreeGridOutput( arg_0); }), emscripten::allow_raw_pointers())
    .function("GetPolyDataOutput", emscripten::select_overload<vtkPolyData*(vtkHyperTreeGridAlgorithm&)>([](vtkHyperTreeGridAlgorithm& self) -> vtkPolyData* { return self.GetPolyDataOutput(); }), emscripten::allow_raw_pointers())
    .function("GetPolyDataOutput", emscripten::select_overload<vtkPolyData*(vtkHyperTreeGridAlgorithm&, int)>([](vtkHyperTreeGridAlgorithm& self, int arg_0) -> vtkPolyData* { return self.GetPolyDataOutput( arg_0); }), emscripten::allow_raw_pointers())
    .function("GetUnstructuredGridOutput", emscripten::select_overload<vtkUnstructuredGrid*(vtkHyperTreeGridAlgorithm&)>([](vtkHyperTreeGridAlgorithm& self) -> vtkUnstructuredGrid* { return self.GetUnstructuredGridOutput(); }), emscripten::allow_raw_pointers())
    .function("GetUnstructuredGridOutput", emscripten::select_overload<vtkUnstructuredGrid*(vtkHyperTreeGridAlgorithm&, int)>([](vtkHyperTreeGridAlgorithm& self, int arg_0) -> vtkUnstructuredGrid* { return self.GetUnstructuredGridOutput( arg_0); }), emscripten::allow_raw_pointers())
    .function("SetInputData", emscripten::select_overload<void(vtkHyperTreeGridAlgorithm&, vtkDataObject*)>([](vtkHyperTreeGridAlgorithm& self, vtkDataObject* arg_0) -> void { return self.SetInputData( arg_0); }), emscripten::allow_raw_pointers())
    .function("SetInputData", emscripten::select_overload<void(vtkHyperTreeGridAlgorithm&, int, vtkDataObject*)>([](vtkHyperTreeGridAlgorithm& self, int arg_0, vtkDataObject* arg_1) -> void { return self.SetInputData( arg_0, arg_1); }), emscripten::allow_raw_pointers())
    .function("AddInputData", emscripten::select_overload<void(vtkHyperTreeGridAlgorithm&, vtkDataObject*)>([](vtkHyperTreeGridAlgorithm& self, vtkDataObject* arg_0) -> void { return self.AddInputData( arg_0); }), emscripten::allow_raw_pointers())
    .function("AddInputData", emscripten::select_overload<void(vtkHyperTreeGridAlgorithm&, int, vtkDataObject*)>([](vtkHyperTreeGridAlgorithm& self, int arg_0, vtkDataObject* arg_1) -> void { return self.AddInputData( arg_0, arg_1); }), emscripten::allow_raw_pointers());
}
