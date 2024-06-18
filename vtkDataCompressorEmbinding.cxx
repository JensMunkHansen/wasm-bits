// JavaScript wrapper for vtkDataCompressor with embind 
//
// This file was auto-generated using :
/*
node /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/bin/vtkWrapJavaScript.js \
 @/home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkIOCore.js/vtkIOCore.js.Release.args \
 -o \
 /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkIOCore.js/vtkDataCompressorEmbinding.cxx \
 /home/jmh/github/vtk/IO/Core/vtkDataCompressor.h
*/
#include "vtkEmbindSmartPointerTrait.h"
#include <emscripten.h>
#include <string>
#include "vtkVariant.h"
#include "vtkObjectBase.h"
#include "vtkIndent.h"
#include "vtkUnsignedCharArray.h"
#include "vtkDataCompressor.h"

template<> void emscripten::internal::raw_destructor<vtkDataCompressor>(vtkDataCompressor * ptr){ ptr->Delete(); }
EMSCRIPTEN_BINDINGS(vtkDataCompressor_class) {
  emscripten::class_<vtkDataCompressor, emscripten::base<vtkObject>>("vtkDataCompressor")
    .class_function("IsTypeOf", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkDataCompressor::IsTypeOf( arg_0.c_str());}))
    .function("IsA", emscripten::optional_override([](vtkDataCompressor& self, const std::string & arg_0) -> int {  return self.IsA( arg_0.c_str());}))
    .class_function("SafeDownCast", &vtkDataCompressor::SafeDownCast, emscripten::allow_raw_pointers())
    .function("NewInstance", &vtkDataCompressor::NewInstance, emscripten::allow_raw_pointers())
    .class_function("GetNumberOfGenerationsFromBaseType", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkDataCompressor::GetNumberOfGenerationsFromBaseType( arg_0.c_str());}))
    .function("GetNumberOfGenerationsFromBase", emscripten::optional_override([](vtkDataCompressor& self, const std::string & arg_0) -> int {  return self.GetNumberOfGenerationsFromBase( arg_0.c_str());}))
    .function("Compress", emscripten::select_overload<size_t(vtkDataCompressor&, std::uintptr_t, size_t, std::uintptr_t, size_t)>([](vtkDataCompressor& self, std::uintptr_t arg_0, size_t arg_1, std::uintptr_t arg_2, size_t arg_3) -> size_t { return self.Compress(reinterpret_cast<unsigned char*>(arg_0 * sizeof(unsigned char)), arg_1,reinterpret_cast<unsigned char*>(arg_2 * sizeof(unsigned char)), arg_3); }))
    .function("Compress", emscripten::select_overload<vtkUnsignedCharArray*(vtkDataCompressor&, std::uintptr_t, size_t)>([](vtkDataCompressor& self, std::uintptr_t arg_0, size_t arg_1) -> vtkUnsignedCharArray* { return self.Compress(reinterpret_cast<unsigned char*>(arg_0 * sizeof(unsigned char)), arg_1); }), emscripten::allow_raw_pointers())
    .function("Uncompress", emscripten::select_overload<size_t(vtkDataCompressor&, std::uintptr_t, size_t, std::uintptr_t, size_t)>([](vtkDataCompressor& self, std::uintptr_t arg_0, size_t arg_1, std::uintptr_t arg_2, size_t arg_3) -> size_t { return self.Uncompress(reinterpret_cast<unsigned char*>(arg_0 * sizeof(unsigned char)), arg_1,reinterpret_cast<unsigned char*>(arg_2 * sizeof(unsigned char)), arg_3); }))
    .function("Uncompress", emscripten::select_overload<vtkUnsignedCharArray*(vtkDataCompressor&, std::uintptr_t, size_t, size_t)>([](vtkDataCompressor& self, std::uintptr_t arg_0, size_t arg_1, size_t arg_2) -> vtkUnsignedCharArray* { return self.Uncompress(reinterpret_cast<unsigned char*>(arg_0 * sizeof(unsigned char)), arg_1, arg_2); }), emscripten::allow_raw_pointers());
}
