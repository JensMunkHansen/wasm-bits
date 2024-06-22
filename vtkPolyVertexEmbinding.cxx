// JavaScript wrapper for vtkPolyVertex with embind 
//
// This file was auto-generated using :
/*
node /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/bin/vtkWrapJavaScript.js \
 @/home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkCommonDataModel.js/vtkCommonDataModel.js.Release.args \
 -o \
 /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkCommonDataModel.js/vtkPolyVertexEmbinding.cxx \
 /home/jmh/github/vtk/Common/DataModel/vtkPolyVertex.h
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
#include "vtkPolyVertex.h"

template<> void emscripten::internal::raw_destructor<vtkPolyVertex>(vtkPolyVertex * ptr){ ptr->Delete(); }
EMSCRIPTEN_BINDINGS(vtkPolyVertex_class) {
  emscripten::class_<vtkPolyVertex, emscripten::base<vtkCell>>("vtkPolyVertex")
    .smart_ptr<vtkSmartPointer<vtkPolyVertex>>("vtkSmartPointer<vtkPolyVertex>")
    .constructor(&vtk::MakeVTKSmartPtr<vtkPolyVertex>)
    .class_function("IsTypeOf", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkPolyVertex::IsTypeOf( arg_0.c_str());}))
    .function("IsA", emscripten::optional_override([](vtkPolyVertex& self, const std::string & arg_0) -> int {  return self.IsA( arg_0.c_str());}))
    .class_function("SafeDownCast", &vtkPolyVertex::SafeDownCast, emscripten::allow_raw_pointers())
    .function("NewInstance", &vtkPolyVertex::NewInstance, emscripten::allow_raw_pointers())
    .class_function("GetNumberOfGenerationsFromBaseType", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkPolyVertex::GetNumberOfGenerationsFromBaseType( arg_0.c_str());}))
    .function("GetNumberOfGenerationsFromBase", emscripten::optional_override([](vtkPolyVertex& self, const std::string & arg_0) -> int {  return self.GetNumberOfGenerationsFromBase( arg_0.c_str());}))
    .function("GetCellType", &vtkPolyVertex::GetCellType)
    .function("GetCellDimension", &vtkPolyVertex::GetCellDimension)
    .function("GetNumberOfEdges", &vtkPolyVertex::GetNumberOfEdges)
    .function("GetNumberOfFaces", &vtkPolyVertex::GetNumberOfFaces)
    .function("GetEdge", &vtkPolyVertex::GetEdge, emscripten::allow_raw_pointers())
    .function("GetFace", &vtkPolyVertex::GetFace, emscripten::allow_raw_pointers())
    .function("Contour", &vtkPolyVertex::Contour, emscripten::allow_raw_pointers())
    .function("Clip", &vtkPolyVertex::Clip, emscripten::allow_raw_pointers())
    .function("TriangulateLocalIds", &vtkPolyVertex::TriangulateLocalIds, emscripten::allow_raw_pointers())
    .function("IsPrimaryCell", &vtkPolyVertex::IsPrimaryCell);
}
