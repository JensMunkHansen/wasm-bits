// JavaScript wrapper for vtkStaticCellLocator with embind 
//
// This file was auto-generated using :
/*
node /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/bin/vtkWrapJavaScript.js \
 @/home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkCommonDataModel.js/vtkCommonDataModel.js.Release.args \
 -o \
 /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkCommonDataModel.js/vtkStaticCellLocatorEmbinding.cxx \
 /home/jmh/github/vtk/Common/DataModel/vtkStaticCellLocator.h
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
#include "vtkPolyData.h"
#include "vtkAbstractCellLocator.h"
#include "vtkStaticCellLocator.h"

template<> void emscripten::internal::raw_destructor<vtkStaticCellLocator>(vtkStaticCellLocator * ptr){ ptr->Delete(); }
EMSCRIPTEN_BINDINGS(vtkStaticCellLocator_class) {
  emscripten::class_<vtkStaticCellLocator, emscripten::base<vtkAbstractCellLocator>>("vtkStaticCellLocator")
    .smart_ptr<vtkSmartPointer<vtkStaticCellLocator>>("vtkSmartPointer<vtkStaticCellLocator>")
    .constructor(&vtk::MakeAvtkSmartPointer<vtkStaticCellLocator>)
    .class_function("IsTypeOf", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkStaticCellLocator::IsTypeOf( arg_0.c_str());}))
    .function("IsA", emscripten::optional_override([](vtkStaticCellLocator& self, const std::string & arg_0) -> int {  return self.IsA( arg_0.c_str());}))
    .class_function("SafeDownCast", &vtkStaticCellLocator::SafeDownCast, emscripten::allow_raw_pointers())
    .function("NewInstance", &vtkStaticCellLocator::NewInstance, emscripten::allow_raw_pointers())
    .class_function("GetNumberOfGenerationsFromBaseType", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkStaticCellLocator::GetNumberOfGenerationsFromBaseType( arg_0.c_str());}))
    .function("GetNumberOfGenerationsFromBase", emscripten::optional_override([](vtkStaticCellLocator& self, const std::string & arg_0) -> int {  return self.GetNumberOfGenerationsFromBase( arg_0.c_str());}))
    .function("SetDivisions", emscripten::select_overload<void(vtkStaticCellLocator&, int, int, int)>([](vtkStaticCellLocator& self, int arg_0, int arg_1, int arg_2) -> void { return self.SetDivisions( arg_0, arg_1, arg_2); }))
    .function("SetMaxNumberOfBuckets", &vtkStaticCellLocator::SetMaxNumberOfBuckets)
    .function("GetMaxNumberOfBucketsMinValue", &vtkStaticCellLocator::GetMaxNumberOfBucketsMinValue)
    .function("GetMaxNumberOfBucketsMaxValue", &vtkStaticCellLocator::GetMaxNumberOfBucketsMaxValue)
    .function("GetMaxNumberOfBuckets", &vtkStaticCellLocator::GetMaxNumberOfBuckets)
    .function("GetLargeIds", &vtkStaticCellLocator::GetLargeIds)
    .function("FindCellsWithinBounds", emscripten::optional_override([](vtkStaticCellLocator& self, std::uintptr_t arg_0, vtkIdList* arg_1) -> void {  return self.FindCellsWithinBounds(reinterpret_cast<double*>(arg_0 * sizeof(double)), arg_1);}), emscripten::allow_raw_pointers())
    .function("GenerateRepresentation", &vtkStaticCellLocator::GenerateRepresentation, emscripten::allow_raw_pointers())
    .function("FreeSearchStructure", &vtkStaticCellLocator::FreeSearchStructure)
    .function("BuildLocator", &vtkStaticCellLocator::BuildLocator)
    .function("ForceBuildLocator", &vtkStaticCellLocator::ForceBuildLocator)
    .function("ShallowCopy", &vtkStaticCellLocator::ShallowCopy, emscripten::allow_raw_pointers());
}
