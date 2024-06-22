// JavaScript wrapper for vtkCellTreeLocator with embind 
//
// This file was auto-generated using :
/*
node /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/bin/vtkWrapJavaScript.js \
 @/home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkCommonDataModel.js/vtkCommonDataModel.js.Release.args \
 -o \
 /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkCommonDataModel.js/vtkCellTreeLocatorEmbinding.cxx \
 /home/jmh/github/vtk/Common/DataModel/vtkCellTreeLocator.h
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
#include "vtkCellTreeLocator.h"

template<> void emscripten::internal::raw_destructor<vtkCellTreeLocator>(vtkCellTreeLocator * ptr){ ptr->Delete(); }
EMSCRIPTEN_BINDINGS(vtkCellTreeLocator_class) {
  emscripten::class_<vtkCellTreeLocator, emscripten::base<vtkAbstractCellLocator>>("vtkCellTreeLocator")
    .smart_ptr<vtkSmartPointer<vtkCellTreeLocator>>("vtkSmartPointer<vtkCellTreeLocator>")
    .constructor(&vtk::MakeAvtkSmartPointer<vtkCellTreeLocator>)
    .class_function("IsTypeOf", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkCellTreeLocator::IsTypeOf( arg_0.c_str());}))
    .function("IsA", emscripten::optional_override([](vtkCellTreeLocator& self, const std::string & arg_0) -> int {  return self.IsA( arg_0.c_str());}))
    .class_function("SafeDownCast", &vtkCellTreeLocator::SafeDownCast, emscripten::allow_raw_pointers())
    .function("NewInstance", &vtkCellTreeLocator::NewInstance, emscripten::allow_raw_pointers())
    .class_function("GetNumberOfGenerationsFromBaseType", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkCellTreeLocator::GetNumberOfGenerationsFromBaseType( arg_0.c_str());}))
    .function("GetNumberOfGenerationsFromBase", emscripten::optional_override([](vtkCellTreeLocator& self, const std::string & arg_0) -> int {  return self.GetNumberOfGenerationsFromBase( arg_0.c_str());}))
    .function("SetNumberOfBuckets", &vtkCellTreeLocator::SetNumberOfBuckets)
    .function("GetNumberOfBuckets", &vtkCellTreeLocator::GetNumberOfBuckets)
    .function("GetLargeIds", &vtkCellTreeLocator::GetLargeIds)
    .function("FindCellsWithinBounds", emscripten::optional_override([](vtkCellTreeLocator& self, std::uintptr_t arg_0, vtkIdList* arg_1) -> void {  return self.FindCellsWithinBounds(reinterpret_cast<double*>(arg_0 * sizeof(double)), arg_1);}), emscripten::allow_raw_pointers())
    .function("FreeSearchStructure", &vtkCellTreeLocator::FreeSearchStructure)
    .function("BuildLocator", &vtkCellTreeLocator::BuildLocator)
    .function("ForceBuildLocator", &vtkCellTreeLocator::ForceBuildLocator)
    .function("GenerateRepresentation", &vtkCellTreeLocator::GenerateRepresentation, emscripten::allow_raw_pointers())
    .function("ShallowCopy", &vtkCellTreeLocator::ShallowCopy, emscripten::allow_raw_pointers());
}
