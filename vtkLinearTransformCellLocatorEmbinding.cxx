// JavaScript wrapper for vtkLinearTransformCellLocator with embind 
//
// This file was auto-generated using :
/*
node /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/bin/vtkWrapJavaScript.js \
 @/home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkFiltersFlowPaths.js/vtkFiltersFlowPaths.js.Release.args \
 -o \
 /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkFiltersFlowPaths.js/vtkLinearTransformCellLocatorEmbinding.cxx \
 /home/jmh/github/vtk/Filters/FlowPaths/vtkLinearTransformCellLocator.h
*/
#include "vtkEmbindSmartPointerTrait.h"
#include <emscripten.h>
#include <string>
#include "vtkVariant.h"
#include "vtkObjectBase.h"
#include "vtkIndent.h"
#include "vtkAbstractCellLocator.h"
#include "vtkGenericCell.h"
#include "vtkPoints.h"
#include "vtkIdList.h"
#include "vtkPolyData.h"
#include "vtkLinearTransformCellLocator.h"

template<> void emscripten::internal::raw_destructor<vtkLinearTransformCellLocator>(vtkLinearTransformCellLocator * ptr){ ptr->Delete(); }
EMSCRIPTEN_BINDINGS(vtkLinearTransformCellLocator_class) {
  emscripten::class_<vtkLinearTransformCellLocator, emscripten::base<vtkAbstractCellLocator>>("vtkLinearTransformCellLocator")
    .smart_ptr<vtkSmartPointer<vtkLinearTransformCellLocator>>("vtkSmartPointer<vtkLinearTransformCellLocator>")
    .constructor(&vtk::MakeAvtkSmartPointer<vtkLinearTransformCellLocator>)
    .class_function("IsTypeOf", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkLinearTransformCellLocator::IsTypeOf( arg_0.c_str());}))
    .function("IsA", emscripten::optional_override([](vtkLinearTransformCellLocator& self, const std::string & arg_0) -> int {  return self.IsA( arg_0.c_str());}))
    .class_function("SafeDownCast", &vtkLinearTransformCellLocator::SafeDownCast, emscripten::allow_raw_pointers())
    .function("NewInstance", &vtkLinearTransformCellLocator::NewInstance, emscripten::allow_raw_pointers())
    .class_function("GetNumberOfGenerationsFromBaseType", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkLinearTransformCellLocator::GetNumberOfGenerationsFromBaseType( arg_0.c_str());}))
    .function("GetNumberOfGenerationsFromBase", emscripten::optional_override([](vtkLinearTransformCellLocator& self, const std::string & arg_0) -> int {  return self.GetNumberOfGenerationsFromBase( arg_0.c_str());}))
    .function("SetCellLocator", &vtkLinearTransformCellLocator::SetCellLocator, emscripten::allow_raw_pointers())
    .function("GetCellLocator", &vtkLinearTransformCellLocator::GetCellLocator, emscripten::allow_raw_pointers())
    .function("SetUseAllPoints", &vtkLinearTransformCellLocator::SetUseAllPoints)
    .function("UseAllPointsOn", &vtkLinearTransformCellLocator::UseAllPointsOn)
    .function("UseAllPointsOff", &vtkLinearTransformCellLocator::UseAllPointsOff)
    .function("GetUseAllPoints", &vtkLinearTransformCellLocator::GetUseAllPoints)
    .function("GetIsLinearTransformation", &vtkLinearTransformCellLocator::GetIsLinearTransformation)
    .function("FindCellsWithinBounds", emscripten::optional_override([](vtkLinearTransformCellLocator& self, std::uintptr_t arg_0, vtkIdList* arg_1) -> void {  return self.FindCellsWithinBounds(reinterpret_cast<double*>(arg_0 * sizeof(double)), arg_1);}), emscripten::allow_raw_pointers())
    .function("GenerateRepresentation", &vtkLinearTransformCellLocator::GenerateRepresentation, emscripten::allow_raw_pointers())
    .function("FreeSearchStructure", &vtkLinearTransformCellLocator::FreeSearchStructure)
    .function("BuildLocator", &vtkLinearTransformCellLocator::BuildLocator)
    .function("ForceBuildLocator", &vtkLinearTransformCellLocator::ForceBuildLocator)
    .function("ShallowCopy", &vtkLinearTransformCellLocator::ShallowCopy, emscripten::allow_raw_pointers());
}
