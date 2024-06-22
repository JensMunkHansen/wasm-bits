// JavaScript wrapper for vtkLZ4DataCompressor with embind 
//
// This file was auto-generated using :
/*
node /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/bin/vtkWrapJavaScript.js \
 @/home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkIOCore.js/vtkIOCore.js.Release.args \
 -o \
 /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkIOCore.js/vtkLZ4DataCompressorEmbinding.cxx \
 /home/jmh/github/vtk/IO/Core/vtkLZ4DataCompressor.h
*/
#include "vtkEmbindSmartPointerTrait.h"
#include <emscripten.h>
#include <string>
#include "vtkVariant.h"
#include "vtkObjectBase.h"
#include "vtkIndent.h"
#include "vtkLZ4DataCompressor.h"

template<> void emscripten::internal::raw_destructor<vtkLZ4DataCompressor>(vtkLZ4DataCompressor * ptr){ ptr->Delete(); }
EMSCRIPTEN_BINDINGS(vtkLZ4DataCompressor_class) {
  emscripten::class_<vtkLZ4DataCompressor, emscripten::base<vtkDataCompressor>>("vtkLZ4DataCompressor")
    .smart_ptr<vtkSmartPointer<vtkLZ4DataCompressor>>("vtkSmartPointer<vtkLZ4DataCompressor>")
    .constructor(&vtk::MakeVTKSmartPtr<vtkLZ4DataCompressor>)
    .class_function("IsTypeOf", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkLZ4DataCompressor::IsTypeOf( arg_0.c_str());}))
    .function("IsA", emscripten::optional_override([](vtkLZ4DataCompressor& self, const std::string & arg_0) -> int {  return self.IsA( arg_0.c_str());}))
    .class_function("SafeDownCast", &vtkLZ4DataCompressor::SafeDownCast, emscripten::allow_raw_pointers())
    .function("NewInstance", &vtkLZ4DataCompressor::NewInstance, emscripten::allow_raw_pointers())
    .class_function("GetNumberOfGenerationsFromBaseType", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkLZ4DataCompressor::GetNumberOfGenerationsFromBaseType( arg_0.c_str());}))
    .function("GetNumberOfGenerationsFromBase", emscripten::optional_override([](vtkLZ4DataCompressor& self, const std::string & arg_0) -> int {  return self.GetNumberOfGenerationsFromBase( arg_0.c_str());}))
    .function("GetMaximumCompressionSpace", &vtkLZ4DataCompressor::GetMaximumCompressionSpace)
    .function("GetCompressionLevel", &vtkLZ4DataCompressor::GetCompressionLevel)
    .function("SetCompressionLevel", &vtkLZ4DataCompressor::SetCompressionLevel)
    .function("SetAccelerationLevel", &vtkLZ4DataCompressor::SetAccelerationLevel)
    .function("GetAccelerationLevelMinValue", &vtkLZ4DataCompressor::GetAccelerationLevelMinValue)
    .function("GetAccelerationLevelMaxValue", &vtkLZ4DataCompressor::GetAccelerationLevelMaxValue)
    .function("GetAccelerationLevel", &vtkLZ4DataCompressor::GetAccelerationLevel);
}
