// JavaScript wrapper for vtkAbstractCellLocator with embind 
//
// This file was auto-generated using :
/*
node /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/bin/vtkWrapJavaScript.js \
 @/home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkCommonDataModel.js/vtkCommonDataModel.js.Release.args \
 -o \
 /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkCommonDataModel.js/vtkAbstractCellLocatorEmbinding.cxx \
 /home/jmh/github/vtk/Common/DataModel/vtkAbstractCellLocator.h
*/
#include "vtkEmbindSmartPointerTrait.h"
#include <emscripten.h>
#include <string>
#include "vtkVariant.h"
#include "vtkObjectBase.h"
#include "vtkIndent.h"
#include "vtkGenericCell.h"
#include "vtkPoints.h"
#include "vtkIdList.h"
#include "vtkAbstractCellLocator.h"

template<> void emscripten::internal::raw_destructor<vtkAbstractCellLocator>(vtkAbstractCellLocator * ptr){ ptr->Delete(); }
EMSCRIPTEN_BINDINGS(vtkAbstractCellLocator_class) {
  emscripten::class_<vtkAbstractCellLocator, emscripten::base<vtkLocator>>("vtkAbstractCellLocator")
    .class_function("IsTypeOf", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkAbstractCellLocator::IsTypeOf( arg_0.c_str());}))
    .function("IsA", emscripten::optional_override([](vtkAbstractCellLocator& self, const std::string & arg_0) -> int {  return self.IsA( arg_0.c_str());}))
    .class_function("SafeDownCast", &vtkAbstractCellLocator::SafeDownCast, emscripten::allow_raw_pointers())
    .function("NewInstance", &vtkAbstractCellLocator::NewInstance, emscripten::allow_raw_pointers())
    .class_function("GetNumberOfGenerationsFromBaseType", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkAbstractCellLocator::GetNumberOfGenerationsFromBaseType( arg_0.c_str());}))
    .function("GetNumberOfGenerationsFromBase", emscripten::optional_override([](vtkAbstractCellLocator& self, const std::string & arg_0) -> int {  return self.GetNumberOfGenerationsFromBase( arg_0.c_str());}))
    .function("SetNumberOfCellsPerNode", &vtkAbstractCellLocator::SetNumberOfCellsPerNode)
    .function("GetNumberOfCellsPerNodeMinValue", &vtkAbstractCellLocator::GetNumberOfCellsPerNodeMinValue)
    .function("GetNumberOfCellsPerNodeMaxValue", &vtkAbstractCellLocator::GetNumberOfCellsPerNodeMaxValue)
    .function("GetNumberOfCellsPerNode", &vtkAbstractCellLocator::GetNumberOfCellsPerNode)
    .function("SetCacheCellBounds", &vtkAbstractCellLocator::SetCacheCellBounds)
    .function("GetCacheCellBounds", &vtkAbstractCellLocator::GetCacheCellBounds)
    .function("CacheCellBoundsOn", &vtkAbstractCellLocator::CacheCellBoundsOn)
    .function("CacheCellBoundsOff", &vtkAbstractCellLocator::CacheCellBoundsOff)
    .function("ComputeCellBounds", &vtkAbstractCellLocator::ComputeCellBounds)
    .function("SetRetainCellLists", &vtkAbstractCellLocator::SetRetainCellLists)
    .function("GetRetainCellLists", &vtkAbstractCellLocator::GetRetainCellLists)
    .function("RetainCellListsOn", &vtkAbstractCellLocator::RetainCellListsOn)
    .function("RetainCellListsOff", &vtkAbstractCellLocator::RetainCellListsOff)
    .function("FindCellsWithinBounds", emscripten::optional_override([](vtkAbstractCellLocator& self, std::uintptr_t arg_0, vtkIdList* arg_1) -> void {  return self.FindCellsWithinBounds(reinterpret_cast<double*>(arg_0 * sizeof(double)), arg_1);}), emscripten::allow_raw_pointers())
    .function("ShallowCopy", &vtkAbstractCellLocator::ShallowCopy, emscripten::allow_raw_pointers());
}
