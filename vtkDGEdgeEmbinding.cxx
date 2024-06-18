// JavaScript wrapper for vtkDGEdge with embind 
//
// This file was auto-generated using :
/*
node /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/bin/vtkWrapJavaScript.js \
 @/home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkFiltersCellGrid.js/vtkFiltersCellGrid.js.Release.args \
 -o \
 /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkFiltersCellGrid.js/vtkDGEdgeEmbinding.cxx \
 /home/jmh/github/vtk/Filters/CellGrid/vtkDGEdge.h
*/
#include "vtkEmbindSmartPointerTrait.h"
#include <emscripten.h>
#include <string>
#include "vtkVariant.h"
#include "vtkObjectBase.h"
#include "vtkIndent.h"
#include "vtkVector.h"
#include "vtkTypeFloat32Array.h"
#include "vtkTypeInt32Array.h"
#include "vtkDGEdge.h"

template<> void emscripten::internal::raw_destructor<vtkDGEdge>(vtkDGEdge * ptr){ ptr->Delete(); }
EMSCRIPTEN_BINDINGS(vtkDGEdge_class) {
  emscripten::class_<vtkDGEdge, emscripten::base<vtkDGCell>>("vtkDGEdge")
    .smart_ptr<vtkSmartPointer<vtkDGEdge>>("vtkSmartPointer<vtkDGEdge>")
    .constructor(&vtk::MakeAvtkSmartPointer<vtkDGEdge>)
    .class_function("IsTypeOf", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkDGEdge::IsTypeOf( arg_0.c_str());}))
    .function("IsA", emscripten::optional_override([](vtkDGEdge& self, const std::string & arg_0) -> int {  return self.IsA( arg_0.c_str());}))
    .class_function("SafeDownCast", &vtkDGEdge::SafeDownCast, emscripten::allow_raw_pointers())
    .function("NewInstance", &vtkDGEdge::NewInstance, emscripten::allow_raw_pointers())
    .class_function("GetNumberOfGenerationsFromBaseType", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkDGEdge::GetNumberOfGenerationsFromBaseType( arg_0.c_str());}))
    .function("GetNumberOfGenerationsFromBase", emscripten::optional_override([](vtkDGEdge& self, const std::string & arg_0) -> int {  return self.GetNumberOfGenerationsFromBase( arg_0.c_str());}))
    .function("IsInside", &vtkDGEdge::IsInside)
    .function("GetDimension", &vtkDGEdge::GetDimension)
    .function("GetNumberOfSideTypes", &vtkDGEdge::GetNumberOfSideTypes)
    .function("GetNumberOfSidesOfDimension", &vtkDGEdge::GetNumberOfSidesOfDimension)
    .function("GetSideConnectivity", emscripten::select_overload<std::vector<int>(vtkDGEdge&, int)>([](vtkDGEdge& self, int arg_0) -> std::vector<int> { return self.GetSideConnectivity( arg_0); }))
    .function("GetSideConnectivity", emscripten::select_overload<vtkTypeInt32Array*(vtkDGEdge&)>([](vtkDGEdge& self) -> vtkTypeInt32Array* { return self.GetSideConnectivity(); }), emscripten::allow_raw_pointers())
    .function("GetSidesOfSide", &vtkDGEdge::GetSidesOfSide)
    .function("GetReferencePoints", &vtkDGEdge::GetReferencePoints, emscripten::allow_raw_pointers())
    .function("GetSideOffsetsAndShapes", &vtkDGEdge::GetSideOffsetsAndShapes, emscripten::allow_raw_pointers());
}
