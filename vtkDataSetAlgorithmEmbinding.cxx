// JavaScript wrapper for vtkDataSetAlgorithm with embind 
//
// This file was auto-generated using :
/*
node /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/bin/vtkWrapJavaScript.js \
 @/home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkCommonExecutionModel.js/vtkCommonExecutionModel.js.Release.args \
 -o \
 /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkCommonExecutionModel.js/vtkDataSetAlgorithmEmbinding.cxx \
 /home/jmh/github/vtk/Common/ExecutionModel/vtkDataSetAlgorithm.h
*/
#include "vtkEmbindSmartPointerTrait.h"
#include <emscripten.h>
#include <string>
#include "vtkVariant.h"
#include "vtkObjectBase.h"
#include "vtkIndent.h"
#include "vtkDataSet.h"
#include "vtkDataObject.h"
#include "vtkPolyData.h"
#include "vtkStructuredPoints.h"
#include "vtkImageData.h"
#include "vtkStructuredGrid.h"
#include "vtkUnstructuredGrid.h"
#include "vtkRectilinearGrid.h"
#include "vtkInformation.h"
#include "vtkInformationVector.h"
#include "vtkDataSetAlgorithm.h"

template<> void emscripten::internal::raw_destructor<vtkDataSetAlgorithm>(vtkDataSetAlgorithm * ptr){ ptr->Delete(); }
EMSCRIPTEN_BINDINGS(vtkDataSetAlgorithm_class) {
  emscripten::class_<vtkDataSetAlgorithm, emscripten::base<vtkAlgorithm>>("vtkDataSetAlgorithm")
    .smart_ptr<vtkSmartPointer<vtkDataSetAlgorithm>>("vtkSmartPointer<vtkDataSetAlgorithm>")
    .constructor(&vtk::MakeVTKSmartPtr<vtkDataSetAlgorithm>)
    .class_function("IsTypeOf", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkDataSetAlgorithm::IsTypeOf( arg_0.c_str());}))
    .function("IsA", emscripten::optional_override([](vtkDataSetAlgorithm& self, const std::string & arg_0) -> int {  return self.IsA( arg_0.c_str());}))
    .class_function("SafeDownCast", &vtkDataSetAlgorithm::SafeDownCast, emscripten::allow_raw_pointers())
    .function("NewInstance", &vtkDataSetAlgorithm::NewInstance, emscripten::allow_raw_pointers())
    .class_function("GetNumberOfGenerationsFromBaseType", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkDataSetAlgorithm::GetNumberOfGenerationsFromBaseType( arg_0.c_str());}))
    .function("GetNumberOfGenerationsFromBase", emscripten::optional_override([](vtkDataSetAlgorithm& self, const std::string & arg_0) -> int {  return self.GetNumberOfGenerationsFromBase( arg_0.c_str());}))
    .function("GetOutput", emscripten::select_overload<vtkDataSet*(vtkDataSetAlgorithm&)>([](vtkDataSetAlgorithm& self) -> vtkDataSet* { return self.GetOutput(); }), emscripten::allow_raw_pointers())
    .function("GetOutput", emscripten::select_overload<vtkDataSet*(vtkDataSetAlgorithm&, int)>([](vtkDataSetAlgorithm& self, int arg_0) -> vtkDataSet* { return self.GetOutput( arg_0); }), emscripten::allow_raw_pointers())
    .function("GetInput", emscripten::select_overload<vtkDataObject*(vtkDataSetAlgorithm&)>([](vtkDataSetAlgorithm& self) -> vtkDataObject* { return self.GetInput(); }), emscripten::allow_raw_pointers())
    .function("GetPolyDataOutput", &vtkDataSetAlgorithm::GetPolyDataOutput, emscripten::allow_raw_pointers())
    .function("GetStructuredPointsOutput", &vtkDataSetAlgorithm::GetStructuredPointsOutput, emscripten::allow_raw_pointers())
    .function("GetImageDataOutput", &vtkDataSetAlgorithm::GetImageDataOutput, emscripten::allow_raw_pointers())
    .function("GetStructuredGridOutput", &vtkDataSetAlgorithm::GetStructuredGridOutput, emscripten::allow_raw_pointers())
    .function("GetUnstructuredGridOutput", &vtkDataSetAlgorithm::GetUnstructuredGridOutput, emscripten::allow_raw_pointers())
    .function("GetRectilinearGridOutput", &vtkDataSetAlgorithm::GetRectilinearGridOutput, emscripten::allow_raw_pointers())
    .function("SetInputData", emscripten::select_overload<void(vtkDataSetAlgorithm&, vtkDataObject*)>([](vtkDataSetAlgorithm& self, vtkDataObject* arg_0) -> void { return self.SetInputData( arg_0); }), emscripten::allow_raw_pointers())
    .function("SetInputData", emscripten::select_overload<void(vtkDataSetAlgorithm&, vtkDataSet*)>([](vtkDataSetAlgorithm& self, vtkDataSet* arg_0) -> void { return self.SetInputData( arg_0); }), emscripten::allow_raw_pointers())
    .function("SetInputData", emscripten::select_overload<void(vtkDataSetAlgorithm&, int, vtkDataObject*)>([](vtkDataSetAlgorithm& self, int arg_0, vtkDataObject* arg_1) -> void { return self.SetInputData( arg_0, arg_1); }), emscripten::allow_raw_pointers())
    .function("SetInputData", emscripten::select_overload<void(vtkDataSetAlgorithm&, int, vtkDataSet*)>([](vtkDataSetAlgorithm& self, int arg_0, vtkDataSet* arg_1) -> void { return self.SetInputData( arg_0, arg_1); }), emscripten::allow_raw_pointers())
    .function("AddInputData", emscripten::select_overload<void(vtkDataSetAlgorithm&, vtkDataObject*)>([](vtkDataSetAlgorithm& self, vtkDataObject* arg_0) -> void { return self.AddInputData( arg_0); }), emscripten::allow_raw_pointers())
    .function("AddInputData", emscripten::select_overload<void(vtkDataSetAlgorithm&, vtkDataSet*)>([](vtkDataSetAlgorithm& self, vtkDataSet* arg_0) -> void { return self.AddInputData( arg_0); }), emscripten::allow_raw_pointers())
    .function("AddInputData", emscripten::select_overload<void(vtkDataSetAlgorithm&, int, vtkDataSet*)>([](vtkDataSetAlgorithm& self, int arg_0, vtkDataSet* arg_1) -> void { return self.AddInputData( arg_0, arg_1); }), emscripten::allow_raw_pointers())
    .function("AddInputData", emscripten::select_overload<void(vtkDataSetAlgorithm&, int, vtkDataObject*)>([](vtkDataSetAlgorithm& self, int arg_0, vtkDataObject* arg_1) -> void { return self.AddInputData( arg_0, arg_1); }), emscripten::allow_raw_pointers());
}
