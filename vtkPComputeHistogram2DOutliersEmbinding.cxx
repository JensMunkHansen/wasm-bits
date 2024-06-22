// JavaScript wrapper for vtkPComputeHistogram2DOutliers with embind 
//
// This file was auto-generated using :
/*
node /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/bin/vtkWrapJavaScript.js \
 @/home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkFiltersParallelImaging.js/vtkFiltersParallelImaging.js.Release.args \
 -o \
 /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkFiltersParallelImaging.js/vtkPComputeHistogram2DOutliersEmbinding.cxx \
 /home/jmh/github/vtk/Filters/ParallelImaging/vtkPComputeHistogram2DOutliers.h
*/
#include "vtkEmbindSmartPointerTrait.h"
#include <emscripten.h>
#include <string>
#include "vtkVariant.h"
#include "vtkObjectBase.h"
#include "vtkIndent.h"
#include "vtkMultiProcessController.h"
#include "vtkPComputeHistogram2DOutliers.h"

template<> void emscripten::internal::raw_destructor<vtkPComputeHistogram2DOutliers>(vtkPComputeHistogram2DOutliers * ptr){ ptr->Delete(); }
EMSCRIPTEN_BINDINGS(vtkPComputeHistogram2DOutliers_class) {
  emscripten::class_<vtkPComputeHistogram2DOutliers, emscripten::base<vtkComputeHistogram2DOutliers>>("vtkPComputeHistogram2DOutliers")
    .smart_ptr<vtkSmartPointer<vtkPComputeHistogram2DOutliers>>("vtkSmartPointer<vtkPComputeHistogram2DOutliers>")
    .constructor(&vtk::MakeVTKSmartPtr<vtkPComputeHistogram2DOutliers>)
    .class_function("IsTypeOf", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkPComputeHistogram2DOutliers::IsTypeOf( arg_0.c_str());}))
    .function("IsA", emscripten::optional_override([](vtkPComputeHistogram2DOutliers& self, const std::string & arg_0) -> int {  return self.IsA( arg_0.c_str());}))
    .class_function("SafeDownCast", &vtkPComputeHistogram2DOutliers::SafeDownCast, emscripten::allow_raw_pointers())
    .function("NewInstance", &vtkPComputeHistogram2DOutliers::NewInstance, emscripten::allow_raw_pointers())
    .class_function("GetNumberOfGenerationsFromBaseType", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkPComputeHistogram2DOutliers::GetNumberOfGenerationsFromBaseType( arg_0.c_str());}))
    .function("GetNumberOfGenerationsFromBase", emscripten::optional_override([](vtkPComputeHistogram2DOutliers& self, const std::string & arg_0) -> int {  return self.GetNumberOfGenerationsFromBase( arg_0.c_str());}))
    .function("SetController", &vtkPComputeHistogram2DOutliers::SetController, emscripten::allow_raw_pointers())
    .function("GetController", &vtkPComputeHistogram2DOutliers::GetController, emscripten::allow_raw_pointers());
}
