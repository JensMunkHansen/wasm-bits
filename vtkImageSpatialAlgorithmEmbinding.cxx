// JavaScript wrapper for vtkImageSpatialAlgorithm with embind 
//
// This file was auto-generated using :
/*
node /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/bin/vtkWrapJavaScript.js \
 @/home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkImagingGeneral.js/vtkImagingGeneral.js.Release.args \
 -o \
 /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkImagingGeneral.js/vtkImageSpatialAlgorithmEmbinding.cxx \
 /home/jmh/github/vtk/Imaging/General/vtkImageSpatialAlgorithm.h
*/
#include "vtkEmbindSmartPointerTrait.h"
#include <emscripten.h>
#include <string>
#include "vtkVariant.h"
#include "vtkObjectBase.h"
#include "vtkIndent.h"
#include "vtkImageSpatialAlgorithm.h"

template<> void emscripten::internal::raw_destructor<vtkImageSpatialAlgorithm>(vtkImageSpatialAlgorithm * ptr){ ptr->Delete(); }
EMSCRIPTEN_BINDINGS(vtkImageSpatialAlgorithm_class) {
  emscripten::class_<vtkImageSpatialAlgorithm, emscripten::base<vtkThreadedImageAlgorithm>>("vtkImageSpatialAlgorithm")
    .smart_ptr<vtkSmartPointer<vtkImageSpatialAlgorithm>>("vtkSmartPointer<vtkImageSpatialAlgorithm>")
    .constructor(&vtk::MakeVTKSmartPtr<vtkImageSpatialAlgorithm>)
    .class_function("IsTypeOf", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkImageSpatialAlgorithm::IsTypeOf( arg_0.c_str());}))
    .function("IsA", emscripten::optional_override([](vtkImageSpatialAlgorithm& self, const std::string & arg_0) -> int {  return self.IsA( arg_0.c_str());}))
    .class_function("SafeDownCast", &vtkImageSpatialAlgorithm::SafeDownCast, emscripten::allow_raw_pointers())
    .function("NewInstance", &vtkImageSpatialAlgorithm::NewInstance, emscripten::allow_raw_pointers())
    .class_function("GetNumberOfGenerationsFromBaseType", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkImageSpatialAlgorithm::GetNumberOfGenerationsFromBaseType( arg_0.c_str());}))
    .function("GetNumberOfGenerationsFromBase", emscripten::optional_override([](vtkImageSpatialAlgorithm& self, const std::string & arg_0) -> int {  return self.GetNumberOfGenerationsFromBase( arg_0.c_str());}));
}
