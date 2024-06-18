// JavaScript wrapper for vtkImageOpenClose3D with embind 
//
// This file was auto-generated using :
/*
node /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/bin/vtkWrapJavaScript.js \
 @/home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkImagingMorphological.js/vtkImagingMorphological.js.Release.args \
 -o \
 /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkImagingMorphological.js/vtkImageOpenClose3DEmbinding.cxx \
 /home/jmh/github/vtk/Imaging/Morphological/vtkImageOpenClose3D.h
*/
#include "vtkEmbindSmartPointerTrait.h"
#include <emscripten.h>
#include <string>
#include "vtkVariant.h"
#include "vtkObjectBase.h"
#include "vtkIndent.h"
#include "vtkImageDilateErode3D.h"
#include "vtkInformation.h"
#include "vtkInformationVector.h"
#include "vtkImageOpenClose3D.h"

template<> void emscripten::internal::raw_destructor<vtkImageOpenClose3D>(vtkImageOpenClose3D * ptr){ ptr->Delete(); }
EMSCRIPTEN_BINDINGS(vtkImageOpenClose3D_class) {
  emscripten::class_<vtkImageOpenClose3D, emscripten::base<vtkImageAlgorithm>>("vtkImageOpenClose3D")
    .smart_ptr<vtkSmartPointer<vtkImageOpenClose3D>>("vtkSmartPointer<vtkImageOpenClose3D>")
    .constructor(&vtk::MakeAvtkSmartPointer<vtkImageOpenClose3D>)
    .class_function("IsTypeOf", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkImageOpenClose3D::IsTypeOf( arg_0.c_str());}))
    .function("IsA", emscripten::optional_override([](vtkImageOpenClose3D& self, const std::string & arg_0) -> int {  return self.IsA( arg_0.c_str());}))
    .class_function("SafeDownCast", &vtkImageOpenClose3D::SafeDownCast, emscripten::allow_raw_pointers())
    .function("NewInstance", &vtkImageOpenClose3D::NewInstance, emscripten::allow_raw_pointers())
    .class_function("GetNumberOfGenerationsFromBaseType", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkImageOpenClose3D::GetNumberOfGenerationsFromBaseType( arg_0.c_str());}))
    .function("GetNumberOfGenerationsFromBase", emscripten::optional_override([](vtkImageOpenClose3D& self, const std::string & arg_0) -> int {  return self.GetNumberOfGenerationsFromBase( arg_0.c_str());}))
    .function("GetMTime", &vtkImageOpenClose3D::GetMTime)
    .function("DebugOn", &vtkImageOpenClose3D::DebugOn)
    .function("DebugOff", &vtkImageOpenClose3D::DebugOff)
    .function("Modified", &vtkImageOpenClose3D::Modified)
    .function("SetKernelSize", &vtkImageOpenClose3D::SetKernelSize)
    .function("SetOpenValue", &vtkImageOpenClose3D::SetOpenValue)
    .function("GetOpenValue", &vtkImageOpenClose3D::GetOpenValue)
    .function("SetCloseValue", &vtkImageOpenClose3D::SetCloseValue)
    .function("GetCloseValue", &vtkImageOpenClose3D::GetCloseValue)
    .function("GetFilter0", &vtkImageOpenClose3D::GetFilter0, emscripten::allow_raw_pointers())
    .function("GetFilter1", &vtkImageOpenClose3D::GetFilter1, emscripten::allow_raw_pointers());
}
