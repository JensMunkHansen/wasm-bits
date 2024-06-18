// JavaScript wrapper for vtkCellSizeFilter with embind 
//
// This file was auto-generated using :
/*
node /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/bin/vtkWrapJavaScript.js \
 @/home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkFiltersVerdict.js/vtkFiltersVerdict.js.Release.args \
 -o \
 /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkFiltersVerdict.js/vtkCellSizeFilterEmbinding.cxx \
 /home/jmh/github/vtk/Filters/Verdict/vtkCellSizeFilter.h
*/
#include "vtkEmbindSmartPointerTrait.h"
#include <emscripten.h>
#include <string>
#include "vtkVariant.h"
#include "vtkObjectBase.h"
#include "vtkIndent.h"
#include "vtkCellSizeFilter.h"

template<> void emscripten::internal::raw_destructor<vtkCellSizeFilter>(vtkCellSizeFilter * ptr){ ptr->Delete(); }
EMSCRIPTEN_BINDINGS(vtkCellSizeFilter_class) {
  emscripten::class_<vtkCellSizeFilter, emscripten::base<vtkPassInputTypeAlgorithm>>("vtkCellSizeFilter")
    .smart_ptr<vtkSmartPointer<vtkCellSizeFilter>>("vtkSmartPointer<vtkCellSizeFilter>")
    .constructor(&vtk::MakeAvtkSmartPointer<vtkCellSizeFilter>)
    .class_function("IsTypeOf", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkCellSizeFilter::IsTypeOf( arg_0.c_str());}))
    .function("IsA", emscripten::optional_override([](vtkCellSizeFilter& self, const std::string & arg_0) -> int {  return self.IsA( arg_0.c_str());}))
    .class_function("SafeDownCast", &vtkCellSizeFilter::SafeDownCast, emscripten::allow_raw_pointers())
    .function("NewInstance", &vtkCellSizeFilter::NewInstance, emscripten::allow_raw_pointers())
    .class_function("GetNumberOfGenerationsFromBaseType", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkCellSizeFilter::GetNumberOfGenerationsFromBaseType( arg_0.c_str());}))
    .function("GetNumberOfGenerationsFromBase", emscripten::optional_override([](vtkCellSizeFilter& self, const std::string & arg_0) -> int {  return self.GetNumberOfGenerationsFromBase( arg_0.c_str());}))
    .function("SetComputeVertexCount", &vtkCellSizeFilter::SetComputeVertexCount)
    .function("GetComputeVertexCount", &vtkCellSizeFilter::GetComputeVertexCount)
    .function("ComputeVertexCountOn", &vtkCellSizeFilter::ComputeVertexCountOn)
    .function("ComputeVertexCountOff", &vtkCellSizeFilter::ComputeVertexCountOff)
    .function("SetComputeLength", &vtkCellSizeFilter::SetComputeLength)
    .function("GetComputeLength", &vtkCellSizeFilter::GetComputeLength)
    .function("ComputeLengthOn", &vtkCellSizeFilter::ComputeLengthOn)
    .function("ComputeLengthOff", &vtkCellSizeFilter::ComputeLengthOff)
    .function("SetComputeArea", &vtkCellSizeFilter::SetComputeArea)
    .function("GetComputeArea", &vtkCellSizeFilter::GetComputeArea)
    .function("ComputeAreaOn", &vtkCellSizeFilter::ComputeAreaOn)
    .function("ComputeAreaOff", &vtkCellSizeFilter::ComputeAreaOff)
    .function("SetComputeVolume", &vtkCellSizeFilter::SetComputeVolume)
    .function("GetComputeVolume", &vtkCellSizeFilter::GetComputeVolume)
    .function("ComputeVolumeOn", &vtkCellSizeFilter::ComputeVolumeOn)
    .function("ComputeVolumeOff", &vtkCellSizeFilter::ComputeVolumeOff)
    .function("SetComputeSum", &vtkCellSizeFilter::SetComputeSum)
    .function("GetComputeSum", &vtkCellSizeFilter::GetComputeSum)
    .function("ComputeSumOn", &vtkCellSizeFilter::ComputeSumOn)
    .function("ComputeSumOff", &vtkCellSizeFilter::ComputeSumOff)
    .function("SetVertexCountArrayName", emscripten::optional_override([](vtkCellSizeFilter& self, const std::string & arg_0) -> void {  return self.SetVertexCountArrayName( arg_0.c_str());}))
    .function("GetVertexCountArrayName", emscripten::optional_override([](vtkCellSizeFilter& self) -> std::string {  return self.GetVertexCountArrayName();}))
    .function("SetLengthArrayName", emscripten::optional_override([](vtkCellSizeFilter& self, const std::string & arg_0) -> void {  return self.SetLengthArrayName( arg_0.c_str());}))
    .function("GetLengthArrayName", emscripten::optional_override([](vtkCellSizeFilter& self) -> std::string {  return self.GetLengthArrayName();}))
    .function("SetAreaArrayName", emscripten::optional_override([](vtkCellSizeFilter& self, const std::string & arg_0) -> void {  return self.SetAreaArrayName( arg_0.c_str());}))
    .function("GetAreaArrayName", emscripten::optional_override([](vtkCellSizeFilter& self) -> std::string {  return self.GetAreaArrayName();}))
    .function("SetVolumeArrayName", emscripten::optional_override([](vtkCellSizeFilter& self, const std::string & arg_0) -> void {  return self.SetVolumeArrayName( arg_0.c_str());}))
    .function("GetVolumeArrayName", emscripten::optional_override([](vtkCellSizeFilter& self) -> std::string {  return self.GetVolumeArrayName();}));
}
