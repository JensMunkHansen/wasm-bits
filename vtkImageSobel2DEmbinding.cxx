// JavaScript wrapper for vtkImageSobel2D with embind 
//
// This file was auto-generated using :
/*
node /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/bin/vtkWrapJavaScript.js \
 @/home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkImagingGeneral.js/vtkImagingGeneral.js.Release.args \
 -o \
 /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkImagingGeneral.js/vtkImageSobel2DEmbinding.cxx \
 /home/jmh/github/vtk/Imaging/General/vtkImageSobel2D.h
*/
#include "vtkEmbindSmartPointerTrait.h"
#include <emscripten.h>
#include <string>
#include "vtkVariant.h"
#include "vtkObjectBase.h"
#include "vtkIndent.h"
#include "vtkImageSobel2D.h"

template<> void emscripten::internal::raw_destructor<vtkImageSobel2D>(vtkImageSobel2D * ptr){ ptr->Delete(); }
EMSCRIPTEN_BINDINGS(vtkImageSobel2D_class) {
  emscripten::class_<vtkImageSobel2D, emscripten::base<vtkImageSpatialAlgorithm>>("vtkImageSobel2D")
    .smart_ptr<vtkSmartPointer<vtkImageSobel2D>>("vtkSmartPointer<vtkImageSobel2D>")
    .constructor(&vtk::MakeAvtkSmartPointer<vtkImageSobel2D>)
    .class_function("IsTypeOf", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkImageSobel2D::IsTypeOf( arg_0.c_str());}))
    .function("IsA", emscripten::optional_override([](vtkImageSobel2D& self, const std::string & arg_0) -> int {  return self.IsA( arg_0.c_str());}))
    .class_function("SafeDownCast", &vtkImageSobel2D::SafeDownCast, emscripten::allow_raw_pointers())
    .function("NewInstance", &vtkImageSobel2D::NewInstance, emscripten::allow_raw_pointers())
    .class_function("GetNumberOfGenerationsFromBaseType", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkImageSobel2D::GetNumberOfGenerationsFromBaseType( arg_0.c_str());}))
    .function("GetNumberOfGenerationsFromBase", emscripten::optional_override([](vtkImageSobel2D& self, const std::string & arg_0) -> int {  return self.GetNumberOfGenerationsFromBase( arg_0.c_str());}));
}
