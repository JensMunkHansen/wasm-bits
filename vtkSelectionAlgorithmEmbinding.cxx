// JavaScript wrapper for vtkSelectionAlgorithm with embind 
//
// This file was auto-generated using :
/*
node /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/bin/vtkWrapJavaScript.js \
 @/home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkCommonExecutionModel.js/vtkCommonExecutionModel.js.Release.args \
 -o \
 /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkCommonExecutionModel.js/vtkSelectionAlgorithmEmbinding.cxx \
 /home/jmh/github/vtk/Common/ExecutionModel/vtkSelectionAlgorithm.h
*/
#include "vtkEmbindSmartPointerTrait.h"
#include <emscripten.h>
#include <string>
#include "vtkVariant.h"
#include "vtkObjectBase.h"
#include "vtkIndent.h"
#include "vtkInformation.h"
#include "vtkInformationVector.h"
#include "vtkSelection.h"
#include "vtkDataObject.h"
#include "vtkSelectionAlgorithm.h"

template<> void emscripten::internal::raw_destructor<vtkSelectionAlgorithm>(vtkSelectionAlgorithm * ptr){ ptr->Delete(); }
EMSCRIPTEN_BINDINGS(vtkSelectionAlgorithm_class) {
  emscripten::class_<vtkSelectionAlgorithm, emscripten::base<vtkAlgorithm>>("vtkSelectionAlgorithm")
    .smart_ptr<vtkSmartPointer<vtkSelectionAlgorithm>>("vtkSmartPointer<vtkSelectionAlgorithm>")
    .constructor(&vtk::MakeVTKSmartPtr<vtkSelectionAlgorithm>)
    .class_function("IsTypeOf", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkSelectionAlgorithm::IsTypeOf( arg_0.c_str());}))
    .function("IsA", emscripten::optional_override([](vtkSelectionAlgorithm& self, const std::string & arg_0) -> int {  return self.IsA( arg_0.c_str());}))
    .class_function("SafeDownCast", &vtkSelectionAlgorithm::SafeDownCast, emscripten::allow_raw_pointers())
    .function("NewInstance", &vtkSelectionAlgorithm::NewInstance, emscripten::allow_raw_pointers())
    .class_function("GetNumberOfGenerationsFromBaseType", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkSelectionAlgorithm::GetNumberOfGenerationsFromBaseType( arg_0.c_str());}))
    .function("GetNumberOfGenerationsFromBase", emscripten::optional_override([](vtkSelectionAlgorithm& self, const std::string & arg_0) -> int {  return self.GetNumberOfGenerationsFromBase( arg_0.c_str());}))
    .function("GetOutput", emscripten::select_overload<vtkSelection*(vtkSelectionAlgorithm&)>([](vtkSelectionAlgorithm& self) -> vtkSelection* { return self.GetOutput(); }), emscripten::allow_raw_pointers())
    .function("GetOutput", emscripten::select_overload<vtkSelection*(vtkSelectionAlgorithm&, int)>([](vtkSelectionAlgorithm& self, int arg_0) -> vtkSelection* { return self.GetOutput( arg_0); }), emscripten::allow_raw_pointers())
    .function("SetInputData", emscripten::select_overload<void(vtkSelectionAlgorithm&, vtkDataObject*)>([](vtkSelectionAlgorithm& self, vtkDataObject* arg_0) -> void { return self.SetInputData( arg_0); }), emscripten::allow_raw_pointers())
    .function("SetInputData", emscripten::select_overload<void(vtkSelectionAlgorithm&, int, vtkDataObject*)>([](vtkSelectionAlgorithm& self, int arg_0, vtkDataObject* arg_1) -> void { return self.SetInputData( arg_0, arg_1); }), emscripten::allow_raw_pointers());
}
