// JavaScript wrapper for vtkSurfaceReconstructionFilter with embind 
//
// This file was auto-generated using :
/*
node /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/bin/vtkWrapJavaScript.js \
 @/home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkImagingHybrid.js/vtkImagingHybrid.js.Release.args \
 -o \
 /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkImagingHybrid.js/vtkSurfaceReconstructionFilterEmbinding.cxx \
 /home/jmh/github/vtk/Imaging/Hybrid/vtkSurfaceReconstructionFilter.h
*/
#include "vtkEmbindSmartPointerTrait.h"
#include <emscripten.h>
#include <string>
#include "vtkVariant.h"
#include "vtkObjectBase.h"
#include "vtkIndent.h"
#include "vtkSurfaceReconstructionFilter.h"

template<> void emscripten::internal::raw_destructor<vtkSurfaceReconstructionFilter>(vtkSurfaceReconstructionFilter * ptr){ ptr->Delete(); }
EMSCRIPTEN_BINDINGS(vtkSurfaceReconstructionFilter_class) {
  emscripten::class_<vtkSurfaceReconstructionFilter, emscripten::base<vtkImageAlgorithm>>("vtkSurfaceReconstructionFilter")
    .smart_ptr<vtkSmartPointer<vtkSurfaceReconstructionFilter>>("vtkSmartPointer<vtkSurfaceReconstructionFilter>")
    .constructor(&vtk::MakeAvtkSmartPointer<vtkSurfaceReconstructionFilter>)
    .class_function("IsTypeOf", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkSurfaceReconstructionFilter::IsTypeOf( arg_0.c_str());}))
    .function("IsA", emscripten::optional_override([](vtkSurfaceReconstructionFilter& self, const std::string & arg_0) -> int {  return self.IsA( arg_0.c_str());}))
    .class_function("SafeDownCast", &vtkSurfaceReconstructionFilter::SafeDownCast, emscripten::allow_raw_pointers())
    .function("NewInstance", &vtkSurfaceReconstructionFilter::NewInstance, emscripten::allow_raw_pointers())
    .class_function("GetNumberOfGenerationsFromBaseType", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkSurfaceReconstructionFilter::GetNumberOfGenerationsFromBaseType( arg_0.c_str());}))
    .function("GetNumberOfGenerationsFromBase", emscripten::optional_override([](vtkSurfaceReconstructionFilter& self, const std::string & arg_0) -> int {  return self.GetNumberOfGenerationsFromBase( arg_0.c_str());}))
    .function("GetNeighborhoodSize", &vtkSurfaceReconstructionFilter::GetNeighborhoodSize)
    .function("SetNeighborhoodSize", &vtkSurfaceReconstructionFilter::SetNeighborhoodSize)
    .function("GetSampleSpacing", &vtkSurfaceReconstructionFilter::GetSampleSpacing)
    .function("SetSampleSpacing", &vtkSurfaceReconstructionFilter::SetSampleSpacing);
}
