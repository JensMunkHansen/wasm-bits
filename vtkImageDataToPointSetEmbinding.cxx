// JavaScript wrapper for vtkImageDataToPointSet with embind 
//
// This file was auto-generated using :
/*
node /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/bin/vtkWrapJavaScript.js \
 @/home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkFiltersGeneral.js/vtkFiltersGeneral.js.Release.args \
 -o \
 /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkFiltersGeneral.js/vtkImageDataToPointSetEmbinding.cxx \
 /home/jmh/github/vtk/Filters/General/vtkImageDataToPointSet.h
*/
#include "vtkEmbindSmartPointerTrait.h"
#include <emscripten.h>
#include <string>
#include "vtkVariant.h"
#include "vtkObjectBase.h"
#include "vtkIndent.h"
#include "vtkImageDataToPointSet.h"

template<> void emscripten::internal::raw_destructor<vtkImageDataToPointSet>(vtkImageDataToPointSet * ptr){ ptr->Delete(); }
EMSCRIPTEN_BINDINGS(vtkImageDataToPointSet_class) {
  emscripten::class_<vtkImageDataToPointSet, emscripten::base<vtkStructuredGridAlgorithm>>("vtkImageDataToPointSet")
    .smart_ptr<vtkSmartPointer<vtkImageDataToPointSet>>("vtkSmartPointer<vtkImageDataToPointSet>")
    .constructor(&vtk::MakeAvtkSmartPointer<vtkImageDataToPointSet>)
    .class_function("IsTypeOf", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkImageDataToPointSet::IsTypeOf( arg_0.c_str());}))
    .function("IsA", emscripten::optional_override([](vtkImageDataToPointSet& self, const std::string & arg_0) -> int {  return self.IsA( arg_0.c_str());}))
    .class_function("SafeDownCast", &vtkImageDataToPointSet::SafeDownCast, emscripten::allow_raw_pointers())
    .function("NewInstance", &vtkImageDataToPointSet::NewInstance, emscripten::allow_raw_pointers())
    .class_function("GetNumberOfGenerationsFromBaseType", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkImageDataToPointSet::GetNumberOfGenerationsFromBaseType( arg_0.c_str());}))
    .function("GetNumberOfGenerationsFromBase", emscripten::optional_override([](vtkImageDataToPointSet& self, const std::string & arg_0) -> int {  return self.GetNumberOfGenerationsFromBase( arg_0.c_str());}));
}
