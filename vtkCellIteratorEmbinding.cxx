// JavaScript wrapper for vtkCellIterator with embind 
//
// This file was auto-generated using :
/*
node /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/bin/vtkWrapJavaScript.js \
 @/home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkCommonDataModel.js/vtkCommonDataModel.js.Release.args \
 -o \
 /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkCommonDataModel.js/vtkCellIteratorEmbinding.cxx \
 /home/jmh/github/vtk/Common/DataModel/vtkCellIterator.h
*/
#include "vtkEmbindSmartPointerTrait.h"
#include <emscripten.h>
#include <string>
#include "vtkVariant.h"
#include "vtkIndent.h"
#include "vtkObjectBase.h"
#include "vtkIdList.h"
#include "vtkPoints.h"
#include "vtkCellArray.h"
#include "vtkGenericCell.h"
#include "vtkCellIterator.h"

template<> void emscripten::internal::raw_destructor<vtkCellIterator>(vtkCellIterator * ptr){ ptr->Delete(); }
EMSCRIPTEN_BINDINGS(vtkCellIterator_class) {
  emscripten::class_<vtkCellIterator, emscripten::base<vtkObject>>("vtkCellIterator")
    .class_function("IsTypeOf", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkCellIterator::IsTypeOf( arg_0.c_str());}))
    .function("IsA", emscripten::optional_override([](vtkCellIterator& self, const std::string & arg_0) -> int {  return self.IsA( arg_0.c_str());}))
    .class_function("SafeDownCast", &vtkCellIterator::SafeDownCast, emscripten::allow_raw_pointers())
    .function("NewInstance", &vtkCellIterator::NewInstance, emscripten::allow_raw_pointers())
    .class_function("GetNumberOfGenerationsFromBaseType", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkCellIterator::GetNumberOfGenerationsFromBaseType( arg_0.c_str());}))
    .function("GetNumberOfGenerationsFromBase", emscripten::optional_override([](vtkCellIterator& self, const std::string & arg_0) -> int {  return self.GetNumberOfGenerationsFromBase( arg_0.c_str());}))
    .function("InitTraversal", &vtkCellIterator::InitTraversal)
    .function("GoToNextCell", &vtkCellIterator::GoToNextCell)
    .function("GetCellType", &vtkCellIterator::GetCellType)
    .function("GetCellDimension", &vtkCellIterator::GetCellDimension)
    .function("GetPointIds", &vtkCellIterator::GetPointIds, emscripten::allow_raw_pointers())
    .function("GetPoints", &vtkCellIterator::GetPoints, emscripten::allow_raw_pointers())
    .function("GetCellFaces", &vtkCellIterator::GetCellFaces, emscripten::allow_raw_pointers())
    .function("GetCell", &vtkCellIterator::GetCell, emscripten::allow_raw_pointers())
    .function("GetNumberOfPoints", &vtkCellIterator::GetNumberOfPoints)
    .function("GetNumberOfFaces", &vtkCellIterator::GetNumberOfFaces);
}
