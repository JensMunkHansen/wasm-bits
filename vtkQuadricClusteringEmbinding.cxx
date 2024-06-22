// JavaScript wrapper for vtkQuadricClustering with embind 
//
// This file was auto-generated using :
/*
node /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/bin/vtkWrapJavaScript.js \
 @/home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkFiltersCore.js/vtkFiltersCore.js.Release.args \
 -o \
 /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkFiltersCore.js/vtkQuadricClusteringEmbinding.cxx \
 /home/jmh/github/vtk/Filters/Core/vtkQuadricClustering.h
*/
#include "vtkEmbindSmartPointerTrait.h"
#include <emscripten.h>
#include <string>
#include "vtkVariant.h"
#include "vtkObjectBase.h"
#include "vtkIndent.h"
#include "vtkFeatureEdges.h"
#include "vtkPolyData.h"
#include "vtkQuadricClustering.h"

template<> void emscripten::internal::raw_destructor<vtkQuadricClustering>(vtkQuadricClustering * ptr){ ptr->Delete(); }
EMSCRIPTEN_BINDINGS(vtkQuadricClustering_class) {
  emscripten::class_<vtkQuadricClustering, emscripten::base<vtkPolyDataAlgorithm>>("vtkQuadricClustering")
    .smart_ptr<vtkSmartPointer<vtkQuadricClustering>>("vtkSmartPointer<vtkQuadricClustering>")
    .constructor(&vtk::MakeAvtkSmartPointer<vtkQuadricClustering>)
    .class_function("IsTypeOf", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkQuadricClustering::IsTypeOf( arg_0.c_str());}))
    .function("IsA", emscripten::optional_override([](vtkQuadricClustering& self, const std::string & arg_0) -> int {  return self.IsA( arg_0.c_str());}))
    .class_function("SafeDownCast", &vtkQuadricClustering::SafeDownCast, emscripten::allow_raw_pointers())
    .function("NewInstance", &vtkQuadricClustering::NewInstance, emscripten::allow_raw_pointers())
    .class_function("GetNumberOfGenerationsFromBaseType", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkQuadricClustering::GetNumberOfGenerationsFromBaseType( arg_0.c_str());}))
    .function("GetNumberOfGenerationsFromBase", emscripten::optional_override([](vtkQuadricClustering& self, const std::string & arg_0) -> int {  return self.GetNumberOfGenerationsFromBase( arg_0.c_str());}))
    .function("SetNumberOfXDivisions", &vtkQuadricClustering::SetNumberOfXDivisions)
    .function("SetNumberOfYDivisions", &vtkQuadricClustering::SetNumberOfYDivisions)
    .function("SetNumberOfZDivisions", &vtkQuadricClustering::SetNumberOfZDivisions)
    .function("GetNumberOfXDivisions", &vtkQuadricClustering::GetNumberOfXDivisions)
    .function("GetNumberOfYDivisions", &vtkQuadricClustering::GetNumberOfYDivisions)
    .function("GetNumberOfZDivisions", &vtkQuadricClustering::GetNumberOfZDivisions)
    .function("SetNumberOfDivisions", emscripten::select_overload<void(vtkQuadricClustering&, int, int, int)>([](vtkQuadricClustering& self, int arg_0, int arg_1, int arg_2) -> void { return self.SetNumberOfDivisions( arg_0, arg_1, arg_2); }))
    .function("SetAutoAdjustNumberOfDivisions", &vtkQuadricClustering::SetAutoAdjustNumberOfDivisions)
    .function("GetAutoAdjustNumberOfDivisions", &vtkQuadricClustering::GetAutoAdjustNumberOfDivisions)
    .function("AutoAdjustNumberOfDivisionsOn", &vtkQuadricClustering::AutoAdjustNumberOfDivisionsOn)
    .function("AutoAdjustNumberOfDivisionsOff", &vtkQuadricClustering::AutoAdjustNumberOfDivisionsOff)
    .function("SetDivisionOrigin", emscripten::select_overload<void(vtkQuadricClustering&, double, double, double)>([](vtkQuadricClustering& self, double arg_0, double arg_1, double arg_2) -> void { return self.SetDivisionOrigin( arg_0, arg_1, arg_2); }))
    .function("SetDivisionSpacing", emscripten::select_overload<void(vtkQuadricClustering&, double, double, double)>([](vtkQuadricClustering& self, double arg_0, double arg_1, double arg_2) -> void { return self.SetDivisionSpacing( arg_0, arg_1, arg_2); }))
    .function("SetUseInputPoints", &vtkQuadricClustering::SetUseInputPoints)
    .function("GetUseInputPoints", &vtkQuadricClustering::GetUseInputPoints)
    .function("UseInputPointsOn", &vtkQuadricClustering::UseInputPointsOn)
    .function("UseInputPointsOff", &vtkQuadricClustering::UseInputPointsOff)
    .function("SetUseFeatureEdges", &vtkQuadricClustering::SetUseFeatureEdges)
    .function("GetUseFeatureEdges", &vtkQuadricClustering::GetUseFeatureEdges)
    .function("UseFeatureEdgesOn", &vtkQuadricClustering::UseFeatureEdgesOn)
    .function("UseFeatureEdgesOff", &vtkQuadricClustering::UseFeatureEdgesOff)
    .function("GetFeatureEdges", &vtkQuadricClustering::GetFeatureEdges, emscripten::allow_raw_pointers())
    .function("SetUseFeaturePoints", &vtkQuadricClustering::SetUseFeaturePoints)
    .function("GetUseFeaturePoints", &vtkQuadricClustering::GetUseFeaturePoints)
    .function("UseFeaturePointsOn", &vtkQuadricClustering::UseFeaturePointsOn)
    .function("UseFeaturePointsOff", &vtkQuadricClustering::UseFeaturePointsOff)
    .function("SetFeaturePointsAngle", &vtkQuadricClustering::SetFeaturePointsAngle)
    .function("GetFeaturePointsAngleMinValue", &vtkQuadricClustering::GetFeaturePointsAngleMinValue)
    .function("GetFeaturePointsAngleMaxValue", &vtkQuadricClustering::GetFeaturePointsAngleMaxValue)
    .function("GetFeaturePointsAngle", &vtkQuadricClustering::GetFeaturePointsAngle)
    .function("SetUseInternalTriangles", &vtkQuadricClustering::SetUseInternalTriangles)
    .function("GetUseInternalTriangles", &vtkQuadricClustering::GetUseInternalTriangles)
    .function("UseInternalTrianglesOn", &vtkQuadricClustering::UseInternalTrianglesOn)
    .function("UseInternalTrianglesOff", &vtkQuadricClustering::UseInternalTrianglesOff)
    .function("StartAppend", emscripten::select_overload<void(vtkQuadricClustering&, std::uintptr_t)>([](vtkQuadricClustering& self, std::uintptr_t arg_0) -> void { return self.StartAppend(reinterpret_cast<double*>(arg_0 * sizeof(double))); }))
    .function("StartAppend", emscripten::select_overload<void(vtkQuadricClustering&, double, double, double, double, double, double)>([](vtkQuadricClustering& self, double arg_0, double arg_1, double arg_2, double arg_3, double arg_4, double arg_5) -> void { return self.StartAppend( arg_0, arg_1, arg_2, arg_3, arg_4, arg_5); }))
    .function("Append", &vtkQuadricClustering::Append, emscripten::allow_raw_pointers())
    .function("EndAppend", &vtkQuadricClustering::EndAppend)
    .function("SetCopyCellData", &vtkQuadricClustering::SetCopyCellData)
    .function("GetCopyCellData", &vtkQuadricClustering::GetCopyCellData)
    .function("CopyCellDataOn", &vtkQuadricClustering::CopyCellDataOn)
    .function("CopyCellDataOff", &vtkQuadricClustering::CopyCellDataOff)
    .function("SetPreventDuplicateCells", &vtkQuadricClustering::SetPreventDuplicateCells)
    .function("GetPreventDuplicateCells", &vtkQuadricClustering::GetPreventDuplicateCells)
    .function("PreventDuplicateCellsOn", &vtkQuadricClustering::PreventDuplicateCellsOn)
    .function("PreventDuplicateCellsOff", &vtkQuadricClustering::PreventDuplicateCellsOff);
}
