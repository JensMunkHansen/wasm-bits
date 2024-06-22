// JavaScript wrapper for vtkImageContinuousErode3D with embind 
//
// This file was auto-generated using :
/*
node /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/bin/vtkWrapJavaScript.js \
 @/home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkImagingMorphological.js/vtkImagingMorphological.js.Release.args \
 -o \
 /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkImagingMorphological.js/vtkImageContinuousErode3DEmbinding.cxx \
 /home/jmh/github/vtk/Imaging/Morphological/vtkImageContinuousErode3D.h
*/
#include "vtkEmbindSmartPointerTrait.h"
#include <emscripten.h>
#include <string>
#include "vtkVariant.h"
#include "vtkObjectBase.h"
#include "vtkIndent.h"
#include "vtkImageContinuousErode3D.h"

template<> void emscripten::internal::raw_destructor<vtkImageContinuousErode3D>(vtkImageContinuousErode3D * ptr){ ptr->Delete(); }
EMSCRIPTEN_BINDINGS(vtkImageContinuousErode3D_class) {
  emscripten::class_<vtkImageContinuousErode3D, emscripten::base<vtkImageSpatialAlgorithm>>("vtkImageContinuousErode3D")
    .smart_ptr<vtkSmartPointer<vtkImageContinuousErode3D>>("vtkSmartPointer<vtkImageContinuousErode3D>")
    .constructor(&vtk::MakeAvtkSmartPointer<vtkImageContinuousErode3D>)
    .class_function("IsTypeOf", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkImageContinuousErode3D::IsTypeOf( arg_0.c_str());}))
    .function("IsA", emscripten::optional_override([](vtkImageContinuousErode3D& self, const std::string & arg_0) -> int {  return self.IsA( arg_0.c_str());}))
    .class_function("SafeDownCast", &vtkImageContinuousErode3D::SafeDownCast, emscripten::allow_raw_pointers())
    .function("NewInstance", &vtkImageContinuousErode3D::NewInstance, emscripten::allow_raw_pointers())
    .class_function("GetNumberOfGenerationsFromBaseType", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkImageContinuousErode3D::GetNumberOfGenerationsFromBaseType( arg_0.c_str());}))
    .function("GetNumberOfGenerationsFromBase", emscripten::optional_override([](vtkImageContinuousErode3D& self, const std::string & arg_0) -> int {  return self.GetNumberOfGenerationsFromBase( arg_0.c_str());}))
    .function("SetKernelSize", &vtkImageContinuousErode3D::SetKernelSize);
}
