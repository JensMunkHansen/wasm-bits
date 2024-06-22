// JavaScript wrapper for vtkDGTri with embind 
//
// This file was auto-generated using :
/*
node /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/bin/vtkWrapJavaScript.js \
 @/home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkFiltersCellGrid.js/vtkFiltersCellGrid.js.Release.args \
 -o \
 /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkFiltersCellGrid.js/vtkDGTriEmbinding.cxx \
 /home/jmh/github/vtk/Filters/CellGrid/vtkDGTri.h
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
#include "vtkDGTri.h"

template<> void emscripten::internal::raw_destructor<vtkDGTri>(vtkDGTri * ptr){ ptr->Delete(); }
EMSCRIPTEN_BINDINGS(vtkDGTri_class) {
  emscripten::class_<vtkDGTri, emscripten::base<vtkDeRhamCell>>("vtkDGTri")
    .smart_ptr<vtkSmartPointer<vtkDGTri>>("vtkSmartPointer<vtkDGTri>")
    .constructor(&vtk::MakeVTKSmartPtr<vtkDGTri>)
    .class_function("IsTypeOf", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkDGTri::IsTypeOf( arg_0.c_str());}))
    .function("IsA", emscripten::optional_override([](vtkDGTri& self, const std::string & arg_0) -> int {  return self.IsA( arg_0.c_str());}))
    .class_function("SafeDownCast", &vtkDGTri::SafeDownCast, emscripten::allow_raw_pointers())
    .function("NewInstance", &vtkDGTri::NewInstance, emscripten::allow_raw_pointers())
    .class_function("GetNumberOfGenerationsFromBaseType", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkDGTri::GetNumberOfGenerationsFromBaseType( arg_0.c_str());}))
    .function("GetNumberOfGenerationsFromBase", emscripten::optional_override([](vtkDGTri& self, const std::string & arg_0) -> int {  return self.GetNumberOfGenerationsFromBase( arg_0.c_str());}))
    .function("IsInside", &vtkDGTri::IsInside)
    .function("GetDimension", &vtkDGTri::GetDimension)
    .function("GetNumberOfSideTypes", &vtkDGTri::GetNumberOfSideTypes)
    .function("GetNumberOfSidesOfDimension", &vtkDGTri::GetNumberOfSidesOfDimension)
    .function("GetSideConnectivity", emscripten::select_overload<std::vector<int>(vtkDGTri&, int)>([](vtkDGTri& self, int arg_0) -> std::vector<int> { return self.GetSideConnectivity( arg_0); }))
    .function("GetSideConnectivity", emscripten::select_overload<vtkTypeInt32Array*(vtkDGTri&)>([](vtkDGTri& self) -> vtkTypeInt32Array* { return self.GetSideConnectivity(); }), emscripten::allow_raw_pointers())
    .function("GetSidesOfSide", &vtkDGTri::GetSidesOfSide)
    .function("GetReferencePoints", &vtkDGTri::GetReferencePoints, emscripten::allow_raw_pointers())
    .function("GetSideOffsetsAndShapes", &vtkDGTri::GetSideOffsetsAndShapes, emscripten::allow_raw_pointers());
}
