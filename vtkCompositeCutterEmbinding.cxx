// JavaScript wrapper for vtkCompositeCutter with embind 
//
// This file was auto-generated using :
/*
node /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/bin/vtkWrapJavaScript.js \
 @/home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkFiltersCore.js/vtkFiltersCore.js.Release.args \
 -o \
 /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkFiltersCore.js/vtkCompositeCutterEmbinding.cxx \
 /home/jmh/github/vtk/Filters/Core/vtkCompositeCutter.h
*/
#include "vtkEmbindSmartPointerTrait.h"
#include <emscripten.h>
#include <string>
#include "vtkVariant.h"
#include "vtkObjectBase.h"
#include "vtkIndent.h"
#include "vtkCompositeCutter.h"

template<> void emscripten::internal::raw_destructor<vtkCompositeCutter>(vtkCompositeCutter * ptr){ ptr->Delete(); }
EMSCRIPTEN_BINDINGS(vtkCompositeCutter_class) {
  emscripten::class_<vtkCompositeCutter, emscripten::base<vtkCutter>>("vtkCompositeCutter")
    .smart_ptr<vtkSmartPointer<vtkCompositeCutter>>("vtkSmartPointer<vtkCompositeCutter>")
    .constructor(&vtk::MakeAvtkSmartPointer<vtkCompositeCutter>)
    .class_function("IsTypeOf", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkCompositeCutter::IsTypeOf( arg_0.c_str());}))
    .function("IsA", emscripten::optional_override([](vtkCompositeCutter& self, const std::string & arg_0) -> int {  return self.IsA( arg_0.c_str());}))
    .class_function("SafeDownCast", &vtkCompositeCutter::SafeDownCast, emscripten::allow_raw_pointers())
    .function("NewInstance", &vtkCompositeCutter::NewInstance, emscripten::allow_raw_pointers())
    .class_function("GetNumberOfGenerationsFromBaseType", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkCompositeCutter::GetNumberOfGenerationsFromBaseType( arg_0.c_str());}))
    .function("GetNumberOfGenerationsFromBase", emscripten::optional_override([](vtkCompositeCutter& self, const std::string & arg_0) -> int {  return self.GetNumberOfGenerationsFromBase( arg_0.c_str());}));
}
