// JavaScript wrapper for vtkHexahedron with embind 
//
// This file was auto-generated using :
/*
node /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/bin/vtkWrapJavaScript.js \
 @/home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkCommonDataModel.js/vtkCommonDataModel.js.Release.args \
 -o \
 /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkCommonDataModel.js/vtkHexahedronEmbinding.cxx \
 /home/jmh/github/vtk/Common/DataModel/vtkHexahedron.h
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
#include "vtkHexahedron.h"

template<> void emscripten::internal::raw_destructor<vtkHexahedron>(vtkHexahedron * ptr){ ptr->Delete(); }
EMSCRIPTEN_BINDINGS(vtkHexahedron_class) {
  emscripten::class_<vtkHexahedron, emscripten::base<vtkCell3D>>("vtkHexahedron")
    .smart_ptr<vtkSmartPointer<vtkHexahedron>>("vtkSmartPointer<vtkHexahedron>")
    .constructor(&vtk::MakeAvtkSmartPointer<vtkHexahedron>)
    .class_function("IsTypeOf", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkHexahedron::IsTypeOf( arg_0.c_str());}))
    .function("IsA", emscripten::optional_override([](vtkHexahedron& self, const std::string & arg_0) -> int {  return self.IsA( arg_0.c_str());}))
    .class_function("SafeDownCast", &vtkHexahedron::SafeDownCast, emscripten::allow_raw_pointers())
    .function("NewInstance", &vtkHexahedron::NewInstance, emscripten::allow_raw_pointers())
    .class_function("GetNumberOfGenerationsFromBaseType", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkHexahedron::GetNumberOfGenerationsFromBaseType( arg_0.c_str());}))
    .function("GetNumberOfGenerationsFromBase", emscripten::optional_override([](vtkHexahedron& self, const std::string & arg_0) -> int {  return self.GetNumberOfGenerationsFromBase( arg_0.c_str());}))
    .function("GetCellType", &vtkHexahedron::GetCellType)
    .function("GetNumberOfEdges", &vtkHexahedron::GetNumberOfEdges)
    .function("GetNumberOfFaces", &vtkHexahedron::GetNumberOfFaces)
    .function("GetEdge", &vtkHexahedron::GetEdge, emscripten::allow_raw_pointers())
    .function("GetFace", &vtkHexahedron::GetFace, emscripten::allow_raw_pointers())
    .function("Contour", &vtkHexahedron::Contour, emscripten::allow_raw_pointers())
    .function("TriangulateLocalIds", &vtkHexahedron::TriangulateLocalIds, emscripten::allow_raw_pointers())
    .class_function("GetTriangleCases", emscripten::optional_override([]( int arg_0) -> std::uintptr_t {  return reinterpret_cast<std::uintptr_t>(vtkHexahedron::GetTriangleCases( arg_0)) / sizeof(int);}));
}
