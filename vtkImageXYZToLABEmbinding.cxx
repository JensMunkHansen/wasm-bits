// JavaScript wrapper for vtkImageXYZToLAB with embind 
//
// This file was auto-generated using :
/*
node /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/bin/vtkWrapJavaScript.js \
 @/home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkImagingColor.js/vtkImagingColor.js.Release.args \
 -o \
 /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkImagingColor.js/vtkImageXYZToLABEmbinding.cxx \
 /home/jmh/github/vtk/Imaging/Color/vtkImageXYZToLAB.h
*/
#include "vtkEmbindSmartPointerTrait.h"
#include <emscripten.h>
#include <string>
#include "vtkVariant.h"
#include "vtkObjectBase.h"
#include "vtkIndent.h"
#include "vtkImageXYZToLAB.h"

template<> void emscripten::internal::raw_destructor<vtkImageXYZToLAB>(vtkImageXYZToLAB * ptr){ ptr->Delete(); }
EMSCRIPTEN_BINDINGS(vtkImageXYZToLAB_class) {
  emscripten::class_<vtkImageXYZToLAB, emscripten::base<vtkThreadedImageAlgorithm>>("vtkImageXYZToLAB")
    .smart_ptr<vtkSmartPointer<vtkImageXYZToLAB>>("vtkSmartPointer<vtkImageXYZToLAB>")
    .constructor(&vtk::MakeVTKSmartPtr<vtkImageXYZToLAB>)
    .class_function("IsTypeOf", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkImageXYZToLAB::IsTypeOf( arg_0.c_str());}))
    .function("IsA", emscripten::optional_override([](vtkImageXYZToLAB& self, const std::string & arg_0) -> int {  return self.IsA( arg_0.c_str());}))
    .class_function("SafeDownCast", &vtkImageXYZToLAB::SafeDownCast, emscripten::allow_raw_pointers())
    .function("NewInstance", &vtkImageXYZToLAB::NewInstance, emscripten::allow_raw_pointers())
    .class_function("GetNumberOfGenerationsFromBaseType", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkImageXYZToLAB::GetNumberOfGenerationsFromBaseType( arg_0.c_str());}))
    .function("GetNumberOfGenerationsFromBase", emscripten::optional_override([](vtkImageXYZToLAB& self, const std::string & arg_0) -> int {  return self.GetNumberOfGenerationsFromBase( arg_0.c_str());}));
}
