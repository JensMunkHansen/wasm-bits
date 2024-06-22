// JavaScript wrapper for vtkImageSinusoidSource with embind 
//
// This file was auto-generated using :
/*
node /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/bin/vtkWrapJavaScript.js \
 @/home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkImagingSources.js/vtkImagingSources.js.Release.args \
 -o \
 /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkImagingSources.js/vtkImageSinusoidSourceEmbinding.cxx \
 /home/jmh/github/vtk/Imaging/Sources/vtkImageSinusoidSource.h
*/
#include "vtkEmbindSmartPointerTrait.h"
#include <emscripten.h>
#include <string>
#include "vtkVariant.h"
#include "vtkObjectBase.h"
#include "vtkIndent.h"
#include "vtkImageSinusoidSource.h"

template<> void emscripten::internal::raw_destructor<vtkImageSinusoidSource>(vtkImageSinusoidSource * ptr){ ptr->Delete(); }
EMSCRIPTEN_BINDINGS(vtkImageSinusoidSource_class) {
  emscripten::class_<vtkImageSinusoidSource, emscripten::base<vtkImageAlgorithm>>("vtkImageSinusoidSource")
    .smart_ptr<vtkSmartPointer<vtkImageSinusoidSource>>("vtkSmartPointer<vtkImageSinusoidSource>")
    .constructor(&vtk::MakeVTKSmartPtr<vtkImageSinusoidSource>)
    .class_function("IsTypeOf", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkImageSinusoidSource::IsTypeOf( arg_0.c_str());}))
    .function("IsA", emscripten::optional_override([](vtkImageSinusoidSource& self, const std::string & arg_0) -> int {  return self.IsA( arg_0.c_str());}))
    .class_function("SafeDownCast", &vtkImageSinusoidSource::SafeDownCast, emscripten::allow_raw_pointers())
    .function("NewInstance", &vtkImageSinusoidSource::NewInstance, emscripten::allow_raw_pointers())
    .class_function("GetNumberOfGenerationsFromBaseType", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkImageSinusoidSource::GetNumberOfGenerationsFromBaseType( arg_0.c_str());}))
    .function("GetNumberOfGenerationsFromBase", emscripten::optional_override([](vtkImageSinusoidSource& self, const std::string & arg_0) -> int {  return self.GetNumberOfGenerationsFromBase( arg_0.c_str());}))
    .function("SetWholeExtent", &vtkImageSinusoidSource::SetWholeExtent)
    .function("SetDirection", emscripten::select_overload<void(vtkImageSinusoidSource&, double, double, double)>([](vtkImageSinusoidSource& self, double arg_0, double arg_1, double arg_2) -> void { return self.SetDirection( arg_0, arg_1, arg_2); }))
    .function("SetPeriod", &vtkImageSinusoidSource::SetPeriod)
    .function("GetPeriod", &vtkImageSinusoidSource::GetPeriod)
    .function("SetPhase", &vtkImageSinusoidSource::SetPhase)
    .function("GetPhase", &vtkImageSinusoidSource::GetPhase)
    .function("SetAmplitude", &vtkImageSinusoidSource::SetAmplitude)
    .function("GetAmplitude", &vtkImageSinusoidSource::GetAmplitude);
}
