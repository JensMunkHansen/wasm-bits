// JavaScript wrapper for vtkHierarchicalBoxDataSetAlgorithm with embind 
//
// This file was auto-generated using :
/*
node /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/bin/vtkWrapJavaScript.js \
 @/home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkCommonExecutionModel.js/vtkCommonExecutionModel.js.Release.args \
 -o \
 /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkCommonExecutionModel.js/vtkHierarchicalBoxDataSetAlgorithmEmbinding.cxx \
 /home/jmh/github/vtk/Common/ExecutionModel/vtkHierarchicalBoxDataSetAlgorithm.h
*/
#include "vtkEmbindSmartPointerTrait.h"
#include <emscripten.h>
#include <string>
#include "vtkVariant.h"
#include "vtkObjectBase.h"
#include "vtkIndent.h"
#include "vtkHierarchicalBoxDataSet.h"
#include "vtkDataObject.h"
#include "vtkInformation.h"
#include "vtkInformationVector.h"
#include "vtkHierarchicalBoxDataSetAlgorithm.h"

template<> void emscripten::internal::raw_destructor<vtkHierarchicalBoxDataSetAlgorithm>(vtkHierarchicalBoxDataSetAlgorithm * ptr){ ptr->Delete(); }
EMSCRIPTEN_BINDINGS(vtkHierarchicalBoxDataSetAlgorithm_class) {
  emscripten::class_<vtkHierarchicalBoxDataSetAlgorithm, emscripten::base<vtkAlgorithm>>("vtkHierarchicalBoxDataSetAlgorithm")
    .smart_ptr<vtkSmartPointer<vtkHierarchicalBoxDataSetAlgorithm>>("vtkSmartPointer<vtkHierarchicalBoxDataSetAlgorithm>")
    .constructor(&vtk::MakeAvtkSmartPointer<vtkHierarchicalBoxDataSetAlgorithm>)
    .class_function("IsTypeOf", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkHierarchicalBoxDataSetAlgorithm::IsTypeOf( arg_0.c_str());}))
    .function("IsA", emscripten::optional_override([](vtkHierarchicalBoxDataSetAlgorithm& self, const std::string & arg_0) -> int {  return self.IsA( arg_0.c_str());}))
    .class_function("SafeDownCast", &vtkHierarchicalBoxDataSetAlgorithm::SafeDownCast, emscripten::allow_raw_pointers())
    .function("NewInstance", &vtkHierarchicalBoxDataSetAlgorithm::NewInstance, emscripten::allow_raw_pointers())
    .class_function("GetNumberOfGenerationsFromBaseType", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkHierarchicalBoxDataSetAlgorithm::GetNumberOfGenerationsFromBaseType( arg_0.c_str());}))
    .function("GetNumberOfGenerationsFromBase", emscripten::optional_override([](vtkHierarchicalBoxDataSetAlgorithm& self, const std::string & arg_0) -> int {  return self.GetNumberOfGenerationsFromBase( arg_0.c_str());}))
    .function("GetOutput", emscripten::select_overload<vtkHierarchicalBoxDataSet*(vtkHierarchicalBoxDataSetAlgorithm&)>([](vtkHierarchicalBoxDataSetAlgorithm& self) -> vtkHierarchicalBoxDataSet* { return self.GetOutput(); }), emscripten::allow_raw_pointers())
    .function("GetOutput", emscripten::select_overload<vtkHierarchicalBoxDataSet*(vtkHierarchicalBoxDataSetAlgorithm&, int)>([](vtkHierarchicalBoxDataSetAlgorithm& self, int arg_0) -> vtkHierarchicalBoxDataSet* { return self.GetOutput( arg_0); }), emscripten::allow_raw_pointers())
    .function("SetInputData", emscripten::select_overload<void(vtkHierarchicalBoxDataSetAlgorithm&, vtkDataObject*)>([](vtkHierarchicalBoxDataSetAlgorithm& self, vtkDataObject* arg_0) -> void { return self.SetInputData( arg_0); }), emscripten::allow_raw_pointers())
    .function("SetInputData", emscripten::select_overload<void(vtkHierarchicalBoxDataSetAlgorithm&, int, vtkDataObject*)>([](vtkHierarchicalBoxDataSetAlgorithm& self, int arg_0, vtkDataObject* arg_1) -> void { return self.SetInputData( arg_0, arg_1); }), emscripten::allow_raw_pointers());
}
