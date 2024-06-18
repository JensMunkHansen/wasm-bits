// JavaScript wrapper for vtkArrayDataAlgorithm with embind 
//
// This file was auto-generated using :
/*
node /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/bin/vtkWrapJavaScript.js \
 @/home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkCommonExecutionModel.js/vtkCommonExecutionModel.js.Release.args \
 -o \
 /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkCommonExecutionModel.js/vtkArrayDataAlgorithmEmbinding.cxx \
 /home/jmh/github/vtk/Common/ExecutionModel/vtkArrayDataAlgorithm.h
*/
#include "vtkEmbindSmartPointerTrait.h"
#include <emscripten.h>
#include <string>
#include "vtkVariant.h"
#include "vtkObjectBase.h"
#include "vtkIndent.h"
#include "vtkInformation.h"
#include "vtkInformationVector.h"
#include "vtkArrayData.h"
#include "vtkDataObject.h"
#include "vtkArrayDataAlgorithm.h"

template<> void emscripten::internal::raw_destructor<vtkArrayDataAlgorithm>(vtkArrayDataAlgorithm * ptr){ ptr->Delete(); }
EMSCRIPTEN_BINDINGS(vtkArrayDataAlgorithm_class) {
  emscripten::class_<vtkArrayDataAlgorithm, emscripten::base<vtkAlgorithm>>("vtkArrayDataAlgorithm")
    .smart_ptr<vtkSmartPointer<vtkArrayDataAlgorithm>>("vtkSmartPointer<vtkArrayDataAlgorithm>")
    .constructor(&vtk::MakeAvtkSmartPointer<vtkArrayDataAlgorithm>)
    .class_function("IsTypeOf", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkArrayDataAlgorithm::IsTypeOf( arg_0.c_str());}))
    .function("IsA", emscripten::optional_override([](vtkArrayDataAlgorithm& self, const std::string & arg_0) -> int {  return self.IsA( arg_0.c_str());}))
    .class_function("SafeDownCast", &vtkArrayDataAlgorithm::SafeDownCast, emscripten::allow_raw_pointers())
    .function("NewInstance", &vtkArrayDataAlgorithm::NewInstance, emscripten::allow_raw_pointers())
    .class_function("GetNumberOfGenerationsFromBaseType", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkArrayDataAlgorithm::GetNumberOfGenerationsFromBaseType( arg_0.c_str());}))
    .function("GetNumberOfGenerationsFromBase", emscripten::optional_override([](vtkArrayDataAlgorithm& self, const std::string & arg_0) -> int {  return self.GetNumberOfGenerationsFromBase( arg_0.c_str());}))
    .function("GetOutput", emscripten::select_overload<vtkArrayData*(vtkArrayDataAlgorithm&)>([](vtkArrayDataAlgorithm& self) -> vtkArrayData* { return self.GetOutput(); }), emscripten::allow_raw_pointers())
    .function("GetOutput", emscripten::select_overload<vtkArrayData*(vtkArrayDataAlgorithm&, int)>([](vtkArrayDataAlgorithm& self, int arg_0) -> vtkArrayData* { return self.GetOutput( arg_0); }), emscripten::allow_raw_pointers())
    .function("SetInputData", emscripten::select_overload<void(vtkArrayDataAlgorithm&, vtkDataObject*)>([](vtkArrayDataAlgorithm& self, vtkDataObject* arg_0) -> void { return self.SetInputData( arg_0); }), emscripten::allow_raw_pointers())
    .function("SetInputData", emscripten::select_overload<void(vtkArrayDataAlgorithm&, int, vtkDataObject*)>([](vtkArrayDataAlgorithm& self, int arg_0, vtkDataObject* arg_1) -> void { return self.SetInputData( arg_0, arg_1); }), emscripten::allow_raw_pointers());
}
