// JavaScript wrapper for vtkImageMask with embind 
//
// This file was auto-generated using :
/*
node /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/bin/vtkWrapJavaScript.js \
 @/home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkImagingCore.js/vtkImagingCore.js.Release.args \
 -o \
 /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkImagingCore.js/vtkImageMaskEmbinding.cxx \
 /home/jmh/github/vtk/Imaging/Core/vtkImageMask.h
*/
#include "vtkEmbindSmartPointerTrait.h"
#include <emscripten.h>
#include <string>
#include "vtkVariant.h"
#include "vtkObjectBase.h"
#include "vtkIndent.h"
#include "vtkImageData.h"
#include "vtkDataObject.h"
#include "vtkImageMask.h"

template<> void emscripten::internal::raw_destructor<vtkImageMask>(vtkImageMask * ptr){ ptr->Delete(); }
EMSCRIPTEN_BINDINGS(vtkImageMask_class) {
  emscripten::class_<vtkImageMask, emscripten::base<vtkThreadedImageAlgorithm>>("vtkImageMask")
    .smart_ptr<vtkSmartPointer<vtkImageMask>>("vtkSmartPointer<vtkImageMask>")
    .constructor(&vtk::MakeVTKSmartPtr<vtkImageMask>)
    .class_function("IsTypeOf", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkImageMask::IsTypeOf( arg_0.c_str());}))
    .function("IsA", emscripten::optional_override([](vtkImageMask& self, const std::string & arg_0) -> int {  return self.IsA( arg_0.c_str());}))
    .class_function("SafeDownCast", &vtkImageMask::SafeDownCast, emscripten::allow_raw_pointers())
    .function("NewInstance", &vtkImageMask::NewInstance, emscripten::allow_raw_pointers())
    .class_function("GetNumberOfGenerationsFromBaseType", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkImageMask::GetNumberOfGenerationsFromBaseType( arg_0.c_str());}))
    .function("GetNumberOfGenerationsFromBase", emscripten::optional_override([](vtkImageMask& self, const std::string & arg_0) -> int {  return self.GetNumberOfGenerationsFromBase( arg_0.c_str());}))
    .function("SetMaskedOutputValue", emscripten::select_overload<void(vtkImageMask&, int, std::uintptr_t)>([](vtkImageMask& self, int arg_0, std::uintptr_t arg_1) -> void { return self.SetMaskedOutputValue( arg_0,reinterpret_cast<double*>(arg_1 * sizeof(double))); }))
    .function("SetMaskedOutputValue", emscripten::select_overload<void(vtkImageMask&, double, double)>([](vtkImageMask& self, double arg_0, double arg_1) -> void { return self.SetMaskedOutputValue( arg_0, arg_1); }))
    .function("SetMaskedOutputValue", emscripten::select_overload<void(vtkImageMask&, double)>([](vtkImageMask& self, double arg_0) -> void { return self.SetMaskedOutputValue( arg_0); }))
    .function("SetMaskedOutputValue", emscripten::select_overload<void(vtkImageMask&, double, double, double)>([](vtkImageMask& self, double arg_0, double arg_1, double arg_2) -> void { return self.SetMaskedOutputValue( arg_0, arg_1, arg_2); }))
    .function("GetMaskedOutputValue", emscripten::optional_override([](vtkImageMask& self) -> std::uintptr_t {  return reinterpret_cast<std::uintptr_t>(self.GetMaskedOutputValue()) / sizeof(double);}))
    .function("GetMaskedOutputValueLength", &vtkImageMask::GetMaskedOutputValueLength)
    .function("SetMaskAlpha", &vtkImageMask::SetMaskAlpha)
    .function("GetMaskAlphaMinValue", &vtkImageMask::GetMaskAlphaMinValue)
    .function("GetMaskAlphaMaxValue", &vtkImageMask::GetMaskAlphaMaxValue)
    .function("GetMaskAlpha", &vtkImageMask::GetMaskAlpha)
    .function("SetImageInputData", &vtkImageMask::SetImageInputData, emscripten::allow_raw_pointers())
    .function("SetMaskInputData", &vtkImageMask::SetMaskInputData, emscripten::allow_raw_pointers())
    .function("SetNotMask", &vtkImageMask::SetNotMask)
    .function("GetNotMask", &vtkImageMask::GetNotMask)
    .function("NotMaskOn", &vtkImageMask::NotMaskOn)
    .function("NotMaskOff", &vtkImageMask::NotMaskOff)
    .function("SetInput1Data", &vtkImageMask::SetInput1Data, emscripten::allow_raw_pointers())
    .function("SetInput2Data", &vtkImageMask::SetInput2Data, emscripten::allow_raw_pointers());
}
