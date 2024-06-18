// JavaScript wrapper for vtkBiQuadraticTriangle with embind 
//
// This file was auto-generated using :
/*
node /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/bin/vtkWrapJavaScript.js \
 @/home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkCommonDataModel.js/vtkCommonDataModel.js.Release.args \
 -o \
 /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkCommonDataModel.js/vtkBiQuadraticTriangleEmbinding.cxx \
 /home/jmh/github/vtk/Common/DataModel/vtkBiQuadraticTriangle.h
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
#include "vtkBiQuadraticTriangle.h"

template<> void emscripten::internal::raw_destructor<vtkBiQuadraticTriangle>(vtkBiQuadraticTriangle * ptr){ ptr->Delete(); }
EMSCRIPTEN_BINDINGS(vtkBiQuadraticTriangle_class) {
  emscripten::class_<vtkBiQuadraticTriangle, emscripten::base<vtkNonLinearCell>>("vtkBiQuadraticTriangle")
    .smart_ptr<vtkSmartPointer<vtkBiQuadraticTriangle>>("vtkSmartPointer<vtkBiQuadraticTriangle>")
    .constructor(&vtk::MakeAvtkSmartPointer<vtkBiQuadraticTriangle>)
    .class_function("IsTypeOf", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkBiQuadraticTriangle::IsTypeOf( arg_0.c_str());}))
    .function("IsA", emscripten::optional_override([](vtkBiQuadraticTriangle& self, const std::string & arg_0) -> int {  return self.IsA( arg_0.c_str());}))
    .class_function("SafeDownCast", &vtkBiQuadraticTriangle::SafeDownCast, emscripten::allow_raw_pointers())
    .function("NewInstance", &vtkBiQuadraticTriangle::NewInstance, emscripten::allow_raw_pointers())
    .class_function("GetNumberOfGenerationsFromBaseType", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkBiQuadraticTriangle::GetNumberOfGenerationsFromBaseType( arg_0.c_str());}))
    .function("GetNumberOfGenerationsFromBase", emscripten::optional_override([](vtkBiQuadraticTriangle& self, const std::string & arg_0) -> int {  return self.GetNumberOfGenerationsFromBase( arg_0.c_str());}))
    .function("GetCellType", &vtkBiQuadraticTriangle::GetCellType)
    .function("GetCellDimension", &vtkBiQuadraticTriangle::GetCellDimension)
    .function("GetNumberOfEdges", &vtkBiQuadraticTriangle::GetNumberOfEdges)
    .function("GetNumberOfFaces", &vtkBiQuadraticTriangle::GetNumberOfFaces)
    .function("GetEdge", &vtkBiQuadraticTriangle::GetEdge, emscripten::allow_raw_pointers())
    .function("GetFace", &vtkBiQuadraticTriangle::GetFace, emscripten::allow_raw_pointers())
    .function("Contour", &vtkBiQuadraticTriangle::Contour, emscripten::allow_raw_pointers())
    .function("TriangulateLocalIds", &vtkBiQuadraticTriangle::TriangulateLocalIds, emscripten::allow_raw_pointers())
    .function("Clip", &vtkBiQuadraticTriangle::Clip, emscripten::allow_raw_pointers());
}
