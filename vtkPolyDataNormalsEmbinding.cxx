// JavaScript wrapper for vtkPolyDataNormals with embind 
//
// This file was auto-generated using :
/*
node /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/bin/vtkWrapJavaScript.js \
 @/home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkFiltersCore.js/vtkFiltersCore.js.Release.args \
 -o \
 /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkFiltersCore.js/vtkPolyDataNormalsEmbinding.cxx \
 /home/jmh/github/vtk/Filters/Core/vtkPolyDataNormals.h
*/
#include "vtkEmbindSmartPointerTrait.h"
#include <emscripten.h>
#include <string>
#include "vtkVariant.h"
#include "vtkObjectBase.h"
#include "vtkIndent.h"
#include "vtkSmartPointer.h"
#include "vtkPolyData.h"
#include "vtkFloatArray.h"
#include "vtkPolyDataNormals.h"

template<> void emscripten::internal::raw_destructor<vtkPolyDataNormals>(vtkPolyDataNormals * ptr){ ptr->Delete(); }
EMSCRIPTEN_BINDINGS(vtkPolyDataNormals_class) {
  emscripten::class_<vtkPolyDataNormals, emscripten::base<vtkPolyDataAlgorithm>>("vtkPolyDataNormals")
    .smart_ptr<vtkSmartPointer<vtkPolyDataNormals>>("vtkSmartPointer<vtkPolyDataNormals>")
    .constructor(&vtk::MakeVTKSmartPtr<vtkPolyDataNormals>)
    .class_function("IsTypeOf", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkPolyDataNormals::IsTypeOf( arg_0.c_str());}))
    .function("IsA", emscripten::optional_override([](vtkPolyDataNormals& self, const std::string & arg_0) -> int {  return self.IsA( arg_0.c_str());}))
    .class_function("SafeDownCast", &vtkPolyDataNormals::SafeDownCast, emscripten::allow_raw_pointers())
    .function("NewInstance", &vtkPolyDataNormals::NewInstance, emscripten::allow_raw_pointers())
    .class_function("GetNumberOfGenerationsFromBaseType", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkPolyDataNormals::GetNumberOfGenerationsFromBaseType( arg_0.c_str());}))
    .function("GetNumberOfGenerationsFromBase", emscripten::optional_override([](vtkPolyDataNormals& self, const std::string & arg_0) -> int {  return self.GetNumberOfGenerationsFromBase( arg_0.c_str());}))
    .function("SetFeatureAngle", &vtkPolyDataNormals::SetFeatureAngle)
    .function("GetFeatureAngleMinValue", &vtkPolyDataNormals::GetFeatureAngleMinValue)
    .function("GetFeatureAngleMaxValue", &vtkPolyDataNormals::GetFeatureAngleMaxValue)
    .function("GetFeatureAngle", &vtkPolyDataNormals::GetFeatureAngle)
    .function("SetSplitting", &vtkPolyDataNormals::SetSplitting)
    .function("GetSplitting", &vtkPolyDataNormals::GetSplitting)
    .function("SplittingOn", &vtkPolyDataNormals::SplittingOn)
    .function("SplittingOff", &vtkPolyDataNormals::SplittingOff)
    .function("SetConsistency", &vtkPolyDataNormals::SetConsistency)
    .function("GetConsistency", &vtkPolyDataNormals::GetConsistency)
    .function("ConsistencyOn", &vtkPolyDataNormals::ConsistencyOn)
    .function("ConsistencyOff", &vtkPolyDataNormals::ConsistencyOff)
    .function("SetAutoOrientNormals", &vtkPolyDataNormals::SetAutoOrientNormals)
    .function("GetAutoOrientNormals", &vtkPolyDataNormals::GetAutoOrientNormals)
    .function("AutoOrientNormalsOn", &vtkPolyDataNormals::AutoOrientNormalsOn)
    .function("AutoOrientNormalsOff", &vtkPolyDataNormals::AutoOrientNormalsOff)
    .function("SetComputePointNormals", &vtkPolyDataNormals::SetComputePointNormals)
    .function("GetComputePointNormals", &vtkPolyDataNormals::GetComputePointNormals)
    .function("ComputePointNormalsOn", &vtkPolyDataNormals::ComputePointNormalsOn)
    .function("ComputePointNormalsOff", &vtkPolyDataNormals::ComputePointNormalsOff)
    .function("SetComputeCellNormals", &vtkPolyDataNormals::SetComputeCellNormals)
    .function("GetComputeCellNormals", &vtkPolyDataNormals::GetComputeCellNormals)
    .function("ComputeCellNormalsOn", &vtkPolyDataNormals::ComputeCellNormalsOn)
    .function("ComputeCellNormalsOff", &vtkPolyDataNormals::ComputeCellNormalsOff)
    .function("SetFlipNormals", &vtkPolyDataNormals::SetFlipNormals)
    .function("GetFlipNormals", &vtkPolyDataNormals::GetFlipNormals)
    .function("FlipNormalsOn", &vtkPolyDataNormals::FlipNormalsOn)
    .function("FlipNormalsOff", &vtkPolyDataNormals::FlipNormalsOff)
    .function("SetNonManifoldTraversal", &vtkPolyDataNormals::SetNonManifoldTraversal)
    .function("GetNonManifoldTraversal", &vtkPolyDataNormals::GetNonManifoldTraversal)
    .function("NonManifoldTraversalOn", &vtkPolyDataNormals::NonManifoldTraversalOn)
    .function("NonManifoldTraversalOff", &vtkPolyDataNormals::NonManifoldTraversalOff)
    .function("SetOutputPointsPrecision", &vtkPolyDataNormals::SetOutputPointsPrecision)
    .function("GetOutputPointsPrecisionMinValue", &vtkPolyDataNormals::GetOutputPointsPrecisionMinValue)
    .function("GetOutputPointsPrecisionMaxValue", &vtkPolyDataNormals::GetOutputPointsPrecisionMaxValue)
    .function("GetOutputPointsPrecision", &vtkPolyDataNormals::GetOutputPointsPrecision)
    .class_function("GetCellNormals", &vtkPolyDataNormals::GetCellNormals, emscripten::allow_raw_pointers())
    .class_function("GetPointNormals", &vtkPolyDataNormals::GetPointNormals, emscripten::allow_raw_pointers());
}
