// JavaScript wrapper for vtkCubicLine with embind 
//
// This file was auto-generated using :
/*
node /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/bin/vtkWrapJavaScript.js \
 @/home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkCommonDataModel.js/vtkCommonDataModel.js.Release.args \
 -o \
 /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkCommonDataModel.js/vtkCubicLineEmbinding.cxx \
 /home/jmh/github/vtk/Common/DataModel/vtkCubicLine.h
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
#include "vtkCubicLine.h"

template<> void emscripten::internal::raw_destructor<vtkCubicLine>(vtkCubicLine * ptr){ ptr->Delete(); }
EMSCRIPTEN_BINDINGS(vtkCubicLine_class) {
  emscripten::class_<vtkCubicLine, emscripten::base<vtkNonLinearCell>>("vtkCubicLine")
    .smart_ptr<vtkSmartPointer<vtkCubicLine>>("vtkSmartPointer<vtkCubicLine>")
    .constructor(&vtk::MakeVTKSmartPtr<vtkCubicLine>)
    .class_function("IsTypeOf", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkCubicLine::IsTypeOf( arg_0.c_str());}))
    .function("IsA", emscripten::optional_override([](vtkCubicLine& self, const std::string & arg_0) -> int {  return self.IsA( arg_0.c_str());}))
    .class_function("SafeDownCast", &vtkCubicLine::SafeDownCast, emscripten::allow_raw_pointers())
    .function("NewInstance", &vtkCubicLine::NewInstance, emscripten::allow_raw_pointers())
    .class_function("GetNumberOfGenerationsFromBaseType", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkCubicLine::GetNumberOfGenerationsFromBaseType( arg_0.c_str());}))
    .function("GetNumberOfGenerationsFromBase", emscripten::optional_override([](vtkCubicLine& self, const std::string & arg_0) -> int {  return self.GetNumberOfGenerationsFromBase( arg_0.c_str());}))
    .function("GetCellType", &vtkCubicLine::GetCellType)
    .function("GetCellDimension", &vtkCubicLine::GetCellDimension)
    .function("GetNumberOfEdges", &vtkCubicLine::GetNumberOfEdges)
    .function("GetNumberOfFaces", &vtkCubicLine::GetNumberOfFaces)
    .function("GetEdge", &vtkCubicLine::GetEdge, emscripten::allow_raw_pointers())
    .function("GetFace", &vtkCubicLine::GetFace, emscripten::allow_raw_pointers())
    .function("Contour", &vtkCubicLine::Contour, emscripten::allow_raw_pointers())
    .function("TriangulateLocalIds", &vtkCubicLine::TriangulateLocalIds, emscripten::allow_raw_pointers())
    .function("Clip", &vtkCubicLine::Clip, emscripten::allow_raw_pointers());
}
