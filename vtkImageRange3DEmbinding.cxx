// JavaScript wrapper for vtkImageRange3D with embind 
//
// This file was auto-generated using :
/*
node /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/bin/vtkWrapJavaScript.js \
 @/home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkImagingGeneral.js/vtkImagingGeneral.js.Release.args \
 -o \
 /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkImagingGeneral.js/vtkImageRange3DEmbinding.cxx \
 /home/jmh/github/vtk/Imaging/General/vtkImageRange3D.h
*/
#include "vtkEmbindSmartPointerTrait.h"
#include <emscripten.h>
#include <string>
#include "vtkVariant.h"
#include "vtkObjectBase.h"
#include "vtkIndent.h"
#include "vtkImageRange3D.h"

template<> void emscripten::internal::raw_destructor<vtkImageRange3D>(vtkImageRange3D * ptr){ ptr->Delete(); }
EMSCRIPTEN_BINDINGS(vtkImageRange3D_class) {
  emscripten::class_<vtkImageRange3D, emscripten::base<vtkImageSpatialAlgorithm>>("vtkImageRange3D")
    .smart_ptr<vtkSmartPointer<vtkImageRange3D>>("vtkSmartPointer<vtkImageRange3D>")
    .constructor(&vtk::MakeVTKSmartPtr<vtkImageRange3D>)
    .class_function("IsTypeOf", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkImageRange3D::IsTypeOf( arg_0.c_str());}))
    .function("IsA", emscripten::optional_override([](vtkImageRange3D& self, const std::string & arg_0) -> int {  return self.IsA( arg_0.c_str());}))
    .class_function("SafeDownCast", &vtkImageRange3D::SafeDownCast, emscripten::allow_raw_pointers())
    .function("NewInstance", &vtkImageRange3D::NewInstance, emscripten::allow_raw_pointers())
    .class_function("GetNumberOfGenerationsFromBaseType", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkImageRange3D::GetNumberOfGenerationsFromBaseType( arg_0.c_str());}))
    .function("GetNumberOfGenerationsFromBase", emscripten::optional_override([](vtkImageRange3D& self, const std::string & arg_0) -> int {  return self.GetNumberOfGenerationsFromBase( arg_0.c_str());}))
    .function("SetKernelSize", &vtkImageRange3D::SetKernelSize);
}
