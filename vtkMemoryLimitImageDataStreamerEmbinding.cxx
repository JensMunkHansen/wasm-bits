// JavaScript wrapper for vtkMemoryLimitImageDataStreamer with embind 
//
// This file was auto-generated using :
/*
node /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/bin/vtkWrapJavaScript.js \
 @/home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkFiltersParallelImaging.js/vtkFiltersParallelImaging.js.Release.args \
 -o \
 /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkFiltersParallelImaging.js/vtkMemoryLimitImageDataStreamerEmbinding.cxx \
 /home/jmh/github/vtk/Filters/ParallelImaging/vtkMemoryLimitImageDataStreamer.h
*/
#include "vtkEmbindSmartPointerTrait.h"
#include <emscripten.h>
#include <string>
#include "vtkVariant.h"
#include "vtkObjectBase.h"
#include "vtkIndent.h"
#include "vtkInformation.h"
#include "vtkInformationVector.h"
#include "vtkMemoryLimitImageDataStreamer.h"

template<> void emscripten::internal::raw_destructor<vtkMemoryLimitImageDataStreamer>(vtkMemoryLimitImageDataStreamer * ptr){ ptr->Delete(); }
EMSCRIPTEN_BINDINGS(vtkMemoryLimitImageDataStreamer_class) {
  emscripten::class_<vtkMemoryLimitImageDataStreamer, emscripten::base<vtkImageDataStreamer>>("vtkMemoryLimitImageDataStreamer")
    .smart_ptr<vtkSmartPointer<vtkMemoryLimitImageDataStreamer>>("vtkSmartPointer<vtkMemoryLimitImageDataStreamer>")
    .constructor(&vtk::MakeAvtkSmartPointer<vtkMemoryLimitImageDataStreamer>)
    .class_function("IsTypeOf", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkMemoryLimitImageDataStreamer::IsTypeOf( arg_0.c_str());}))
    .function("IsA", emscripten::optional_override([](vtkMemoryLimitImageDataStreamer& self, const std::string & arg_0) -> int {  return self.IsA( arg_0.c_str());}))
    .class_function("SafeDownCast", &vtkMemoryLimitImageDataStreamer::SafeDownCast, emscripten::allow_raw_pointers())
    .function("NewInstance", &vtkMemoryLimitImageDataStreamer::NewInstance, emscripten::allow_raw_pointers())
    .class_function("GetNumberOfGenerationsFromBaseType", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkMemoryLimitImageDataStreamer::GetNumberOfGenerationsFromBaseType( arg_0.c_str());}))
    .function("GetNumberOfGenerationsFromBase", emscripten::optional_override([](vtkMemoryLimitImageDataStreamer& self, const std::string & arg_0) -> int {  return self.GetNumberOfGenerationsFromBase( arg_0.c_str());}))
    .function("SetMemoryLimit", &vtkMemoryLimitImageDataStreamer::SetMemoryLimit)
    .function("GetMemoryLimit", &vtkMemoryLimitImageDataStreamer::GetMemoryLimit);
}
