// JavaScript wrapper for vtkImageSobel3D with embind 
//
// This file was auto-generated using :
/*
node /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/bin/vtkWrapJavaScript.js \
 @/home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkImagingGeneral.js/vtkImagingGeneral.js.Release.args \
 -o \
 /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkImagingGeneral.js/vtkImageSobel3DEmbinding.cxx \
 /home/jmh/github/vtk/Imaging/General/vtkImageSobel3D.h
*/
#include "vtkEmbindSmartPointerTrait.h"
#include <emscripten.h>
#include <string>
#include "vtkVariant.h"
#include "vtkObjectBase.h"
#include "vtkIndent.h"
#include "vtkImageSobel3D.h"

template<> void emscripten::internal::raw_destructor<vtkImageSobel3D>(vtkImageSobel3D * ptr){ ptr->Delete(); }
EMSCRIPTEN_BINDINGS(vtkImageSobel3D_class) {
  emscripten::class_<vtkImageSobel3D, emscripten::base<vtkImageSpatialAlgorithm>>("vtkImageSobel3D")
    .smart_ptr<vtkSmartPointer<vtkImageSobel3D>>("vtkSmartPointer<vtkImageSobel3D>")
    .constructor(&vtk::MakeVTKSmartPtr<vtkImageSobel3D>)
    .class_function("IsTypeOf", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkImageSobel3D::IsTypeOf( arg_0.c_str());}))
    .function("IsA", emscripten::optional_override([](vtkImageSobel3D& self, const std::string & arg_0) -> int {  return self.IsA( arg_0.c_str());}))
    .class_function("SafeDownCast", &vtkImageSobel3D::SafeDownCast, emscripten::allow_raw_pointers())
    .function("NewInstance", &vtkImageSobel3D::NewInstance, emscripten::allow_raw_pointers())
    .class_function("GetNumberOfGenerationsFromBaseType", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkImageSobel3D::GetNumberOfGenerationsFromBaseType( arg_0.c_str());}))
    .function("GetNumberOfGenerationsFromBase", emscripten::optional_override([](vtkImageSobel3D& self, const std::string & arg_0) -> int {  return self.GetNumberOfGenerationsFromBase( arg_0.c_str());}));
}
