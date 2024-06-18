// JavaScript wrapper for vtkIncrementalPointLocator with embind 
//
// This file was auto-generated using :
/*
node /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/bin/vtkWrapJavaScript.js \
 @/home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkCommonDataModel.js/vtkCommonDataModel.js.Release.args \
 -o \
 /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkCommonDataModel.js/vtkIncrementalPointLocatorEmbinding.cxx \
 /home/jmh/github/vtk/Common/DataModel/vtkIncrementalPointLocator.h
*/
#include "vtkEmbindSmartPointerTrait.h"
#include <emscripten.h>
#include <string>
#include "vtkVariant.h"
#include "vtkObjectBase.h"
#include "vtkIndent.h"
#include "vtkPoints.h"
#include "vtkIncrementalPointLocator.h"

template<> void emscripten::internal::raw_destructor<vtkIncrementalPointLocator>(vtkIncrementalPointLocator * ptr){ ptr->Delete(); }
EMSCRIPTEN_BINDINGS(vtkIncrementalPointLocator_class) {
  emscripten::class_<vtkIncrementalPointLocator, emscripten::base<vtkAbstractPointLocator>>("vtkIncrementalPointLocator")
    .class_function("IsTypeOf", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkIncrementalPointLocator::IsTypeOf( arg_0.c_str());}))
    .function("IsA", emscripten::optional_override([](vtkIncrementalPointLocator& self, const std::string & arg_0) -> int {  return self.IsA( arg_0.c_str());}))
    .class_function("SafeDownCast", &vtkIncrementalPointLocator::SafeDownCast, emscripten::allow_raw_pointers())
    .function("NewInstance", &vtkIncrementalPointLocator::NewInstance, emscripten::allow_raw_pointers())
    .class_function("GetNumberOfGenerationsFromBaseType", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkIncrementalPointLocator::GetNumberOfGenerationsFromBaseType( arg_0.c_str());}))
    .function("GetNumberOfGenerationsFromBase", emscripten::optional_override([](vtkIncrementalPointLocator& self, const std::string & arg_0) -> int {  return self.GetNumberOfGenerationsFromBase( arg_0.c_str());}));
}
