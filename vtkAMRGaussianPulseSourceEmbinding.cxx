// JavaScript wrapper for vtkAMRGaussianPulseSource with embind 
//
// This file was auto-generated using :
/*
node /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/bin/vtkWrapJavaScript.js \
 @/home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkFiltersAMR.js/vtkFiltersAMR.js.Release.args \
 -o \
 /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkFiltersAMR.js/vtkAMRGaussianPulseSourceEmbinding.cxx \
 /home/jmh/github/vtk/Filters/AMR/vtkAMRGaussianPulseSource.h
*/
#include "vtkEmbindSmartPointerTrait.h"
#include <emscripten.h>
#include <string>
#include "vtkVariant.h"
#include "vtkObjectBase.h"
#include "vtkIndent.h"
#include "vtkAMRGaussianPulseSource.h"

template<> void emscripten::internal::raw_destructor<vtkAMRGaussianPulseSource>(vtkAMRGaussianPulseSource * ptr){ ptr->Delete(); }
EMSCRIPTEN_BINDINGS(vtkAMRGaussianPulseSource_class) {
  emscripten::class_<vtkAMRGaussianPulseSource, emscripten::base<vtkOverlappingAMRAlgorithm>>("vtkAMRGaussianPulseSource")
    .smart_ptr<vtkSmartPointer<vtkAMRGaussianPulseSource>>("vtkSmartPointer<vtkAMRGaussianPulseSource>")
    .constructor(&vtk::MakeAvtkSmartPointer<vtkAMRGaussianPulseSource>)
    .class_function("IsTypeOf", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkAMRGaussianPulseSource::IsTypeOf( arg_0.c_str());}))
    .function("IsA", emscripten::optional_override([](vtkAMRGaussianPulseSource& self, const std::string & arg_0) -> int {  return self.IsA( arg_0.c_str());}))
    .class_function("SafeDownCast", &vtkAMRGaussianPulseSource::SafeDownCast, emscripten::allow_raw_pointers())
    .function("NewInstance", &vtkAMRGaussianPulseSource::NewInstance, emscripten::allow_raw_pointers())
    .class_function("GetNumberOfGenerationsFromBaseType", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkAMRGaussianPulseSource::GetNumberOfGenerationsFromBaseType( arg_0.c_str());}))
    .function("GetNumberOfGenerationsFromBase", emscripten::optional_override([](vtkAMRGaussianPulseSource& self, const std::string & arg_0) -> int {  return self.GetNumberOfGenerationsFromBase( arg_0.c_str());}))
    .function("SetDimension", &vtkAMRGaussianPulseSource::SetDimension)
    .function("SetNumberOfLevels", &vtkAMRGaussianPulseSource::SetNumberOfLevels)
    .function("SetRefinementRatio", &vtkAMRGaussianPulseSource::SetRefinementRatio)
    .function("SetRootSpacing", &vtkAMRGaussianPulseSource::SetRootSpacing)
    .function("SetPulseOrigin", emscripten::select_overload<void(vtkAMRGaussianPulseSource&, double, double, double)>([](vtkAMRGaussianPulseSource& self, double arg_0, double arg_1, double arg_2) -> void { return self.SetPulseOrigin( arg_0, arg_1, arg_2); }))
    .function("SetXPulseOrigin", &vtkAMRGaussianPulseSource::SetXPulseOrigin)
    .function("SetYPulseOrigin", &vtkAMRGaussianPulseSource::SetYPulseOrigin)
    .function("SetZPulseOrigin", &vtkAMRGaussianPulseSource::SetZPulseOrigin)
    .function("SetPulseWidth", emscripten::select_overload<void(vtkAMRGaussianPulseSource&, double, double, double)>([](vtkAMRGaussianPulseSource& self, double arg_0, double arg_1, double arg_2) -> void { return self.SetPulseWidth( arg_0, arg_1, arg_2); }))
    .function("SetXPulseWidth", &vtkAMRGaussianPulseSource::SetXPulseWidth)
    .function("SetYPulseWidth", &vtkAMRGaussianPulseSource::SetYPulseWidth)
    .function("SetZPulseWidth", &vtkAMRGaussianPulseSource::SetZPulseWidth)
    .function("SetPulseAmplitude", &vtkAMRGaussianPulseSource::SetPulseAmplitude)
    .function("GetPulseAmplitude", &vtkAMRGaussianPulseSource::GetPulseAmplitude);
}
