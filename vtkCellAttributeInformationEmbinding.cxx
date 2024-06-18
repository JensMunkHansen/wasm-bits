// JavaScript wrapper for vtkCellAttributeInformation with embind 
//
// This file was auto-generated using :
/*
node /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/bin/vtkWrapJavaScript.js \
 @/home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkFiltersCellGrid.js/vtkFiltersCellGrid.js.Release.args \
 -o \
 /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkFiltersCellGrid.js/vtkCellAttributeInformationEmbinding.cxx \
 /home/jmh/github/vtk/Filters/CellGrid/vtkCellAttributeInformation.h
*/
#include "vtkEmbindSmartPointerTrait.h"
#include <emscripten.h>
#include <string>
#include "vtkVariant.h"
#include "vtkObjectBase.h"
#include "vtkIndent.h"
#include "vtkCellAttributeInformation.h"

template<> void emscripten::internal::raw_destructor<vtkCellAttributeInformation>(vtkCellAttributeInformation * ptr){ ptr->Delete(); }
EMSCRIPTEN_BINDINGS(vtkCellAttributeInformation_class) {
  emscripten::class_<vtkCellAttributeInformation, emscripten::base<vtkCellAttributeCalculator>>("vtkCellAttributeInformation")
    .class_function("IsTypeOf", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkCellAttributeInformation::IsTypeOf( arg_0.c_str());}))
    .function("IsA", emscripten::optional_override([](vtkCellAttributeInformation& self, const std::string & arg_0) -> int {  return self.IsA( arg_0.c_str());}))
    .class_function("SafeDownCast", &vtkCellAttributeInformation::SafeDownCast, emscripten::allow_raw_pointers())
    .function("NewInstance", &vtkCellAttributeInformation::NewInstance, emscripten::allow_raw_pointers())
    .class_function("GetNumberOfGenerationsFromBaseType", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkCellAttributeInformation::GetNumberOfGenerationsFromBaseType( arg_0.c_str());}))
    .function("GetNumberOfGenerationsFromBase", emscripten::optional_override([](vtkCellAttributeInformation& self, const std::string & arg_0) -> int {  return self.GetNumberOfGenerationsFromBase( arg_0.c_str());}));
}
