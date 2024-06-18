// JavaScript wrapper for vtkBiQuadraticQuadraticHexahedron with embind 
//
// This file was auto-generated using :
/*
node /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/bin/vtkWrapJavaScript.js \
 @/home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkCommonDataModel.js/vtkCommonDataModel.js.Release.args \
 -o \
 /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkCommonDataModel.js/vtkBiQuadraticQuadraticHexahedronEmbinding.cxx \
 /home/jmh/github/vtk/Common/DataModel/vtkBiQuadraticQuadraticHexahedron.h
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
#include "vtkBiQuadraticQuadraticHexahedron.h"

template<> void emscripten::internal::raw_destructor<vtkBiQuadraticQuadraticHexahedron>(vtkBiQuadraticQuadraticHexahedron * ptr){ ptr->Delete(); }
EMSCRIPTEN_BINDINGS(vtkBiQuadraticQuadraticHexahedron_class) {
  emscripten::class_<vtkBiQuadraticQuadraticHexahedron, emscripten::base<vtkNonLinearCell>>("vtkBiQuadraticQuadraticHexahedron")
    .smart_ptr<vtkSmartPointer<vtkBiQuadraticQuadraticHexahedron>>("vtkSmartPointer<vtkBiQuadraticQuadraticHexahedron>")
    .constructor(&vtk::MakeAvtkSmartPointer<vtkBiQuadraticQuadraticHexahedron>)
    .class_function("IsTypeOf", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkBiQuadraticQuadraticHexahedron::IsTypeOf( arg_0.c_str());}))
    .function("IsA", emscripten::optional_override([](vtkBiQuadraticQuadraticHexahedron& self, const std::string & arg_0) -> int {  return self.IsA( arg_0.c_str());}))
    .class_function("SafeDownCast", &vtkBiQuadraticQuadraticHexahedron::SafeDownCast, emscripten::allow_raw_pointers())
    .function("NewInstance", &vtkBiQuadraticQuadraticHexahedron::NewInstance, emscripten::allow_raw_pointers())
    .class_function("GetNumberOfGenerationsFromBaseType", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkBiQuadraticQuadraticHexahedron::GetNumberOfGenerationsFromBaseType( arg_0.c_str());}))
    .function("GetNumberOfGenerationsFromBase", emscripten::optional_override([](vtkBiQuadraticQuadraticHexahedron& self, const std::string & arg_0) -> int {  return self.GetNumberOfGenerationsFromBase( arg_0.c_str());}))
    .function("GetCellType", &vtkBiQuadraticQuadraticHexahedron::GetCellType)
    .function("GetCellDimension", &vtkBiQuadraticQuadraticHexahedron::GetCellDimension)
    .function("GetNumberOfEdges", &vtkBiQuadraticQuadraticHexahedron::GetNumberOfEdges)
    .function("GetNumberOfFaces", &vtkBiQuadraticQuadraticHexahedron::GetNumberOfFaces)
    .function("GetEdge", &vtkBiQuadraticQuadraticHexahedron::GetEdge, emscripten::allow_raw_pointers())
    .function("GetFace", &vtkBiQuadraticQuadraticHexahedron::GetFace, emscripten::allow_raw_pointers())
    .function("Contour", &vtkBiQuadraticQuadraticHexahedron::Contour, emscripten::allow_raw_pointers())
    .function("TriangulateLocalIds", &vtkBiQuadraticQuadraticHexahedron::TriangulateLocalIds, emscripten::allow_raw_pointers())
    .function("Clip", &vtkBiQuadraticQuadraticHexahedron::Clip, emscripten::allow_raw_pointers())
    .class_function("GetEdgeArray", emscripten::optional_override([]( int arg_0) -> std::uintptr_t {  return reinterpret_cast<std::uintptr_t>(vtkBiQuadraticQuadraticHexahedron::GetEdgeArray( arg_0)) / sizeof(int);}))
    .class_function("GetFaceArray", emscripten::optional_override([]( int arg_0) -> std::uintptr_t {  return reinterpret_cast<std::uintptr_t>(vtkBiQuadraticQuadraticHexahedron::GetFaceArray( arg_0)) / sizeof(int);}));
}
