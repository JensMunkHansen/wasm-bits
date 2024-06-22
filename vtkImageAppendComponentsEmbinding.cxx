// JavaScript wrapper for vtkImageAppendComponents with embind 
//
// This file was auto-generated using :
/*
node /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/bin/vtkWrapJavaScript.js \
 @/home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkImagingCore.js/vtkImagingCore.js.Release.args \
 -o \
 /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkImagingCore.js/vtkImageAppendComponentsEmbinding.cxx \
 /home/jmh/github/vtk/Imaging/Core/vtkImageAppendComponents.h
*/
#include "vtkEmbindSmartPointerTrait.h"
#include <emscripten.h>
#include <string>
#include "vtkVariant.h"
#include "vtkObjectBase.h"
#include "vtkIndent.h"
#include "vtkAlgorithmOutput.h"
#include "vtkDataObject.h"
#include "vtkImageAppendComponents.h"

template<> void emscripten::internal::raw_destructor<vtkImageAppendComponents>(vtkImageAppendComponents * ptr){ ptr->Delete(); }
EMSCRIPTEN_BINDINGS(vtkImageAppendComponents_class) {
  emscripten::class_<vtkImageAppendComponents, emscripten::base<vtkThreadedImageAlgorithm>>("vtkImageAppendComponents")
    .smart_ptr<vtkSmartPointer<vtkImageAppendComponents>>("vtkSmartPointer<vtkImageAppendComponents>")
    .constructor(&vtk::MakeVTKSmartPtr<vtkImageAppendComponents>)
    .class_function("IsTypeOf", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkImageAppendComponents::IsTypeOf( arg_0.c_str());}))
    .function("IsA", emscripten::optional_override([](vtkImageAppendComponents& self, const std::string & arg_0) -> int {  return self.IsA( arg_0.c_str());}))
    .class_function("SafeDownCast", &vtkImageAppendComponents::SafeDownCast, emscripten::allow_raw_pointers())
    .function("NewInstance", &vtkImageAppendComponents::NewInstance, emscripten::allow_raw_pointers())
    .class_function("GetNumberOfGenerationsFromBaseType", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkImageAppendComponents::GetNumberOfGenerationsFromBaseType( arg_0.c_str());}))
    .function("GetNumberOfGenerationsFromBase", emscripten::optional_override([](vtkImageAppendComponents& self, const std::string & arg_0) -> int {  return self.GetNumberOfGenerationsFromBase( arg_0.c_str());}))
    .function("ReplaceNthInputConnection", &vtkImageAppendComponents::ReplaceNthInputConnection, emscripten::allow_raw_pointers())
    .function("SetInputData", emscripten::select_overload<void(vtkImageAppendComponents&, int, vtkDataObject*)>([](vtkImageAppendComponents& self, int arg_0, vtkDataObject* arg_1) -> void { return self.SetInputData( arg_0, arg_1); }), emscripten::allow_raw_pointers())
    .function("SetInputData", emscripten::select_overload<void(vtkImageAppendComponents&, vtkDataObject*)>([](vtkImageAppendComponents& self, vtkDataObject* arg_0) -> void { return self.SetInputData( arg_0); }), emscripten::allow_raw_pointers())
    .function("GetInput", emscripten::select_overload<vtkDataObject*(vtkImageAppendComponents&, int)>([](vtkImageAppendComponents& self, int arg_0) -> vtkDataObject* { return self.GetInput( arg_0); }), emscripten::allow_raw_pointers())
    .function("GetInput", emscripten::select_overload<vtkDataObject*(vtkImageAppendComponents&)>([](vtkImageAppendComponents& self) -> vtkDataObject* { return self.GetInput(); }), emscripten::allow_raw_pointers())
    .function("GetNumberOfInputs", &vtkImageAppendComponents::GetNumberOfInputs);
}
