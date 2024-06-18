// JavaScript wrapper for vtkPointLoad with embind 
//
// This file was auto-generated using :
/*
node /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/bin/vtkWrapJavaScript.js \
 @/home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkImagingHybrid.js/vtkImagingHybrid.js.Release.args \
 -o \
 /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkImagingHybrid.js/vtkPointLoadEmbinding.cxx \
 /home/jmh/github/vtk/Imaging/Hybrid/vtkPointLoad.h
*/
#include "vtkEmbindSmartPointerTrait.h"
#include <emscripten.h>
#include <string>
#include "vtkVariant.h"
#include "vtkObjectBase.h"
#include "vtkIndent.h"
#include "vtkPointLoad.h"

template<> void emscripten::internal::raw_destructor<vtkPointLoad>(vtkPointLoad * ptr){ ptr->Delete(); }
EMSCRIPTEN_BINDINGS(vtkPointLoad_class) {
  emscripten::class_<vtkPointLoad, emscripten::base<vtkImageAlgorithm>>("vtkPointLoad")
    .smart_ptr<vtkSmartPointer<vtkPointLoad>>("vtkSmartPointer<vtkPointLoad>")
    .constructor(&vtk::MakeAvtkSmartPointer<vtkPointLoad>)
    .class_function("IsTypeOf", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkPointLoad::IsTypeOf( arg_0.c_str());}))
    .function("IsA", emscripten::optional_override([](vtkPointLoad& self, const std::string & arg_0) -> int {  return self.IsA( arg_0.c_str());}))
    .class_function("SafeDownCast", &vtkPointLoad::SafeDownCast, emscripten::allow_raw_pointers())
    .function("NewInstance", &vtkPointLoad::NewInstance, emscripten::allow_raw_pointers())
    .class_function("GetNumberOfGenerationsFromBaseType", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkPointLoad::GetNumberOfGenerationsFromBaseType( arg_0.c_str());}))
    .function("GetNumberOfGenerationsFromBase", emscripten::optional_override([](vtkPointLoad& self, const std::string & arg_0) -> int {  return self.GetNumberOfGenerationsFromBase( arg_0.c_str());}))
    .function("SetLoadValue", &vtkPointLoad::SetLoadValue)
    .function("GetLoadValue", &vtkPointLoad::GetLoadValue)
    .function("SetSampleDimensions", emscripten::select_overload<void(vtkPointLoad&, int, int, int)>([](vtkPointLoad& self, int arg_0, int arg_1, int arg_2) -> void { return self.SetSampleDimensions( arg_0, arg_1, arg_2); }))
    .function("SetModelBounds", emscripten::select_overload<void(vtkPointLoad&, double, double, double, double, double, double)>([](vtkPointLoad& self, double arg_0, double arg_1, double arg_2, double arg_3, double arg_4, double arg_5) -> void { return self.SetModelBounds( arg_0, arg_1, arg_2, arg_3, arg_4, arg_5); }))
    .function("SetPoissonsRatio", &vtkPointLoad::SetPoissonsRatio)
    .function("GetPoissonsRatio", &vtkPointLoad::GetPoissonsRatio)
    .function("SetComputeEffectiveStress", &vtkPointLoad::SetComputeEffectiveStress)
    .function("GetComputeEffectiveStress", &vtkPointLoad::GetComputeEffectiveStress)
    .function("ComputeEffectiveStressOn", &vtkPointLoad::ComputeEffectiveStressOn)
    .function("ComputeEffectiveStressOff", &vtkPointLoad::ComputeEffectiveStressOff);
}
