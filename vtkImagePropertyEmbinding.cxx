// JavaScript wrapper for vtkImageProperty with embind 
//
// This file was auto-generated using :
/*
node /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/bin/vtkWrapJavaScript.js \
 @/home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkRenderingCore.js/vtkRenderingCore.js.Release.args \
 -o \
 /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkRenderingCore.js/vtkImagePropertyEmbinding.cxx \
 /home/jmh/github/vtk/Rendering/Core/vtkImageProperty.h
*/
#include "vtkEmbindSmartPointerTrait.h"
#include <emscripten.h>
#include <string>
#include "vtkVariant.h"
#include "vtkObjectBase.h"
#include "vtkIndent.h"
#include "vtkScalarsToColors.h"
#include "vtkImageProperty.h"

template<> void emscripten::internal::raw_destructor<vtkImageProperty>(vtkImageProperty * ptr){ ptr->Delete(); }
EMSCRIPTEN_BINDINGS(vtkImageProperty_class) {
  emscripten::class_<vtkImageProperty, emscripten::base<vtkObject>>("vtkImageProperty")
    .smart_ptr<vtkSmartPointer<vtkImageProperty>>("vtkSmartPointer<vtkImageProperty>")
    .constructor(&vtk::MakeVTKSmartPtr<vtkImageProperty>)
    .class_function("IsTypeOf", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkImageProperty::IsTypeOf( arg_0.c_str());}))
    .function("IsA", emscripten::optional_override([](vtkImageProperty& self, const std::string & arg_0) -> int {  return self.IsA( arg_0.c_str());}))
    .class_function("SafeDownCast", &vtkImageProperty::SafeDownCast, emscripten::allow_raw_pointers())
    .function("NewInstance", &vtkImageProperty::NewInstance, emscripten::allow_raw_pointers())
    .class_function("GetNumberOfGenerationsFromBaseType", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkImageProperty::GetNumberOfGenerationsFromBaseType( arg_0.c_str());}))
    .function("GetNumberOfGenerationsFromBase", emscripten::optional_override([](vtkImageProperty& self, const std::string & arg_0) -> int {  return self.GetNumberOfGenerationsFromBase( arg_0.c_str());}))
    .function("DeepCopy", &vtkImageProperty::DeepCopy, emscripten::allow_raw_pointers())
    .function("SetColorWindow", &vtkImageProperty::SetColorWindow)
    .function("GetColorWindow", &vtkImageProperty::GetColorWindow)
    .function("SetColorLevel", &vtkImageProperty::SetColorLevel)
    .function("GetColorLevel", &vtkImageProperty::GetColorLevel)
    .function("SetLookupTable", &vtkImageProperty::SetLookupTable, emscripten::allow_raw_pointers())
    .function("GetLookupTable", &vtkImageProperty::GetLookupTable, emscripten::allow_raw_pointers())
    .function("SetUseLookupTableScalarRange", &vtkImageProperty::SetUseLookupTableScalarRange)
    .function("GetUseLookupTableScalarRange", &vtkImageProperty::GetUseLookupTableScalarRange)
    .function("UseLookupTableScalarRangeOn", &vtkImageProperty::UseLookupTableScalarRangeOn)
    .function("UseLookupTableScalarRangeOff", &vtkImageProperty::UseLookupTableScalarRangeOff)
    .function("SetOpacity", &vtkImageProperty::SetOpacity)
    .function("GetOpacityMinValue", &vtkImageProperty::GetOpacityMinValue)
    .function("GetOpacityMaxValue", &vtkImageProperty::GetOpacityMaxValue)
    .function("GetOpacity", &vtkImageProperty::GetOpacity)
    .function("SetAmbient", &vtkImageProperty::SetAmbient)
    .function("GetAmbientMinValue", &vtkImageProperty::GetAmbientMinValue)
    .function("GetAmbientMaxValue", &vtkImageProperty::GetAmbientMaxValue)
    .function("GetAmbient", &vtkImageProperty::GetAmbient)
    .function("SetDiffuse", &vtkImageProperty::SetDiffuse)
    .function("GetDiffuseMinValue", &vtkImageProperty::GetDiffuseMinValue)
    .function("GetDiffuseMaxValue", &vtkImageProperty::GetDiffuseMaxValue)
    .function("GetDiffuse", &vtkImageProperty::GetDiffuse)
    .function("SetInterpolationType", &vtkImageProperty::SetInterpolationType)
    .function("GetInterpolationTypeMinValue", &vtkImageProperty::GetInterpolationTypeMinValue)
    .function("GetInterpolationTypeMaxValue", &vtkImageProperty::GetInterpolationTypeMaxValue)
    .function("GetInterpolationType", &vtkImageProperty::GetInterpolationType)
    .function("SetInterpolationTypeToNearest", &vtkImageProperty::SetInterpolationTypeToNearest)
    .function("SetInterpolationTypeToLinear", &vtkImageProperty::SetInterpolationTypeToLinear)
    .function("SetInterpolationTypeToCubic", &vtkImageProperty::SetInterpolationTypeToCubic)
    .function("GetInterpolationTypeAsString", emscripten::optional_override([](vtkImageProperty& self) -> std::string {  return self.GetInterpolationTypeAsString();}))
    .function("SetLayerNumber", &vtkImageProperty::SetLayerNumber)
    .function("GetLayerNumber", &vtkImageProperty::GetLayerNumber)
    .function("SetCheckerboard", &vtkImageProperty::SetCheckerboard)
    .function("CheckerboardOn", &vtkImageProperty::CheckerboardOn)
    .function("CheckerboardOff", &vtkImageProperty::CheckerboardOff)
    .function("GetCheckerboard", &vtkImageProperty::GetCheckerboard)
    .function("SetCheckerboardSpacing", emscripten::select_overload<void(vtkImageProperty&, double, double)>([](vtkImageProperty& self, double arg_0, double arg_1) -> void { return self.SetCheckerboardSpacing( arg_0, arg_1); }))
    .function("SetCheckerboardOffset", emscripten::select_overload<void(vtkImageProperty&, double, double)>([](vtkImageProperty& self, double arg_0, double arg_1) -> void { return self.SetCheckerboardOffset( arg_0, arg_1); }))
    .function("SetBacking", &vtkImageProperty::SetBacking)
    .function("BackingOn", &vtkImageProperty::BackingOn)
    .function("BackingOff", &vtkImageProperty::BackingOff)
    .function("GetBacking", &vtkImageProperty::GetBacking)
    .function("SetBackingColor", emscripten::select_overload<void(vtkImageProperty&, double, double, double)>([](vtkImageProperty& self, double arg_0, double arg_1, double arg_2) -> void { return self.SetBackingColor( arg_0, arg_1, arg_2); }))
    .function("GetMTime", &vtkImageProperty::GetMTime);
}
