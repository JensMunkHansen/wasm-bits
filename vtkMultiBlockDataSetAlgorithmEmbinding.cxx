// JavaScript wrapper for vtkMultiBlockDataSetAlgorithm with embind 
//
// This file was auto-generated using :
/*
node /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/bin/vtkWrapJavaScript.js \
 @/home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkCommonExecutionModel.js/vtkCommonExecutionModel.js.Release.args \
 -o \
 /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkCommonExecutionModel.js/vtkMultiBlockDataSetAlgorithmEmbinding.cxx \
 /home/jmh/github/vtk/Common/ExecutionModel/vtkMultiBlockDataSetAlgorithm.h
*/
#include "vtkEmbindSmartPointerTrait.h"
#include <emscripten.h>
#include <string>
#include "vtkVariant.h"
#include "vtkObjectBase.h"
#include "vtkIndent.h"
#include "vtkMultiBlockDataSet.h"
#include "vtkDataObject.h"
#include "vtkInformation.h"
#include "vtkInformationVector.h"
#include "vtkMultiBlockDataSetAlgorithm.h"

template<> void emscripten::internal::raw_destructor<vtkMultiBlockDataSetAlgorithm>(vtkMultiBlockDataSetAlgorithm * ptr){ ptr->Delete(); }
EMSCRIPTEN_BINDINGS(vtkMultiBlockDataSetAlgorithm_class) {
  emscripten::class_<vtkMultiBlockDataSetAlgorithm, emscripten::base<vtkAlgorithm>>("vtkMultiBlockDataSetAlgorithm")
    .smart_ptr<vtkSmartPointer<vtkMultiBlockDataSetAlgorithm>>("vtkSmartPointer<vtkMultiBlockDataSetAlgorithm>")
    .constructor(&vtk::MakeVTKSmartPtr<vtkMultiBlockDataSetAlgorithm>)
    .class_function("IsTypeOf", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkMultiBlockDataSetAlgorithm::IsTypeOf( arg_0.c_str());}))
    .function("IsA", emscripten::optional_override([](vtkMultiBlockDataSetAlgorithm& self, const std::string & arg_0) -> int {  return self.IsA( arg_0.c_str());}))
    .class_function("SafeDownCast", &vtkMultiBlockDataSetAlgorithm::SafeDownCast, emscripten::allow_raw_pointers())
    .function("NewInstance", &vtkMultiBlockDataSetAlgorithm::NewInstance, emscripten::allow_raw_pointers())
    .class_function("GetNumberOfGenerationsFromBaseType", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkMultiBlockDataSetAlgorithm::GetNumberOfGenerationsFromBaseType( arg_0.c_str());}))
    .function("GetNumberOfGenerationsFromBase", emscripten::optional_override([](vtkMultiBlockDataSetAlgorithm& self, const std::string & arg_0) -> int {  return self.GetNumberOfGenerationsFromBase( arg_0.c_str());}))
    .function("GetOutput", emscripten::select_overload<vtkMultiBlockDataSet*(vtkMultiBlockDataSetAlgorithm&)>([](vtkMultiBlockDataSetAlgorithm& self) -> vtkMultiBlockDataSet* { return self.GetOutput(); }), emscripten::allow_raw_pointers())
    .function("GetOutput", emscripten::select_overload<vtkMultiBlockDataSet*(vtkMultiBlockDataSetAlgorithm&, int)>([](vtkMultiBlockDataSetAlgorithm& self, int arg_0) -> vtkMultiBlockDataSet* { return self.GetOutput( arg_0); }), emscripten::allow_raw_pointers())
    .function("SetInputData", emscripten::select_overload<void(vtkMultiBlockDataSetAlgorithm&, vtkDataObject*)>([](vtkMultiBlockDataSetAlgorithm& self, vtkDataObject* arg_0) -> void { return self.SetInputData( arg_0); }), emscripten::allow_raw_pointers())
    .function("SetInputData", emscripten::select_overload<void(vtkMultiBlockDataSetAlgorithm&, int, vtkDataObject*)>([](vtkMultiBlockDataSetAlgorithm& self, int arg_0, vtkDataObject* arg_1) -> void { return self.SetInputData( arg_0, arg_1); }), emscripten::allow_raw_pointers());
}
