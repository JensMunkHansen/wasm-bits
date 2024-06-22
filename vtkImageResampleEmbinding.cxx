// JavaScript wrapper for vtkImageResample with embind 
//
// This file was auto-generated using :
/*
node /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/bin/vtkWrapJavaScript.js \
 @/home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkImagingCore.js/vtkImagingCore.js.Release.args \
 -o \
 /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkImagingCore.js/vtkImageResampleEmbinding.cxx \
 /home/jmh/github/vtk/Imaging/Core/vtkImageResample.h
*/
#include "vtkEmbindSmartPointerTrait.h"
#include <emscripten.h>
#include <string>
#include "vtkVariant.h"
#include "vtkObjectBase.h"
#include "vtkIndent.h"
#include "vtkInformation.h"
#include "vtkImageResample.h"

template<> void emscripten::internal::raw_destructor<vtkImageResample>(vtkImageResample * ptr){ ptr->Delete(); }
EMSCRIPTEN_BINDINGS(vtkImageResample_class) {
  emscripten::class_<vtkImageResample, emscripten::base<vtkImageReslice>>("vtkImageResample")
    .smart_ptr<vtkSmartPointer<vtkImageResample>>("vtkSmartPointer<vtkImageResample>")
    .constructor(&vtk::MakeVTKSmartPtr<vtkImageResample>)
    .class_function("IsTypeOf", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkImageResample::IsTypeOf( arg_0.c_str());}))
    .function("IsA", emscripten::optional_override([](vtkImageResample& self, const std::string & arg_0) -> int {  return self.IsA( arg_0.c_str());}))
    .class_function("SafeDownCast", &vtkImageResample::SafeDownCast, emscripten::allow_raw_pointers())
    .function("NewInstance", &vtkImageResample::NewInstance, emscripten::allow_raw_pointers())
    .class_function("GetNumberOfGenerationsFromBaseType", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkImageResample::GetNumberOfGenerationsFromBaseType( arg_0.c_str());}))
    .function("GetNumberOfGenerationsFromBase", emscripten::optional_override([](vtkImageResample& self, const std::string & arg_0) -> int {  return self.GetNumberOfGenerationsFromBase( arg_0.c_str());}))
    .function("SetOutputSpacing", emscripten::select_overload<void(vtkImageResample&, double, double, double)>([](vtkImageResample& self, double arg_0, double arg_1, double arg_2) -> void { return self.SetOutputSpacing( arg_0, arg_1, arg_2); }))
    .function("SetAxisOutputSpacing", &vtkImageResample::SetAxisOutputSpacing)
    .function("SetMagnificationFactors", emscripten::select_overload<void(vtkImageResample&, double, double, double)>([](vtkImageResample& self, double arg_0, double arg_1, double arg_2) -> void { return self.SetMagnificationFactors( arg_0, arg_1, arg_2); }))
    .function("SetAxisMagnificationFactor", &vtkImageResample::SetAxisMagnificationFactor)
    .function("GetAxisMagnificationFactor", &vtkImageResample::GetAxisMagnificationFactor, emscripten::allow_raw_pointers())
    .function("SetDimensionality", &vtkImageResample::SetDimensionality)
    .function("GetDimensionality", &vtkImageResample::GetDimensionality);
}
