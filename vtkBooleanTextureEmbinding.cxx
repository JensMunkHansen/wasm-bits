// JavaScript wrapper for vtkBooleanTexture with embind 
//
// This file was auto-generated using :
/*
node /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/bin/vtkWrapJavaScript.js \
 @/home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkImagingHybrid.js/vtkImagingHybrid.js.Release.args \
 -o \
 /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkImagingHybrid.js/vtkBooleanTextureEmbinding.cxx \
 /home/jmh/github/vtk/Imaging/Hybrid/vtkBooleanTexture.h
*/
#include "vtkEmbindSmartPointerTrait.h"
#include <emscripten.h>
#include <string>
#include "vtkVariant.h"
#include "vtkObjectBase.h"
#include "vtkIndent.h"
#include "vtkBooleanTexture.h"

template<> void emscripten::internal::raw_destructor<vtkBooleanTexture>(vtkBooleanTexture * ptr){ ptr->Delete(); }
EMSCRIPTEN_BINDINGS(vtkBooleanTexture_class) {
  emscripten::class_<vtkBooleanTexture, emscripten::base<vtkImageAlgorithm>>("vtkBooleanTexture")
    .smart_ptr<vtkSmartPointer<vtkBooleanTexture>>("vtkSmartPointer<vtkBooleanTexture>")
    .constructor(&vtk::MakeAvtkSmartPointer<vtkBooleanTexture>)
    .class_function("IsTypeOf", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkBooleanTexture::IsTypeOf( arg_0.c_str());}))
    .function("IsA", emscripten::optional_override([](vtkBooleanTexture& self, const std::string & arg_0) -> int {  return self.IsA( arg_0.c_str());}))
    .class_function("SafeDownCast", &vtkBooleanTexture::SafeDownCast, emscripten::allow_raw_pointers())
    .function("NewInstance", &vtkBooleanTexture::NewInstance, emscripten::allow_raw_pointers())
    .class_function("GetNumberOfGenerationsFromBaseType", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkBooleanTexture::GetNumberOfGenerationsFromBaseType( arg_0.c_str());}))
    .function("GetNumberOfGenerationsFromBase", emscripten::optional_override([](vtkBooleanTexture& self, const std::string & arg_0) -> int {  return self.GetNumberOfGenerationsFromBase( arg_0.c_str());}))
    .function("SetXSize", &vtkBooleanTexture::SetXSize)
    .function("GetXSize", &vtkBooleanTexture::GetXSize)
    .function("SetYSize", &vtkBooleanTexture::SetYSize)
    .function("GetYSize", &vtkBooleanTexture::GetYSize)
    .function("SetThickness", &vtkBooleanTexture::SetThickness)
    .function("GetThickness", &vtkBooleanTexture::GetThickness)
    .function("SetInIn", emscripten::select_overload<void(vtkBooleanTexture&, unsigned char, unsigned char)>([](vtkBooleanTexture& self, unsigned char arg_0, unsigned char arg_1) -> void { return self.SetInIn( arg_0, arg_1); }))
    .function("SetInOut", emscripten::select_overload<void(vtkBooleanTexture&, unsigned char, unsigned char)>([](vtkBooleanTexture& self, unsigned char arg_0, unsigned char arg_1) -> void { return self.SetInOut( arg_0, arg_1); }))
    .function("SetOutIn", emscripten::select_overload<void(vtkBooleanTexture&, unsigned char, unsigned char)>([](vtkBooleanTexture& self, unsigned char arg_0, unsigned char arg_1) -> void { return self.SetOutIn( arg_0, arg_1); }))
    .function("SetOutOut", emscripten::select_overload<void(vtkBooleanTexture&, unsigned char, unsigned char)>([](vtkBooleanTexture& self, unsigned char arg_0, unsigned char arg_1) -> void { return self.SetOutOut( arg_0, arg_1); }))
    .function("SetOnOn", emscripten::select_overload<void(vtkBooleanTexture&, unsigned char, unsigned char)>([](vtkBooleanTexture& self, unsigned char arg_0, unsigned char arg_1) -> void { return self.SetOnOn( arg_0, arg_1); }))
    .function("SetOnIn", emscripten::select_overload<void(vtkBooleanTexture&, unsigned char, unsigned char)>([](vtkBooleanTexture& self, unsigned char arg_0, unsigned char arg_1) -> void { return self.SetOnIn( arg_0, arg_1); }))
    .function("SetOnOut", emscripten::select_overload<void(vtkBooleanTexture&, unsigned char, unsigned char)>([](vtkBooleanTexture& self, unsigned char arg_0, unsigned char arg_1) -> void { return self.SetOnOut( arg_0, arg_1); }))
    .function("SetInOn", emscripten::select_overload<void(vtkBooleanTexture&, unsigned char, unsigned char)>([](vtkBooleanTexture& self, unsigned char arg_0, unsigned char arg_1) -> void { return self.SetInOn( arg_0, arg_1); }))
    .function("SetOutOn", emscripten::select_overload<void(vtkBooleanTexture&, unsigned char, unsigned char)>([](vtkBooleanTexture& self, unsigned char arg_0, unsigned char arg_1) -> void { return self.SetOutOn( arg_0, arg_1); }));
}
