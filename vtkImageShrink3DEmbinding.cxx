// JavaScript wrapper for vtkImageShrink3D with embind 
//
// This file was auto-generated using :
/*
node /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/bin/vtkWrapJavaScript.js \
 @/home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkImagingCore.js/vtkImagingCore.js.Release.args \
 -o \
 /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkImagingCore.js/vtkImageShrink3DEmbinding.cxx \
 /home/jmh/github/vtk/Imaging/Core/vtkImageShrink3D.h
*/
#include "vtkEmbindSmartPointerTrait.h"
#include <emscripten.h>
#include <string>
#include "vtkVariant.h"
#include "vtkObjectBase.h"
#include "vtkIndent.h"
#include "vtkImageShrink3D.h"

template<> void emscripten::internal::raw_destructor<vtkImageShrink3D>(vtkImageShrink3D * ptr){ ptr->Delete(); }
EMSCRIPTEN_BINDINGS(vtkImageShrink3D_class) {
  emscripten::class_<vtkImageShrink3D, emscripten::base<vtkThreadedImageAlgorithm>>("vtkImageShrink3D")
    .smart_ptr<vtkSmartPointer<vtkImageShrink3D>>("vtkSmartPointer<vtkImageShrink3D>")
    .constructor(&vtk::MakeVTKSmartPtr<vtkImageShrink3D>)
    .class_function("IsTypeOf", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkImageShrink3D::IsTypeOf( arg_0.c_str());}))
    .function("IsA", emscripten::optional_override([](vtkImageShrink3D& self, const std::string & arg_0) -> int {  return self.IsA( arg_0.c_str());}))
    .class_function("SafeDownCast", &vtkImageShrink3D::SafeDownCast, emscripten::allow_raw_pointers())
    .function("NewInstance", &vtkImageShrink3D::NewInstance, emscripten::allow_raw_pointers())
    .class_function("GetNumberOfGenerationsFromBaseType", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkImageShrink3D::GetNumberOfGenerationsFromBaseType( arg_0.c_str());}))
    .function("GetNumberOfGenerationsFromBase", emscripten::optional_override([](vtkImageShrink3D& self, const std::string & arg_0) -> int {  return self.GetNumberOfGenerationsFromBase( arg_0.c_str());}))
    .function("SetShrinkFactors", emscripten::select_overload<void(vtkImageShrink3D&, int, int, int)>([](vtkImageShrink3D& self, int arg_0, int arg_1, int arg_2) -> void { return self.SetShrinkFactors( arg_0, arg_1, arg_2); }))
    .function("SetShift", emscripten::select_overload<void(vtkImageShrink3D&, int, int, int)>([](vtkImageShrink3D& self, int arg_0, int arg_1, int arg_2) -> void { return self.SetShift( arg_0, arg_1, arg_2); }))
    .function("SetAveraging", &vtkImageShrink3D::SetAveraging)
    .function("GetAveraging", &vtkImageShrink3D::GetAveraging)
    .function("AveragingOn", &vtkImageShrink3D::AveragingOn)
    .function("AveragingOff", &vtkImageShrink3D::AveragingOff)
    .function("SetMean", &vtkImageShrink3D::SetMean)
    .function("GetMean", &vtkImageShrink3D::GetMean)
    .function("MeanOn", &vtkImageShrink3D::MeanOn)
    .function("MeanOff", &vtkImageShrink3D::MeanOff)
    .function("SetMinimum", &vtkImageShrink3D::SetMinimum)
    .function("GetMinimum", &vtkImageShrink3D::GetMinimum)
    .function("MinimumOn", &vtkImageShrink3D::MinimumOn)
    .function("MinimumOff", &vtkImageShrink3D::MinimumOff)
    .function("SetMaximum", &vtkImageShrink3D::SetMaximum)
    .function("GetMaximum", &vtkImageShrink3D::GetMaximum)
    .function("MaximumOn", &vtkImageShrink3D::MaximumOn)
    .function("MaximumOff", &vtkImageShrink3D::MaximumOff)
    .function("SetMedian", &vtkImageShrink3D::SetMedian)
    .function("GetMedian", &vtkImageShrink3D::GetMedian)
    .function("MedianOn", &vtkImageShrink3D::MedianOn)
    .function("MedianOff", &vtkImageShrink3D::MedianOff);
}
