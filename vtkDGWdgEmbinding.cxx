// JavaScript wrapper for vtkDGWdg with embind 
//
// This file was auto-generated using :
/*
node /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/bin/vtkWrapJavaScript.js \
 @/home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkFiltersCellGrid.js/vtkFiltersCellGrid.js.Release.args \
 -o \
 /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkFiltersCellGrid.js/vtkDGWdgEmbinding.cxx \
 /home/jmh/github/vtk/Filters/CellGrid/vtkDGWdg.h
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
#include "vtkDGWdg.h"

template<> void emscripten::internal::raw_destructor<vtkDGWdg>(vtkDGWdg * ptr){ ptr->Delete(); }
EMSCRIPTEN_BINDINGS(vtkDGWdg_class) {
  emscripten::class_<vtkDGWdg, emscripten::base<vtkDeRhamCell>>("vtkDGWdg")
    .smart_ptr<vtkSmartPointer<vtkDGWdg>>("vtkSmartPointer<vtkDGWdg>")
    .constructor(&vtk::MakeAvtkSmartPointer<vtkDGWdg>)
    .class_function("IsTypeOf", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkDGWdg::IsTypeOf( arg_0.c_str());}))
    .function("IsA", emscripten::optional_override([](vtkDGWdg& self, const std::string & arg_0) -> int {  return self.IsA( arg_0.c_str());}))
    .class_function("SafeDownCast", &vtkDGWdg::SafeDownCast, emscripten::allow_raw_pointers())
    .function("NewInstance", &vtkDGWdg::NewInstance, emscripten::allow_raw_pointers())
    .class_function("GetNumberOfGenerationsFromBaseType", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkDGWdg::GetNumberOfGenerationsFromBaseType( arg_0.c_str());}))
    .function("GetNumberOfGenerationsFromBase", emscripten::optional_override([](vtkDGWdg& self, const std::string & arg_0) -> int {  return self.GetNumberOfGenerationsFromBase( arg_0.c_str());}))
    .function("IsInside", &vtkDGWdg::IsInside)
    .function("GetDimension", &vtkDGWdg::GetDimension)
    .function("GetNumberOfSideTypes", &vtkDGWdg::GetNumberOfSideTypes)
    .function("GetNumberOfSidesOfDimension", &vtkDGWdg::GetNumberOfSidesOfDimension)
    .function("GetSideConnectivity", emscripten::select_overload<std::vector<int>(vtkDGWdg&, int)>([](vtkDGWdg& self, int arg_0) -> std::vector<int> { return self.GetSideConnectivity( arg_0); }))
    .function("GetSideConnectivity", emscripten::select_overload<vtkTypeInt32Array*(vtkDGWdg&)>([](vtkDGWdg& self) -> vtkTypeInt32Array* { return self.GetSideConnectivity(); }), emscripten::allow_raw_pointers())
    .function("GetSidesOfSide", &vtkDGWdg::GetSidesOfSide)
    .function("GetReferencePoints", &vtkDGWdg::GetReferencePoints, emscripten::allow_raw_pointers())
    .function("GetSideOffsetsAndShapes", &vtkDGWdg::GetSideOffsetsAndShapes, emscripten::allow_raw_pointers());
}
