// JavaScript wrapper for vtkShepardMethod with embind 
//
// This file was auto-generated using :
/*
node /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/bin/vtkWrapJavaScript.js \
 @/home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkImagingHybrid.js/vtkImagingHybrid.js.Release.args \
 -o \
 /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkImagingHybrid.js/vtkShepardMethodEmbinding.cxx \
 /home/jmh/github/vtk/Imaging/Hybrid/vtkShepardMethod.h
*/
#include "vtkEmbindSmartPointerTrait.h"
#include <emscripten.h>
#include <string>
#include "vtkVariant.h"
#include "vtkObjectBase.h"
#include "vtkIndent.h"
#include "vtkShepardMethod.h"

template<> void emscripten::internal::raw_destructor<vtkShepardMethod>(vtkShepardMethod * ptr){ ptr->Delete(); }
EMSCRIPTEN_BINDINGS(vtkShepardMethod_class) {
  emscripten::class_<vtkShepardMethod, emscripten::base<vtkImageAlgorithm>>("vtkShepardMethod")
    .smart_ptr<vtkSmartPointer<vtkShepardMethod>>("vtkSmartPointer<vtkShepardMethod>")
    .constructor(&vtk::MakeAvtkSmartPointer<vtkShepardMethod>)
    .class_function("IsTypeOf", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkShepardMethod::IsTypeOf( arg_0.c_str());}))
    .function("IsA", emscripten::optional_override([](vtkShepardMethod& self, const std::string & arg_0) -> int {  return self.IsA( arg_0.c_str());}))
    .class_function("SafeDownCast", &vtkShepardMethod::SafeDownCast, emscripten::allow_raw_pointers())
    .function("NewInstance", &vtkShepardMethod::NewInstance, emscripten::allow_raw_pointers())
    .class_function("GetNumberOfGenerationsFromBaseType", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkShepardMethod::GetNumberOfGenerationsFromBaseType( arg_0.c_str());}))
    .function("GetNumberOfGenerationsFromBase", emscripten::optional_override([](vtkShepardMethod& self, const std::string & arg_0) -> int {  return self.GetNumberOfGenerationsFromBase( arg_0.c_str());}))
    .function("SetSampleDimensions", emscripten::select_overload<void(vtkShepardMethod&, int, int, int)>([](vtkShepardMethod& self, int arg_0, int arg_1, int arg_2) -> void { return self.SetSampleDimensions( arg_0, arg_1, arg_2); }))
    .function("SetMaximumDistance", &vtkShepardMethod::SetMaximumDistance)
    .function("GetMaximumDistanceMinValue", &vtkShepardMethod::GetMaximumDistanceMinValue)
    .function("GetMaximumDistanceMaxValue", &vtkShepardMethod::GetMaximumDistanceMaxValue)
    .function("GetMaximumDistance", &vtkShepardMethod::GetMaximumDistance)
    .function("SetNullValue", &vtkShepardMethod::SetNullValue)
    .function("GetNullValue", &vtkShepardMethod::GetNullValue)
    .function("SetModelBounds", emscripten::select_overload<void(vtkShepardMethod&, double, double, double, double, double, double)>([](vtkShepardMethod& self, double arg_0, double arg_1, double arg_2, double arg_3, double arg_4, double arg_5) -> void { return self.SetModelBounds( arg_0, arg_1, arg_2, arg_3, arg_4, arg_5); }))
    .function("SetPowerParameter", &vtkShepardMethod::SetPowerParameter)
    .function("GetPowerParameterMinValue", &vtkShepardMethod::GetPowerParameterMinValue)
    .function("GetPowerParameterMaxValue", &vtkShepardMethod::GetPowerParameterMaxValue)
    .function("GetPowerParameter", &vtkShepardMethod::GetPowerParameter);
}
