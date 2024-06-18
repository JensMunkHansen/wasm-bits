// JavaScript wrapper for vtkImageAlgorithm with embind 
//
// This file was auto-generated using :
/*
node /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/bin/vtkWrapJavaScript.js \
 @/home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkCommonExecutionModel.js/vtkCommonExecutionModel.js.Release.args \
 -o \
 /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkCommonExecutionModel.js/vtkImageAlgorithmEmbinding.cxx \
 /home/jmh/github/vtk/Common/ExecutionModel/vtkImageAlgorithm.h
*/
#include "vtkEmbindSmartPointerTrait.h"
#include <emscripten.h>
#include <string>
#include "vtkVariant.h"
#include "vtkObjectBase.h"
#include "vtkIndent.h"
#include "vtkImageData.h"
#include "vtkDataObject.h"
#include "vtkInformation.h"
#include "vtkInformationVector.h"
#include "vtkImageAlgorithm.h"

template<> void emscripten::internal::raw_destructor<vtkImageAlgorithm>(vtkImageAlgorithm * ptr){ ptr->Delete(); }
EMSCRIPTEN_BINDINGS(vtkImageAlgorithm_class) {
  emscripten::class_<vtkImageAlgorithm, emscripten::base<vtkAlgorithm>>("vtkImageAlgorithm")
    .class_function("IsTypeOf", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkImageAlgorithm::IsTypeOf( arg_0.c_str());}))
    .function("IsA", emscripten::optional_override([](vtkImageAlgorithm& self, const std::string & arg_0) -> int {  return self.IsA( arg_0.c_str());}))
    .class_function("SafeDownCast", &vtkImageAlgorithm::SafeDownCast, emscripten::allow_raw_pointers())
    .function("NewInstance", &vtkImageAlgorithm::NewInstance, emscripten::allow_raw_pointers())
    .class_function("GetNumberOfGenerationsFromBaseType", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkImageAlgorithm::GetNumberOfGenerationsFromBaseType( arg_0.c_str());}))
    .function("GetNumberOfGenerationsFromBase", emscripten::optional_override([](vtkImageAlgorithm& self, const std::string & arg_0) -> int {  return self.GetNumberOfGenerationsFromBase( arg_0.c_str());}))
    .function("GetOutput", emscripten::select_overload<vtkImageData*(vtkImageAlgorithm&)>([](vtkImageAlgorithm& self) -> vtkImageData* { return self.GetOutput(); }), emscripten::allow_raw_pointers())
    .function("GetOutput", emscripten::select_overload<vtkImageData*(vtkImageAlgorithm&, int)>([](vtkImageAlgorithm& self, int arg_0) -> vtkImageData* { return self.GetOutput( arg_0); }), emscripten::allow_raw_pointers())
    .function("SetOutput", &vtkImageAlgorithm::SetOutput, emscripten::allow_raw_pointers())
    .function("SetInputData", emscripten::select_overload<void(vtkImageAlgorithm&, vtkDataObject*)>([](vtkImageAlgorithm& self, vtkDataObject* arg_0) -> void { return self.SetInputData( arg_0); }), emscripten::allow_raw_pointers())
    .function("SetInputData", emscripten::select_overload<void(vtkImageAlgorithm&, int, vtkDataObject*)>([](vtkImageAlgorithm& self, int arg_0, vtkDataObject* arg_1) -> void { return self.SetInputData( arg_0, arg_1); }), emscripten::allow_raw_pointers())
    .function("GetInput", emscripten::select_overload<vtkDataObject*(vtkImageAlgorithm&, int)>([](vtkImageAlgorithm& self, int arg_0) -> vtkDataObject* { return self.GetInput( arg_0); }), emscripten::allow_raw_pointers())
    .function("GetInput", emscripten::select_overload<vtkDataObject*(vtkImageAlgorithm&)>([](vtkImageAlgorithm& self) -> vtkDataObject* { return self.GetInput(); }), emscripten::allow_raw_pointers())
    .function("GetImageDataInput", &vtkImageAlgorithm::GetImageDataInput, emscripten::allow_raw_pointers())
    .function("AddInputData", emscripten::select_overload<void(vtkImageAlgorithm&, vtkDataObject*)>([](vtkImageAlgorithm& self, vtkDataObject* arg_0) -> void { return self.AddInputData( arg_0); }), emscripten::allow_raw_pointers())
    .function("AddInputData", emscripten::select_overload<void(vtkImageAlgorithm&, int, vtkDataObject*)>([](vtkImageAlgorithm& self, int arg_0, vtkDataObject* arg_1) -> void { return self.AddInputData( arg_0, arg_1); }), emscripten::allow_raw_pointers());
}
