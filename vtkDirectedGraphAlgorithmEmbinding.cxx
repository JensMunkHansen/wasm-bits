// JavaScript wrapper for vtkDirectedGraphAlgorithm with embind 
//
// This file was auto-generated using :
/*
node /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/bin/vtkWrapJavaScript.js \
 @/home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkCommonExecutionModel.js/vtkCommonExecutionModel.js.Release.args \
 -o \
 /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkCommonExecutionModel.js/vtkDirectedGraphAlgorithmEmbinding.cxx \
 /home/jmh/github/vtk/Common/ExecutionModel/vtkDirectedGraphAlgorithm.h
*/
#include "vtkEmbindSmartPointerTrait.h"
#include <emscripten.h>
#include <string>
#include "vtkVariant.h"
#include "vtkObjectBase.h"
#include "vtkIndent.h"
#include "vtkInformation.h"
#include "vtkInformationVector.h"
#include "vtkDirectedGraph.h"
#include "vtkDataObject.h"
#include "vtkDirectedGraphAlgorithm.h"

template<> void emscripten::internal::raw_destructor<vtkDirectedGraphAlgorithm>(vtkDirectedGraphAlgorithm * ptr){ ptr->Delete(); }
EMSCRIPTEN_BINDINGS(vtkDirectedGraphAlgorithm_class) {
  emscripten::class_<vtkDirectedGraphAlgorithm, emscripten::base<vtkAlgorithm>>("vtkDirectedGraphAlgorithm")
    .smart_ptr<vtkSmartPointer<vtkDirectedGraphAlgorithm>>("vtkSmartPointer<vtkDirectedGraphAlgorithm>")
    .constructor(&vtk::MakeVTKSmartPtr<vtkDirectedGraphAlgorithm>)
    .class_function("IsTypeOf", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkDirectedGraphAlgorithm::IsTypeOf( arg_0.c_str());}))
    .function("IsA", emscripten::optional_override([](vtkDirectedGraphAlgorithm& self, const std::string & arg_0) -> int {  return self.IsA( arg_0.c_str());}))
    .class_function("SafeDownCast", &vtkDirectedGraphAlgorithm::SafeDownCast, emscripten::allow_raw_pointers())
    .function("NewInstance", &vtkDirectedGraphAlgorithm::NewInstance, emscripten::allow_raw_pointers())
    .class_function("GetNumberOfGenerationsFromBaseType", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkDirectedGraphAlgorithm::GetNumberOfGenerationsFromBaseType( arg_0.c_str());}))
    .function("GetNumberOfGenerationsFromBase", emscripten::optional_override([](vtkDirectedGraphAlgorithm& self, const std::string & arg_0) -> int {  return self.GetNumberOfGenerationsFromBase( arg_0.c_str());}))
    .function("GetOutput", emscripten::select_overload<vtkDirectedGraph*(vtkDirectedGraphAlgorithm&)>([](vtkDirectedGraphAlgorithm& self) -> vtkDirectedGraph* { return self.GetOutput(); }), emscripten::allow_raw_pointers())
    .function("GetOutput", emscripten::select_overload<vtkDirectedGraph*(vtkDirectedGraphAlgorithm&, int)>([](vtkDirectedGraphAlgorithm& self, int arg_0) -> vtkDirectedGraph* { return self.GetOutput( arg_0); }), emscripten::allow_raw_pointers())
    .function("SetInputData", emscripten::select_overload<void(vtkDirectedGraphAlgorithm&, vtkDataObject*)>([](vtkDirectedGraphAlgorithm& self, vtkDataObject* arg_0) -> void { return self.SetInputData( arg_0); }), emscripten::allow_raw_pointers())
    .function("SetInputData", emscripten::select_overload<void(vtkDirectedGraphAlgorithm&, int, vtkDataObject*)>([](vtkDirectedGraphAlgorithm& self, int arg_0, vtkDataObject* arg_1) -> void { return self.SetInputData( arg_0, arg_1); }), emscripten::allow_raw_pointers());
}
