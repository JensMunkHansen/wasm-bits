// JavaScript wrapper for vtkDGVert with embind 
//
// This file was auto-generated using :
/*
node /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/bin/vtkWrapJavaScript.js \
 @/home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkFiltersCellGrid.js/vtkFiltersCellGrid.js.Release.args \
 -o \
 /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkFiltersCellGrid.js/vtkDGVertEmbinding.cxx \
 /home/jmh/github/vtk/Filters/CellGrid/vtkDGVert.h
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
#include "vtkDGVert.h"

template<> void emscripten::internal::raw_destructor<vtkDGVert>(vtkDGVert * ptr){ ptr->Delete(); }
EMSCRIPTEN_BINDINGS(vtkDGVert_class) {
  emscripten::class_<vtkDGVert, emscripten::base<vtkDGCell>>("vtkDGVert")
    .smart_ptr<vtkSmartPointer<vtkDGVert>>("vtkSmartPointer<vtkDGVert>")
    .constructor(&vtk::MakeAvtkSmartPointer<vtkDGVert>)
    .class_function("IsTypeOf", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkDGVert::IsTypeOf( arg_0.c_str());}))
    .function("IsA", emscripten::optional_override([](vtkDGVert& self, const std::string & arg_0) -> int {  return self.IsA( arg_0.c_str());}))
    .class_function("SafeDownCast", &vtkDGVert::SafeDownCast, emscripten::allow_raw_pointers())
    .function("NewInstance", &vtkDGVert::NewInstance, emscripten::allow_raw_pointers())
    .class_function("GetNumberOfGenerationsFromBaseType", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkDGVert::GetNumberOfGenerationsFromBaseType( arg_0.c_str());}))
    .function("GetNumberOfGenerationsFromBase", emscripten::optional_override([](vtkDGVert& self, const std::string & arg_0) -> int {  return self.GetNumberOfGenerationsFromBase( arg_0.c_str());}))
    .function("IsInside", &vtkDGVert::IsInside)
    .function("GetDimension", &vtkDGVert::GetDimension)
    .function("GetNumberOfSideTypes", &vtkDGVert::GetNumberOfSideTypes)
    .function("GetNumberOfSidesOfDimension", &vtkDGVert::GetNumberOfSidesOfDimension)
    .function("GetSideConnectivity", emscripten::select_overload<std::vector<int>(vtkDGVert&, int)>([](vtkDGVert& self, int arg_0) -> std::vector<int> { return self.GetSideConnectivity( arg_0); }))
    .function("GetSideConnectivity", emscripten::select_overload<vtkTypeInt32Array*(vtkDGVert&)>([](vtkDGVert& self) -> vtkTypeInt32Array* { return self.GetSideConnectivity(); }), emscripten::allow_raw_pointers())
    .function("GetSidesOfSide", &vtkDGVert::GetSidesOfSide)
    .function("GetReferencePoints", &vtkDGVert::GetReferencePoints, emscripten::allow_raw_pointers())
    .function("GetSideOffsetsAndShapes", &vtkDGVert::GetSideOffsetsAndShapes, emscripten::allow_raw_pointers());
}
