// JavaScript wrapper for vtkImageDataStreamer with embind 
//
// This file was auto-generated using :
/*
node /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/bin/vtkWrapJavaScript.js \
 @/home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkImagingCore.js/vtkImagingCore.js.Release.args \
 -o \
 /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkImagingCore.js/vtkImageDataStreamerEmbinding.cxx \
 /home/jmh/github/vtk/Imaging/Core/vtkImageDataStreamer.h
*/
#include "vtkEmbindSmartPointerTrait.h"
#include <emscripten.h>
#include <string>
#include "vtkVariant.h"
#include "vtkObjectBase.h"
#include "vtkIndent.h"
#include "vtkExtentTranslator.h"
#include "vtkInformation.h"
#include "vtkInformationVector.h"
#include "vtkImageDataStreamer.h"

template<> void emscripten::internal::raw_destructor<vtkImageDataStreamer>(vtkImageDataStreamer * ptr){ ptr->Delete(); }
EMSCRIPTEN_BINDINGS(vtkImageDataStreamer_class) {
  emscripten::class_<vtkImageDataStreamer, emscripten::base<vtkImageAlgorithm>>("vtkImageDataStreamer")
    .smart_ptr<vtkSmartPointer<vtkImageDataStreamer>>("vtkSmartPointer<vtkImageDataStreamer>")
    .constructor(&vtk::MakeAvtkSmartPointer<vtkImageDataStreamer>)
    .class_function("IsTypeOf", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkImageDataStreamer::IsTypeOf( arg_0.c_str());}))
    .function("IsA", emscripten::optional_override([](vtkImageDataStreamer& self, const std::string & arg_0) -> int {  return self.IsA( arg_0.c_str());}))
    .class_function("SafeDownCast", &vtkImageDataStreamer::SafeDownCast, emscripten::allow_raw_pointers())
    .function("NewInstance", &vtkImageDataStreamer::NewInstance, emscripten::allow_raw_pointers())
    .class_function("GetNumberOfGenerationsFromBaseType", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkImageDataStreamer::GetNumberOfGenerationsFromBaseType( arg_0.c_str());}))
    .function("GetNumberOfGenerationsFromBase", emscripten::optional_override([](vtkImageDataStreamer& self, const std::string & arg_0) -> int {  return self.GetNumberOfGenerationsFromBase( arg_0.c_str());}))
    .function("SetNumberOfStreamDivisions", &vtkImageDataStreamer::SetNumberOfStreamDivisions)
    .function("GetNumberOfStreamDivisions", &vtkImageDataStreamer::GetNumberOfStreamDivisions)
    .function("SetExtentTranslator", &vtkImageDataStreamer::SetExtentTranslator, emscripten::allow_raw_pointers())
    .function("GetExtentTranslator", &vtkImageDataStreamer::GetExtentTranslator, emscripten::allow_raw_pointers());
}
