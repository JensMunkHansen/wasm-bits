// JavaScript wrapper for vtkImageQuantizeRGBToIndex with embind 
//
// This file was auto-generated using :
/*
node /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/bin/vtkWrapJavaScript.js \
 @/home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkImagingColor.js/vtkImagingColor.js.Release.args \
 -o \
 /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkImagingColor.js/vtkImageQuantizeRGBToIndexEmbinding.cxx \
 /home/jmh/github/vtk/Imaging/Color/vtkImageQuantizeRGBToIndex.h
*/
#include "vtkEmbindSmartPointerTrait.h"
#include <emscripten.h>
#include <string>
#include "vtkVariant.h"
#include "vtkObjectBase.h"
#include "vtkIndent.h"
#include "vtkLookupTable.h"
#include "vtkImageQuantizeRGBToIndex.h"

template<> void emscripten::internal::raw_destructor<vtkImageQuantizeRGBToIndex>(vtkImageQuantizeRGBToIndex * ptr){ ptr->Delete(); }
EMSCRIPTEN_BINDINGS(vtkImageQuantizeRGBToIndex_class) {
  emscripten::class_<vtkImageQuantizeRGBToIndex, emscripten::base<vtkImageAlgorithm>>("vtkImageQuantizeRGBToIndex")
    .smart_ptr<vtkSmartPointer<vtkImageQuantizeRGBToIndex>>("vtkSmartPointer<vtkImageQuantizeRGBToIndex>")
    .constructor(&vtk::MakeVTKSmartPtr<vtkImageQuantizeRGBToIndex>)
    .class_function("IsTypeOf", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkImageQuantizeRGBToIndex::IsTypeOf( arg_0.c_str());}))
    .function("IsA", emscripten::optional_override([](vtkImageQuantizeRGBToIndex& self, const std::string & arg_0) -> int {  return self.IsA( arg_0.c_str());}))
    .class_function("SafeDownCast", &vtkImageQuantizeRGBToIndex::SafeDownCast, emscripten::allow_raw_pointers())
    .function("NewInstance", &vtkImageQuantizeRGBToIndex::NewInstance, emscripten::allow_raw_pointers())
    .class_function("GetNumberOfGenerationsFromBaseType", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkImageQuantizeRGBToIndex::GetNumberOfGenerationsFromBaseType( arg_0.c_str());}))
    .function("GetNumberOfGenerationsFromBase", emscripten::optional_override([](vtkImageQuantizeRGBToIndex& self, const std::string & arg_0) -> int {  return self.GetNumberOfGenerationsFromBase( arg_0.c_str());}))
    .function("SetNumberOfColors", &vtkImageQuantizeRGBToIndex::SetNumberOfColors)
    .function("GetNumberOfColorsMinValue", &vtkImageQuantizeRGBToIndex::GetNumberOfColorsMinValue)
    .function("GetNumberOfColorsMaxValue", &vtkImageQuantizeRGBToIndex::GetNumberOfColorsMaxValue)
    .function("GetNumberOfColors", &vtkImageQuantizeRGBToIndex::GetNumberOfColors)
    .function("SetSamplingRate", emscripten::select_overload<void(vtkImageQuantizeRGBToIndex&, int, int, int)>([](vtkImageQuantizeRGBToIndex& self, int arg_0, int arg_1, int arg_2) -> void { return self.SetSamplingRate( arg_0, arg_1, arg_2); }))
    .function("SetSortIndexByLuminance", &vtkImageQuantizeRGBToIndex::SetSortIndexByLuminance)
    .function("GetSortIndexByLuminance", &vtkImageQuantizeRGBToIndex::GetSortIndexByLuminance)
    .function("SortIndexByLuminanceOn", &vtkImageQuantizeRGBToIndex::SortIndexByLuminanceOn)
    .function("SortIndexByLuminanceOff", &vtkImageQuantizeRGBToIndex::SortIndexByLuminanceOff)
    .function("GetLookupTable", &vtkImageQuantizeRGBToIndex::GetLookupTable, emscripten::allow_raw_pointers())
    .function("GetInitializeExecuteTime", &vtkImageQuantizeRGBToIndex::GetInitializeExecuteTime)
    .function("GetBuildTreeExecuteTime", &vtkImageQuantizeRGBToIndex::GetBuildTreeExecuteTime)
    .function("GetLookupIndexExecuteTime", &vtkImageQuantizeRGBToIndex::GetLookupIndexExecuteTime)
    .function("GetInputType", &vtkImageQuantizeRGBToIndex::GetInputType)
    .function("SetInitializeExecuteTime", &vtkImageQuantizeRGBToIndex::SetInitializeExecuteTime)
    .function("SetBuildTreeExecuteTime", &vtkImageQuantizeRGBToIndex::SetBuildTreeExecuteTime)
    .function("SetLookupIndexExecuteTime", &vtkImageQuantizeRGBToIndex::SetLookupIndexExecuteTime);
}
