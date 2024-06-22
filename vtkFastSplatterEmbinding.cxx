// JavaScript wrapper for vtkFastSplatter with embind 
//
// This file was auto-generated using :
/*
node /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/bin/vtkWrapJavaScript.js \
 @/home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkImagingHybrid.js/vtkImagingHybrid.js.Release.args \
 -o \
 /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkImagingHybrid.js/vtkFastSplatterEmbinding.cxx \
 /home/jmh/github/vtk/Imaging/Hybrid/vtkFastSplatter.h
*/
#include "vtkEmbindSmartPointerTrait.h"
#include <emscripten.h>
#include <string>
#include "vtkVariant.h"
#include "vtkObjectBase.h"
#include "vtkIndent.h"
#include "vtkAlgorithmOutput.h"
#include "vtkFastSplatter.h"

template<> void emscripten::internal::raw_destructor<vtkFastSplatter>(vtkFastSplatter * ptr){ ptr->Delete(); }
EMSCRIPTEN_BINDINGS(vtkFastSplatter_class) {
  emscripten::class_<vtkFastSplatter, emscripten::base<vtkImageAlgorithm>>("vtkFastSplatter")
    .smart_ptr<vtkSmartPointer<vtkFastSplatter>>("vtkSmartPointer<vtkFastSplatter>")
    .constructor(&vtk::MakeVTKSmartPtr<vtkFastSplatter>)
    .class_function("IsTypeOf", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkFastSplatter::IsTypeOf( arg_0.c_str());}))
    .function("IsA", emscripten::optional_override([](vtkFastSplatter& self, const std::string & arg_0) -> int {  return self.IsA( arg_0.c_str());}))
    .class_function("SafeDownCast", &vtkFastSplatter::SafeDownCast, emscripten::allow_raw_pointers())
    .function("NewInstance", &vtkFastSplatter::NewInstance, emscripten::allow_raw_pointers())
    .class_function("GetNumberOfGenerationsFromBaseType", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkFastSplatter::GetNumberOfGenerationsFromBaseType( arg_0.c_str());}))
    .function("GetNumberOfGenerationsFromBase", emscripten::optional_override([](vtkFastSplatter& self, const std::string & arg_0) -> int {  return self.GetNumberOfGenerationsFromBase( arg_0.c_str());}))
    .function("SetModelBounds", emscripten::select_overload<void(vtkFastSplatter&, double, double, double, double, double, double)>([](vtkFastSplatter& self, double arg_0, double arg_1, double arg_2, double arg_3, double arg_4, double arg_5) -> void { return self.SetModelBounds( arg_0, arg_1, arg_2, arg_3, arg_4, arg_5); }))
    .function("SetOutputDimensions", emscripten::select_overload<void(vtkFastSplatter&, int, int, int)>([](vtkFastSplatter& self, int arg_0, int arg_1, int arg_2) -> void { return self.SetOutputDimensions( arg_0, arg_1, arg_2); }))
    .function("SetLimitMode", &vtkFastSplatter::SetLimitMode)
    .function("GetLimitMode", &vtkFastSplatter::GetLimitMode)
    .function("SetLimitModeToNone", &vtkFastSplatter::SetLimitModeToNone)
    .function("SetLimitModeToClamp", &vtkFastSplatter::SetLimitModeToClamp)
    .function("SetLimitModeToScale", &vtkFastSplatter::SetLimitModeToScale)
    .function("SetLimitModeToFreezeScale", &vtkFastSplatter::SetLimitModeToFreezeScale)
    .function("SetMinValue", &vtkFastSplatter::SetMinValue)
    .function("GetMinValue", &vtkFastSplatter::GetMinValue)
    .function("SetMaxValue", &vtkFastSplatter::SetMaxValue)
    .function("GetMaxValue", &vtkFastSplatter::GetMaxValue)
    .function("GetNumberOfPointsSplatted", &vtkFastSplatter::GetNumberOfPointsSplatted)
    .function("SetSplatConnection", &vtkFastSplatter::SetSplatConnection, emscripten::allow_raw_pointers());
}
EMSCRIPTEN_BINDINGS(vtkImagingHybrid_vtkFastSplatter_0_2_constants) {
  const struct { const char *name; int value; }
    constants[4] = {
      { "vtkFastSplatter_NoneLimit", vtkFastSplatter::NoneLimit },
      { "vtkFastSplatter_ClampLimit", vtkFastSplatter::ClampLimit },
      { "vtkFastSplatter_ScaleLimit", vtkFastSplatter::ScaleLimit },
      { "vtkFastSplatter_FreezeScaleLimit", vtkFastSplatter::FreezeScaleLimit },
  };
  for (int c = 0; c < 4; c++)
  {
    emscripten::constant(constants[c].name, constants[c].value);
  }
}
