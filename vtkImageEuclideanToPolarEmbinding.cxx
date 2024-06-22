// JavaScript wrapper for vtkImageEuclideanToPolar with embind 
//
// This file was auto-generated using :
/*
node /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/bin/vtkWrapJavaScript.js \
 @/home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkImagingGeneral.js/vtkImagingGeneral.js.Release.args \
 -o \
 /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkImagingGeneral.js/vtkImageEuclideanToPolarEmbinding.cxx \
 /home/jmh/github/vtk/Imaging/General/vtkImageEuclideanToPolar.h
*/
#include "vtkEmbindSmartPointerTrait.h"
#include <emscripten.h>
#include <string>
#include "vtkVariant.h"
#include "vtkObjectBase.h"
#include "vtkIndent.h"
#include "vtkImageEuclideanToPolar.h"

template<> void emscripten::internal::raw_destructor<vtkImageEuclideanToPolar>(vtkImageEuclideanToPolar * ptr){ ptr->Delete(); }
EMSCRIPTEN_BINDINGS(vtkImageEuclideanToPolar_class) {
  emscripten::class_<vtkImageEuclideanToPolar, emscripten::base<vtkThreadedImageAlgorithm>>("vtkImageEuclideanToPolar")
    .smart_ptr<vtkSmartPointer<vtkImageEuclideanToPolar>>("vtkSmartPointer<vtkImageEuclideanToPolar>")
    .constructor(&vtk::MakeVTKSmartPtr<vtkImageEuclideanToPolar>)
    .class_function("IsTypeOf", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkImageEuclideanToPolar::IsTypeOf( arg_0.c_str());}))
    .function("IsA", emscripten::optional_override([](vtkImageEuclideanToPolar& self, const std::string & arg_0) -> int {  return self.IsA( arg_0.c_str());}))
    .class_function("SafeDownCast", &vtkImageEuclideanToPolar::SafeDownCast, emscripten::allow_raw_pointers())
    .function("NewInstance", &vtkImageEuclideanToPolar::NewInstance, emscripten::allow_raw_pointers())
    .class_function("GetNumberOfGenerationsFromBaseType", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkImageEuclideanToPolar::GetNumberOfGenerationsFromBaseType( arg_0.c_str());}))
    .function("GetNumberOfGenerationsFromBase", emscripten::optional_override([](vtkImageEuclideanToPolar& self, const std::string & arg_0) -> int {  return self.GetNumberOfGenerationsFromBase( arg_0.c_str());}))
    .function("SetThetaMaximum", &vtkImageEuclideanToPolar::SetThetaMaximum)
    .function("GetThetaMaximum", &vtkImageEuclideanToPolar::GetThetaMaximum);
}
