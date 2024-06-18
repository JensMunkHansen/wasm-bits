// JavaScript wrapper for vtkImageMagnify with embind 
//
// This file was auto-generated using :
/*
node /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/bin/vtkWrapJavaScript.js \
 @/home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkImagingCore.js/vtkImagingCore.js.Release.args \
 -o \
 /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkImagingCore.js/vtkImageMagnifyEmbinding.cxx \
 /home/jmh/github/vtk/Imaging/Core/vtkImageMagnify.h
*/
#include "vtkEmbindSmartPointerTrait.h"
#include <emscripten.h>
#include <string>
#include "vtkVariant.h"
#include "vtkObjectBase.h"
#include "vtkIndent.h"
#include "vtkImageMagnify.h"

template<> void emscripten::internal::raw_destructor<vtkImageMagnify>(vtkImageMagnify * ptr){ ptr->Delete(); }
EMSCRIPTEN_BINDINGS(vtkImageMagnify_class) {
  emscripten::class_<vtkImageMagnify, emscripten::base<vtkThreadedImageAlgorithm>>("vtkImageMagnify")
    .smart_ptr<vtkSmartPointer<vtkImageMagnify>>("vtkSmartPointer<vtkImageMagnify>")
    .constructor(&vtk::MakeAvtkSmartPointer<vtkImageMagnify>)
    .class_function("IsTypeOf", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkImageMagnify::IsTypeOf( arg_0.c_str());}))
    .function("IsA", emscripten::optional_override([](vtkImageMagnify& self, const std::string & arg_0) -> int {  return self.IsA( arg_0.c_str());}))
    .class_function("SafeDownCast", &vtkImageMagnify::SafeDownCast, emscripten::allow_raw_pointers())
    .function("NewInstance", &vtkImageMagnify::NewInstance, emscripten::allow_raw_pointers())
    .class_function("GetNumberOfGenerationsFromBaseType", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkImageMagnify::GetNumberOfGenerationsFromBaseType( arg_0.c_str());}))
    .function("GetNumberOfGenerationsFromBase", emscripten::optional_override([](vtkImageMagnify& self, const std::string & arg_0) -> int {  return self.GetNumberOfGenerationsFromBase( arg_0.c_str());}))
    .function("SetMagnificationFactors", emscripten::select_overload<void(vtkImageMagnify&, int, int, int)>([](vtkImageMagnify& self, int arg_0, int arg_1, int arg_2) -> void { return self.SetMagnificationFactors( arg_0, arg_1, arg_2); }))
    .function("SetInterpolate", &vtkImageMagnify::SetInterpolate)
    .function("GetInterpolate", &vtkImageMagnify::GetInterpolate)
    .function("InterpolateOn", &vtkImageMagnify::InterpolateOn)
    .function("InterpolateOff", &vtkImageMagnify::InterpolateOff);
}
