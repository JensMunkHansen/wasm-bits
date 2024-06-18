// JavaScript wrapper for vtkExtractSelectedRows with embind 
//
// This file was auto-generated using :
/*
node /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/bin/vtkWrapJavaScript.js \
 @/home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkFiltersExtraction.js/vtkFiltersExtraction.js.Release.args \
 -o \
 /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkFiltersExtraction.js/vtkExtractSelectedRowsEmbinding.cxx \
 /home/jmh/github/vtk/Filters/Extraction/vtkExtractSelectedRows.h
*/
#include "vtkEmbindSmartPointerTrait.h"
#include <emscripten.h>
#include <string>
#include "vtkVariant.h"
#include "vtkObjectBase.h"
#include "vtkIndent.h"
#include "vtkAlgorithmOutput.h"
#include "vtkInformation.h"
#include "vtkExtractSelectedRows.h"

template<> void emscripten::internal::raw_destructor<vtkExtractSelectedRows>(vtkExtractSelectedRows * ptr){ ptr->Delete(); }
EMSCRIPTEN_BINDINGS(vtkExtractSelectedRows_class) {
  emscripten::class_<vtkExtractSelectedRows, emscripten::base<vtkTableAlgorithm>>("vtkExtractSelectedRows")
    .smart_ptr<vtkSmartPointer<vtkExtractSelectedRows>>("vtkSmartPointer<vtkExtractSelectedRows>")
    .constructor(&vtk::MakeAvtkSmartPointer<vtkExtractSelectedRows>)
    .class_function("IsTypeOf", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkExtractSelectedRows::IsTypeOf( arg_0.c_str());}))
    .function("IsA", emscripten::optional_override([](vtkExtractSelectedRows& self, const std::string & arg_0) -> int {  return self.IsA( arg_0.c_str());}))
    .class_function("SafeDownCast", &vtkExtractSelectedRows::SafeDownCast, emscripten::allow_raw_pointers())
    .function("NewInstance", &vtkExtractSelectedRows::NewInstance, emscripten::allow_raw_pointers())
    .class_function("GetNumberOfGenerationsFromBaseType", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkExtractSelectedRows::GetNumberOfGenerationsFromBaseType( arg_0.c_str());}))
    .function("GetNumberOfGenerationsFromBase", emscripten::optional_override([](vtkExtractSelectedRows& self, const std::string & arg_0) -> int {  return self.GetNumberOfGenerationsFromBase( arg_0.c_str());}))
    .function("SetSelectionConnection", &vtkExtractSelectedRows::SetSelectionConnection, emscripten::allow_raw_pointers())
    .function("SetAnnotationLayersConnection", &vtkExtractSelectedRows::SetAnnotationLayersConnection, emscripten::allow_raw_pointers())
    .function("FillInputPortInformation", &vtkExtractSelectedRows::FillInputPortInformation, emscripten::allow_raw_pointers())
    .function("SetAddOriginalRowIdsArray", &vtkExtractSelectedRows::SetAddOriginalRowIdsArray)
    .function("GetAddOriginalRowIdsArray", &vtkExtractSelectedRows::GetAddOriginalRowIdsArray)
    .function("AddOriginalRowIdsArrayOn", &vtkExtractSelectedRows::AddOriginalRowIdsArrayOn)
    .function("AddOriginalRowIdsArrayOff", &vtkExtractSelectedRows::AddOriginalRowIdsArrayOff);
}
