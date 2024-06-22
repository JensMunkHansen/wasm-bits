// JavaScript wrapper for vtkImageSlabReslice with embind 
//
// This file was auto-generated using :
/*
node /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/bin/vtkWrapJavaScript.js \
 @/home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkImagingGeneral.js/vtkImagingGeneral.js.Release.args \
 -o \
 /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkImagingGeneral.js/vtkImageSlabResliceEmbinding.cxx \
 /home/jmh/github/vtk/Imaging/General/vtkImageSlabReslice.h
*/
#include "vtkEmbindSmartPointerTrait.h"
#include <emscripten.h>
#include <string>
#include "vtkVariant.h"
#include "vtkObjectBase.h"
#include "vtkIndent.h"
#include "vtkImageSlabReslice.h"

template<> void emscripten::internal::raw_destructor<vtkImageSlabReslice>(vtkImageSlabReslice * ptr){ ptr->Delete(); }
EMSCRIPTEN_BINDINGS(vtkImageSlabReslice_class) {
  emscripten::class_<vtkImageSlabReslice, emscripten::base<vtkImageReslice>>("vtkImageSlabReslice")
    .smart_ptr<vtkSmartPointer<vtkImageSlabReslice>>("vtkSmartPointer<vtkImageSlabReslice>")
    .constructor(&vtk::MakeVTKSmartPtr<vtkImageSlabReslice>)
    .class_function("IsTypeOf", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkImageSlabReslice::IsTypeOf( arg_0.c_str());}))
    .function("IsA", emscripten::optional_override([](vtkImageSlabReslice& self, const std::string & arg_0) -> int {  return self.IsA( arg_0.c_str());}))
    .class_function("SafeDownCast", &vtkImageSlabReslice::SafeDownCast, emscripten::allow_raw_pointers())
    .function("NewInstance", &vtkImageSlabReslice::NewInstance, emscripten::allow_raw_pointers())
    .class_function("GetNumberOfGenerationsFromBaseType", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkImageSlabReslice::GetNumberOfGenerationsFromBaseType( arg_0.c_str());}))
    .function("GetNumberOfGenerationsFromBase", emscripten::optional_override([](vtkImageSlabReslice& self, const std::string & arg_0) -> int {  return self.GetNumberOfGenerationsFromBase( arg_0.c_str());}))
    .function("SetBlendMode", &vtkImageSlabReslice::SetBlendMode)
    .function("GetBlendMode", &vtkImageSlabReslice::GetBlendMode)
    .function("SetBlendModeToMin", &vtkImageSlabReslice::SetBlendModeToMin)
    .function("SetBlendModeToMax", &vtkImageSlabReslice::SetBlendModeToMax)
    .function("SetBlendModeToMean", &vtkImageSlabReslice::SetBlendModeToMean)
    .function("GetNumBlendSamplePoints", &vtkImageSlabReslice::GetNumBlendSamplePoints)
    .function("SetSlabThickness", &vtkImageSlabReslice::SetSlabThickness)
    .function("GetSlabThickness", &vtkImageSlabReslice::GetSlabThickness)
    .function("SetSlabResolution", &vtkImageSlabReslice::SetSlabResolution)
    .function("GetSlabResolution", &vtkImageSlabReslice::GetSlabResolution);
}
