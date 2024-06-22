// JavaScript wrapper for vtkImageSkeleton2D with embind 
//
// This file was auto-generated using :
/*
node /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/bin/vtkWrapJavaScript.js \
 @/home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkImagingMorphological.js/vtkImagingMorphological.js.Release.args \
 -o \
 /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkImagingMorphological.js/vtkImageSkeleton2DEmbinding.cxx \
 /home/jmh/github/vtk/Imaging/Morphological/vtkImageSkeleton2D.h
*/
#include "vtkEmbindSmartPointerTrait.h"
#include <emscripten.h>
#include <string>
#include "vtkVariant.h"
#include "vtkObjectBase.h"
#include "vtkIndent.h"
#include "vtkImageSkeleton2D.h"

template<> void emscripten::internal::raw_destructor<vtkImageSkeleton2D>(vtkImageSkeleton2D * ptr){ ptr->Delete(); }
EMSCRIPTEN_BINDINGS(vtkImageSkeleton2D_class) {
  emscripten::class_<vtkImageSkeleton2D, emscripten::base<vtkImageIterateFilter>>("vtkImageSkeleton2D")
    .smart_ptr<vtkSmartPointer<vtkImageSkeleton2D>>("vtkSmartPointer<vtkImageSkeleton2D>")
    .constructor(&vtk::MakeVTKSmartPtr<vtkImageSkeleton2D>)
    .class_function("IsTypeOf", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkImageSkeleton2D::IsTypeOf( arg_0.c_str());}))
    .function("IsA", emscripten::optional_override([](vtkImageSkeleton2D& self, const std::string & arg_0) -> int {  return self.IsA( arg_0.c_str());}))
    .class_function("SafeDownCast", &vtkImageSkeleton2D::SafeDownCast, emscripten::allow_raw_pointers())
    .function("NewInstance", &vtkImageSkeleton2D::NewInstance, emscripten::allow_raw_pointers())
    .class_function("GetNumberOfGenerationsFromBaseType", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkImageSkeleton2D::GetNumberOfGenerationsFromBaseType( arg_0.c_str());}))
    .function("GetNumberOfGenerationsFromBase", emscripten::optional_override([](vtkImageSkeleton2D& self, const std::string & arg_0) -> int {  return self.GetNumberOfGenerationsFromBase( arg_0.c_str());}))
    .function("SetPrune", &vtkImageSkeleton2D::SetPrune)
    .function("GetPrune", &vtkImageSkeleton2D::GetPrune)
    .function("PruneOn", &vtkImageSkeleton2D::PruneOn)
    .function("PruneOff", &vtkImageSkeleton2D::PruneOff)
    .function("SetNumberOfIterations", &vtkImageSkeleton2D::SetNumberOfIterations);
}
