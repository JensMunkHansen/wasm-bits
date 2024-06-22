// JavaScript wrapper for vtkUniformHyperTreeGridSource with embind 
//
// This file was auto-generated using :
/*
node /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/bin/vtkWrapJavaScript.js \
 @/home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkFiltersSources.js/vtkFiltersSources.js.Release.args \
 -o \
 /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkFiltersSources.js/vtkUniformHyperTreeGridSourceEmbinding.cxx \
 /home/jmh/github/vtk/Filters/Sources/vtkUniformHyperTreeGridSource.h
*/
#include "vtkEmbindSmartPointerTrait.h"
#include <emscripten.h>
#include <string>
#include "vtkVariant.h"
#include "vtkObjectBase.h"
#include "vtkIndent.h"
#include "vtkUniformHyperTreeGridSource.h"

template<> void emscripten::internal::raw_destructor<vtkUniformHyperTreeGridSource>(vtkUniformHyperTreeGridSource * ptr){ ptr->Delete(); }
EMSCRIPTEN_BINDINGS(vtkUniformHyperTreeGridSource_class) {
  emscripten::class_<vtkUniformHyperTreeGridSource, emscripten::base<vtkHyperTreeGridSource>>("vtkUniformHyperTreeGridSource")
    .smart_ptr<vtkSmartPointer<vtkUniformHyperTreeGridSource>>("vtkSmartPointer<vtkUniformHyperTreeGridSource>")
    .constructor(&vtk::MakeAvtkSmartPointer<vtkUniformHyperTreeGridSource>)
    .class_function("IsTypeOf", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkUniformHyperTreeGridSource::IsTypeOf( arg_0.c_str());}))
    .function("IsA", emscripten::optional_override([](vtkUniformHyperTreeGridSource& self, const std::string & arg_0) -> int {  return self.IsA( arg_0.c_str());}))
    .class_function("SafeDownCast", &vtkUniformHyperTreeGridSource::SafeDownCast, emscripten::allow_raw_pointers())
    .function("NewInstance", &vtkUniformHyperTreeGridSource::NewInstance, emscripten::allow_raw_pointers())
    .class_function("GetNumberOfGenerationsFromBaseType", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkUniformHyperTreeGridSource::GetNumberOfGenerationsFromBaseType( arg_0.c_str());}))
    .function("GetNumberOfGenerationsFromBase", emscripten::optional_override([](vtkUniformHyperTreeGridSource& self, const std::string & arg_0) -> int {  return self.GetNumberOfGenerationsFromBase( arg_0.c_str());}));
}
