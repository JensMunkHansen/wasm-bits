// JavaScript wrapper for vtkAnnotationLayersAlgorithm with embind 
//
// This file was auto-generated using :
/*
node /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/bin/vtkWrapJavaScript.js \
 @/home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkCommonExecutionModel.js/vtkCommonExecutionModel.js.Release.args \
 -o \
 /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkCommonExecutionModel.js/vtkAnnotationLayersAlgorithmEmbinding.cxx \
 /home/jmh/github/vtk/Common/ExecutionModel/vtkAnnotationLayersAlgorithm.h
*/
#include "vtkEmbindSmartPointerTrait.h"
#include <emscripten.h>
#include <string>
#include "vtkVariant.h"
#include "vtkObjectBase.h"
#include "vtkIndent.h"
#include "vtkInformation.h"
#include "vtkInformationVector.h"
#include "vtkAnnotationLayers.h"
#include "vtkDataObject.h"
#include "vtkAnnotationLayersAlgorithm.h"

template<> void emscripten::internal::raw_destructor<vtkAnnotationLayersAlgorithm>(vtkAnnotationLayersAlgorithm * ptr){ ptr->Delete(); }
EMSCRIPTEN_BINDINGS(vtkAnnotationLayersAlgorithm_class) {
  emscripten::class_<vtkAnnotationLayersAlgorithm, emscripten::base<vtkAlgorithm>>("vtkAnnotationLayersAlgorithm")
    .smart_ptr<vtkSmartPointer<vtkAnnotationLayersAlgorithm>>("vtkSmartPointer<vtkAnnotationLayersAlgorithm>")
    .constructor(&vtk::MakeAvtkSmartPointer<vtkAnnotationLayersAlgorithm>)
    .class_function("IsTypeOf", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkAnnotationLayersAlgorithm::IsTypeOf( arg_0.c_str());}))
    .function("IsA", emscripten::optional_override([](vtkAnnotationLayersAlgorithm& self, const std::string & arg_0) -> int {  return self.IsA( arg_0.c_str());}))
    .class_function("SafeDownCast", &vtkAnnotationLayersAlgorithm::SafeDownCast, emscripten::allow_raw_pointers())
    .function("NewInstance", &vtkAnnotationLayersAlgorithm::NewInstance, emscripten::allow_raw_pointers())
    .class_function("GetNumberOfGenerationsFromBaseType", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkAnnotationLayersAlgorithm::GetNumberOfGenerationsFromBaseType( arg_0.c_str());}))
    .function("GetNumberOfGenerationsFromBase", emscripten::optional_override([](vtkAnnotationLayersAlgorithm& self, const std::string & arg_0) -> int {  return self.GetNumberOfGenerationsFromBase( arg_0.c_str());}))
    .function("GetOutput", emscripten::select_overload<vtkAnnotationLayers*(vtkAnnotationLayersAlgorithm&)>([](vtkAnnotationLayersAlgorithm& self) -> vtkAnnotationLayers* { return self.GetOutput(); }), emscripten::allow_raw_pointers())
    .function("GetOutput", emscripten::select_overload<vtkAnnotationLayers*(vtkAnnotationLayersAlgorithm&, int)>([](vtkAnnotationLayersAlgorithm& self, int arg_0) -> vtkAnnotationLayers* { return self.GetOutput( arg_0); }), emscripten::allow_raw_pointers())
    .function("SetInputData", emscripten::select_overload<void(vtkAnnotationLayersAlgorithm&, vtkDataObject*)>([](vtkAnnotationLayersAlgorithm& self, vtkDataObject* arg_0) -> void { return self.SetInputData( arg_0); }), emscripten::allow_raw_pointers())
    .function("SetInputData", emscripten::select_overload<void(vtkAnnotationLayersAlgorithm&, int, vtkDataObject*)>([](vtkAnnotationLayersAlgorithm& self, int arg_0, vtkDataObject* arg_1) -> void { return self.SetInputData( arg_0, arg_1); }), emscripten::allow_raw_pointers());
}
