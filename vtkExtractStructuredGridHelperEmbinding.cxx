// JavaScript wrapper for vtkExtractStructuredGridHelper with embind 
//
// This file was auto-generated using :
/*
node /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/bin/vtkWrapJavaScript.js \
 @/home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkCommonDataModel.js/vtkCommonDataModel.js.Release.args \
 -o \
 /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkCommonDataModel.js/vtkExtractStructuredGridHelperEmbinding.cxx \
 /home/jmh/github/vtk/Common/DataModel/vtkExtractStructuredGridHelper.h
*/
#include "vtkEmbindSmartPointerTrait.h"
#include <emscripten.h>
#include <string>
#include "vtkVariant.h"
#include "vtkObjectBase.h"
#include "vtkIndent.h"
#include "vtkPointData.h"
#include "vtkPoints.h"
#include "vtkCellData.h"
#include "vtkExtractStructuredGridHelper.h"

template<> void emscripten::internal::raw_destructor<vtkExtractStructuredGridHelper>(vtkExtractStructuredGridHelper * ptr){ ptr->Delete(); }
EMSCRIPTEN_BINDINGS(vtkExtractStructuredGridHelper_class) {
  emscripten::class_<vtkExtractStructuredGridHelper, emscripten::base<vtkObject>>("vtkExtractStructuredGridHelper")
    .smart_ptr<vtkSmartPointer<vtkExtractStructuredGridHelper>>("vtkSmartPointer<vtkExtractStructuredGridHelper>")
    .constructor(&vtk::MakeVTKSmartPtr<vtkExtractStructuredGridHelper>)
    .class_function("IsTypeOf", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkExtractStructuredGridHelper::IsTypeOf( arg_0.c_str());}))
    .function("IsA", emscripten::optional_override([](vtkExtractStructuredGridHelper& self, const std::string & arg_0) -> int {  return self.IsA( arg_0.c_str());}))
    .class_function("SafeDownCast", &vtkExtractStructuredGridHelper::SafeDownCast, emscripten::allow_raw_pointers())
    .function("NewInstance", &vtkExtractStructuredGridHelper::NewInstance, emscripten::allow_raw_pointers())
    .class_function("GetNumberOfGenerationsFromBaseType", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkExtractStructuredGridHelper::GetNumberOfGenerationsFromBaseType( arg_0.c_str());}))
    .function("GetNumberOfGenerationsFromBase", emscripten::optional_override([](vtkExtractStructuredGridHelper& self, const std::string & arg_0) -> int {  return self.GetNumberOfGenerationsFromBase( arg_0.c_str());}))
    .function("IsValid", &vtkExtractStructuredGridHelper::IsValid)
    .function("GetSize", &vtkExtractStructuredGridHelper::GetSize)
    .function("GetMappedIndex", &vtkExtractStructuredGridHelper::GetMappedIndex)
    .function("GetMappedIndexFromExtentValue", &vtkExtractStructuredGridHelper::GetMappedIndexFromExtentValue)
    .function("GetMappedExtentValue", &vtkExtractStructuredGridHelper::GetMappedExtentValue)
    .function("GetMappedExtentValueFromIndex", &vtkExtractStructuredGridHelper::GetMappedExtentValueFromIndex);
}
