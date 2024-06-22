// JavaScript wrapper for vtkImageContinuousDilate3D with embind 
//
// This file was auto-generated using :
/*
node /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/bin/vtkWrapJavaScript.js \
 @/home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkImagingMorphological.js/vtkImagingMorphological.js.Release.args \
 -o \
 /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkImagingMorphological.js/vtkImageContinuousDilate3DEmbinding.cxx \
 /home/jmh/github/vtk/Imaging/Morphological/vtkImageContinuousDilate3D.h
*/
#include "vtkEmbindSmartPointerTrait.h"
#include <emscripten.h>
#include <string>
#include "vtkVariant.h"
#include "vtkObjectBase.h"
#include "vtkIndent.h"
#include "vtkImageContinuousDilate3D.h"

template<> void emscripten::internal::raw_destructor<vtkImageContinuousDilate3D>(vtkImageContinuousDilate3D * ptr){ ptr->Delete(); }
EMSCRIPTEN_BINDINGS(vtkImageContinuousDilate3D_class) {
  emscripten::class_<vtkImageContinuousDilate3D, emscripten::base<vtkImageSpatialAlgorithm>>("vtkImageContinuousDilate3D")
    .smart_ptr<vtkSmartPointer<vtkImageContinuousDilate3D>>("vtkSmartPointer<vtkImageContinuousDilate3D>")
    .constructor(&vtk::MakeVTKSmartPtr<vtkImageContinuousDilate3D>)
    .class_function("IsTypeOf", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkImageContinuousDilate3D::IsTypeOf( arg_0.c_str());}))
    .function("IsA", emscripten::optional_override([](vtkImageContinuousDilate3D& self, const std::string & arg_0) -> int {  return self.IsA( arg_0.c_str());}))
    .class_function("SafeDownCast", &vtkImageContinuousDilate3D::SafeDownCast, emscripten::allow_raw_pointers())
    .function("NewInstance", &vtkImageContinuousDilate3D::NewInstance, emscripten::allow_raw_pointers())
    .class_function("GetNumberOfGenerationsFromBaseType", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkImageContinuousDilate3D::GetNumberOfGenerationsFromBaseType( arg_0.c_str());}))
    .function("GetNumberOfGenerationsFromBase", emscripten::optional_override([](vtkImageContinuousDilate3D& self, const std::string & arg_0) -> int {  return self.GetNumberOfGenerationsFromBase( arg_0.c_str());}))
    .function("SetKernelSize", &vtkImageContinuousDilate3D::SetKernelSize);
}
