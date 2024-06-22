// JavaScript wrapper for vtkTableToTreeFilter with embind 
//
// This file was auto-generated using :
/*
node /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/bin/vtkWrapJavaScript.js \
 @/home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkInfovisCore.js/vtkInfovisCore.js.Release.args \
 -o \
 /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkInfovisCore.js/vtkTableToTreeFilterEmbinding.cxx \
 /home/jmh/github/vtk/Infovis/Core/vtkTableToTreeFilter.h
*/
#include "vtkEmbindSmartPointerTrait.h"
#include <emscripten.h>
#include <string>
#include "vtkVariant.h"
#include "vtkObjectBase.h"
#include "vtkIndent.h"
#include "vtkTableToTreeFilter.h"

template<> void emscripten::internal::raw_destructor<vtkTableToTreeFilter>(vtkTableToTreeFilter * ptr){ ptr->Delete(); }
EMSCRIPTEN_BINDINGS(vtkTableToTreeFilter_class) {
  emscripten::class_<vtkTableToTreeFilter, emscripten::base<vtkTreeAlgorithm>>("vtkTableToTreeFilter")
    .smart_ptr<vtkSmartPointer<vtkTableToTreeFilter>>("vtkSmartPointer<vtkTableToTreeFilter>")
    .constructor(&vtk::MakeAvtkSmartPointer<vtkTableToTreeFilter>)
    .class_function("IsTypeOf", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkTableToTreeFilter::IsTypeOf( arg_0.c_str());}))
    .function("IsA", emscripten::optional_override([](vtkTableToTreeFilter& self, const std::string & arg_0) -> int {  return self.IsA( arg_0.c_str());}))
    .class_function("SafeDownCast", &vtkTableToTreeFilter::SafeDownCast, emscripten::allow_raw_pointers())
    .function("NewInstance", &vtkTableToTreeFilter::NewInstance, emscripten::allow_raw_pointers())
    .class_function("GetNumberOfGenerationsFromBaseType", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkTableToTreeFilter::GetNumberOfGenerationsFromBaseType( arg_0.c_str());}))
    .function("GetNumberOfGenerationsFromBase", emscripten::optional_override([](vtkTableToTreeFilter& self, const std::string & arg_0) -> int {  return self.GetNumberOfGenerationsFromBase( arg_0.c_str());}));
}