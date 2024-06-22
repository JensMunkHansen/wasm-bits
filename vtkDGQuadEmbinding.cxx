// JavaScript wrapper for vtkDGQuad with embind 
//
// This file was auto-generated using :
/*
node /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/bin/vtkWrapJavaScript.js \
 @/home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkFiltersCellGrid.js/vtkFiltersCellGrid.js.Release.args \
 -o \
 /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkFiltersCellGrid.js/vtkDGQuadEmbinding.cxx \
 /home/jmh/github/vtk/Filters/CellGrid/vtkDGQuad.h
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
#include "vtkDGQuad.h"

template<> void emscripten::internal::raw_destructor<vtkDGQuad>(vtkDGQuad * ptr){ ptr->Delete(); }
EMSCRIPTEN_BINDINGS(vtkDGQuad_class) {
  emscripten::class_<vtkDGQuad, emscripten::base<vtkDeRhamCell>>("vtkDGQuad")
    .smart_ptr<vtkSmartPointer<vtkDGQuad>>("vtkSmartPointer<vtkDGQuad>")
    .constructor(&vtk::MakeVTKSmartPtr<vtkDGQuad>)
    .class_function("IsTypeOf", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkDGQuad::IsTypeOf( arg_0.c_str());}))
    .function("IsA", emscripten::optional_override([](vtkDGQuad& self, const std::string & arg_0) -> int {  return self.IsA( arg_0.c_str());}))
    .class_function("SafeDownCast", &vtkDGQuad::SafeDownCast, emscripten::allow_raw_pointers())
    .function("NewInstance", &vtkDGQuad::NewInstance, emscripten::allow_raw_pointers())
    .class_function("GetNumberOfGenerationsFromBaseType", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkDGQuad::GetNumberOfGenerationsFromBaseType( arg_0.c_str());}))
    .function("GetNumberOfGenerationsFromBase", emscripten::optional_override([](vtkDGQuad& self, const std::string & arg_0) -> int {  return self.GetNumberOfGenerationsFromBase( arg_0.c_str());}))
    .function("IsInside", &vtkDGQuad::IsInside)
    .function("GetDimension", &vtkDGQuad::GetDimension)
    .function("GetNumberOfSideTypes", &vtkDGQuad::GetNumberOfSideTypes)
    .function("GetNumberOfSidesOfDimension", &vtkDGQuad::GetNumberOfSidesOfDimension)
    .function("GetSideConnectivity", emscripten::select_overload<std::vector<int>(vtkDGQuad&, int)>([](vtkDGQuad& self, int arg_0) -> std::vector<int> { return self.GetSideConnectivity( arg_0); }))
    .function("GetSideConnectivity", emscripten::select_overload<vtkTypeInt32Array*(vtkDGQuad&)>([](vtkDGQuad& self) -> vtkTypeInt32Array* { return self.GetSideConnectivity(); }), emscripten::allow_raw_pointers())
    .function("GetSidesOfSide", &vtkDGQuad::GetSidesOfSide)
    .function("GetReferencePoints", &vtkDGQuad::GetReferencePoints, emscripten::allow_raw_pointers())
    .function("GetSideOffsetsAndShapes", &vtkDGQuad::GetSideOffsetsAndShapes, emscripten::allow_raw_pointers());
}
