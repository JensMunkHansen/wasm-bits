// JavaScript wrapper for vtkExtractVOI with embind 
//
// This file was auto-generated using :
/*
node /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/bin/vtkWrapJavaScript.js \
 @/home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkImagingCore.js/vtkImagingCore.js.Release.args \
 -o \
 /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkImagingCore.js/vtkExtractVOIEmbinding.cxx \
 /home/jmh/github/vtk/Imaging/Core/vtkExtractVOI.h
*/
#include "vtkEmbindSmartPointerTrait.h"
#include <emscripten.h>
#include <string>
#include "vtkVariant.h"
#include "vtkObjectBase.h"
#include "vtkIndent.h"
#include "vtkExtractVOI.h"

template<> void emscripten::internal::raw_destructor<vtkExtractVOI>(vtkExtractVOI * ptr){ ptr->Delete(); }
EMSCRIPTEN_BINDINGS(vtkExtractVOI_class) {
  emscripten::class_<vtkExtractVOI, emscripten::base<vtkImageAlgorithm>>("vtkExtractVOI")
    .smart_ptr<vtkSmartPointer<vtkExtractVOI>>("vtkSmartPointer<vtkExtractVOI>")
    .constructor(&vtk::MakeVTKSmartPtr<vtkExtractVOI>)
    .class_function("IsTypeOf", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkExtractVOI::IsTypeOf( arg_0.c_str());}))
    .function("IsA", emscripten::optional_override([](vtkExtractVOI& self, const std::string & arg_0) -> int {  return self.IsA( arg_0.c_str());}))
    .class_function("SafeDownCast", &vtkExtractVOI::SafeDownCast, emscripten::allow_raw_pointers())
    .function("NewInstance", &vtkExtractVOI::NewInstance, emscripten::allow_raw_pointers())
    .class_function("GetNumberOfGenerationsFromBaseType", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkExtractVOI::GetNumberOfGenerationsFromBaseType( arg_0.c_str());}))
    .function("GetNumberOfGenerationsFromBase", emscripten::optional_override([](vtkExtractVOI& self, const std::string & arg_0) -> int {  return self.GetNumberOfGenerationsFromBase( arg_0.c_str());}))
    .function("SetVOI", emscripten::select_overload<void(vtkExtractVOI&, int, int, int, int, int, int)>([](vtkExtractVOI& self, int arg_0, int arg_1, int arg_2, int arg_3, int arg_4, int arg_5) -> void { return self.SetVOI( arg_0, arg_1, arg_2, arg_3, arg_4, arg_5); }))
    .function("SetSampleRate", emscripten::select_overload<void(vtkExtractVOI&, int, int, int)>([](vtkExtractVOI& self, int arg_0, int arg_1, int arg_2) -> void { return self.SetSampleRate( arg_0, arg_1, arg_2); }))
    .function("SetIncludeBoundary", &vtkExtractVOI::SetIncludeBoundary)
    .function("GetIncludeBoundary", &vtkExtractVOI::GetIncludeBoundary)
    .function("IncludeBoundaryOn", &vtkExtractVOI::IncludeBoundaryOn)
    .function("IncludeBoundaryOff", &vtkExtractVOI::IncludeBoundaryOff);
}
