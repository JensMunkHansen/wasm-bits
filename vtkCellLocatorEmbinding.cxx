// JavaScript wrapper for vtkCellLocator with embind 
//
// This file was auto-generated using :
/*
node /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/bin/vtkWrapJavaScript.js \
 @/home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkCommonDataModel.js/vtkCommonDataModel.js.Release.args \
 -o \
 /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkCommonDataModel.js/vtkCellLocatorEmbinding.cxx \
 /home/jmh/github/vtk/Common/DataModel/vtkCellLocator.h
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
#include "vtkCellLocator.h"

template<> void emscripten::internal::raw_destructor<vtkCellLocator>(vtkCellLocator * ptr){ ptr->Delete(); }
EMSCRIPTEN_BINDINGS(vtkCellLocator_class) {
  emscripten::class_<vtkCellLocator, emscripten::base<vtkAbstractCellLocator>>("vtkCellLocator")
    .smart_ptr<vtkSmartPointer<vtkCellLocator>>("vtkSmartPointer<vtkCellLocator>")
    .constructor(&vtk::MakeAvtkSmartPointer<vtkCellLocator>)
    .class_function("IsTypeOf", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkCellLocator::IsTypeOf( arg_0.c_str());}))
    .function("IsA", emscripten::optional_override([](vtkCellLocator& self, const std::string & arg_0) -> int {  return self.IsA( arg_0.c_str());}))
    .class_function("SafeDownCast", &vtkCellLocator::SafeDownCast, emscripten::allow_raw_pointers())
    .function("NewInstance", &vtkCellLocator::NewInstance, emscripten::allow_raw_pointers())
    .class_function("GetNumberOfGenerationsFromBaseType", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkCellLocator::GetNumberOfGenerationsFromBaseType( arg_0.c_str());}))
    .function("GetNumberOfGenerationsFromBase", emscripten::optional_override([](vtkCellLocator& self, const std::string & arg_0) -> int {  return self.GetNumberOfGenerationsFromBase( arg_0.c_str());}))
    .function("SetNumberOfCellsPerBucket", &vtkCellLocator::SetNumberOfCellsPerBucket)
    .function("GetNumberOfCellsPerBucket", &vtkCellLocator::GetNumberOfCellsPerBucket)
    .function("FindCellsWithinBounds", emscripten::optional_override([](vtkCellLocator& self, std::uintptr_t arg_0, vtkIdList* arg_1) -> void {  return self.FindCellsWithinBounds(reinterpret_cast<double*>(arg_0 * sizeof(double)), arg_1);}), emscripten::allow_raw_pointers())
    .function("FreeSearchStructure", &vtkCellLocator::FreeSearchStructure)
    .function("BuildLocator", &vtkCellLocator::BuildLocator)
    .function("ForceBuildLocator", &vtkCellLocator::ForceBuildLocator)
    .function("GenerateRepresentation", &vtkCellLocator::GenerateRepresentation, emscripten::allow_raw_pointers())
    .function("GetCells", &vtkCellLocator::GetCells, emscripten::allow_raw_pointers())
    .function("GetNumberOfBuckets", &vtkCellLocator::GetNumberOfBuckets)
    .function("ShallowCopy", &vtkCellLocator::ShallowCopy, emscripten::allow_raw_pointers());
}
