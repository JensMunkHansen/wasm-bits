// JavaScript wrapper for vtkSphericalDirectionEncoder with embind 
//
// This file was auto-generated using :
/*
node /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/bin/vtkWrapJavaScript.js \
 @/home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkRenderingVolume.js/vtkRenderingVolume.js.Release.args \
 -o \
 /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkRenderingVolume.js/vtkSphericalDirectionEncoderEmbinding.cxx \
 /home/jmh/github/vtk/Rendering/Volume/vtkSphericalDirectionEncoder.h
*/
#include "vtkEmbindSmartPointerTrait.h"
#include <emscripten.h>
#include <string>
#include "vtkVariant.h"
#include "vtkObjectBase.h"
#include "vtkIndent.h"
#include "vtkSphericalDirectionEncoder.h"

template<> void emscripten::internal::raw_destructor<vtkSphericalDirectionEncoder>(vtkSphericalDirectionEncoder * ptr){ ptr->Delete(); }
EMSCRIPTEN_BINDINGS(vtkSphericalDirectionEncoder_class) {
  emscripten::class_<vtkSphericalDirectionEncoder, emscripten::base<vtkDirectionEncoder>>("vtkSphericalDirectionEncoder")
    .smart_ptr<vtkSmartPointer<vtkSphericalDirectionEncoder>>("vtkSmartPointer<vtkSphericalDirectionEncoder>")
    .constructor(&vtk::MakeAvtkSmartPointer<vtkSphericalDirectionEncoder>)
    .class_function("IsTypeOf", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkSphericalDirectionEncoder::IsTypeOf( arg_0.c_str());}))
    .function("IsA", emscripten::optional_override([](vtkSphericalDirectionEncoder& self, const std::string & arg_0) -> int {  return self.IsA( arg_0.c_str());}))
    .class_function("SafeDownCast", &vtkSphericalDirectionEncoder::SafeDownCast, emscripten::allow_raw_pointers())
    .function("NewInstance", &vtkSphericalDirectionEncoder::NewInstance, emscripten::allow_raw_pointers())
    .class_function("GetNumberOfGenerationsFromBaseType", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkSphericalDirectionEncoder::GetNumberOfGenerationsFromBaseType( arg_0.c_str());}))
    .function("GetNumberOfGenerationsFromBase", emscripten::optional_override([](vtkSphericalDirectionEncoder& self, const std::string & arg_0) -> int {  return self.GetNumberOfGenerationsFromBase( arg_0.c_str());}))
    .function("GetNumberOfEncodedDirections", &vtkSphericalDirectionEncoder::GetNumberOfEncodedDirections)
    .function("GetDecodedGradientTable", emscripten::optional_override([](vtkSphericalDirectionEncoder& self) -> std::uintptr_t {  return reinterpret_cast<std::uintptr_t>(self.GetDecodedGradientTable()) / sizeof(float);}));
}
