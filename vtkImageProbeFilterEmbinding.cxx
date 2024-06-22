// JavaScript wrapper for vtkImageProbeFilter with embind 
//
// This file was auto-generated using :
/*
node /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/bin/vtkWrapJavaScript.js \
 @/home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkImagingCore.js/vtkImagingCore.js.Release.args \
 -o \
 /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkImagingCore.js/vtkImageProbeFilterEmbinding.cxx \
 /home/jmh/github/vtk/Imaging/Core/vtkImageProbeFilter.h
*/
#include "vtkEmbindSmartPointerTrait.h"
#include <emscripten.h>
#include <string>
#include "vtkVariant.h"
#include "vtkObjectBase.h"
#include "vtkIndent.h"
#include "vtkDataObject.h"
#include "vtkAlgorithmOutput.h"
#include "vtkAbstractImageInterpolator.h"
#include "vtkImageProbeFilter.h"

template<> void emscripten::internal::raw_destructor<vtkImageProbeFilter>(vtkImageProbeFilter * ptr){ ptr->Delete(); }
EMSCRIPTEN_BINDINGS(vtkImageProbeFilter_class) {
  emscripten::class_<vtkImageProbeFilter, emscripten::base<vtkDataSetAlgorithm>>("vtkImageProbeFilter")
    .smart_ptr<vtkSmartPointer<vtkImageProbeFilter>>("vtkSmartPointer<vtkImageProbeFilter>")
    .constructor(&vtk::MakeVTKSmartPtr<vtkImageProbeFilter>)
    .class_function("IsTypeOf", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkImageProbeFilter::IsTypeOf( arg_0.c_str());}))
    .function("IsA", emscripten::optional_override([](vtkImageProbeFilter& self, const std::string & arg_0) -> int {  return self.IsA( arg_0.c_str());}))
    .class_function("SafeDownCast", &vtkImageProbeFilter::SafeDownCast, emscripten::allow_raw_pointers())
    .function("NewInstance", &vtkImageProbeFilter::NewInstance, emscripten::allow_raw_pointers())
    .class_function("GetNumberOfGenerationsFromBaseType", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkImageProbeFilter::GetNumberOfGenerationsFromBaseType( arg_0.c_str());}))
    .function("GetNumberOfGenerationsFromBase", emscripten::optional_override([](vtkImageProbeFilter& self, const std::string & arg_0) -> int {  return self.GetNumberOfGenerationsFromBase( arg_0.c_str());}))
    .function("SetSourceData", &vtkImageProbeFilter::SetSourceData, emscripten::allow_raw_pointers())
    .function("GetSource", &vtkImageProbeFilter::GetSource, emscripten::allow_raw_pointers())
    .function("SetSourceConnection", &vtkImageProbeFilter::SetSourceConnection, emscripten::allow_raw_pointers())
    .function("SetInterpolator", &vtkImageProbeFilter::SetInterpolator, emscripten::allow_raw_pointers())
    .function("GetInterpolator", &vtkImageProbeFilter::GetInterpolator, emscripten::allow_raw_pointers());
}
