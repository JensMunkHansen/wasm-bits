// JavaScript wrapper for vtkDGTet with embind 
//
// This file was auto-generated using :
/*
node /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/bin/vtkWrapJavaScript.js \
 @/home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkFiltersCellGrid.js/vtkFiltersCellGrid.js.Release.args \
 -o \
 /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkFiltersCellGrid.js/vtkDGTetEmbinding.cxx \
 /home/jmh/github/vtk/Filters/CellGrid/vtkDGTet.h
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
#include "vtkDGTet.h"

template<> void emscripten::internal::raw_destructor<vtkDGTet>(vtkDGTet * ptr){ ptr->Delete(); }
EMSCRIPTEN_BINDINGS(vtkDGTet_class) {
  emscripten::class_<vtkDGTet, emscripten::base<vtkDeRhamCell>>("vtkDGTet")
    .smart_ptr<vtkSmartPointer<vtkDGTet>>("vtkSmartPointer<vtkDGTet>")
    .constructor(&vtk::MakeVTKSmartPtr<vtkDGTet>)
    .class_function("IsTypeOf", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkDGTet::IsTypeOf( arg_0.c_str());}))
    .function("IsA", emscripten::optional_override([](vtkDGTet& self, const std::string & arg_0) -> int {  return self.IsA( arg_0.c_str());}))
    .class_function("SafeDownCast", &vtkDGTet::SafeDownCast, emscripten::allow_raw_pointers())
    .function("NewInstance", &vtkDGTet::NewInstance, emscripten::allow_raw_pointers())
    .class_function("GetNumberOfGenerationsFromBaseType", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkDGTet::GetNumberOfGenerationsFromBaseType( arg_0.c_str());}))
    .function("GetNumberOfGenerationsFromBase", emscripten::optional_override([](vtkDGTet& self, const std::string & arg_0) -> int {  return self.GetNumberOfGenerationsFromBase( arg_0.c_str());}))
    .function("IsInside", &vtkDGTet::IsInside)
    .function("GetDimension", &vtkDGTet::GetDimension)
    .function("GetNumberOfSideTypes", &vtkDGTet::GetNumberOfSideTypes)
    .function("GetNumberOfSidesOfDimension", &vtkDGTet::GetNumberOfSidesOfDimension)
    .function("GetSideConnectivity", emscripten::select_overload<std::vector<int>(vtkDGTet&, int)>([](vtkDGTet& self, int arg_0) -> std::vector<int> { return self.GetSideConnectivity( arg_0); }))
    .function("GetSideConnectivity", emscripten::select_overload<vtkTypeInt32Array*(vtkDGTet&)>([](vtkDGTet& self) -> vtkTypeInt32Array* { return self.GetSideConnectivity(); }), emscripten::allow_raw_pointers())
    .function("GetSidesOfSide", &vtkDGTet::GetSidesOfSide)
    .function("GetReferencePoints", &vtkDGTet::GetReferencePoints, emscripten::allow_raw_pointers())
    .function("GetSideOffsetsAndShapes", &vtkDGTet::GetSideOffsetsAndShapes, emscripten::allow_raw_pointers());
}
