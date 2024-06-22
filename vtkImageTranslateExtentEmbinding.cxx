// JavaScript wrapper for vtkImageTranslateExtent with embind 
//
// This file was auto-generated using :
/*
node /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/bin/vtkWrapJavaScript.js \
 @/home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkImagingCore.js/vtkImagingCore.js.Release.args \
 -o \
 /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkImagingCore.js/vtkImageTranslateExtentEmbinding.cxx \
 /home/jmh/github/vtk/Imaging/Core/vtkImageTranslateExtent.h
*/
#include "vtkEmbindSmartPointerTrait.h"
#include <emscripten.h>
#include <string>
#include "vtkVariant.h"
#include "vtkObjectBase.h"
#include "vtkIndent.h"
#include "vtkImageTranslateExtent.h"

template<> void emscripten::internal::raw_destructor<vtkImageTranslateExtent>(vtkImageTranslateExtent * ptr){ ptr->Delete(); }
EMSCRIPTEN_BINDINGS(vtkImageTranslateExtent_class) {
  emscripten::class_<vtkImageTranslateExtent, emscripten::base<vtkImageAlgorithm>>("vtkImageTranslateExtent")
    .smart_ptr<vtkSmartPointer<vtkImageTranslateExtent>>("vtkSmartPointer<vtkImageTranslateExtent>")
    .constructor(&vtk::MakeAvtkSmartPointer<vtkImageTranslateExtent>)
    .class_function("IsTypeOf", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkImageTranslateExtent::IsTypeOf( arg_0.c_str());}))
    .function("IsA", emscripten::optional_override([](vtkImageTranslateExtent& self, const std::string & arg_0) -> int {  return self.IsA( arg_0.c_str());}))
    .class_function("SafeDownCast", &vtkImageTranslateExtent::SafeDownCast, emscripten::allow_raw_pointers())
    .function("NewInstance", &vtkImageTranslateExtent::NewInstance, emscripten::allow_raw_pointers())
    .class_function("GetNumberOfGenerationsFromBaseType", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkImageTranslateExtent::GetNumberOfGenerationsFromBaseType( arg_0.c_str());}))
    .function("GetNumberOfGenerationsFromBase", emscripten::optional_override([](vtkImageTranslateExtent& self, const std::string & arg_0) -> int {  return self.GetNumberOfGenerationsFromBase( arg_0.c_str());}))
    .function("SetTranslation", emscripten::select_overload<void(vtkImageTranslateExtent&, int, int, int)>([](vtkImageTranslateExtent& self, int arg_0, int arg_1, int arg_2) -> void { return self.SetTranslation( arg_0, arg_1, arg_2); }));
}
