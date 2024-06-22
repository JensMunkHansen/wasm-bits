// JavaScript wrapper for vtkDiscretizableColorTransferFunction with embind 
//
// This file was auto-generated using :
/*
node /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/bin/vtkWrapJavaScript.js \
 @/home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkRenderingCore.js/vtkRenderingCore.js.Release.args \
 -o \
 /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkRenderingCore.js/vtkDiscretizableColorTransferFunctionEmbinding.cxx \
 /home/jmh/github/vtk/Rendering/Core/vtkDiscretizableColorTransferFunction.h
*/
#include "vtkEmbindSmartPointerTrait.h"
#include <emscripten.h>
#include <string>
#include "vtkVariant.h"
#include "vtkObjectBase.h"
#include "vtkIndent.h"
#include "vtkAbstractArray.h"
#include "vtkUnsignedCharArray.h"
#include "vtkPiecewiseFunction.h"
#include "vtkDiscretizableColorTransferFunction.h"

template<> void emscripten::internal::raw_destructor<vtkDiscretizableColorTransferFunction>(vtkDiscretizableColorTransferFunction * ptr){ ptr->Delete(); }
EMSCRIPTEN_BINDINGS(vtkDiscretizableColorTransferFunction_class) {
  emscripten::class_<vtkDiscretizableColorTransferFunction, emscripten::base<vtkColorTransferFunction>>("vtkDiscretizableColorTransferFunction")
    .smart_ptr<vtkSmartPointer<vtkDiscretizableColorTransferFunction>>("vtkSmartPointer<vtkDiscretizableColorTransferFunction>")
    .constructor(&vtk::MakeVTKSmartPtr<vtkDiscretizableColorTransferFunction>)
    .class_function("IsTypeOf", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkDiscretizableColorTransferFunction::IsTypeOf( arg_0.c_str());}))
    .function("IsA", emscripten::optional_override([](vtkDiscretizableColorTransferFunction& self, const std::string & arg_0) -> int {  return self.IsA( arg_0.c_str());}))
    .class_function("SafeDownCast", &vtkDiscretizableColorTransferFunction::SafeDownCast, emscripten::allow_raw_pointers())
    .function("NewInstance", &vtkDiscretizableColorTransferFunction::NewInstance, emscripten::allow_raw_pointers())
    .class_function("GetNumberOfGenerationsFromBaseType", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkDiscretizableColorTransferFunction::GetNumberOfGenerationsFromBaseType( arg_0.c_str());}))
    .function("GetNumberOfGenerationsFromBase", emscripten::optional_override([](vtkDiscretizableColorTransferFunction& self, const std::string & arg_0) -> int {  return self.GetNumberOfGenerationsFromBase( arg_0.c_str());}))
    .function("IsOpaque", emscripten::select_overload<int(vtkDiscretizableColorTransferFunction&)>([](vtkDiscretizableColorTransferFunction& self) -> int { return self.IsOpaque(); }))
    .function("IsOpaque", emscripten::select_overload<int(vtkDiscretizableColorTransferFunction&, vtkAbstractArray*, int, int)>([](vtkDiscretizableColorTransferFunction& self, vtkAbstractArray* arg_0, int arg_1, int arg_2) -> int { return self.IsOpaque( arg_0, arg_1, arg_2); }), emscripten::allow_raw_pointers())
    .function("IsOpaque", emscripten::select_overload<int(vtkDiscretizableColorTransferFunction&, vtkAbstractArray*, int, int, vtkUnsignedCharArray*, unsigned char)>([](vtkDiscretizableColorTransferFunction& self, vtkAbstractArray* arg_0, int arg_1, int arg_2, vtkUnsignedCharArray* arg_3, unsigned char arg_4) -> int { return self.IsOpaque( arg_0, arg_1, arg_2, arg_3, arg_4); }), emscripten::allow_raw_pointers())
    .function("SetIndexedColor", &vtkDiscretizableColorTransferFunction::SetIndexedColor)
    .function("SetNumberOfIndexedColors", &vtkDiscretizableColorTransferFunction::SetNumberOfIndexedColors)
    .function("GetNumberOfIndexedColors", &vtkDiscretizableColorTransferFunction::GetNumberOfIndexedColors)
    .function("Build", &vtkDiscretizableColorTransferFunction::Build)
    .function("SetDiscretize", &vtkDiscretizableColorTransferFunction::SetDiscretize)
    .function("GetDiscretize", &vtkDiscretizableColorTransferFunction::GetDiscretize)
    .function("DiscretizeOn", &vtkDiscretizableColorTransferFunction::DiscretizeOn)
    .function("DiscretizeOff", &vtkDiscretizableColorTransferFunction::DiscretizeOff)
    .function("SetUseLogScale", &vtkDiscretizableColorTransferFunction::SetUseLogScale)
    .function("GetUseLogScale", &vtkDiscretizableColorTransferFunction::GetUseLogScale)
    .function("SetNumberOfValues", &vtkDiscretizableColorTransferFunction::SetNumberOfValues)
    .function("GetNumberOfValues", &vtkDiscretizableColorTransferFunction::GetNumberOfValues)
    .function("MapValue", emscripten::optional_override([](vtkDiscretizableColorTransferFunction& self, double arg_0) -> std::uintptr_t {  return reinterpret_cast<std::uintptr_t>(self.MapValue( arg_0)) / sizeof(unsigned char);}))
    .function("GetOpacity", &vtkDiscretizableColorTransferFunction::GetOpacity)
    .function("MapScalarsThroughTable2", emscripten::optional_override([](vtkDiscretizableColorTransferFunction& self, std::uintptr_t arg_0, std::uintptr_t arg_1, int arg_2, int arg_3, int arg_4, int arg_5) -> void {  return self.MapScalarsThroughTable2(reinterpret_cast<void*>(arg_0),reinterpret_cast<unsigned char*>(arg_1 * sizeof(unsigned char)), arg_2, arg_3, arg_4, arg_5);}))
    .function("SetAlpha", &vtkDiscretizableColorTransferFunction::SetAlpha)
    .function("SetNanColor", emscripten::select_overload<void(vtkDiscretizableColorTransferFunction&, double, double, double)>([](vtkDiscretizableColorTransferFunction& self, double arg_0, double arg_1, double arg_2) -> void { return self.SetNanColor( arg_0, arg_1, arg_2); }))
    .function("SetNanOpacity", &vtkDiscretizableColorTransferFunction::SetNanOpacity)
    .function("UsingLogScale", &vtkDiscretizableColorTransferFunction::UsingLogScale)
    .function("GetNumberOfAvailableColors", &vtkDiscretizableColorTransferFunction::GetNumberOfAvailableColors)
    .function("SetScalarOpacityFunction", &vtkDiscretizableColorTransferFunction::SetScalarOpacityFunction, emscripten::allow_raw_pointers())
    .function("GetScalarOpacityFunction", &vtkDiscretizableColorTransferFunction::GetScalarOpacityFunction, emscripten::allow_raw_pointers())
    .function("SetEnableOpacityMapping", &vtkDiscretizableColorTransferFunction::SetEnableOpacityMapping)
    .function("GetEnableOpacityMapping", &vtkDiscretizableColorTransferFunction::GetEnableOpacityMapping)
    .function("EnableOpacityMappingOn", &vtkDiscretizableColorTransferFunction::EnableOpacityMappingOn)
    .function("EnableOpacityMappingOff", &vtkDiscretizableColorTransferFunction::EnableOpacityMappingOff)
    .function("GetMTime", &vtkDiscretizableColorTransferFunction::GetMTime);
}
