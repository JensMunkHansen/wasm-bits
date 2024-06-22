// JavaScript wrapper for vtkEmptyCell with embind 
//
// This file was auto-generated using :
/*
node /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/bin/vtkWrapJavaScript.js \
 @/home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkCommonDataModel.js/vtkCommonDataModel.js.Release.args \
 -o \
 /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkCommonDataModel.js/vtkEmptyCellEmbinding.cxx \
 /home/jmh/github/vtk/Common/DataModel/vtkEmptyCell.h
*/
#include "vtkEmbindSmartPointerTrait.h"
#include <emscripten.h>
#include <string>
#include "vtkVariant.h"
#include "vtkObjectBase.h"
#include "vtkIndent.h"
#include "vtkCell.h"
#include "vtkIdList.h"
#include "vtkDataArray.h"
#include "vtkIncrementalPointLocator.h"
#include "vtkCellArray.h"
#include "vtkPointData.h"
#include "vtkCellData.h"
#include "vtkEmptyCell.h"

template<> void emscripten::internal::raw_destructor<vtkEmptyCell>(vtkEmptyCell * ptr){ ptr->Delete(); }
EMSCRIPTEN_BINDINGS(vtkEmptyCell_class) {
  emscripten::class_<vtkEmptyCell, emscripten::base<vtkCell>>("vtkEmptyCell")
    .smart_ptr<vtkSmartPointer<vtkEmptyCell>>("vtkSmartPointer<vtkEmptyCell>")
    .constructor(&vtk::MakeVTKSmartPtr<vtkEmptyCell>)
    .class_function("IsTypeOf", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkEmptyCell::IsTypeOf( arg_0.c_str());}))
    .function("IsA", emscripten::optional_override([](vtkEmptyCell& self, const std::string & arg_0) -> int {  return self.IsA( arg_0.c_str());}))
    .class_function("SafeDownCast", &vtkEmptyCell::SafeDownCast, emscripten::allow_raw_pointers())
    .function("NewInstance", &vtkEmptyCell::NewInstance, emscripten::allow_raw_pointers())
    .class_function("GetNumberOfGenerationsFromBaseType", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkEmptyCell::GetNumberOfGenerationsFromBaseType( arg_0.c_str());}))
    .function("GetNumberOfGenerationsFromBase", emscripten::optional_override([](vtkEmptyCell& self, const std::string & arg_0) -> int {  return self.GetNumberOfGenerationsFromBase( arg_0.c_str());}))
    .function("GetCellType", &vtkEmptyCell::GetCellType)
    .function("GetCellDimension", &vtkEmptyCell::GetCellDimension)
    .function("GetNumberOfEdges", &vtkEmptyCell::GetNumberOfEdges)
    .function("GetNumberOfFaces", &vtkEmptyCell::GetNumberOfFaces)
    .function("GetEdge", &vtkEmptyCell::GetEdge, emscripten::allow_raw_pointers())
    .function("GetFace", &vtkEmptyCell::GetFace, emscripten::allow_raw_pointers())
    .function("Contour", &vtkEmptyCell::Contour, emscripten::allow_raw_pointers())
    .function("Clip", &vtkEmptyCell::Clip, emscripten::allow_raw_pointers())
    .function("TriangulateLocalIds", &vtkEmptyCell::TriangulateLocalIds, emscripten::allow_raw_pointers());
}
