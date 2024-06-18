// JavaScript wrapper for vtkSubdivideTetra with embind 
//
// This file was auto-generated using :
/*
node /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/bin/vtkWrapJavaScript.js \
 @/home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkFiltersModeling.js/vtkFiltersModeling.js.Release.args \
 -o \
 /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkFiltersModeling.js/vtkSubdivideTetraEmbinding.cxx \
 /home/jmh/github/vtk/Filters/Modeling/vtkSubdivideTetra.h
*/
#include "vtkEmbindSmartPointerTrait.h"
#include <emscripten.h>
#include <string>
#include "vtkVariant.h"
#include "vtkObjectBase.h"
#include "vtkIndent.h"
#include "vtkSubdivideTetra.h"

template<> void emscripten::internal::raw_destructor<vtkSubdivideTetra>(vtkSubdivideTetra * ptr){ ptr->Delete(); }
EMSCRIPTEN_BINDINGS(vtkSubdivideTetra_class) {
  emscripten::class_<vtkSubdivideTetra, emscripten::base<vtkUnstructuredGridAlgorithm>>("vtkSubdivideTetra")
    .smart_ptr<vtkSmartPointer<vtkSubdivideTetra>>("vtkSmartPointer<vtkSubdivideTetra>")
    .constructor(&vtk::MakeAvtkSmartPointer<vtkSubdivideTetra>)
    .class_function("IsTypeOf", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkSubdivideTetra::IsTypeOf( arg_0.c_str());}))
    .function("IsA", emscripten::optional_override([](vtkSubdivideTetra& self, const std::string & arg_0) -> int {  return self.IsA( arg_0.c_str());}))
    .class_function("SafeDownCast", &vtkSubdivideTetra::SafeDownCast, emscripten::allow_raw_pointers())
    .function("NewInstance", &vtkSubdivideTetra::NewInstance, emscripten::allow_raw_pointers())
    .class_function("GetNumberOfGenerationsFromBaseType", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkSubdivideTetra::GetNumberOfGenerationsFromBaseType( arg_0.c_str());}))
    .function("GetNumberOfGenerationsFromBase", emscripten::optional_override([](vtkSubdivideTetra& self, const std::string & arg_0) -> int {  return self.GetNumberOfGenerationsFromBase( arg_0.c_str());}));
}
