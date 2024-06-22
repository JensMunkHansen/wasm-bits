// JavaScript wrapper for vtkDGHex with embind 
//
// This file was auto-generated using :
/*
node /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/bin/vtkWrapJavaScript.js \
 @/home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkFiltersCellGrid.js/vtkFiltersCellGrid.js.Release.args \
 -o \
 /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkFiltersCellGrid.js/vtkDGHexEmbinding.cxx \
 /home/jmh/github/vtk/Filters/CellGrid/vtkDGHex.h
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
#include "vtkDGHex.h"

template<> void emscripten::internal::raw_destructor<vtkDGHex>(vtkDGHex * ptr){ ptr->Delete(); }
EMSCRIPTEN_BINDINGS(vtkDGHex_class) {
  emscripten::class_<vtkDGHex, emscripten::base<vtkDeRhamCell>>("vtkDGHex")
    .smart_ptr<vtkSmartPointer<vtkDGHex>>("vtkSmartPointer<vtkDGHex>")
    .constructor(&vtk::MakeVTKSmartPtr<vtkDGHex>)
    .class_function("IsTypeOf", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkDGHex::IsTypeOf( arg_0.c_str());}))
    .function("IsA", emscripten::optional_override([](vtkDGHex& self, const std::string & arg_0) -> int {  return self.IsA( arg_0.c_str());}))
    .class_function("SafeDownCast", &vtkDGHex::SafeDownCast, emscripten::allow_raw_pointers())
    .function("NewInstance", &vtkDGHex::NewInstance, emscripten::allow_raw_pointers())
    .class_function("GetNumberOfGenerationsFromBaseType", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkDGHex::GetNumberOfGenerationsFromBaseType( arg_0.c_str());}))
    .function("GetNumberOfGenerationsFromBase", emscripten::optional_override([](vtkDGHex& self, const std::string & arg_0) -> int {  return self.GetNumberOfGenerationsFromBase( arg_0.c_str());}))
    .function("IsInside", &vtkDGHex::IsInside)
    .function("GetDimension", &vtkDGHex::GetDimension)
    .function("GetNumberOfSideTypes", &vtkDGHex::GetNumberOfSideTypes)
    .function("GetNumberOfSidesOfDimension", &vtkDGHex::GetNumberOfSidesOfDimension)
    .function("GetSideConnectivity", emscripten::select_overload<std::vector<int>(vtkDGHex&, int)>([](vtkDGHex& self, int arg_0) -> std::vector<int> { return self.GetSideConnectivity( arg_0); }))
    .function("GetSideConnectivity", emscripten::select_overload<vtkTypeInt32Array*(vtkDGHex&)>([](vtkDGHex& self) -> vtkTypeInt32Array* { return self.GetSideConnectivity(); }), emscripten::allow_raw_pointers())
    .function("GetSidesOfSide", &vtkDGHex::GetSidesOfSide)
    .function("GetReferencePoints", &vtkDGHex::GetReferencePoints, emscripten::allow_raw_pointers())
    .function("GetSideOffsetsAndShapes", &vtkDGHex::GetSideOffsetsAndShapes, emscripten::allow_raw_pointers());
}
