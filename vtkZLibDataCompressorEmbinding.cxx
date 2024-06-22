// JavaScript wrapper for vtkZLibDataCompressor with embind 
//
// This file was auto-generated using :
/*
node /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/bin/vtkWrapJavaScript.js \
 @/home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkIOCore.js/vtkIOCore.js.Release.args \
 -o \
 /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkIOCore.js/vtkZLibDataCompressorEmbinding.cxx \
 /home/jmh/github/vtk/IO/Core/vtkZLibDataCompressor.h
*/
#include "vtkEmbindSmartPointerTrait.h"
#include <emscripten.h>
#include <string>
#include "vtkVariant.h"
#include "vtkObjectBase.h"
#include "vtkIndent.h"
#include "vtkZLibDataCompressor.h"

template<> void emscripten::internal::raw_destructor<vtkZLibDataCompressor>(vtkZLibDataCompressor * ptr){ ptr->Delete(); }
EMSCRIPTEN_BINDINGS(vtkZLibDataCompressor_class) {
  emscripten::class_<vtkZLibDataCompressor, emscripten::base<vtkDataCompressor>>("vtkZLibDataCompressor")
    .smart_ptr<vtkSmartPointer<vtkZLibDataCompressor>>("vtkSmartPointer<vtkZLibDataCompressor>")
    .constructor(&vtk::MakeAvtkSmartPointer<vtkZLibDataCompressor>)
    .class_function("IsTypeOf", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkZLibDataCompressor::IsTypeOf( arg_0.c_str());}))
    .function("IsA", emscripten::optional_override([](vtkZLibDataCompressor& self, const std::string & arg_0) -> int {  return self.IsA( arg_0.c_str());}))
    .class_function("SafeDownCast", &vtkZLibDataCompressor::SafeDownCast, emscripten::allow_raw_pointers())
    .function("NewInstance", &vtkZLibDataCompressor::NewInstance, emscripten::allow_raw_pointers())
    .class_function("GetNumberOfGenerationsFromBaseType", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkZLibDataCompressor::GetNumberOfGenerationsFromBaseType( arg_0.c_str());}))
    .function("GetNumberOfGenerationsFromBase", emscripten::optional_override([](vtkZLibDataCompressor& self, const std::string & arg_0) -> int {  return self.GetNumberOfGenerationsFromBase( arg_0.c_str());}))
    .function("GetMaximumCompressionSpace", &vtkZLibDataCompressor::GetMaximumCompressionSpace)
    .function("GetCompressionLevel", &vtkZLibDataCompressor::GetCompressionLevel)
    .function("SetCompressionLevel", &vtkZLibDataCompressor::SetCompressionLevel);
}
