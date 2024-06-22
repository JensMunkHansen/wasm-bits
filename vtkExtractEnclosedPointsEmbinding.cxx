// JavaScript wrapper for vtkExtractEnclosedPoints with embind 
//
// This file was auto-generated using :
/*
node /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/bin/vtkWrapJavaScript.js \
 @/home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkFiltersPoints.js/vtkFiltersPoints.js.Release.args \
 -o \
 /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkFiltersPoints.js/vtkExtractEnclosedPointsEmbinding.cxx \
 /home/jmh/github/vtk/Filters/Points/vtkExtractEnclosedPoints.h
*/
#include "vtkEmbindSmartPointerTrait.h"
#include <emscripten.h>
#include <string>
#include "vtkVariant.h"
#include "vtkObjectBase.h"
#include "vtkIndent.h"
#include "vtkPolyData.h"
#include "vtkAlgorithmOutput.h"
#include "vtkInformationVector.h"
#include "vtkExtractEnclosedPoints.h"

template<> void emscripten::internal::raw_destructor<vtkExtractEnclosedPoints>(vtkExtractEnclosedPoints * ptr){ ptr->Delete(); }
EMSCRIPTEN_BINDINGS(vtkExtractEnclosedPoints_class) {
  emscripten::class_<vtkExtractEnclosedPoints, emscripten::base<vtkPointCloudFilter>>("vtkExtractEnclosedPoints")
    .smart_ptr<vtkSmartPointer<vtkExtractEnclosedPoints>>("vtkSmartPointer<vtkExtractEnclosedPoints>")
    .constructor(&vtk::MakeVTKSmartPtr<vtkExtractEnclosedPoints>)
    .class_function("IsTypeOf", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkExtractEnclosedPoints::IsTypeOf( arg_0.c_str());}))
    .function("IsA", emscripten::optional_override([](vtkExtractEnclosedPoints& self, const std::string & arg_0) -> int {  return self.IsA( arg_0.c_str());}))
    .class_function("SafeDownCast", &vtkExtractEnclosedPoints::SafeDownCast, emscripten::allow_raw_pointers())
    .function("NewInstance", &vtkExtractEnclosedPoints::NewInstance, emscripten::allow_raw_pointers())
    .class_function("GetNumberOfGenerationsFromBaseType", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkExtractEnclosedPoints::GetNumberOfGenerationsFromBaseType( arg_0.c_str());}))
    .function("GetNumberOfGenerationsFromBase", emscripten::optional_override([](vtkExtractEnclosedPoints& self, const std::string & arg_0) -> int {  return self.GetNumberOfGenerationsFromBase( arg_0.c_str());}))
    .function("SetSurfaceData", &vtkExtractEnclosedPoints::SetSurfaceData, emscripten::allow_raw_pointers())
    .function("SetSurfaceConnection", &vtkExtractEnclosedPoints::SetSurfaceConnection, emscripten::allow_raw_pointers())
    .function("GetSurface", emscripten::select_overload<vtkPolyData*(vtkExtractEnclosedPoints&)>([](vtkExtractEnclosedPoints& self) -> vtkPolyData* { return self.GetSurface(); }), emscripten::allow_raw_pointers())
    .function("GetSurface", emscripten::select_overload<vtkPolyData*(vtkExtractEnclosedPoints&, vtkInformationVector*)>([](vtkExtractEnclosedPoints& self, vtkInformationVector* arg_0) -> vtkPolyData* { return self.GetSurface( arg_0); }), emscripten::allow_raw_pointers())
    .function("SetCheckSurface", &vtkExtractEnclosedPoints::SetCheckSurface)
    .function("CheckSurfaceOn", &vtkExtractEnclosedPoints::CheckSurfaceOn)
    .function("CheckSurfaceOff", &vtkExtractEnclosedPoints::CheckSurfaceOff)
    .function("GetCheckSurface", &vtkExtractEnclosedPoints::GetCheckSurface)
    .function("SetTolerance", &vtkExtractEnclosedPoints::SetTolerance)
    .function("GetToleranceMinValue", &vtkExtractEnclosedPoints::GetToleranceMinValue)
    .function("GetToleranceMaxValue", &vtkExtractEnclosedPoints::GetToleranceMaxValue)
    .function("GetTolerance", &vtkExtractEnclosedPoints::GetTolerance);
}
