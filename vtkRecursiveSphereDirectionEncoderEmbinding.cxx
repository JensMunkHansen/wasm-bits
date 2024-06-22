// JavaScript wrapper for vtkRecursiveSphereDirectionEncoder with embind 
//
// This file was auto-generated using :
/*
node /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/bin/vtkWrapJavaScript.js \
 @/home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkRenderingVolume.js/vtkRenderingVolume.js.Release.args \
 -o \
 /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkRenderingVolume.js/vtkRecursiveSphereDirectionEncoderEmbinding.cxx \
 /home/jmh/github/vtk/Rendering/Volume/vtkRecursiveSphereDirectionEncoder.h
*/
#include "vtkEmbindSmartPointerTrait.h"
#include <emscripten.h>
#include <string>
#include "vtkVariant.h"
#include "vtkObjectBase.h"
#include "vtkIndent.h"
#include "vtkRecursiveSphereDirectionEncoder.h"

template<> void emscripten::internal::raw_destructor<vtkRecursiveSphereDirectionEncoder>(vtkRecursiveSphereDirectionEncoder * ptr){ ptr->Delete(); }
EMSCRIPTEN_BINDINGS(vtkRecursiveSphereDirectionEncoder_class) {
  emscripten::class_<vtkRecursiveSphereDirectionEncoder, emscripten::base<vtkDirectionEncoder>>("vtkRecursiveSphereDirectionEncoder")
    .smart_ptr<vtkSmartPointer<vtkRecursiveSphereDirectionEncoder>>("vtkSmartPointer<vtkRecursiveSphereDirectionEncoder>")
    .constructor(&vtk::MakeVTKSmartPtr<vtkRecursiveSphereDirectionEncoder>)
    .class_function("IsTypeOf", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkRecursiveSphereDirectionEncoder::IsTypeOf( arg_0.c_str());}))
    .function("IsA", emscripten::optional_override([](vtkRecursiveSphereDirectionEncoder& self, const std::string & arg_0) -> int {  return self.IsA( arg_0.c_str());}))
    .class_function("SafeDownCast", &vtkRecursiveSphereDirectionEncoder::SafeDownCast, emscripten::allow_raw_pointers())
    .function("NewInstance", &vtkRecursiveSphereDirectionEncoder::NewInstance, emscripten::allow_raw_pointers())
    .class_function("GetNumberOfGenerationsFromBaseType", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkRecursiveSphereDirectionEncoder::GetNumberOfGenerationsFromBaseType( arg_0.c_str());}))
    .function("GetNumberOfGenerationsFromBase", emscripten::optional_override([](vtkRecursiveSphereDirectionEncoder& self, const std::string & arg_0) -> int {  return self.GetNumberOfGenerationsFromBase( arg_0.c_str());}))
    .function("GetNumberOfEncodedDirections", &vtkRecursiveSphereDirectionEncoder::GetNumberOfEncodedDirections)
    .function("GetDecodedGradientTable", emscripten::optional_override([](vtkRecursiveSphereDirectionEncoder& self) -> std::uintptr_t {  return reinterpret_cast<std::uintptr_t>(self.GetDecodedGradientTable()) / sizeof(float);}))
    .function("SetRecursionDepth", &vtkRecursiveSphereDirectionEncoder::SetRecursionDepth)
    .function("GetRecursionDepthMinValue", &vtkRecursiveSphereDirectionEncoder::GetRecursionDepthMinValue)
    .function("GetRecursionDepthMaxValue", &vtkRecursiveSphereDirectionEncoder::GetRecursionDepthMaxValue)
    .function("GetRecursionDepth", &vtkRecursiveSphereDirectionEncoder::GetRecursionDepth);
}
