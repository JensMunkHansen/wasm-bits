// JavaScript wrapper for vtkMergeVectorComponents with embind 
//
// This file was auto-generated using :
/*
node /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/bin/vtkWrapJavaScript.js \
 @/home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkFiltersGeneral.js/vtkFiltersGeneral.js.Release.args \
 -o \
 /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkFiltersGeneral.js/vtkMergeVectorComponentsEmbinding.cxx \
 /home/jmh/github/vtk/Filters/General/vtkMergeVectorComponents.h
*/
#include "vtkEmbindSmartPointerTrait.h"
#include <emscripten.h>
#include <string>
#include "vtkVariant.h"
#include "vtkObjectBase.h"
#include "vtkIndent.h"
#include "vtkMergeVectorComponents.h"

template<> void emscripten::internal::raw_destructor<vtkMergeVectorComponents>(vtkMergeVectorComponents * ptr){ ptr->Delete(); }
EMSCRIPTEN_BINDINGS(vtkMergeVectorComponents_class) {
  emscripten::class_<vtkMergeVectorComponents, emscripten::base<vtkPassInputTypeAlgorithm>>("vtkMergeVectorComponents")
    .smart_ptr<vtkSmartPointer<vtkMergeVectorComponents>>("vtkSmartPointer<vtkMergeVectorComponents>")
    .constructor(&vtk::MakeAvtkSmartPointer<vtkMergeVectorComponents>)
    .class_function("IsTypeOf", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkMergeVectorComponents::IsTypeOf( arg_0.c_str());}))
    .function("IsA", emscripten::optional_override([](vtkMergeVectorComponents& self, const std::string & arg_0) -> int {  return self.IsA( arg_0.c_str());}))
    .class_function("SafeDownCast", &vtkMergeVectorComponents::SafeDownCast, emscripten::allow_raw_pointers())
    .function("NewInstance", &vtkMergeVectorComponents::NewInstance, emscripten::allow_raw_pointers())
    .class_function("GetNumberOfGenerationsFromBaseType", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkMergeVectorComponents::GetNumberOfGenerationsFromBaseType( arg_0.c_str());}))
    .function("GetNumberOfGenerationsFromBase", emscripten::optional_override([](vtkMergeVectorComponents& self, const std::string & arg_0) -> int {  return self.GetNumberOfGenerationsFromBase( arg_0.c_str());}))
    .function("SetXArrayName", emscripten::optional_override([](vtkMergeVectorComponents& self, const std::string & arg_0) -> void {  return self.SetXArrayName( arg_0.c_str());}))
    .function("GetXArrayName", emscripten::optional_override([](vtkMergeVectorComponents& self) -> std::string {  return self.GetXArrayName();}))
    .function("SetYArrayName", emscripten::optional_override([](vtkMergeVectorComponents& self, const std::string & arg_0) -> void {  return self.SetYArrayName( arg_0.c_str());}))
    .function("GetYArrayName", emscripten::optional_override([](vtkMergeVectorComponents& self) -> std::string {  return self.GetYArrayName();}))
    .function("SetZArrayName", emscripten::optional_override([](vtkMergeVectorComponents& self, const std::string & arg_0) -> void {  return self.SetZArrayName( arg_0.c_str());}))
    .function("GetZArrayName", emscripten::optional_override([](vtkMergeVectorComponents& self) -> std::string {  return self.GetZArrayName();}))
    .function("SetOutputVectorName", emscripten::optional_override([](vtkMergeVectorComponents& self, const std::string & arg_0) -> void {  return self.SetOutputVectorName( arg_0.c_str());}))
    .function("GetOutputVectorName", emscripten::optional_override([](vtkMergeVectorComponents& self) -> std::string {  return self.GetOutputVectorName();}))
    .function("SetAttributeType", &vtkMergeVectorComponents::SetAttributeType)
    .function("GetAttributeType", &vtkMergeVectorComponents::GetAttributeType)
    .function("SetAttributeTypeToPointData", &vtkMergeVectorComponents::SetAttributeTypeToPointData)
    .function("SetAttributeTypeToCellData", &vtkMergeVectorComponents::SetAttributeTypeToCellData);
}
