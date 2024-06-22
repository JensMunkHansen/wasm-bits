// JavaScript wrapper for vtkTreeFieldAggregator with embind 
//
// This file was auto-generated using :
/*
node /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/bin/vtkWrapJavaScript.js \
 @/home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkInfovisCore.js/vtkInfovisCore.js.Release.args \
 -o \
 /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkInfovisCore.js/vtkTreeFieldAggregatorEmbinding.cxx \
 /home/jmh/github/vtk/Infovis/Core/vtkTreeFieldAggregator.h
*/
#include "vtkEmbindSmartPointerTrait.h"
#include <emscripten.h>
#include <string>
#include "vtkVariant.h"
#include "vtkObjectBase.h"
#include "vtkIndent.h"
#include "vtkTreeFieldAggregator.h"

template<> void emscripten::internal::raw_destructor<vtkTreeFieldAggregator>(vtkTreeFieldAggregator * ptr){ ptr->Delete(); }
EMSCRIPTEN_BINDINGS(vtkTreeFieldAggregator_class) {
  emscripten::class_<vtkTreeFieldAggregator, emscripten::base<vtkTreeAlgorithm>>("vtkTreeFieldAggregator")
    .smart_ptr<vtkSmartPointer<vtkTreeFieldAggregator>>("vtkSmartPointer<vtkTreeFieldAggregator>")
    .constructor(&vtk::MakeVTKSmartPtr<vtkTreeFieldAggregator>)
    .class_function("IsTypeOf", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkTreeFieldAggregator::IsTypeOf( arg_0.c_str());}))
    .function("IsA", emscripten::optional_override([](vtkTreeFieldAggregator& self, const std::string & arg_0) -> int {  return self.IsA( arg_0.c_str());}))
    .class_function("SafeDownCast", &vtkTreeFieldAggregator::SafeDownCast, emscripten::allow_raw_pointers())
    .function("NewInstance", &vtkTreeFieldAggregator::NewInstance, emscripten::allow_raw_pointers())
    .class_function("GetNumberOfGenerationsFromBaseType", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkTreeFieldAggregator::GetNumberOfGenerationsFromBaseType( arg_0.c_str());}))
    .function("GetNumberOfGenerationsFromBase", emscripten::optional_override([](vtkTreeFieldAggregator& self, const std::string & arg_0) -> int {  return self.GetNumberOfGenerationsFromBase( arg_0.c_str());}))
    .function("GetField", emscripten::optional_override([](vtkTreeFieldAggregator& self) -> std::string {  return self.GetField();}))
    .function("SetField", emscripten::optional_override([](vtkTreeFieldAggregator& self, const std::string & arg_0) -> void {  return self.SetField( arg_0.c_str());}))
    .function("GetMinValue", &vtkTreeFieldAggregator::GetMinValue)
    .function("SetMinValue", &vtkTreeFieldAggregator::SetMinValue)
    .function("SetLeafVertexUnitSize", &vtkTreeFieldAggregator::SetLeafVertexUnitSize)
    .function("GetLeafVertexUnitSize", &vtkTreeFieldAggregator::GetLeafVertexUnitSize)
    .function("LeafVertexUnitSizeOn", &vtkTreeFieldAggregator::LeafVertexUnitSizeOn)
    .function("LeafVertexUnitSizeOff", &vtkTreeFieldAggregator::LeafVertexUnitSizeOff)
    .function("SetLogScale", &vtkTreeFieldAggregator::SetLogScale)
    .function("GetLogScale", &vtkTreeFieldAggregator::GetLogScale)
    .function("LogScaleOn", &vtkTreeFieldAggregator::LogScaleOn)
    .function("LogScaleOff", &vtkTreeFieldAggregator::LogScaleOff);
}
