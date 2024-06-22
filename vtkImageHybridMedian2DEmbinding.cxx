// JavaScript wrapper for vtkImageHybridMedian2D with embind 
//
// This file was auto-generated using :
/*
node /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/bin/vtkWrapJavaScript.js \
 @/home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkImagingGeneral.js/vtkImagingGeneral.js.Release.args \
 -o \
 /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkImagingGeneral.js/vtkImageHybridMedian2DEmbinding.cxx \
 /home/jmh/github/vtk/Imaging/General/vtkImageHybridMedian2D.h
*/
#include "vtkEmbindSmartPointerTrait.h"
#include <emscripten.h>
#include <string>
#include "vtkVariant.h"
#include "vtkObjectBase.h"
#include "vtkIndent.h"
#include "vtkImageHybridMedian2D.h"

template<> void emscripten::internal::raw_destructor<vtkImageHybridMedian2D>(vtkImageHybridMedian2D * ptr){ ptr->Delete(); }
EMSCRIPTEN_BINDINGS(vtkImageHybridMedian2D_class) {
  emscripten::class_<vtkImageHybridMedian2D, emscripten::base<vtkImageSpatialAlgorithm>>("vtkImageHybridMedian2D")
    .smart_ptr<vtkSmartPointer<vtkImageHybridMedian2D>>("vtkSmartPointer<vtkImageHybridMedian2D>")
    .constructor(&vtk::MakeVTKSmartPtr<vtkImageHybridMedian2D>)
    .class_function("IsTypeOf", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkImageHybridMedian2D::IsTypeOf( arg_0.c_str());}))
    .function("IsA", emscripten::optional_override([](vtkImageHybridMedian2D& self, const std::string & arg_0) -> int {  return self.IsA( arg_0.c_str());}))
    .class_function("SafeDownCast", &vtkImageHybridMedian2D::SafeDownCast, emscripten::allow_raw_pointers())
    .function("NewInstance", &vtkImageHybridMedian2D::NewInstance, emscripten::allow_raw_pointers())
    .class_function("GetNumberOfGenerationsFromBaseType", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkImageHybridMedian2D::GetNumberOfGenerationsFromBaseType( arg_0.c_str());}))
    .function("GetNumberOfGenerationsFromBase", emscripten::optional_override([](vtkImageHybridMedian2D& self, const std::string & arg_0) -> int {  return self.GetNumberOfGenerationsFromBase( arg_0.c_str());}));
}
