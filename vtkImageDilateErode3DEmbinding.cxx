// JavaScript wrapper for vtkImageDilateErode3D with embind 
//
// This file was auto-generated using :
/*
node /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/bin/vtkWrapJavaScript.js \
 @/home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkImagingMorphological.js/vtkImagingMorphological.js.Release.args \
 -o \
 /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkImagingMorphological.js/vtkImageDilateErode3DEmbinding.cxx \
 /home/jmh/github/vtk/Imaging/Morphological/vtkImageDilateErode3D.h
*/
#include "vtkEmbindSmartPointerTrait.h"
#include <emscripten.h>
#include <string>
#include "vtkVariant.h"
#include "vtkObjectBase.h"
#include "vtkIndent.h"
#include "vtkImageDilateErode3D.h"

template<> void emscripten::internal::raw_destructor<vtkImageDilateErode3D>(vtkImageDilateErode3D * ptr){ ptr->Delete(); }
EMSCRIPTEN_BINDINGS(vtkImageDilateErode3D_class) {
  emscripten::class_<vtkImageDilateErode3D, emscripten::base<vtkImageSpatialAlgorithm>>("vtkImageDilateErode3D")
    .smart_ptr<vtkSmartPointer<vtkImageDilateErode3D>>("vtkSmartPointer<vtkImageDilateErode3D>")
    .constructor(&vtk::MakeAvtkSmartPointer<vtkImageDilateErode3D>)
    .class_function("IsTypeOf", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkImageDilateErode3D::IsTypeOf( arg_0.c_str());}))
    .function("IsA", emscripten::optional_override([](vtkImageDilateErode3D& self, const std::string & arg_0) -> int {  return self.IsA( arg_0.c_str());}))
    .class_function("SafeDownCast", &vtkImageDilateErode3D::SafeDownCast, emscripten::allow_raw_pointers())
    .function("NewInstance", &vtkImageDilateErode3D::NewInstance, emscripten::allow_raw_pointers())
    .class_function("GetNumberOfGenerationsFromBaseType", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkImageDilateErode3D::GetNumberOfGenerationsFromBaseType( arg_0.c_str());}))
    .function("GetNumberOfGenerationsFromBase", emscripten::optional_override([](vtkImageDilateErode3D& self, const std::string & arg_0) -> int {  return self.GetNumberOfGenerationsFromBase( arg_0.c_str());}))
    .function("SetKernelSize", &vtkImageDilateErode3D::SetKernelSize)
    .function("SetDilateValue", &vtkImageDilateErode3D::SetDilateValue)
    .function("GetDilateValue", &vtkImageDilateErode3D::GetDilateValue)
    .function("SetErodeValue", &vtkImageDilateErode3D::SetErodeValue)
    .function("GetErodeValue", &vtkImageDilateErode3D::GetErodeValue);
}
