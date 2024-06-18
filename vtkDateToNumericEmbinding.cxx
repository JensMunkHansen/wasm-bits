// JavaScript wrapper for vtkDateToNumeric with embind 
//
// This file was auto-generated using :
/*
node /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/bin/vtkWrapJavaScript.js \
 @/home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkFiltersGeneral.js/vtkFiltersGeneral.js.Release.args \
 -o \
 /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkFiltersGeneral.js/vtkDateToNumericEmbinding.cxx \
 /home/jmh/github/vtk/Filters/General/vtkDateToNumeric.h
*/
#include "vtkEmbindSmartPointerTrait.h"
#include <emscripten.h>
#include <string>
#include "vtkVariant.h"
#include "vtkObjectBase.h"
#include "vtkIndent.h"
#include "vtkDateToNumeric.h"

template<> void emscripten::internal::raw_destructor<vtkDateToNumeric>(vtkDateToNumeric * ptr){ ptr->Delete(); }
EMSCRIPTEN_BINDINGS(vtkDateToNumeric_class) {
  emscripten::class_<vtkDateToNumeric, emscripten::base<vtkPassInputTypeAlgorithm>>("vtkDateToNumeric")
    .smart_ptr<vtkSmartPointer<vtkDateToNumeric>>("vtkSmartPointer<vtkDateToNumeric>")
    .constructor(&vtk::MakeAvtkSmartPointer<vtkDateToNumeric>)
    .class_function("IsTypeOf", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkDateToNumeric::IsTypeOf( arg_0.c_str());}))
    .function("IsA", emscripten::optional_override([](vtkDateToNumeric& self, const std::string & arg_0) -> int {  return self.IsA( arg_0.c_str());}))
    .class_function("SafeDownCast", &vtkDateToNumeric::SafeDownCast, emscripten::allow_raw_pointers())
    .function("NewInstance", &vtkDateToNumeric::NewInstance, emscripten::allow_raw_pointers())
    .class_function("GetNumberOfGenerationsFromBaseType", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkDateToNumeric::GetNumberOfGenerationsFromBaseType( arg_0.c_str());}))
    .function("GetNumberOfGenerationsFromBase", emscripten::optional_override([](vtkDateToNumeric& self, const std::string & arg_0) -> int {  return self.GetNumberOfGenerationsFromBase( arg_0.c_str());}))
    .function("GetDateFormat", emscripten::optional_override([](vtkDateToNumeric& self) -> std::string {  return self.GetDateFormat();}))
    .function("SetDateFormat", emscripten::optional_override([](vtkDateToNumeric& self, const std::string & arg_0) -> void {  return self.SetDateFormat( arg_0.c_str());}));
}
