// JavaScript wrapper for vtkPassInputTypeAlgorithm with embind 
//
// This file was auto-generated using :
/*
node /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/bin/vtkWrapJavaScript.js \
 @/home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkCommonExecutionModel.js/vtkCommonExecutionModel.js.Release.args \
 -o \
 /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkCommonExecutionModel.js/vtkPassInputTypeAlgorithmEmbinding.cxx \
 /home/jmh/github/vtk/Common/ExecutionModel/vtkPassInputTypeAlgorithm.h
*/
#include "vtkEmbindSmartPointerTrait.h"
#include <emscripten.h>
#include <string>
#include "vtkVariant.h"
#include "vtkObjectBase.h"
#include "vtkIndent.h"
#include "vtkDataObject.h"
#include "vtkPolyData.h"
#include "vtkStructuredPoints.h"
#include "vtkImageData.h"
#include "vtkStructuredGrid.h"
#include "vtkUnstructuredGrid.h"
#include "vtkRectilinearGrid.h"
#include "vtkGraph.h"
#include "vtkMolecule.h"
#include "vtkTable.h"
#include "vtkHyperTreeGrid.h"
#include "vtkInformation.h"
#include "vtkInformationVector.h"
#include "vtkPassInputTypeAlgorithm.h"

template<> void emscripten::internal::raw_destructor<vtkPassInputTypeAlgorithm>(vtkPassInputTypeAlgorithm * ptr){ ptr->Delete(); }
EMSCRIPTEN_BINDINGS(vtkPassInputTypeAlgorithm_class) {
  emscripten::class_<vtkPassInputTypeAlgorithm, emscripten::base<vtkAlgorithm>>("vtkPassInputTypeAlgorithm")
    .smart_ptr<vtkSmartPointer<vtkPassInputTypeAlgorithm>>("vtkSmartPointer<vtkPassInputTypeAlgorithm>")
    .constructor(&vtk::MakeVTKSmartPtr<vtkPassInputTypeAlgorithm>)
    .class_function("IsTypeOf", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkPassInputTypeAlgorithm::IsTypeOf( arg_0.c_str());}))
    .function("IsA", emscripten::optional_override([](vtkPassInputTypeAlgorithm& self, const std::string & arg_0) -> int {  return self.IsA( arg_0.c_str());}))
    .class_function("SafeDownCast", &vtkPassInputTypeAlgorithm::SafeDownCast, emscripten::allow_raw_pointers())
    .function("NewInstance", &vtkPassInputTypeAlgorithm::NewInstance, emscripten::allow_raw_pointers())
    .class_function("GetNumberOfGenerationsFromBaseType", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkPassInputTypeAlgorithm::GetNumberOfGenerationsFromBaseType( arg_0.c_str());}))
    .function("GetNumberOfGenerationsFromBase", emscripten::optional_override([](vtkPassInputTypeAlgorithm& self, const std::string & arg_0) -> int {  return self.GetNumberOfGenerationsFromBase( arg_0.c_str());}))
    .function("GetOutput", emscripten::select_overload<vtkDataObject*(vtkPassInputTypeAlgorithm&)>([](vtkPassInputTypeAlgorithm& self) -> vtkDataObject* { return self.GetOutput(); }), emscripten::allow_raw_pointers())
    .function("GetOutput", emscripten::select_overload<vtkDataObject*(vtkPassInputTypeAlgorithm&, int)>([](vtkPassInputTypeAlgorithm& self, int arg_0) -> vtkDataObject* { return self.GetOutput( arg_0); }), emscripten::allow_raw_pointers())
    .function("GetPolyDataOutput", &vtkPassInputTypeAlgorithm::GetPolyDataOutput, emscripten::allow_raw_pointers())
    .function("GetStructuredPointsOutput", &vtkPassInputTypeAlgorithm::GetStructuredPointsOutput, emscripten::allow_raw_pointers())
    .function("GetImageDataOutput", &vtkPassInputTypeAlgorithm::GetImageDataOutput, emscripten::allow_raw_pointers())
    .function("GetStructuredGridOutput", &vtkPassInputTypeAlgorithm::GetStructuredGridOutput, emscripten::allow_raw_pointers())
    .function("GetUnstructuredGridOutput", &vtkPassInputTypeAlgorithm::GetUnstructuredGridOutput, emscripten::allow_raw_pointers())
    .function("GetRectilinearGridOutput", &vtkPassInputTypeAlgorithm::GetRectilinearGridOutput, emscripten::allow_raw_pointers())
    .function("GetGraphOutput", &vtkPassInputTypeAlgorithm::GetGraphOutput, emscripten::allow_raw_pointers())
    .function("GetMoleculeOutput", &vtkPassInputTypeAlgorithm::GetMoleculeOutput, emscripten::allow_raw_pointers())
    .function("GetTableOutput", &vtkPassInputTypeAlgorithm::GetTableOutput, emscripten::allow_raw_pointers())
    .function("GetHyperTreeGridOutput", &vtkPassInputTypeAlgorithm::GetHyperTreeGridOutput, emscripten::allow_raw_pointers())
    .function("GetInput", emscripten::select_overload<vtkDataObject*(vtkPassInputTypeAlgorithm&)>([](vtkPassInputTypeAlgorithm& self) -> vtkDataObject* { return self.GetInput(); }), emscripten::allow_raw_pointers())
    .function("SetInputData", emscripten::select_overload<void(vtkPassInputTypeAlgorithm&, vtkDataObject*)>([](vtkPassInputTypeAlgorithm& self, vtkDataObject* arg_0) -> void { return self.SetInputData( arg_0); }), emscripten::allow_raw_pointers())
    .function("SetInputData", emscripten::select_overload<void(vtkPassInputTypeAlgorithm&, int, vtkDataObject*)>([](vtkPassInputTypeAlgorithm& self, int arg_0, vtkDataObject* arg_1) -> void { return self.SetInputData( arg_0, arg_1); }), emscripten::allow_raw_pointers())
    .function("AddInputData", emscripten::select_overload<void(vtkPassInputTypeAlgorithm&, vtkDataObject*)>([](vtkPassInputTypeAlgorithm& self, vtkDataObject* arg_0) -> void { return self.AddInputData( arg_0); }), emscripten::allow_raw_pointers())
    .function("AddInputData", emscripten::select_overload<void(vtkPassInputTypeAlgorithm&, int, vtkDataObject*)>([](vtkPassInputTypeAlgorithm& self, int arg_0, vtkDataObject* arg_1) -> void { return self.AddInputData( arg_0, arg_1); }), emscripten::allow_raw_pointers());
}
