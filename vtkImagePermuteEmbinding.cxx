// JavaScript wrapper for vtkImagePermute with embind 
//
// This file was auto-generated using :
/*
node /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/bin/vtkWrapJavaScript.js \
 @/home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkImagingCore.js/vtkImagingCore.js.Release.args \
 -o \
 /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkImagingCore.js/vtkImagePermuteEmbinding.cxx \
 /home/jmh/github/vtk/Imaging/Core/vtkImagePermute.h
*/
#include "vtkEmbindSmartPointerTrait.h"
#include <emscripten.h>
#include <string>
#include "vtkVariant.h"
#include "vtkObjectBase.h"
#include "vtkIndent.h"
#include "vtkImagePermute.h"

template<> void emscripten::internal::raw_destructor<vtkImagePermute>(vtkImagePermute * ptr){ ptr->Delete(); }
EMSCRIPTEN_BINDINGS(vtkImagePermute_class) {
  emscripten::class_<vtkImagePermute, emscripten::base<vtkImageReslice>>("vtkImagePermute")
    .smart_ptr<vtkSmartPointer<vtkImagePermute>>("vtkSmartPointer<vtkImagePermute>")
    .constructor(&vtk::MakeVTKSmartPtr<vtkImagePermute>)
    .class_function("IsTypeOf", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkImagePermute::IsTypeOf( arg_0.c_str());}))
    .function("IsA", emscripten::optional_override([](vtkImagePermute& self, const std::string & arg_0) -> int {  return self.IsA( arg_0.c_str());}))
    .class_function("SafeDownCast", &vtkImagePermute::SafeDownCast, emscripten::allow_raw_pointers())
    .function("NewInstance", &vtkImagePermute::NewInstance, emscripten::allow_raw_pointers())
    .class_function("GetNumberOfGenerationsFromBaseType", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkImagePermute::GetNumberOfGenerationsFromBaseType( arg_0.c_str());}))
    .function("GetNumberOfGenerationsFromBase", emscripten::optional_override([](vtkImagePermute& self, const std::string & arg_0) -> int {  return self.GetNumberOfGenerationsFromBase( arg_0.c_str());}))
    .function("SetFilteredAxes", emscripten::select_overload<void(vtkImagePermute&, int, int, int)>([](vtkImagePermute& self, int arg_0, int arg_1, int arg_2) -> void { return self.SetFilteredAxes( arg_0, arg_1, arg_2); }));
}
