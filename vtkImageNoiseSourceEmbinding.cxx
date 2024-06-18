// JavaScript wrapper for vtkImageNoiseSource with embind 
//
// This file was auto-generated using :
/*
node /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/bin/vtkWrapJavaScript.js \
 @/home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkImagingSources.js/vtkImagingSources.js.Release.args \
 -o \
 /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkImagingSources.js/vtkImageNoiseSourceEmbinding.cxx \
 /home/jmh/github/vtk/Imaging/Sources/vtkImageNoiseSource.h
*/
#include "vtkEmbindSmartPointerTrait.h"
#include <emscripten.h>
#include <string>
#include "vtkVariant.h"
#include "vtkObjectBase.h"
#include "vtkIndent.h"
#include "vtkImageNoiseSource.h"

template<> void emscripten::internal::raw_destructor<vtkImageNoiseSource>(vtkImageNoiseSource * ptr){ ptr->Delete(); }
EMSCRIPTEN_BINDINGS(vtkImageNoiseSource_class) {
  emscripten::class_<vtkImageNoiseSource, emscripten::base<vtkImageAlgorithm>>("vtkImageNoiseSource")
    .smart_ptr<vtkSmartPointer<vtkImageNoiseSource>>("vtkSmartPointer<vtkImageNoiseSource>")
    .constructor(&vtk::MakeAvtkSmartPointer<vtkImageNoiseSource>)
    .class_function("IsTypeOf", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkImageNoiseSource::IsTypeOf( arg_0.c_str());}))
    .function("IsA", emscripten::optional_override([](vtkImageNoiseSource& self, const std::string & arg_0) -> int {  return self.IsA( arg_0.c_str());}))
    .class_function("SafeDownCast", &vtkImageNoiseSource::SafeDownCast, emscripten::allow_raw_pointers())
    .function("NewInstance", &vtkImageNoiseSource::NewInstance, emscripten::allow_raw_pointers())
    .class_function("GetNumberOfGenerationsFromBaseType", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkImageNoiseSource::GetNumberOfGenerationsFromBaseType( arg_0.c_str());}))
    .function("GetNumberOfGenerationsFromBase", emscripten::optional_override([](vtkImageNoiseSource& self, const std::string & arg_0) -> int {  return self.GetNumberOfGenerationsFromBase( arg_0.c_str());}))
    .function("SetMinimum", &vtkImageNoiseSource::SetMinimum)
    .function("GetMinimum", &vtkImageNoiseSource::GetMinimum)
    .function("SetMaximum", &vtkImageNoiseSource::SetMaximum)
    .function("GetMaximum", &vtkImageNoiseSource::GetMaximum)
    .function("SetWholeExtent", emscripten::select_overload<void(vtkImageNoiseSource&, int, int, int, int, int, int)>([](vtkImageNoiseSource& self, int arg_0, int arg_1, int arg_2, int arg_3, int arg_4, int arg_5) -> void { return self.SetWholeExtent( arg_0, arg_1, arg_2, arg_3, arg_4, arg_5); }));
}
