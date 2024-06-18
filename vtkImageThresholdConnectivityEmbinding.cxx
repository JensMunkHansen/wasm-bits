// JavaScript wrapper for vtkImageThresholdConnectivity with embind 
//
// This file was auto-generated using :
/*
node /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/bin/vtkWrapJavaScript.js \
 @/home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkImagingMorphological.js/vtkImagingMorphological.js.Release.args \
 -o \
 /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkImagingMorphological.js/vtkImageThresholdConnectivityEmbinding.cxx \
 /home/jmh/github/vtk/Imaging/Morphological/vtkImageThresholdConnectivity.h
*/
#include "vtkEmbindSmartPointerTrait.h"
#include <emscripten.h>
#include <string>
#include "vtkVariant.h"
#include "vtkObjectBase.h"
#include "vtkIndent.h"
#include "vtkPoints.h"
#include "vtkImageStencilData.h"
#include "vtkImageThresholdConnectivity.h"

template<> void emscripten::internal::raw_destructor<vtkImageThresholdConnectivity>(vtkImageThresholdConnectivity * ptr){ ptr->Delete(); }
EMSCRIPTEN_BINDINGS(vtkImageThresholdConnectivity_class) {
  emscripten::class_<vtkImageThresholdConnectivity, emscripten::base<vtkImageAlgorithm>>("vtkImageThresholdConnectivity")
    .smart_ptr<vtkSmartPointer<vtkImageThresholdConnectivity>>("vtkSmartPointer<vtkImageThresholdConnectivity>")
    .constructor(&vtk::MakeAvtkSmartPointer<vtkImageThresholdConnectivity>)
    .class_function("IsTypeOf", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkImageThresholdConnectivity::IsTypeOf( arg_0.c_str());}))
    .function("IsA", emscripten::optional_override([](vtkImageThresholdConnectivity& self, const std::string & arg_0) -> int {  return self.IsA( arg_0.c_str());}))
    .class_function("SafeDownCast", &vtkImageThresholdConnectivity::SafeDownCast, emscripten::allow_raw_pointers())
    .function("NewInstance", &vtkImageThresholdConnectivity::NewInstance, emscripten::allow_raw_pointers())
    .class_function("GetNumberOfGenerationsFromBaseType", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkImageThresholdConnectivity::GetNumberOfGenerationsFromBaseType( arg_0.c_str());}))
    .function("GetNumberOfGenerationsFromBase", emscripten::optional_override([](vtkImageThresholdConnectivity& self, const std::string & arg_0) -> int {  return self.GetNumberOfGenerationsFromBase( arg_0.c_str());}))
    .function("SetSeedPoints", &vtkImageThresholdConnectivity::SetSeedPoints, emscripten::allow_raw_pointers())
    .function("GetSeedPoints", &vtkImageThresholdConnectivity::GetSeedPoints, emscripten::allow_raw_pointers())
    .function("ThresholdByUpper", &vtkImageThresholdConnectivity::ThresholdByUpper)
    .function("ThresholdByLower", &vtkImageThresholdConnectivity::ThresholdByLower)
    .function("ThresholdBetween", &vtkImageThresholdConnectivity::ThresholdBetween)
    .function("SetReplaceIn", &vtkImageThresholdConnectivity::SetReplaceIn)
    .function("GetReplaceIn", &vtkImageThresholdConnectivity::GetReplaceIn)
    .function("ReplaceInOn", &vtkImageThresholdConnectivity::ReplaceInOn)
    .function("ReplaceInOff", &vtkImageThresholdConnectivity::ReplaceInOff)
    .function("SetInValue", &vtkImageThresholdConnectivity::SetInValue)
    .function("GetInValue", &vtkImageThresholdConnectivity::GetInValue)
    .function("SetReplaceOut", &vtkImageThresholdConnectivity::SetReplaceOut)
    .function("GetReplaceOut", &vtkImageThresholdConnectivity::GetReplaceOut)
    .function("ReplaceOutOn", &vtkImageThresholdConnectivity::ReplaceOutOn)
    .function("ReplaceOutOff", &vtkImageThresholdConnectivity::ReplaceOutOff)
    .function("SetOutValue", &vtkImageThresholdConnectivity::SetOutValue)
    .function("GetOutValue", &vtkImageThresholdConnectivity::GetOutValue)
    .function("GetUpperThreshold", &vtkImageThresholdConnectivity::GetUpperThreshold)
    .function("GetLowerThreshold", &vtkImageThresholdConnectivity::GetLowerThreshold)
    .function("SetSliceRangeX", emscripten::select_overload<void(vtkImageThresholdConnectivity&, int, int)>([](vtkImageThresholdConnectivity& self, int arg_0, int arg_1) -> void { return self.SetSliceRangeX( arg_0, arg_1); }))
    .function("SetSliceRangeY", emscripten::select_overload<void(vtkImageThresholdConnectivity&, int, int)>([](vtkImageThresholdConnectivity& self, int arg_0, int arg_1) -> void { return self.SetSliceRangeY( arg_0, arg_1); }))
    .function("SetSliceRangeZ", emscripten::select_overload<void(vtkImageThresholdConnectivity&, int, int)>([](vtkImageThresholdConnectivity& self, int arg_0, int arg_1) -> void { return self.SetSliceRangeZ( arg_0, arg_1); }))
    .function("SetStencilData", &vtkImageThresholdConnectivity::SetStencilData, emscripten::allow_raw_pointers())
    .function("GetStencil", &vtkImageThresholdConnectivity::GetStencil, emscripten::allow_raw_pointers())
    .function("SetActiveComponent", &vtkImageThresholdConnectivity::SetActiveComponent)
    .function("GetActiveComponent", &vtkImageThresholdConnectivity::GetActiveComponent)
    .function("SetNeighborhoodRadius", emscripten::select_overload<void(vtkImageThresholdConnectivity&, double, double, double)>([](vtkImageThresholdConnectivity& self, double arg_0, double arg_1, double arg_2) -> void { return self.SetNeighborhoodRadius( arg_0, arg_1, arg_2); }))
    .function("SetNeighborhoodFraction", &vtkImageThresholdConnectivity::SetNeighborhoodFraction)
    .function("GetNeighborhoodFractionMinValue", &vtkImageThresholdConnectivity::GetNeighborhoodFractionMinValue)
    .function("GetNeighborhoodFractionMaxValue", &vtkImageThresholdConnectivity::GetNeighborhoodFractionMaxValue)
    .function("GetNeighborhoodFraction", &vtkImageThresholdConnectivity::GetNeighborhoodFraction)
    .function("GetMTime", &vtkImageThresholdConnectivity::GetMTime)
    .function("GetNumberOfInVoxels", &vtkImageThresholdConnectivity::GetNumberOfInVoxels);
}
