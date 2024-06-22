// JavaScript wrapper for vtkTreeLevelsFilter with embind 
//
// This file was auto-generated using :
/*
node /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/bin/vtkWrapJavaScript.js \
 @/home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkInfovisCore.js/vtkInfovisCore.js.Release.args \
 -o \
 /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkInfovisCore.js/vtkTreeLevelsFilterEmbinding.cxx \
 /home/jmh/github/vtk/Infovis/Core/vtkTreeLevelsFilter.h
*/
#include "vtkEmbindSmartPointerTrait.h"
#include <emscripten.h>
#include <string>
#include "vtkVariant.h"
#include "vtkObjectBase.h"
#include "vtkIndent.h"
#include "vtkTreeLevelsFilter.h"

template<> void emscripten::internal::raw_destructor<vtkTreeLevelsFilter>(vtkTreeLevelsFilter * ptr){ ptr->Delete(); }
EMSCRIPTEN_BINDINGS(vtkTreeLevelsFilter_class) {
  emscripten::class_<vtkTreeLevelsFilter, emscripten::base<vtkTreeAlgorithm>>("vtkTreeLevelsFilter")
    .smart_ptr<vtkSmartPointer<vtkTreeLevelsFilter>>("vtkSmartPointer<vtkTreeLevelsFilter>")
    .constructor(&vtk::MakeVTKSmartPtr<vtkTreeLevelsFilter>)
    .class_function("IsTypeOf", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkTreeLevelsFilter::IsTypeOf( arg_0.c_str());}))
    .function("IsA", emscripten::optional_override([](vtkTreeLevelsFilter& self, const std::string & arg_0) -> int {  return self.IsA( arg_0.c_str());}))
    .class_function("SafeDownCast", &vtkTreeLevelsFilter::SafeDownCast, emscripten::allow_raw_pointers())
    .function("NewInstance", &vtkTreeLevelsFilter::NewInstance, emscripten::allow_raw_pointers())
    .class_function("GetNumberOfGenerationsFromBaseType", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkTreeLevelsFilter::GetNumberOfGenerationsFromBaseType( arg_0.c_str());}))
    .function("GetNumberOfGenerationsFromBase", emscripten::optional_override([](vtkTreeLevelsFilter& self, const std::string & arg_0) -> int {  return self.GetNumberOfGenerationsFromBase( arg_0.c_str());}));
}
