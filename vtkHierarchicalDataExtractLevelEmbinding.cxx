// JavaScript wrapper for vtkHierarchicalDataExtractLevel with embind 
//
// This file was auto-generated using :
/*
node /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/bin/vtkWrapJavaScript.js \
 @/home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkFiltersExtraction.js/vtkFiltersExtraction.js.Release.args \
 -o \
 /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkFiltersExtraction.js/vtkHierarchicalDataExtractLevelEmbinding.cxx \
 /home/jmh/github/vtk/Filters/Extraction/vtkHierarchicalDataExtractLevel.h
*/
#include "vtkEmbindSmartPointerTrait.h"
#include <emscripten.h>
#include <string>
#include "vtkVariant.h"
#include "vtkObjectBase.h"
#include "vtkIndent.h"
#include "vtkHierarchicalDataExtractLevel.h"

template<> void emscripten::internal::raw_destructor<vtkHierarchicalDataExtractLevel>(vtkHierarchicalDataExtractLevel * ptr){ ptr->Delete(); }
EMSCRIPTEN_BINDINGS(vtkHierarchicalDataExtractLevel_class) {
  emscripten::class_<vtkHierarchicalDataExtractLevel, emscripten::base<vtkExtractLevel>>("vtkHierarchicalDataExtractLevel")
    .smart_ptr<vtkSmartPointer<vtkHierarchicalDataExtractLevel>>("vtkSmartPointer<vtkHierarchicalDataExtractLevel>")
    .constructor(&vtk::MakeAvtkSmartPointer<vtkHierarchicalDataExtractLevel>)
    .class_function("IsTypeOf", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkHierarchicalDataExtractLevel::IsTypeOf( arg_0.c_str());}))
    .function("IsA", emscripten::optional_override([](vtkHierarchicalDataExtractLevel& self, const std::string & arg_0) -> int {  return self.IsA( arg_0.c_str());}))
    .class_function("SafeDownCast", &vtkHierarchicalDataExtractLevel::SafeDownCast, emscripten::allow_raw_pointers())
    .function("NewInstance", &vtkHierarchicalDataExtractLevel::NewInstance, emscripten::allow_raw_pointers())
    .class_function("GetNumberOfGenerationsFromBaseType", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkHierarchicalDataExtractLevel::GetNumberOfGenerationsFromBaseType( arg_0.c_str());}))
    .function("GetNumberOfGenerationsFromBase", emscripten::optional_override([](vtkHierarchicalDataExtractLevel& self, const std::string & arg_0) -> int {  return self.GetNumberOfGenerationsFromBase( arg_0.c_str());}));
}
