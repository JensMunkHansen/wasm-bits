// JavaScript wrapper for vtkLZMADataCompressor with embind 
//
// This file was auto-generated using :
/*
node /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/bin/vtkWrapJavaScript.js \
 @/home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkIOCore.js/vtkIOCore.js.Release.args \
 -o \
 /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkIOCore.js/vtkLZMADataCompressorEmbinding.cxx \
 /home/jmh/github/vtk/IO/Core/vtkLZMADataCompressor.h
*/
#include "vtkEmbindSmartPointerTrait.h"
#include <emscripten.h>
#include <string>
#include "vtkVariant.h"
#include "vtkObjectBase.h"
#include "vtkIndent.h"
#include "vtkLZMADataCompressor.h"

template<> void emscripten::internal::raw_destructor<vtkLZMADataCompressor>(vtkLZMADataCompressor * ptr){ ptr->Delete(); }
EMSCRIPTEN_BINDINGS(vtkLZMADataCompressor_class) {
  emscripten::class_<vtkLZMADataCompressor, emscripten::base<vtkDataCompressor>>("vtkLZMADataCompressor")
    .smart_ptr<vtkSmartPointer<vtkLZMADataCompressor>>("vtkSmartPointer<vtkLZMADataCompressor>")
    .constructor(&vtk::MakeVTKSmartPtr<vtkLZMADataCompressor>)
    .class_function("IsTypeOf", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkLZMADataCompressor::IsTypeOf( arg_0.c_str());}))
    .function("IsA", emscripten::optional_override([](vtkLZMADataCompressor& self, const std::string & arg_0) -> int {  return self.IsA( arg_0.c_str());}))
    .class_function("SafeDownCast", &vtkLZMADataCompressor::SafeDownCast, emscripten::allow_raw_pointers())
    .function("NewInstance", &vtkLZMADataCompressor::NewInstance, emscripten::allow_raw_pointers())
    .class_function("GetNumberOfGenerationsFromBaseType", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkLZMADataCompressor::GetNumberOfGenerationsFromBaseType( arg_0.c_str());}))
    .function("GetNumberOfGenerationsFromBase", emscripten::optional_override([](vtkLZMADataCompressor& self, const std::string & arg_0) -> int {  return self.GetNumberOfGenerationsFromBase( arg_0.c_str());}))
    .function("GetMaximumCompressionSpace", &vtkLZMADataCompressor::GetMaximumCompressionSpace)
    .function("SetCompressionLevel", &vtkLZMADataCompressor::SetCompressionLevel)
    .function("GetCompressionLevel", &vtkLZMADataCompressor::GetCompressionLevel);
}
