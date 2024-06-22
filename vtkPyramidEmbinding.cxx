// JavaScript wrapper for vtkPyramid with embind 
//
// This file was auto-generated using :
/*
node /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/bin/vtkWrapJavaScript.js \
 @/home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkCommonDataModel.js/vtkCommonDataModel.js.Release.args \
 -o \
 /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkCommonDataModel.js/vtkPyramidEmbinding.cxx \
 /home/jmh/github/vtk/Common/DataModel/vtkPyramid.h
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
#include "vtkPoints.h"
#include "vtkPyramid.h"

template<> void emscripten::internal::raw_destructor<vtkPyramid>(vtkPyramid * ptr){ ptr->Delete(); }
EMSCRIPTEN_BINDINGS(vtkPyramid_class) {
  emscripten::class_<vtkPyramid, emscripten::base<vtkCell3D>>("vtkPyramid")
    .smart_ptr<vtkSmartPointer<vtkPyramid>>("vtkSmartPointer<vtkPyramid>")
    .constructor(&vtk::MakeVTKSmartPtr<vtkPyramid>)
    .class_function("IsTypeOf", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkPyramid::IsTypeOf( arg_0.c_str());}))
    .function("IsA", emscripten::optional_override([](vtkPyramid& self, const std::string & arg_0) -> int {  return self.IsA( arg_0.c_str());}))
    .class_function("SafeDownCast", &vtkPyramid::SafeDownCast, emscripten::allow_raw_pointers())
    .function("NewInstance", &vtkPyramid::NewInstance, emscripten::allow_raw_pointers())
    .class_function("GetNumberOfGenerationsFromBaseType", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkPyramid::GetNumberOfGenerationsFromBaseType( arg_0.c_str());}))
    .function("GetNumberOfGenerationsFromBase", emscripten::optional_override([](vtkPyramid& self, const std::string & arg_0) -> int {  return self.GetNumberOfGenerationsFromBase( arg_0.c_str());}))
    .function("IsInsideOut", &vtkPyramid::IsInsideOut)
    .function("GetCellType", &vtkPyramid::GetCellType)
    .function("GetCellDimension", &vtkPyramid::GetCellDimension)
    .function("GetNumberOfEdges", &vtkPyramid::GetNumberOfEdges)
    .function("GetNumberOfFaces", &vtkPyramid::GetNumberOfFaces)
    .function("GetEdge", &vtkPyramid::GetEdge, emscripten::allow_raw_pointers())
    .function("GetFace", &vtkPyramid::GetFace, emscripten::allow_raw_pointers())
    .function("Contour", &vtkPyramid::Contour, emscripten::allow_raw_pointers())
    .function("TriangulateLocalIds", &vtkPyramid::TriangulateLocalIds, emscripten::allow_raw_pointers())
    .class_function("GetTriangleCases", emscripten::optional_override([]( int arg_0) -> std::uintptr_t {  return reinterpret_cast<std::uintptr_t>(vtkPyramid::GetTriangleCases( arg_0)) / sizeof(int);}));
}
