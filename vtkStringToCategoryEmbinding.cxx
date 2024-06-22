// JavaScript wrapper for vtkStringToCategory with embind 
//
// This file was auto-generated using :
/*
node /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/bin/vtkWrapJavaScript.js \
 @/home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkInfovisCore.js/vtkInfovisCore.js.Release.args \
 -o \
 /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkInfovisCore.js/vtkStringToCategoryEmbinding.cxx \
 /home/jmh/github/vtk/Infovis/Core/vtkStringToCategory.h
*/
#include "vtkEmbindSmartPointerTrait.h"
#include <emscripten.h>
#include <string>
#include "vtkVariant.h"
#include "vtkObjectBase.h"
#include "vtkIndent.h"
#include "vtkInformation.h"
#include "vtkInformationVector.h"
#include "vtkStringToCategory.h"

template<> void emscripten::internal::raw_destructor<vtkStringToCategory>(vtkStringToCategory * ptr){ ptr->Delete(); }
EMSCRIPTEN_BINDINGS(vtkStringToCategory_class) {
  emscripten::class_<vtkStringToCategory, emscripten::base<vtkDataObjectAlgorithm>>("vtkStringToCategory")
    .smart_ptr<vtkSmartPointer<vtkStringToCategory>>("vtkSmartPointer<vtkStringToCategory>")
    .constructor(&vtk::MakeVTKSmartPtr<vtkStringToCategory>)
    .class_function("IsTypeOf", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkStringToCategory::IsTypeOf( arg_0.c_str());}))
    .function("IsA", emscripten::optional_override([](vtkStringToCategory& self, const std::string & arg_0) -> int {  return self.IsA( arg_0.c_str());}))
    .class_function("SafeDownCast", &vtkStringToCategory::SafeDownCast, emscripten::allow_raw_pointers())
    .function("NewInstance", &vtkStringToCategory::NewInstance, emscripten::allow_raw_pointers())
    .class_function("GetNumberOfGenerationsFromBaseType", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkStringToCategory::GetNumberOfGenerationsFromBaseType( arg_0.c_str());}))
    .function("GetNumberOfGenerationsFromBase", emscripten::optional_override([](vtkStringToCategory& self, const std::string & arg_0) -> int {  return self.GetNumberOfGenerationsFromBase( arg_0.c_str());}))
    .function("SetCategoryArrayName", emscripten::optional_override([](vtkStringToCategory& self, const std::string & arg_0) -> void {  return self.SetCategoryArrayName( arg_0.c_str());}))
    .function("GetCategoryArrayName", emscripten::optional_override([](vtkStringToCategory& self) -> std::string {  return self.GetCategoryArrayName();}));
}
