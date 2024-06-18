// JavaScript wrapper for vtkGraphAlgorithm with embind 
//
// This file was auto-generated using :
/*
node /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/bin/vtkWrapJavaScript.js \
 @/home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkCommonExecutionModel.js/vtkCommonExecutionModel.js.Release.args \
 -o \
 /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkCommonExecutionModel.js/vtkGraphAlgorithmEmbinding.cxx \
 /home/jmh/github/vtk/Common/ExecutionModel/vtkGraphAlgorithm.h
*/
#include "vtkEmbindSmartPointerTrait.h"
#include <emscripten.h>
#include <string>
#include "vtkVariant.h"
#include "vtkObjectBase.h"
#include "vtkIndent.h"
#include "vtkInformation.h"
#include "vtkInformationVector.h"
#include "vtkGraph.h"
#include "vtkDataObject.h"
#include "vtkGraphAlgorithm.h"

template<> void emscripten::internal::raw_destructor<vtkGraphAlgorithm>(vtkGraphAlgorithm * ptr){ ptr->Delete(); }
EMSCRIPTEN_BINDINGS(vtkGraphAlgorithm_class) {
  emscripten::class_<vtkGraphAlgorithm, emscripten::base<vtkAlgorithm>>("vtkGraphAlgorithm")
    .smart_ptr<vtkSmartPointer<vtkGraphAlgorithm>>("vtkSmartPointer<vtkGraphAlgorithm>")
    .constructor(&vtk::MakeAvtkSmartPointer<vtkGraphAlgorithm>)
    .class_function("IsTypeOf", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkGraphAlgorithm::IsTypeOf( arg_0.c_str());}))
    .function("IsA", emscripten::optional_override([](vtkGraphAlgorithm& self, const std::string & arg_0) -> int {  return self.IsA( arg_0.c_str());}))
    .class_function("SafeDownCast", &vtkGraphAlgorithm::SafeDownCast, emscripten::allow_raw_pointers())
    .function("NewInstance", &vtkGraphAlgorithm::NewInstance, emscripten::allow_raw_pointers())
    .class_function("GetNumberOfGenerationsFromBaseType", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkGraphAlgorithm::GetNumberOfGenerationsFromBaseType( arg_0.c_str());}))
    .function("GetNumberOfGenerationsFromBase", emscripten::optional_override([](vtkGraphAlgorithm& self, const std::string & arg_0) -> int {  return self.GetNumberOfGenerationsFromBase( arg_0.c_str());}))
    .function("GetOutput", emscripten::select_overload<vtkGraph*(vtkGraphAlgorithm&)>([](vtkGraphAlgorithm& self) -> vtkGraph* { return self.GetOutput(); }), emscripten::allow_raw_pointers())
    .function("GetOutput", emscripten::select_overload<vtkGraph*(vtkGraphAlgorithm&, int)>([](vtkGraphAlgorithm& self, int arg_0) -> vtkGraph* { return self.GetOutput( arg_0); }), emscripten::allow_raw_pointers())
    .function("SetInputData", emscripten::select_overload<void(vtkGraphAlgorithm&, vtkDataObject*)>([](vtkGraphAlgorithm& self, vtkDataObject* arg_0) -> void { return self.SetInputData( arg_0); }), emscripten::allow_raw_pointers())
    .function("SetInputData", emscripten::select_overload<void(vtkGraphAlgorithm&, int, vtkDataObject*)>([](vtkGraphAlgorithm& self, int arg_0, vtkDataObject* arg_1) -> void { return self.SetInputData( arg_0, arg_1); }), emscripten::allow_raw_pointers());
}
