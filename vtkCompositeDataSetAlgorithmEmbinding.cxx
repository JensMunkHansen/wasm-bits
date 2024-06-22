// JavaScript wrapper for vtkCompositeDataSetAlgorithm with embind 
//
// This file was auto-generated using :
/*
node /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/bin/vtkWrapJavaScript.js \
 @/home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkCommonExecutionModel.js/vtkCommonExecutionModel.js.Release.args \
 -o \
 /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkCommonExecutionModel.js/vtkCompositeDataSetAlgorithmEmbinding.cxx \
 /home/jmh/github/vtk/Common/ExecutionModel/vtkCompositeDataSetAlgorithm.h
*/
#include "vtkEmbindSmartPointerTrait.h"
#include <emscripten.h>
#include <string>
#include "vtkVariant.h"
#include "vtkObjectBase.h"
#include "vtkIndent.h"
#include "vtkCompositeDataSet.h"
#include "vtkDataObject.h"
#include "vtkInformation.h"
#include "vtkInformationVector.h"
#include "vtkCompositeDataSetAlgorithm.h"

template<> void emscripten::internal::raw_destructor<vtkCompositeDataSetAlgorithm>(vtkCompositeDataSetAlgorithm * ptr){ ptr->Delete(); }
EMSCRIPTEN_BINDINGS(vtkCompositeDataSetAlgorithm_class) {
  emscripten::class_<vtkCompositeDataSetAlgorithm, emscripten::base<vtkAlgorithm>>("vtkCompositeDataSetAlgorithm")
    .smart_ptr<vtkSmartPointer<vtkCompositeDataSetAlgorithm>>("vtkSmartPointer<vtkCompositeDataSetAlgorithm>")
    .constructor(&vtk::MakeVTKSmartPtr<vtkCompositeDataSetAlgorithm>)
    .class_function("IsTypeOf", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkCompositeDataSetAlgorithm::IsTypeOf( arg_0.c_str());}))
    .function("IsA", emscripten::optional_override([](vtkCompositeDataSetAlgorithm& self, const std::string & arg_0) -> int {  return self.IsA( arg_0.c_str());}))
    .class_function("SafeDownCast", &vtkCompositeDataSetAlgorithm::SafeDownCast, emscripten::allow_raw_pointers())
    .function("NewInstance", &vtkCompositeDataSetAlgorithm::NewInstance, emscripten::allow_raw_pointers())
    .class_function("GetNumberOfGenerationsFromBaseType", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkCompositeDataSetAlgorithm::GetNumberOfGenerationsFromBaseType( arg_0.c_str());}))
    .function("GetNumberOfGenerationsFromBase", emscripten::optional_override([](vtkCompositeDataSetAlgorithm& self, const std::string & arg_0) -> int {  return self.GetNumberOfGenerationsFromBase( arg_0.c_str());}))
    .function("GetOutput", emscripten::select_overload<vtkCompositeDataSet*(vtkCompositeDataSetAlgorithm&)>([](vtkCompositeDataSetAlgorithm& self) -> vtkCompositeDataSet* { return self.GetOutput(); }), emscripten::allow_raw_pointers())
    .function("GetOutput", emscripten::select_overload<vtkCompositeDataSet*(vtkCompositeDataSetAlgorithm&, int)>([](vtkCompositeDataSetAlgorithm& self, int arg_0) -> vtkCompositeDataSet* { return self.GetOutput( arg_0); }), emscripten::allow_raw_pointers())
    .function("SetInputData", emscripten::select_overload<void(vtkCompositeDataSetAlgorithm&, vtkDataObject*)>([](vtkCompositeDataSetAlgorithm& self, vtkDataObject* arg_0) -> void { return self.SetInputData( arg_0); }), emscripten::allow_raw_pointers())
    .function("SetInputData", emscripten::select_overload<void(vtkCompositeDataSetAlgorithm&, int, vtkDataObject*)>([](vtkCompositeDataSetAlgorithm& self, int arg_0, vtkDataObject* arg_1) -> void { return self.SetInputData( arg_0, arg_1); }), emscripten::allow_raw_pointers());
}
