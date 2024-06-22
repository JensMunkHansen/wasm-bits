// JavaScript wrapper for vtkQuadraticHexahedron with embind 
//
// This file was auto-generated using :
/*
node /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/bin/vtkWrapJavaScript.js \
 @/home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkCommonDataModel.js/vtkCommonDataModel.js.Release.args \
 -o \
 /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkCommonDataModel.js/vtkQuadraticHexahedronEmbinding.cxx \
 /home/jmh/github/vtk/Common/DataModel/vtkQuadraticHexahedron.h
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
#include "vtkQuadraticHexahedron.h"

template<> void emscripten::internal::raw_destructor<vtkQuadraticHexahedron>(vtkQuadraticHexahedron * ptr){ ptr->Delete(); }
EMSCRIPTEN_BINDINGS(vtkQuadraticHexahedron_class) {
  emscripten::class_<vtkQuadraticHexahedron, emscripten::base<vtkNonLinearCell>>("vtkQuadraticHexahedron")
    .smart_ptr<vtkSmartPointer<vtkQuadraticHexahedron>>("vtkSmartPointer<vtkQuadraticHexahedron>")
    .constructor(&vtk::MakeVTKSmartPtr<vtkQuadraticHexahedron>)
    .class_function("IsTypeOf", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkQuadraticHexahedron::IsTypeOf( arg_0.c_str());}))
    .function("IsA", emscripten::optional_override([](vtkQuadraticHexahedron& self, const std::string & arg_0) -> int {  return self.IsA( arg_0.c_str());}))
    .class_function("SafeDownCast", &vtkQuadraticHexahedron::SafeDownCast, emscripten::allow_raw_pointers())
    .function("NewInstance", &vtkQuadraticHexahedron::NewInstance, emscripten::allow_raw_pointers())
    .class_function("GetNumberOfGenerationsFromBaseType", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkQuadraticHexahedron::GetNumberOfGenerationsFromBaseType( arg_0.c_str());}))
    .function("GetNumberOfGenerationsFromBase", emscripten::optional_override([](vtkQuadraticHexahedron& self, const std::string & arg_0) -> int {  return self.GetNumberOfGenerationsFromBase( arg_0.c_str());}))
    .function("GetCellType", &vtkQuadraticHexahedron::GetCellType)
    .function("GetCellDimension", &vtkQuadraticHexahedron::GetCellDimension)
    .function("GetNumberOfEdges", &vtkQuadraticHexahedron::GetNumberOfEdges)
    .function("GetNumberOfFaces", &vtkQuadraticHexahedron::GetNumberOfFaces)
    .function("GetEdge", &vtkQuadraticHexahedron::GetEdge, emscripten::allow_raw_pointers())
    .function("GetFace", &vtkQuadraticHexahedron::GetFace, emscripten::allow_raw_pointers())
    .function("Contour", &vtkQuadraticHexahedron::Contour, emscripten::allow_raw_pointers())
    .function("TriangulateLocalIds", &vtkQuadraticHexahedron::TriangulateLocalIds, emscripten::allow_raw_pointers())
    .function("Clip", &vtkQuadraticHexahedron::Clip, emscripten::allow_raw_pointers())
    .class_function("GetEdgeArray", emscripten::optional_override([]( int arg_0) -> std::uintptr_t {  return reinterpret_cast<std::uintptr_t>(vtkQuadraticHexahedron::GetEdgeArray( arg_0)) / sizeof(int);}))
    .class_function("GetFaceArray", emscripten::optional_override([]( int arg_0) -> std::uintptr_t {  return reinterpret_cast<std::uintptr_t>(vtkQuadraticHexahedron::GetFaceArray( arg_0)) / sizeof(int);}));
}
