// JavaScript wrapper for vtkImageExtractComponents with embind 
//
// This file was auto-generated using :
/*
node /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/bin/vtkWrapJavaScript.js \
 @/home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkImagingCore.js/vtkImagingCore.js.Release.args \
 -o \
 /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkImagingCore.js/vtkImageExtractComponentsEmbinding.cxx \
 /home/jmh/github/vtk/Imaging/Core/vtkImageExtractComponents.h
*/
#include "vtkEmbindSmartPointerTrait.h"
#include <emscripten.h>
#include <string>
#include "vtkVariant.h"
#include "vtkObjectBase.h"
#include "vtkIndent.h"
#include "vtkImageExtractComponents.h"

template<> void emscripten::internal::raw_destructor<vtkImageExtractComponents>(vtkImageExtractComponents * ptr){ ptr->Delete(); }
EMSCRIPTEN_BINDINGS(vtkImageExtractComponents_class) {
  emscripten::class_<vtkImageExtractComponents, emscripten::base<vtkThreadedImageAlgorithm>>("vtkImageExtractComponents")
    .smart_ptr<vtkSmartPointer<vtkImageExtractComponents>>("vtkSmartPointer<vtkImageExtractComponents>")
    .constructor(&vtk::MakeAvtkSmartPointer<vtkImageExtractComponents>)
    .class_function("IsTypeOf", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkImageExtractComponents::IsTypeOf( arg_0.c_str());}))
    .function("IsA", emscripten::optional_override([](vtkImageExtractComponents& self, const std::string & arg_0) -> int {  return self.IsA( arg_0.c_str());}))
    .class_function("SafeDownCast", &vtkImageExtractComponents::SafeDownCast, emscripten::allow_raw_pointers())
    .function("NewInstance", &vtkImageExtractComponents::NewInstance, emscripten::allow_raw_pointers())
    .class_function("GetNumberOfGenerationsFromBaseType", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkImageExtractComponents::GetNumberOfGenerationsFromBaseType( arg_0.c_str());}))
    .function("GetNumberOfGenerationsFromBase", emscripten::optional_override([](vtkImageExtractComponents& self, const std::string & arg_0) -> int {  return self.GetNumberOfGenerationsFromBase( arg_0.c_str());}))
    .function("SetComponents", emscripten::select_overload<void(vtkImageExtractComponents&, int)>([](vtkImageExtractComponents& self, int arg_0) -> void { return self.SetComponents( arg_0); }))
    .function("SetComponents", emscripten::select_overload<void(vtkImageExtractComponents&, int, int)>([](vtkImageExtractComponents& self, int arg_0, int arg_1) -> void { return self.SetComponents( arg_0, arg_1); }))
    .function("SetComponents", emscripten::select_overload<void(vtkImageExtractComponents&, int, int, int)>([](vtkImageExtractComponents& self, int arg_0, int arg_1, int arg_2) -> void { return self.SetComponents( arg_0, arg_1, arg_2); }))
    .function("GetNumberOfComponents", &vtkImageExtractComponents::GetNumberOfComponents);
}
