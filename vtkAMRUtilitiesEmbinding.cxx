// JavaScript wrapper for vtkAMRUtilities with embind 
//
// This file was auto-generated using :
/*
node /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/bin/vtkWrapJavaScript.js \
 @/home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkCommonDataModel.js/vtkCommonDataModel.js.Release.args \
 -o \
 /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkCommonDataModel.js/vtkAMRUtilitiesEmbinding.cxx \
 /home/jmh/github/vtk/Common/DataModel/vtkAMRUtilities.h
*/
#include "vtkEmbindSmartPointerTrait.h"
#include <emscripten.h>
#include <string>
#include "vtkVariant.h"
#include "vtkObjectBase.h"
#include "vtkIndent.h"
#include "vtkOverlappingAMR.h"
#include "vtkAMRUtilities.h"

template<> void emscripten::internal::raw_destructor<vtkAMRUtilities>(vtkAMRUtilities * ptr){ ptr->Delete(); }
EMSCRIPTEN_BINDINGS(vtkAMRUtilities_class) {
  emscripten::class_<vtkAMRUtilities, emscripten::base<vtkObject>>("vtkAMRUtilities")
    .class_function("IsTypeOf", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkAMRUtilities::IsTypeOf( arg_0.c_str());}))
    .function("IsA", emscripten::optional_override([](vtkAMRUtilities& self, const std::string & arg_0) -> int {  return self.IsA( arg_0.c_str());}))
    .class_function("SafeDownCast", &vtkAMRUtilities::SafeDownCast, emscripten::allow_raw_pointers())
    .function("NewInstance", &vtkAMRUtilities::NewInstance, emscripten::allow_raw_pointers())
    .class_function("GetNumberOfGenerationsFromBaseType", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkAMRUtilities::GetNumberOfGenerationsFromBaseType( arg_0.c_str());}))
    .function("GetNumberOfGenerationsFromBase", emscripten::optional_override([](vtkAMRUtilities& self, const std::string & arg_0) -> int {  return self.GetNumberOfGenerationsFromBase( arg_0.c_str());}))
    .class_function("StripGhostLayers", &vtkAMRUtilities::StripGhostLayers, emscripten::allow_raw_pointers())
    .class_function("HasPartiallyOverlappingGhostCells", &vtkAMRUtilities::HasPartiallyOverlappingGhostCells, emscripten::allow_raw_pointers())
    .class_function("BlankCells", &vtkAMRUtilities::BlankCells, emscripten::allow_raw_pointers());
}
