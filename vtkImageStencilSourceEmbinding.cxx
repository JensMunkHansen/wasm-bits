// JavaScript wrapper for vtkImageStencilSource with embind 
//
// This file was auto-generated using :
/*
node /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/bin/vtkWrapJavaScript.js \
 @/home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkImagingCore.js/vtkImagingCore.js.Release.args \
 -o \
 /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkImagingCore.js/vtkImageStencilSourceEmbinding.cxx \
 /home/jmh/github/vtk/Imaging/Core/vtkImageStencilSource.h
*/
#include "vtkEmbindSmartPointerTrait.h"
#include <emscripten.h>
#include <string>
#include "vtkVariant.h"
#include "vtkObjectBase.h"
#include "vtkIndent.h"
#include "vtkImageData.h"
#include "vtkGarbageCollector.h"
#include "vtkImageStencilSource.h"

template<> void emscripten::internal::raw_destructor<vtkImageStencilSource>(vtkImageStencilSource * ptr){ ptr->Delete(); }
EMSCRIPTEN_BINDINGS(vtkImageStencilSource_class) {
  emscripten::class_<vtkImageStencilSource, emscripten::base<vtkImageStencilAlgorithm>>("vtkImageStencilSource")
    .smart_ptr<vtkSmartPointer<vtkImageStencilSource>>("vtkSmartPointer<vtkImageStencilSource>")
    .constructor(&vtk::MakeAvtkSmartPointer<vtkImageStencilSource>)
    .class_function("IsTypeOf", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkImageStencilSource::IsTypeOf( arg_0.c_str());}))
    .function("IsA", emscripten::optional_override([](vtkImageStencilSource& self, const std::string & arg_0) -> int {  return self.IsA( arg_0.c_str());}))
    .class_function("SafeDownCast", &vtkImageStencilSource::SafeDownCast, emscripten::allow_raw_pointers())
    .function("NewInstance", &vtkImageStencilSource::NewInstance, emscripten::allow_raw_pointers())
    .class_function("GetNumberOfGenerationsFromBaseType", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkImageStencilSource::GetNumberOfGenerationsFromBaseType( arg_0.c_str());}))
    .function("GetNumberOfGenerationsFromBase", emscripten::optional_override([](vtkImageStencilSource& self, const std::string & arg_0) -> int {  return self.GetNumberOfGenerationsFromBase( arg_0.c_str());}))
    .function("SetInformationInput", &vtkImageStencilSource::SetInformationInput, emscripten::allow_raw_pointers())
    .function("GetInformationInput", &vtkImageStencilSource::GetInformationInput, emscripten::allow_raw_pointers())
    .function("SetOutputOrigin", emscripten::select_overload<void(vtkImageStencilSource&, double, double, double)>([](vtkImageStencilSource& self, double arg_0, double arg_1, double arg_2) -> void { return self.SetOutputOrigin( arg_0, arg_1, arg_2); }))
    .function("SetOutputSpacing", emscripten::select_overload<void(vtkImageStencilSource&, double, double, double)>([](vtkImageStencilSource& self, double arg_0, double arg_1, double arg_2) -> void { return self.SetOutputSpacing( arg_0, arg_1, arg_2); }))
    .function("SetOutputWholeExtent", emscripten::select_overload<void(vtkImageStencilSource&, int, int, int, int, int, int)>([](vtkImageStencilSource& self, int arg_0, int arg_1, int arg_2, int arg_3, int arg_4, int arg_5) -> void { return self.SetOutputWholeExtent( arg_0, arg_1, arg_2, arg_3, arg_4, arg_5); }))
    .function("ReportReferences", &vtkImageStencilSource::ReportReferences, emscripten::allow_raw_pointers());
}
