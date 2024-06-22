// JavaScript wrapper for vtkImageGaussianSource with embind 
//
// This file was auto-generated using :
/*
node /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/bin/vtkWrapJavaScript.js \
 @/home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkImagingSources.js/vtkImagingSources.js.Release.args \
 -o \
 /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkImagingSources.js/vtkImageGaussianSourceEmbinding.cxx \
 /home/jmh/github/vtk/Imaging/Sources/vtkImageGaussianSource.h
*/
#include "vtkEmbindSmartPointerTrait.h"
#include <emscripten.h>
#include <string>
#include "vtkVariant.h"
#include "vtkObjectBase.h"
#include "vtkIndent.h"
#include "vtkImageGaussianSource.h"

template<> void emscripten::internal::raw_destructor<vtkImageGaussianSource>(vtkImageGaussianSource * ptr){ ptr->Delete(); }
EMSCRIPTEN_BINDINGS(vtkImageGaussianSource_class) {
  emscripten::class_<vtkImageGaussianSource, emscripten::base<vtkImageAlgorithm>>("vtkImageGaussianSource")
    .smart_ptr<vtkSmartPointer<vtkImageGaussianSource>>("vtkSmartPointer<vtkImageGaussianSource>")
    .constructor(&vtk::MakeAvtkSmartPointer<vtkImageGaussianSource>)
    .class_function("IsTypeOf", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkImageGaussianSource::IsTypeOf( arg_0.c_str());}))
    .function("IsA", emscripten::optional_override([](vtkImageGaussianSource& self, const std::string & arg_0) -> int {  return self.IsA( arg_0.c_str());}))
    .class_function("SafeDownCast", &vtkImageGaussianSource::SafeDownCast, emscripten::allow_raw_pointers())
    .function("NewInstance", &vtkImageGaussianSource::NewInstance, emscripten::allow_raw_pointers())
    .class_function("GetNumberOfGenerationsFromBaseType", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkImageGaussianSource::GetNumberOfGenerationsFromBaseType( arg_0.c_str());}))
    .function("GetNumberOfGenerationsFromBase", emscripten::optional_override([](vtkImageGaussianSource& self, const std::string & arg_0) -> int {  return self.GetNumberOfGenerationsFromBase( arg_0.c_str());}))
    .function("SetWholeExtent", &vtkImageGaussianSource::SetWholeExtent)
    .function("SetCenter", emscripten::select_overload<void(vtkImageGaussianSource&, double, double, double)>([](vtkImageGaussianSource& self, double arg_0, double arg_1, double arg_2) -> void { return self.SetCenter( arg_0, arg_1, arg_2); }))
    .function("SetMaximum", &vtkImageGaussianSource::SetMaximum)
    .function("GetMaximum", &vtkImageGaussianSource::GetMaximum)
    .function("SetStandardDeviation", &vtkImageGaussianSource::SetStandardDeviation)
    .function("GetStandardDeviation", &vtkImageGaussianSource::GetStandardDeviation);
}
