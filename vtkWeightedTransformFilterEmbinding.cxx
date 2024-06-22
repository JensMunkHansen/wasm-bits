// JavaScript wrapper for vtkWeightedTransformFilter with embind 
//
// This file was auto-generated using :
/*
node /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/bin/vtkWrapJavaScript.js \
 @/home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkFiltersHybrid.js/vtkFiltersHybrid.js.Release.args \
 -o \
 /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkFiltersHybrid.js/vtkWeightedTransformFilterEmbinding.cxx \
 /home/jmh/github/vtk/Filters/Hybrid/vtkWeightedTransformFilter.h
*/
#include "vtkEmbindSmartPointerTrait.h"
#include <emscripten.h>
#include <string>
#include "vtkVariant.h"
#include "vtkObjectBase.h"
#include "vtkIndent.h"
#include "vtkAbstractTransform.h"
#include "vtkWeightedTransformFilter.h"

template<> void emscripten::internal::raw_destructor<vtkWeightedTransformFilter>(vtkWeightedTransformFilter * ptr){ ptr->Delete(); }
EMSCRIPTEN_BINDINGS(vtkWeightedTransformFilter_class) {
  emscripten::class_<vtkWeightedTransformFilter, emscripten::base<vtkPointSetAlgorithm>>("vtkWeightedTransformFilter")
    .smart_ptr<vtkSmartPointer<vtkWeightedTransformFilter>>("vtkSmartPointer<vtkWeightedTransformFilter>")
    .constructor(&vtk::MakeVTKSmartPtr<vtkWeightedTransformFilter>)
    .class_function("IsTypeOf", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkWeightedTransformFilter::IsTypeOf( arg_0.c_str());}))
    .function("IsA", emscripten::optional_override([](vtkWeightedTransformFilter& self, const std::string & arg_0) -> int {  return self.IsA( arg_0.c_str());}))
    .class_function("SafeDownCast", &vtkWeightedTransformFilter::SafeDownCast, emscripten::allow_raw_pointers())
    .function("NewInstance", &vtkWeightedTransformFilter::NewInstance, emscripten::allow_raw_pointers())
    .class_function("GetNumberOfGenerationsFromBaseType", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkWeightedTransformFilter::GetNumberOfGenerationsFromBaseType( arg_0.c_str());}))
    .function("GetNumberOfGenerationsFromBase", emscripten::optional_override([](vtkWeightedTransformFilter& self, const std::string & arg_0) -> int {  return self.GetNumberOfGenerationsFromBase( arg_0.c_str());}))
    .function("GetMTime", &vtkWeightedTransformFilter::GetMTime)
    .function("SetWeightArray", emscripten::optional_override([](vtkWeightedTransformFilter& self, const std::string & arg_0) -> void {  return self.SetWeightArray( arg_0.c_str());}))
    .function("GetWeightArray", emscripten::optional_override([](vtkWeightedTransformFilter& self) -> std::string {  return self.GetWeightArray();}))
    .function("SetTransformIndexArray", emscripten::optional_override([](vtkWeightedTransformFilter& self, const std::string & arg_0) -> void {  return self.SetTransformIndexArray( arg_0.c_str());}))
    .function("GetTransformIndexArray", emscripten::optional_override([](vtkWeightedTransformFilter& self) -> std::string {  return self.GetTransformIndexArray();}))
    .function("SetCellDataWeightArray", emscripten::optional_override([](vtkWeightedTransformFilter& self, const std::string & arg_0) -> void {  return self.SetCellDataWeightArray( arg_0.c_str());}))
    .function("GetCellDataWeightArray", emscripten::optional_override([](vtkWeightedTransformFilter& self) -> std::string {  return self.GetCellDataWeightArray();}))
    .function("SetCellDataTransformIndexArray", emscripten::optional_override([](vtkWeightedTransformFilter& self, const std::string & arg_0) -> void {  return self.SetCellDataTransformIndexArray( arg_0.c_str());}))
    .function("GetCellDataTransformIndexArray", emscripten::optional_override([](vtkWeightedTransformFilter& self) -> std::string {  return self.GetCellDataTransformIndexArray();}))
    .function("SetTransform", &vtkWeightedTransformFilter::SetTransform, emscripten::allow_raw_pointers())
    .function("GetTransform", &vtkWeightedTransformFilter::GetTransform, emscripten::allow_raw_pointers())
    .function("SetNumberOfTransforms", &vtkWeightedTransformFilter::SetNumberOfTransforms)
    .function("GetNumberOfTransforms", &vtkWeightedTransformFilter::GetNumberOfTransforms)
    .function("AddInputValuesOn", &vtkWeightedTransformFilter::AddInputValuesOn)
    .function("AddInputValuesOff", &vtkWeightedTransformFilter::AddInputValuesOff)
    .function("SetAddInputValues", &vtkWeightedTransformFilter::SetAddInputValues)
    .function("GetAddInputValues", &vtkWeightedTransformFilter::GetAddInputValues);
}
