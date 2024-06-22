// JavaScript wrapper for vtkImagePadFilter with embind 
//
// This file was auto-generated using :
/*
node /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/bin/vtkWrapJavaScript.js \
 @/home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkImagingCore.js/vtkImagingCore.js.Release.args \
 -o \
 /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkImagingCore.js/vtkImagePadFilterEmbinding.cxx \
 /home/jmh/github/vtk/Imaging/Core/vtkImagePadFilter.h
*/
#include "vtkEmbindSmartPointerTrait.h"
#include <emscripten.h>
#include <string>
#include "vtkVariant.h"
#include "vtkObjectBase.h"
#include "vtkIndent.h"
#include "vtkImagePadFilter.h"

template<> void emscripten::internal::raw_destructor<vtkImagePadFilter>(vtkImagePadFilter * ptr){ ptr->Delete(); }
EMSCRIPTEN_BINDINGS(vtkImagePadFilter_class) {
  emscripten::class_<vtkImagePadFilter, emscripten::base<vtkThreadedImageAlgorithm>>("vtkImagePadFilter")
    .smart_ptr<vtkSmartPointer<vtkImagePadFilter>>("vtkSmartPointer<vtkImagePadFilter>")
    .constructor(&vtk::MakeAvtkSmartPointer<vtkImagePadFilter>)
    .class_function("IsTypeOf", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkImagePadFilter::IsTypeOf( arg_0.c_str());}))
    .function("IsA", emscripten::optional_override([](vtkImagePadFilter& self, const std::string & arg_0) -> int {  return self.IsA( arg_0.c_str());}))
    .class_function("SafeDownCast", &vtkImagePadFilter::SafeDownCast, emscripten::allow_raw_pointers())
    .function("NewInstance", &vtkImagePadFilter::NewInstance, emscripten::allow_raw_pointers())
    .class_function("GetNumberOfGenerationsFromBaseType", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkImagePadFilter::GetNumberOfGenerationsFromBaseType( arg_0.c_str());}))
    .function("GetNumberOfGenerationsFromBase", emscripten::optional_override([](vtkImagePadFilter& self, const std::string & arg_0) -> int {  return self.GetNumberOfGenerationsFromBase( arg_0.c_str());}))
    .function("SetOutputWholeExtent", emscripten::select_overload<void(vtkImagePadFilter&, int, int, int, int, int, int)>([](vtkImagePadFilter& self, int arg_0, int arg_1, int arg_2, int arg_3, int arg_4, int arg_5) -> void { return self.SetOutputWholeExtent( arg_0, arg_1, arg_2, arg_3, arg_4, arg_5); }))
    .function("SetOutputNumberOfScalarComponents", &vtkImagePadFilter::SetOutputNumberOfScalarComponents)
    .function("GetOutputNumberOfScalarComponents", &vtkImagePadFilter::GetOutputNumberOfScalarComponents);
}