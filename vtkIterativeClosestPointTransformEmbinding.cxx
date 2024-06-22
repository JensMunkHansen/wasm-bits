// JavaScript wrapper for vtkIterativeClosestPointTransform with embind 
//
// This file was auto-generated using :
/*
node /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/bin/vtkWrapJavaScript.js \
 @/home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkCommonDataModel.js/vtkCommonDataModel.js.Release.args \
 -o \
 /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkCommonDataModel.js/vtkIterativeClosestPointTransformEmbinding.cxx \
 /home/jmh/github/vtk/Common/DataModel/vtkIterativeClosestPointTransform.h
*/
#include "vtkEmbindSmartPointerTrait.h"
#include <emscripten.h>
#include <string>
#include "vtkVariant.h"
#include "vtkObjectBase.h"
#include "vtkIndent.h"
#include "vtkDataSet.h"
#include "vtkCellLocator.h"
#include "vtkLandmarkTransform.h"
#include "vtkAbstractTransform.h"
#include "vtkIterativeClosestPointTransform.h"

EMSCRIPTEN_BINDINGS(vtkCommonDataModel_vtkIterativeClosestPointTransform_0_1_constants) {
  const struct { const char *name; int value; }
    constants[2] = {
      { "VTK_ICP_MODE_RMS", 0 },
      { "VTK_ICP_MODE_AV", 1 },
  };
  for (int c = 0; c < 2; c++)
  {
    emscripten::constant(constants[c].name, constants[c].value);
  }
}
template<> void emscripten::internal::raw_destructor<vtkIterativeClosestPointTransform>(vtkIterativeClosestPointTransform * ptr){ ptr->Delete(); }
EMSCRIPTEN_BINDINGS(vtkIterativeClosestPointTransform_class) {
  emscripten::class_<vtkIterativeClosestPointTransform, emscripten::base<vtkLinearTransform>>("vtkIterativeClosestPointTransform")
    .smart_ptr<vtkSmartPointer<vtkIterativeClosestPointTransform>>("vtkSmartPointer<vtkIterativeClosestPointTransform>")
    .constructor(&vtk::MakeVTKSmartPtr<vtkIterativeClosestPointTransform>)
    .class_function("IsTypeOf", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkIterativeClosestPointTransform::IsTypeOf( arg_0.c_str());}))
    .function("IsA", emscripten::optional_override([](vtkIterativeClosestPointTransform& self, const std::string & arg_0) -> int {  return self.IsA( arg_0.c_str());}))
    .class_function("SafeDownCast", &vtkIterativeClosestPointTransform::SafeDownCast, emscripten::allow_raw_pointers())
    .function("NewInstance", &vtkIterativeClosestPointTransform::NewInstance, emscripten::allow_raw_pointers())
    .class_function("GetNumberOfGenerationsFromBaseType", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkIterativeClosestPointTransform::GetNumberOfGenerationsFromBaseType( arg_0.c_str());}))
    .function("GetNumberOfGenerationsFromBase", emscripten::optional_override([](vtkIterativeClosestPointTransform& self, const std::string & arg_0) -> int {  return self.GetNumberOfGenerationsFromBase( arg_0.c_str());}))
    .function("SetSource", &vtkIterativeClosestPointTransform::SetSource, emscripten::allow_raw_pointers())
    .function("SetTarget", &vtkIterativeClosestPointTransform::SetTarget, emscripten::allow_raw_pointers())
    .function("GetSource", &vtkIterativeClosestPointTransform::GetSource, emscripten::allow_raw_pointers())
    .function("GetTarget", &vtkIterativeClosestPointTransform::GetTarget, emscripten::allow_raw_pointers())
    .function("SetLocator", &vtkIterativeClosestPointTransform::SetLocator, emscripten::allow_raw_pointers())
    .function("GetLocator", &vtkIterativeClosestPointTransform::GetLocator, emscripten::allow_raw_pointers())
    .function("SetMaximumNumberOfIterations", &vtkIterativeClosestPointTransform::SetMaximumNumberOfIterations)
    .function("GetMaximumNumberOfIterations", &vtkIterativeClosestPointTransform::GetMaximumNumberOfIterations)
    .function("GetNumberOfIterations", &vtkIterativeClosestPointTransform::GetNumberOfIterations)
    .function("SetCheckMeanDistance", &vtkIterativeClosestPointTransform::SetCheckMeanDistance)
    .function("GetCheckMeanDistance", &vtkIterativeClosestPointTransform::GetCheckMeanDistance)
    .function("CheckMeanDistanceOn", &vtkIterativeClosestPointTransform::CheckMeanDistanceOn)
    .function("CheckMeanDistanceOff", &vtkIterativeClosestPointTransform::CheckMeanDistanceOff)
    .function("SetMeanDistanceMode", &vtkIterativeClosestPointTransform::SetMeanDistanceMode)
    .function("GetMeanDistanceModeMinValue", &vtkIterativeClosestPointTransform::GetMeanDistanceModeMinValue)
    .function("GetMeanDistanceModeMaxValue", &vtkIterativeClosestPointTransform::GetMeanDistanceModeMaxValue)
    .function("GetMeanDistanceMode", &vtkIterativeClosestPointTransform::GetMeanDistanceMode)
    .function("SetMeanDistanceModeToRMS", &vtkIterativeClosestPointTransform::SetMeanDistanceModeToRMS)
    .function("SetMeanDistanceModeToAbsoluteValue", &vtkIterativeClosestPointTransform::SetMeanDistanceModeToAbsoluteValue)
    .function("GetMeanDistanceModeAsString", emscripten::optional_override([](vtkIterativeClosestPointTransform& self) -> std::string {  return self.GetMeanDistanceModeAsString();}))
    .function("SetMaximumMeanDistance", &vtkIterativeClosestPointTransform::SetMaximumMeanDistance)
    .function("GetMaximumMeanDistance", &vtkIterativeClosestPointTransform::GetMaximumMeanDistance)
    .function("GetMeanDistance", &vtkIterativeClosestPointTransform::GetMeanDistance)
    .function("SetMaximumNumberOfLandmarks", &vtkIterativeClosestPointTransform::SetMaximumNumberOfLandmarks)
    .function("GetMaximumNumberOfLandmarks", &vtkIterativeClosestPointTransform::GetMaximumNumberOfLandmarks)
    .function("SetStartByMatchingCentroids", &vtkIterativeClosestPointTransform::SetStartByMatchingCentroids)
    .function("GetStartByMatchingCentroids", &vtkIterativeClosestPointTransform::GetStartByMatchingCentroids)
    .function("StartByMatchingCentroidsOn", &vtkIterativeClosestPointTransform::StartByMatchingCentroidsOn)
    .function("StartByMatchingCentroidsOff", &vtkIterativeClosestPointTransform::StartByMatchingCentroidsOff)
    .function("GetLandmarkTransform", &vtkIterativeClosestPointTransform::GetLandmarkTransform, emscripten::allow_raw_pointers())
    .function("Inverse", &vtkIterativeClosestPointTransform::Inverse)
    .function("MakeTransform", &vtkIterativeClosestPointTransform::MakeTransform, emscripten::allow_raw_pointers());
}
