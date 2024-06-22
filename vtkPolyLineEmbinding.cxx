// JavaScript wrapper for vtkPolyLine with embind 
//
// This file was auto-generated using :
/*
node /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/bin/vtkWrapJavaScript.js \
 @/home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkCommonDataModel.js/vtkCommonDataModel.js.Release.args \
 -o \
 /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkCommonDataModel.js/vtkPolyLineEmbinding.cxx \
 /home/jmh/github/vtk/Common/DataModel/vtkPolyLine.h
*/
#include "vtkEmbindSmartPointerTrait.h"
#include <emscripten.h>
#include <string>
#include "vtkVariant.h"
#include "vtkObjectBase.h"
#include "vtkIndent.h"
#include "vtkPoints.h"
#include "vtkCellArray.h"
#include "vtkDataArray.h"
#include "vtkCell.h"
#include "vtkIdList.h"
#include "vtkIncrementalPointLocator.h"
#include "vtkPointData.h"
#include "vtkCellData.h"
#include "vtkPolyLine.h"

template<> void emscripten::internal::raw_destructor<vtkPolyLine>(vtkPolyLine * ptr){ ptr->Delete(); }
EMSCRIPTEN_BINDINGS(vtkPolyLine_class) {
  emscripten::class_<vtkPolyLine, emscripten::base<vtkCell>>("vtkPolyLine")
    .smart_ptr<vtkSmartPointer<vtkPolyLine>>("vtkSmartPointer<vtkPolyLine>")
    .constructor(&vtk::MakeVTKSmartPtr<vtkPolyLine>)
    .class_function("IsTypeOf", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkPolyLine::IsTypeOf( arg_0.c_str());}))
    .function("IsA", emscripten::optional_override([](vtkPolyLine& self, const std::string & arg_0) -> int {  return self.IsA( arg_0.c_str());}))
    .class_function("SafeDownCast", &vtkPolyLine::SafeDownCast, emscripten::allow_raw_pointers())
    .function("NewInstance", &vtkPolyLine::NewInstance, emscripten::allow_raw_pointers())
    .class_function("GetNumberOfGenerationsFromBaseType", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkPolyLine::GetNumberOfGenerationsFromBaseType( arg_0.c_str());}))
    .function("GetNumberOfGenerationsFromBase", emscripten::optional_override([](vtkPolyLine& self, const std::string & arg_0) -> int {  return self.GetNumberOfGenerationsFromBase( arg_0.c_str());}))
    .class_function("GenerateSlidingNormals", emscripten::select_overload<int( vtkPoints*, vtkCellArray*, vtkDataArray*)>([]( vtkPoints* arg_0, vtkCellArray* arg_1, vtkDataArray* arg_2) -> int { return vtkPolyLine::GenerateSlidingNormals( arg_0, arg_1, arg_2); }), emscripten::allow_raw_pointers())
    .class_function("GenerateSlidingNormals", emscripten::select_overload<int( vtkPoints*, vtkCellArray*, vtkDataArray*, std::uintptr_t, bool)>([]( vtkPoints* arg_0, vtkCellArray* arg_1, vtkDataArray* arg_2, std::uintptr_t arg_3, bool arg_4) -> int { return vtkPolyLine::GenerateSlidingNormals( arg_0, arg_1, arg_2,reinterpret_cast<double*>(arg_3 * sizeof(double)), arg_4); }), emscripten::allow_raw_pointers())
    .function("GetCellType", &vtkPolyLine::GetCellType)
    .function("GetCellDimension", &vtkPolyLine::GetCellDimension)
    .function("GetNumberOfEdges", &vtkPolyLine::GetNumberOfEdges)
    .function("GetNumberOfFaces", &vtkPolyLine::GetNumberOfFaces)
    .function("GetEdge", &vtkPolyLine::GetEdge, emscripten::allow_raw_pointers())
    .function("GetFace", &vtkPolyLine::GetFace, emscripten::allow_raw_pointers())
    .function("Contour", &vtkPolyLine::Contour, emscripten::allow_raw_pointers())
    .function("Clip", &vtkPolyLine::Clip, emscripten::allow_raw_pointers())
    .function("TriangulateLocalIds", &vtkPolyLine::TriangulateLocalIds, emscripten::allow_raw_pointers())
    .function("IsPrimaryCell", &vtkPolyLine::IsPrimaryCell);
}
