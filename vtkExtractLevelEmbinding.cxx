// JavaScript wrapper for vtkExtractLevel with embind 
//
// This file was auto-generated using :
/*
node /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/bin/vtkWrapJavaScript.js \
 @/home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkFiltersExtraction.js/vtkFiltersExtraction.js.Release.args \
 -o \
 /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkFiltersExtraction.js/vtkExtractLevelEmbinding.cxx \
 /home/jmh/github/vtk/Filters/Extraction/vtkExtractLevel.h
*/
#include "vtkEmbindSmartPointerTrait.h"
#include <emscripten.h>
#include <string>
#include "vtkVariant.h"
#include "vtkObjectBase.h"
#include "vtkIndent.h"
#include "vtkExtractLevel.h"

template<> void emscripten::internal::raw_destructor<vtkExtractLevel>(vtkExtractLevel * ptr){ ptr->Delete(); }
EMSCRIPTEN_BINDINGS(vtkExtractLevel_class) {
  emscripten::class_<vtkExtractLevel, emscripten::base<vtkMultiBlockDataSetAlgorithm>>("vtkExtractLevel")
    .smart_ptr<vtkSmartPointer<vtkExtractLevel>>("vtkSmartPointer<vtkExtractLevel>")
    .constructor(&vtk::MakeVTKSmartPtr<vtkExtractLevel>)
    .class_function("IsTypeOf", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkExtractLevel::IsTypeOf( arg_0.c_str());}))
    .function("IsA", emscripten::optional_override([](vtkExtractLevel& self, const std::string & arg_0) -> int {  return self.IsA( arg_0.c_str());}))
    .class_function("SafeDownCast", &vtkExtractLevel::SafeDownCast, emscripten::allow_raw_pointers())
    .function("NewInstance", &vtkExtractLevel::NewInstance, emscripten::allow_raw_pointers())
    .class_function("GetNumberOfGenerationsFromBaseType", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkExtractLevel::GetNumberOfGenerationsFromBaseType( arg_0.c_str());}))
    .function("GetNumberOfGenerationsFromBase", emscripten::optional_override([](vtkExtractLevel& self, const std::string & arg_0) -> int {  return self.GetNumberOfGenerationsFromBase( arg_0.c_str());}))
    .function("AddLevel", &vtkExtractLevel::AddLevel)
    .function("RemoveLevel", &vtkExtractLevel::RemoveLevel)
    .function("RemoveAllLevels", &vtkExtractLevel::RemoveAllLevels);
}
