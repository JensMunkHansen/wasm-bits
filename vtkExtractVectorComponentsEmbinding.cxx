// JavaScript wrapper for vtkExtractVectorComponents with embind 
//
// This file was auto-generated using :
/*
node /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/bin/vtkWrapJavaScript.js \
 @/home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkFiltersExtraction.js/vtkFiltersExtraction.js.Release.args \
 -o \
 /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkFiltersExtraction.js/vtkExtractVectorComponentsEmbinding.cxx \
 /home/jmh/github/vtk/Filters/Extraction/vtkExtractVectorComponents.h
*/
#include "vtkEmbindSmartPointerTrait.h"
#include <emscripten.h>
#include <string>
#include "vtkVariant.h"
#include "vtkObjectBase.h"
#include "vtkIndent.h"
#include "vtkDataSet.h"
#include "vtkExtractVectorComponents.h"

template<> void emscripten::internal::raw_destructor<vtkExtractVectorComponents>(vtkExtractVectorComponents * ptr){ ptr->Delete(); }
EMSCRIPTEN_BINDINGS(vtkExtractVectorComponents_class) {
  emscripten::class_<vtkExtractVectorComponents, emscripten::base<vtkDataSetAlgorithm>>("vtkExtractVectorComponents")
    .smart_ptr<vtkSmartPointer<vtkExtractVectorComponents>>("vtkSmartPointer<vtkExtractVectorComponents>")
    .constructor(&vtk::MakeVTKSmartPtr<vtkExtractVectorComponents>)
    .class_function("IsTypeOf", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkExtractVectorComponents::IsTypeOf( arg_0.c_str());}))
    .function("IsA", emscripten::optional_override([](vtkExtractVectorComponents& self, const std::string & arg_0) -> int {  return self.IsA( arg_0.c_str());}))
    .class_function("SafeDownCast", &vtkExtractVectorComponents::SafeDownCast, emscripten::allow_raw_pointers())
    .function("NewInstance", &vtkExtractVectorComponents::NewInstance, emscripten::allow_raw_pointers())
    .class_function("GetNumberOfGenerationsFromBaseType", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkExtractVectorComponents::GetNumberOfGenerationsFromBaseType( arg_0.c_str());}))
    .function("GetNumberOfGenerationsFromBase", emscripten::optional_override([](vtkExtractVectorComponents& self, const std::string & arg_0) -> int {  return self.GetNumberOfGenerationsFromBase( arg_0.c_str());}))
    .function("SetInputData", &vtkExtractVectorComponents::SetInputData, emscripten::allow_raw_pointers())
    .function("GetVxComponent", &vtkExtractVectorComponents::GetVxComponent, emscripten::allow_raw_pointers())
    .function("GetVyComponent", &vtkExtractVectorComponents::GetVyComponent, emscripten::allow_raw_pointers())
    .function("GetVzComponent", &vtkExtractVectorComponents::GetVzComponent, emscripten::allow_raw_pointers())
    .function("SetExtractToFieldData", &vtkExtractVectorComponents::SetExtractToFieldData)
    .function("GetExtractToFieldData", &vtkExtractVectorComponents::GetExtractToFieldData)
    .function("ExtractToFieldDataOn", &vtkExtractVectorComponents::ExtractToFieldDataOn)
    .function("ExtractToFieldDataOff", &vtkExtractVectorComponents::ExtractToFieldDataOff);
}
