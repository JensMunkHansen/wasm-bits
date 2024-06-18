// JavaScript wrapper for vtkExtractCellsByType with embind 
//
// This file was auto-generated using :
/*
node /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/bin/vtkWrapJavaScript.js \
 @/home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkFiltersExtraction.js/vtkFiltersExtraction.js.Release.args \
 -o \
 /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkFiltersExtraction.js/vtkExtractCellsByTypeEmbinding.cxx \
 /home/jmh/github/vtk/Filters/Extraction/vtkExtractCellsByType.h
*/
#include "vtkEmbindSmartPointerTrait.h"
#include <emscripten.h>
#include <string>
#include "vtkVariant.h"
#include "vtkObjectBase.h"
#include "vtkIndent.h"
#include "vtkExtractCellsByType.h"

template<> void emscripten::internal::raw_destructor<vtkExtractCellsByType>(vtkExtractCellsByType * ptr){ ptr->Delete(); }
EMSCRIPTEN_BINDINGS(vtkExtractCellsByType_class) {
  emscripten::class_<vtkExtractCellsByType, emscripten::base<vtkDataSetAlgorithm>>("vtkExtractCellsByType")
    .smart_ptr<vtkSmartPointer<vtkExtractCellsByType>>("vtkSmartPointer<vtkExtractCellsByType>")
    .constructor(&vtk::MakeAvtkSmartPointer<vtkExtractCellsByType>)
    .class_function("IsTypeOf", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkExtractCellsByType::IsTypeOf( arg_0.c_str());}))
    .function("IsA", emscripten::optional_override([](vtkExtractCellsByType& self, const std::string & arg_0) -> int {  return self.IsA( arg_0.c_str());}))
    .class_function("SafeDownCast", &vtkExtractCellsByType::SafeDownCast, emscripten::allow_raw_pointers())
    .function("NewInstance", &vtkExtractCellsByType::NewInstance, emscripten::allow_raw_pointers())
    .class_function("GetNumberOfGenerationsFromBaseType", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkExtractCellsByType::GetNumberOfGenerationsFromBaseType( arg_0.c_str());}))
    .function("GetNumberOfGenerationsFromBase", emscripten::optional_override([](vtkExtractCellsByType& self, const std::string & arg_0) -> int {  return self.GetNumberOfGenerationsFromBase( arg_0.c_str());}))
    .function("AddCellType", &vtkExtractCellsByType::AddCellType)
    .function("AddAllCellTypes", &vtkExtractCellsByType::AddAllCellTypes)
    .function("RemoveCellType", &vtkExtractCellsByType::RemoveCellType)
    .function("RemoveAllCellTypes", &vtkExtractCellsByType::RemoveAllCellTypes)
    .function("ExtractCellType", &vtkExtractCellsByType::ExtractCellType);
}
