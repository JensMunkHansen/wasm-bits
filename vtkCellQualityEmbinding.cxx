// JavaScript wrapper for vtkCellQuality with embind 
//
// This file was auto-generated using :
/*
node /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/bin/vtkWrapJavaScript.js \
 @/home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkFiltersVerdict.js/vtkFiltersVerdict.js.Release.args \
 -o \
 /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkFiltersVerdict.js/vtkCellQualityEmbinding.cxx \
 /home/jmh/github/vtk/Filters/Verdict/vtkCellQuality.h
*/
#include "vtkEmbindSmartPointerTrait.h"
#include <emscripten.h>
#include <string>
#include "vtkVariant.h"
#include "vtkIndent.h"
#include "vtkObjectBase.h"
#include "vtkCell.h"
#include "vtkCellQuality.h"

template<> void emscripten::internal::raw_destructor<vtkCellQuality>(vtkCellQuality * ptr){ ptr->Delete(); }
EMSCRIPTEN_BINDINGS(vtkCellQuality_class) {
  emscripten::class_<vtkCellQuality, emscripten::base<vtkDataSetAlgorithm>>("vtkCellQuality")
    .smart_ptr<vtkSmartPointer<vtkCellQuality>>("vtkSmartPointer<vtkCellQuality>")
    .constructor(&vtk::MakeVTKSmartPtr<vtkCellQuality>)
    .class_function("IsTypeOf", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkCellQuality::IsTypeOf( arg_0.c_str());}))
    .function("IsA", emscripten::optional_override([](vtkCellQuality& self, const std::string & arg_0) -> int {  return self.IsA( arg_0.c_str());}))
    .class_function("SafeDownCast", &vtkCellQuality::SafeDownCast, emscripten::allow_raw_pointers())
    .function("NewInstance", &vtkCellQuality::NewInstance, emscripten::allow_raw_pointers())
    .class_function("GetNumberOfGenerationsFromBaseType", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkCellQuality::GetNumberOfGenerationsFromBaseType( arg_0.c_str());}))
    .function("GetNumberOfGenerationsFromBase", emscripten::optional_override([](vtkCellQuality& self, const std::string & arg_0) -> int {  return self.GetNumberOfGenerationsFromBase( arg_0.c_str());}))
    .function("SetQualityMeasure", emscripten::select_overload<void(vtkCellQuality&, int)>([](vtkCellQuality& self, int arg_0) -> void { return self.SetQualityMeasure( arg_0); }))
    .function("SetQualityMeasureToArea", &vtkCellQuality::SetQualityMeasureToArea)
    .function("SetQualityMeasureToAspectFrobenius", &vtkCellQuality::SetQualityMeasureToAspectFrobenius)
    .function("SetQualityMeasureToAspectGamma", &vtkCellQuality::SetQualityMeasureToAspectGamma)
    .function("SetQualityMeasureToAspectRatio", &vtkCellQuality::SetQualityMeasureToAspectRatio)
    .function("SetQualityMeasureToCollapseRatio", &vtkCellQuality::SetQualityMeasureToCollapseRatio)
    .function("SetQualityMeasureToCondition", &vtkCellQuality::SetQualityMeasureToCondition)
    .function("SetQualityMeasureToDiagonal", &vtkCellQuality::SetQualityMeasureToDiagonal)
    .function("SetQualityMeasureToDimension", &vtkCellQuality::SetQualityMeasureToDimension)
    .function("SetQualityMeasureToDistortion", &vtkCellQuality::SetQualityMeasureToDistortion)
    .function("SetQualityMeasureToJacobian", &vtkCellQuality::SetQualityMeasureToJacobian)
    .function("SetQualityMeasureToMaxAngle", &vtkCellQuality::SetQualityMeasureToMaxAngle)
    .function("SetQualityMeasureToMaxAspectFrobenius", &vtkCellQuality::SetQualityMeasureToMaxAspectFrobenius)
    .function("SetQualityMeasureToMaxEdgeRatio", &vtkCellQuality::SetQualityMeasureToMaxEdgeRatio)
    .function("SetQualityMeasureToMedAspectFrobenius", &vtkCellQuality::SetQualityMeasureToMedAspectFrobenius)
    .function("SetQualityMeasureToMinAngle", &vtkCellQuality::SetQualityMeasureToMinAngle)
    .function("SetQualityMeasureToOddy", &vtkCellQuality::SetQualityMeasureToOddy)
    .function("SetQualityMeasureToRadiusRatio", &vtkCellQuality::SetQualityMeasureToRadiusRatio)
    .function("SetQualityMeasureToRelativeSizeSquared", &vtkCellQuality::SetQualityMeasureToRelativeSizeSquared)
    .function("SetQualityMeasureToScaledJacobian", &vtkCellQuality::SetQualityMeasureToScaledJacobian)
    .function("SetQualityMeasureToShapeAndSize", &vtkCellQuality::SetQualityMeasureToShapeAndSize)
    .function("SetQualityMeasureToShape", &vtkCellQuality::SetQualityMeasureToShape)
    .function("SetQualityMeasureToShearAndSize", &vtkCellQuality::SetQualityMeasureToShearAndSize)
    .function("SetQualityMeasureToShear", &vtkCellQuality::SetQualityMeasureToShear)
    .function("SetQualityMeasureToSkew", &vtkCellQuality::SetQualityMeasureToSkew)
    .function("SetQualityMeasureToStretch", &vtkCellQuality::SetQualityMeasureToStretch)
    .function("SetQualityMeasureToTaper", &vtkCellQuality::SetQualityMeasureToTaper)
    .function("SetQualityMeasureToVolume", &vtkCellQuality::SetQualityMeasureToVolume)
    .function("SetQualityMeasureToWarpage", &vtkCellQuality::SetQualityMeasureToWarpage)
    .function("SetUnsupportedGeometry", &vtkCellQuality::SetUnsupportedGeometry)
    .function("GetUnsupportedGeometry", &vtkCellQuality::GetUnsupportedGeometry)
    .function("SetUndefinedQuality", &vtkCellQuality::SetUndefinedQuality)
    .function("GetUndefinedQuality", &vtkCellQuality::GetUndefinedQuality)
    .function("TriangleStripArea", &vtkCellQuality::TriangleStripArea, emscripten::allow_raw_pointers())
    .function("PixelArea", &vtkCellQuality::PixelArea, emscripten::allow_raw_pointers())
    .function("PolygonArea", &vtkCellQuality::PolygonArea, emscripten::allow_raw_pointers());
}
