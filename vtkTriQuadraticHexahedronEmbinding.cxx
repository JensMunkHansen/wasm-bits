// JavaScript wrapper for vtkTriQuadraticHexahedron with embind 
//
// This file was auto-generated using :
/*
node /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/bin/vtkWrapJavaScript.js \
 @/home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkCommonDataModel.js/vtkCommonDataModel.js.Release.args \
 -o \
 /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkCommonDataModel.js/vtkTriQuadraticHexahedronEmbinding.cxx \
 /home/jmh/github/vtk/Common/DataModel/vtkTriQuadraticHexahedron.h
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
#include "vtkTriQuadraticHexahedron.h"

template<> void emscripten::internal::raw_destructor<vtkTriQuadraticHexahedron>(vtkTriQuadraticHexahedron * ptr){ ptr->Delete(); }
EMSCRIPTEN_BINDINGS(vtkTriQuadraticHexahedron_class) {
  emscripten::class_<vtkTriQuadraticHexahedron, emscripten::base<vtkNonLinearCell>>("vtkTriQuadraticHexahedron")
    .smart_ptr<vtkSmartPointer<vtkTriQuadraticHexahedron>>("vtkSmartPointer<vtkTriQuadraticHexahedron>")
    .constructor(&vtk::MakeVTKSmartPtr<vtkTriQuadraticHexahedron>)
    .class_function("IsTypeOf", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkTriQuadraticHexahedron::IsTypeOf( arg_0.c_str());}))
    .function("IsA", emscripten::optional_override([](vtkTriQuadraticHexahedron& self, const std::string & arg_0) -> int {  return self.IsA( arg_0.c_str());}))
    .class_function("SafeDownCast", &vtkTriQuadraticHexahedron::SafeDownCast, emscripten::allow_raw_pointers())
    .function("NewInstance", &vtkTriQuadraticHexahedron::NewInstance, emscripten::allow_raw_pointers())
    .class_function("GetNumberOfGenerationsFromBaseType", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkTriQuadraticHexahedron::GetNumberOfGenerationsFromBaseType( arg_0.c_str());}))
    .function("GetNumberOfGenerationsFromBase", emscripten::optional_override([](vtkTriQuadraticHexahedron& self, const std::string & arg_0) -> int {  return self.GetNumberOfGenerationsFromBase( arg_0.c_str());}))
    .function("GetCellType", &vtkTriQuadraticHexahedron::GetCellType)
    .function("GetCellDimension", &vtkTriQuadraticHexahedron::GetCellDimension)
    .function("GetNumberOfEdges", &vtkTriQuadraticHexahedron::GetNumberOfEdges)
    .function("GetNumberOfFaces", &vtkTriQuadraticHexahedron::GetNumberOfFaces)
    .function("GetEdge", &vtkTriQuadraticHexahedron::GetEdge, emscripten::allow_raw_pointers())
    .function("GetFace", &vtkTriQuadraticHexahedron::GetFace, emscripten::allow_raw_pointers())
    .function("Contour", &vtkTriQuadraticHexahedron::Contour, emscripten::allow_raw_pointers())
    .function("TriangulateLocalIds", &vtkTriQuadraticHexahedron::TriangulateLocalIds, emscripten::allow_raw_pointers())
    .function("Clip", &vtkTriQuadraticHexahedron::Clip, emscripten::allow_raw_pointers())
    .class_function("GetEdgeArray", emscripten::optional_override([]( int arg_0) -> std::uintptr_t {  return reinterpret_cast<std::uintptr_t>(vtkTriQuadraticHexahedron::GetEdgeArray( arg_0)) / sizeof(int);}))
    .class_function("GetFaceArray", emscripten::optional_override([]( int arg_0) -> std::uintptr_t {  return reinterpret_cast<std::uintptr_t>(vtkTriQuadraticHexahedron::GetFaceArray( arg_0)) / sizeof(int);}));
}
