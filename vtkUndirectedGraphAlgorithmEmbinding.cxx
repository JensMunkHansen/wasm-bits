// JavaScript wrapper for vtkUndirectedGraphAlgorithm with embind 
//
// This file was auto-generated using :
/*
node /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/bin/vtkWrapJavaScript.js \
 @/home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkCommonExecutionModel.js/vtkCommonExecutionModel.js.Release.args \
 -o \
 /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkCommonExecutionModel.js/vtkUndirectedGraphAlgorithmEmbinding.cxx \
 /home/jmh/github/vtk/Common/ExecutionModel/vtkUndirectedGraphAlgorithm.h
*/
#include "vtkEmbindSmartPointerTrait.h"
#include <emscripten.h>
#include <string>
#include "vtkVariant.h"
#include "vtkObjectBase.h"
#include "vtkIndent.h"
#include "vtkInformation.h"
#include "vtkInformationVector.h"
#include "vtkUndirectedGraph.h"
#include "vtkDataObject.h"
#include "vtkUndirectedGraphAlgorithm.h"

template<> void emscripten::internal::raw_destructor<vtkUndirectedGraphAlgorithm>(vtkUndirectedGraphAlgorithm * ptr){ ptr->Delete(); }
EMSCRIPTEN_BINDINGS(vtkUndirectedGraphAlgorithm_class) {
  emscripten::class_<vtkUndirectedGraphAlgorithm, emscripten::base<vtkAlgorithm>>("vtkUndirectedGraphAlgorithm")
    .smart_ptr<vtkSmartPointer<vtkUndirectedGraphAlgorithm>>("vtkSmartPointer<vtkUndirectedGraphAlgorithm>")
    .constructor(&vtk::MakeVTKSmartPtr<vtkUndirectedGraphAlgorithm>)
    .class_function("IsTypeOf", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkUndirectedGraphAlgorithm::IsTypeOf( arg_0.c_str());}))
    .function("IsA", emscripten::optional_override([](vtkUndirectedGraphAlgorithm& self, const std::string & arg_0) -> int {  return self.IsA( arg_0.c_str());}))
    .class_function("SafeDownCast", &vtkUndirectedGraphAlgorithm::SafeDownCast, emscripten::allow_raw_pointers())
    .function("NewInstance", &vtkUndirectedGraphAlgorithm::NewInstance, emscripten::allow_raw_pointers())
    .class_function("GetNumberOfGenerationsFromBaseType", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkUndirectedGraphAlgorithm::GetNumberOfGenerationsFromBaseType( arg_0.c_str());}))
    .function("GetNumberOfGenerationsFromBase", emscripten::optional_override([](vtkUndirectedGraphAlgorithm& self, const std::string & arg_0) -> int {  return self.GetNumberOfGenerationsFromBase( arg_0.c_str());}))
    .function("GetOutput", emscripten::select_overload<vtkUndirectedGraph*(vtkUndirectedGraphAlgorithm&)>([](vtkUndirectedGraphAlgorithm& self) -> vtkUndirectedGraph* { return self.GetOutput(); }), emscripten::allow_raw_pointers())
    .function("GetOutput", emscripten::select_overload<vtkUndirectedGraph*(vtkUndirectedGraphAlgorithm&, int)>([](vtkUndirectedGraphAlgorithm& self, int arg_0) -> vtkUndirectedGraph* { return self.GetOutput( arg_0); }), emscripten::allow_raw_pointers())
    .function("SetInputData", emscripten::select_overload<void(vtkUndirectedGraphAlgorithm&, vtkDataObject*)>([](vtkUndirectedGraphAlgorithm& self, vtkDataObject* arg_0) -> void { return self.SetInputData( arg_0); }), emscripten::allow_raw_pointers())
    .function("SetInputData", emscripten::select_overload<void(vtkUndirectedGraphAlgorithm&, int, vtkDataObject*)>([](vtkUndirectedGraphAlgorithm& self, int arg_0, vtkDataObject* arg_1) -> void { return self.SetInputData( arg_0, arg_1); }), emscripten::allow_raw_pointers());
}
