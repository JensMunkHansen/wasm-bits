// JavaScript wrapper for vtkSelectEnclosedPoints with embind 
//
// This file was auto-generated using :
/*
node /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/bin/vtkWrapJavaScript.js \
 @/home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkFiltersModeling.js/vtkFiltersModeling.js.Release.args \
 -o \
 /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkFiltersModeling.js/vtkSelectEnclosedPointsEmbinding.cxx \
 /home/jmh/github/vtk/Filters/Modeling/vtkSelectEnclosedPoints.h
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
#include "vtkAbstractCellLocator.h"
#include "vtkIdList.h"
#include "vtkGenericCell.h"
#include "vtkIntersectionCounter.h"
#include "vtkRandomPool.h"
#include "vtkSelectEnclosedPoints.h"

template<> void emscripten::internal::raw_destructor<vtkSelectEnclosedPoints>(vtkSelectEnclosedPoints * ptr){ ptr->Delete(); }
EMSCRIPTEN_BINDINGS(vtkSelectEnclosedPoints_class) {
  emscripten::class_<vtkSelectEnclosedPoints, emscripten::base<vtkDataSetAlgorithm>>("vtkSelectEnclosedPoints")
    .smart_ptr<vtkSmartPointer<vtkSelectEnclosedPoints>>("vtkSmartPointer<vtkSelectEnclosedPoints>")
    .constructor(&vtk::MakeVTKSmartPtr<vtkSelectEnclosedPoints>)
    .class_function("IsTypeOf", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkSelectEnclosedPoints::IsTypeOf( arg_0.c_str());}))
    .function("IsA", emscripten::optional_override([](vtkSelectEnclosedPoints& self, const std::string & arg_0) -> int {  return self.IsA( arg_0.c_str());}))
    .class_function("SafeDownCast", &vtkSelectEnclosedPoints::SafeDownCast, emscripten::allow_raw_pointers())
    .function("NewInstance", &vtkSelectEnclosedPoints::NewInstance, emscripten::allow_raw_pointers())
    .class_function("GetNumberOfGenerationsFromBaseType", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkSelectEnclosedPoints::GetNumberOfGenerationsFromBaseType( arg_0.c_str());}))
    .function("GetNumberOfGenerationsFromBase", emscripten::optional_override([](vtkSelectEnclosedPoints& self, const std::string & arg_0) -> int {  return self.GetNumberOfGenerationsFromBase( arg_0.c_str());}))
    .function("SetSurfaceData", &vtkSelectEnclosedPoints::SetSurfaceData, emscripten::allow_raw_pointers())
    .function("SetSurfaceConnection", &vtkSelectEnclosedPoints::SetSurfaceConnection, emscripten::allow_raw_pointers())
    .function("GetSurface", emscripten::select_overload<vtkPolyData*(vtkSelectEnclosedPoints&)>([](vtkSelectEnclosedPoints& self) -> vtkPolyData* { return self.GetSurface(); }), emscripten::allow_raw_pointers())
    .function("GetSurface", emscripten::select_overload<vtkPolyData*(vtkSelectEnclosedPoints&, vtkInformationVector*)>([](vtkSelectEnclosedPoints& self, vtkInformationVector* arg_0) -> vtkPolyData* { return self.GetSurface( arg_0); }), emscripten::allow_raw_pointers())
    .function("SetInsideOut", &vtkSelectEnclosedPoints::SetInsideOut)
    .function("InsideOutOn", &vtkSelectEnclosedPoints::InsideOutOn)
    .function("InsideOutOff", &vtkSelectEnclosedPoints::InsideOutOff)
    .function("GetInsideOut", &vtkSelectEnclosedPoints::GetInsideOut)
    .function("SetCheckSurface", &vtkSelectEnclosedPoints::SetCheckSurface)
    .function("CheckSurfaceOn", &vtkSelectEnclosedPoints::CheckSurfaceOn)
    .function("CheckSurfaceOff", &vtkSelectEnclosedPoints::CheckSurfaceOff)
    .function("GetCheckSurface", &vtkSelectEnclosedPoints::GetCheckSurface)
    .function("IsInside", &vtkSelectEnclosedPoints::IsInside)
    .function("SetTolerance", &vtkSelectEnclosedPoints::SetTolerance)
    .function("GetToleranceMinValue", &vtkSelectEnclosedPoints::GetToleranceMinValue)
    .function("GetToleranceMaxValue", &vtkSelectEnclosedPoints::GetToleranceMaxValue)
    .function("GetTolerance", &vtkSelectEnclosedPoints::GetTolerance)
    .function("Initialize", &vtkSelectEnclosedPoints::Initialize, emscripten::allow_raw_pointers())
    .function("IsInsideSurface", emscripten::select_overload<int(vtkSelectEnclosedPoints&, double, double, double)>([](vtkSelectEnclosedPoints& self, double arg_0, double arg_1, double arg_2) -> int { return self.IsInsideSurface( arg_0, arg_1, arg_2); }))
    .function("Complete", &vtkSelectEnclosedPoints::Complete)
    .class_function("IsSurfaceClosed", &vtkSelectEnclosedPoints::IsSurfaceClosed, emscripten::allow_raw_pointers());
}
