// JavaScript wrapper for vtkDGPyr with embind 
//
// This file was auto-generated using :
/*
node /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/bin/vtkWrapJavaScript.js \
 @/home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkFiltersCellGrid.js/vtkFiltersCellGrid.js.Release.args \
 -o \
 /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkFiltersCellGrid.js/vtkDGPyrEmbinding.cxx \
 /home/jmh/github/vtk/Filters/CellGrid/vtkDGPyr.h
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
#include "vtkDGPyr.h"

template<> void emscripten::internal::raw_destructor<vtkDGPyr>(vtkDGPyr * ptr){ ptr->Delete(); }
EMSCRIPTEN_BINDINGS(vtkDGPyr_class) {
  emscripten::class_<vtkDGPyr, emscripten::base<vtkDGCell>>("vtkDGPyr")
    .smart_ptr<vtkSmartPointer<vtkDGPyr>>("vtkSmartPointer<vtkDGPyr>")
    .constructor(&vtk::MakeAvtkSmartPointer<vtkDGPyr>)
    .class_function("IsTypeOf", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkDGPyr::IsTypeOf( arg_0.c_str());}))
    .function("IsA", emscripten::optional_override([](vtkDGPyr& self, const std::string & arg_0) -> int {  return self.IsA( arg_0.c_str());}))
    .class_function("SafeDownCast", &vtkDGPyr::SafeDownCast, emscripten::allow_raw_pointers())
    .function("NewInstance", &vtkDGPyr::NewInstance, emscripten::allow_raw_pointers())
    .class_function("GetNumberOfGenerationsFromBaseType", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkDGPyr::GetNumberOfGenerationsFromBaseType( arg_0.c_str());}))
    .function("GetNumberOfGenerationsFromBase", emscripten::optional_override([](vtkDGPyr& self, const std::string & arg_0) -> int {  return self.GetNumberOfGenerationsFromBase( arg_0.c_str());}))
    .function("IsInside", &vtkDGPyr::IsInside)
    .function("GetDimension", &vtkDGPyr::GetDimension)
    .function("GetNumberOfSideTypes", &vtkDGPyr::GetNumberOfSideTypes)
    .function("GetNumberOfSidesOfDimension", &vtkDGPyr::GetNumberOfSidesOfDimension)
    .function("GetSideConnectivity", emscripten::select_overload<std::vector<int>(vtkDGPyr&, int)>([](vtkDGPyr& self, int arg_0) -> std::vector<int> { return self.GetSideConnectivity( arg_0); }))
    .function("GetSideConnectivity", emscripten::select_overload<vtkTypeInt32Array*(vtkDGPyr&)>([](vtkDGPyr& self) -> vtkTypeInt32Array* { return self.GetSideConnectivity(); }), emscripten::allow_raw_pointers())
    .function("GetSidesOfSide", &vtkDGPyr::GetSidesOfSide)
    .function("GetReferencePoints", &vtkDGPyr::GetReferencePoints, emscripten::allow_raw_pointers())
    .function("GetSideOffsetsAndShapes", &vtkDGPyr::GetSideOffsetsAndShapes, emscripten::allow_raw_pointers());
}
