// JavaScript wrapper for vtkImageAccumulate with embind 
//
// This file was auto-generated using :
/*
node /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/bin/vtkWrapJavaScript.js \
 @/home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkImagingStatistics.js/vtkImagingStatistics.js.Release.args \
 -o \
 /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkImagingStatistics.js/vtkImageAccumulateEmbinding.cxx \
 /home/jmh/github/vtk/Imaging/Statistics/vtkImageAccumulate.h
*/
#include "vtkEmbindSmartPointerTrait.h"
#include <emscripten.h>
#include <string>
#include "vtkVariant.h"
#include "vtkObjectBase.h"
#include "vtkIndent.h"
#include "vtkImageStencilData.h"
#include "vtkImageAccumulate.h"

template<> void emscripten::internal::raw_destructor<vtkImageAccumulate>(vtkImageAccumulate * ptr){ ptr->Delete(); }
EMSCRIPTEN_BINDINGS(vtkImageAccumulate_class) {
  emscripten::class_<vtkImageAccumulate, emscripten::base<vtkImageAlgorithm>>("vtkImageAccumulate")
    .smart_ptr<vtkSmartPointer<vtkImageAccumulate>>("vtkSmartPointer<vtkImageAccumulate>")
    .constructor(&vtk::MakeVTKSmartPtr<vtkImageAccumulate>)
    .class_function("IsTypeOf", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkImageAccumulate::IsTypeOf( arg_0.c_str());}))
    .function("IsA", emscripten::optional_override([](vtkImageAccumulate& self, const std::string & arg_0) -> int {  return self.IsA( arg_0.c_str());}))
    .class_function("SafeDownCast", &vtkImageAccumulate::SafeDownCast, emscripten::allow_raw_pointers())
    .function("NewInstance", &vtkImageAccumulate::NewInstance, emscripten::allow_raw_pointers())
    .class_function("GetNumberOfGenerationsFromBaseType", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkImageAccumulate::GetNumberOfGenerationsFromBaseType( arg_0.c_str());}))
    .function("GetNumberOfGenerationsFromBase", emscripten::optional_override([](vtkImageAccumulate& self, const std::string & arg_0) -> int {  return self.GetNumberOfGenerationsFromBase( arg_0.c_str());}))
    .function("SetComponentSpacing", emscripten::select_overload<void(vtkImageAccumulate&, double, double, double)>([](vtkImageAccumulate& self, double arg_0, double arg_1, double arg_2) -> void { return self.SetComponentSpacing( arg_0, arg_1, arg_2); }))
    .function("SetComponentOrigin", emscripten::select_overload<void(vtkImageAccumulate&, double, double, double)>([](vtkImageAccumulate& self, double arg_0, double arg_1, double arg_2) -> void { return self.SetComponentOrigin( arg_0, arg_1, arg_2); }))
    .function("SetComponentExtent", emscripten::select_overload<void(vtkImageAccumulate&, int, int, int, int, int, int)>([](vtkImageAccumulate& self, int arg_0, int arg_1, int arg_2, int arg_3, int arg_4, int arg_5) -> void { return self.SetComponentExtent( arg_0, arg_1, arg_2, arg_3, arg_4, arg_5); }))
    .function("SetStencilData", &vtkImageAccumulate::SetStencilData, emscripten::allow_raw_pointers())
    .function("GetStencil", &vtkImageAccumulate::GetStencil, emscripten::allow_raw_pointers())
    .function("SetReverseStencil", &vtkImageAccumulate::SetReverseStencil)
    .function("GetReverseStencilMinValue", &vtkImageAccumulate::GetReverseStencilMinValue)
    .function("GetReverseStencilMaxValue", &vtkImageAccumulate::GetReverseStencilMaxValue)
    .function("ReverseStencilOn", &vtkImageAccumulate::ReverseStencilOn)
    .function("ReverseStencilOff", &vtkImageAccumulate::ReverseStencilOff)
    .function("GetReverseStencil", &vtkImageAccumulate::GetReverseStencil)
    .function("GetVoxelCount", &vtkImageAccumulate::GetVoxelCount)
    .function("SetIgnoreZero", &vtkImageAccumulate::SetIgnoreZero)
    .function("GetIgnoreZeroMinValue", &vtkImageAccumulate::GetIgnoreZeroMinValue)
    .function("GetIgnoreZeroMaxValue", &vtkImageAccumulate::GetIgnoreZeroMaxValue)
    .function("GetIgnoreZero", &vtkImageAccumulate::GetIgnoreZero)
    .function("IgnoreZeroOn", &vtkImageAccumulate::IgnoreZeroOn)
    .function("IgnoreZeroOff", &vtkImageAccumulate::IgnoreZeroOff);
}
