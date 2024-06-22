// JavaScript wrapper for vtkImageMedian3D with embind 
//
// This file was auto-generated using :
/*
node /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/bin/vtkWrapJavaScript.js \
 @/home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkImagingGeneral.js/vtkImagingGeneral.js.Release.args \
 -o \
 /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkImagingGeneral.js/vtkImageMedian3DEmbinding.cxx \
 /home/jmh/github/vtk/Imaging/General/vtkImageMedian3D.h
*/
#include "vtkEmbindSmartPointerTrait.h"
#include <emscripten.h>
#include <string>
#include "vtkVariant.h"
#include "vtkObjectBase.h"
#include "vtkIndent.h"
#include "vtkImageMedian3D.h"

template<> void emscripten::internal::raw_destructor<vtkImageMedian3D>(vtkImageMedian3D * ptr){ ptr->Delete(); }
EMSCRIPTEN_BINDINGS(vtkImageMedian3D_class) {
  emscripten::class_<vtkImageMedian3D, emscripten::base<vtkImageSpatialAlgorithm>>("vtkImageMedian3D")
    .smart_ptr<vtkSmartPointer<vtkImageMedian3D>>("vtkSmartPointer<vtkImageMedian3D>")
    .constructor(&vtk::MakeAvtkSmartPointer<vtkImageMedian3D>)
    .class_function("IsTypeOf", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkImageMedian3D::IsTypeOf( arg_0.c_str());}))
    .function("IsA", emscripten::optional_override([](vtkImageMedian3D& self, const std::string & arg_0) -> int {  return self.IsA( arg_0.c_str());}))
    .class_function("SafeDownCast", &vtkImageMedian3D::SafeDownCast, emscripten::allow_raw_pointers())
    .function("NewInstance", &vtkImageMedian3D::NewInstance, emscripten::allow_raw_pointers())
    .class_function("GetNumberOfGenerationsFromBaseType", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkImageMedian3D::GetNumberOfGenerationsFromBaseType( arg_0.c_str());}))
    .function("GetNumberOfGenerationsFromBase", emscripten::optional_override([](vtkImageMedian3D& self, const std::string & arg_0) -> int {  return self.GetNumberOfGenerationsFromBase( arg_0.c_str());}))
    .function("SetKernelSize", &vtkImageMedian3D::SetKernelSize)
    .function("GetNumberOfElements", &vtkImageMedian3D::GetNumberOfElements);
}
