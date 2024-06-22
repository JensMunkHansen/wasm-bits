// JavaScript wrapper for vtkImplicitTextureCoords with embind 
//
// This file was auto-generated using :
/*
node /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/bin/vtkWrapJavaScript.js \
 @/home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkFiltersTexture.js/vtkFiltersTexture.js.Release.args \
 -o \
 /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkFiltersTexture.js/vtkImplicitTextureCoordsEmbinding.cxx \
 /home/jmh/github/vtk/Filters/Texture/vtkImplicitTextureCoords.h
*/
#include "vtkEmbindSmartPointerTrait.h"
#include <emscripten.h>
#include <string>
#include "vtkVariant.h"
#include "vtkObjectBase.h"
#include "vtkIndent.h"
#include "vtkImplicitFunction.h"
#include "vtkImplicitTextureCoords.h"

template<> void emscripten::internal::raw_destructor<vtkImplicitTextureCoords>(vtkImplicitTextureCoords * ptr){ ptr->Delete(); }
EMSCRIPTEN_BINDINGS(vtkImplicitTextureCoords_class) {
  emscripten::class_<vtkImplicitTextureCoords, emscripten::base<vtkDataSetAlgorithm>>("vtkImplicitTextureCoords")
    .smart_ptr<vtkSmartPointer<vtkImplicitTextureCoords>>("vtkSmartPointer<vtkImplicitTextureCoords>")
    .constructor(&vtk::MakeVTKSmartPtr<vtkImplicitTextureCoords>)
    .class_function("IsTypeOf", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkImplicitTextureCoords::IsTypeOf( arg_0.c_str());}))
    .function("IsA", emscripten::optional_override([](vtkImplicitTextureCoords& self, const std::string & arg_0) -> int {  return self.IsA( arg_0.c_str());}))
    .class_function("SafeDownCast", &vtkImplicitTextureCoords::SafeDownCast, emscripten::allow_raw_pointers())
    .function("NewInstance", &vtkImplicitTextureCoords::NewInstance, emscripten::allow_raw_pointers())
    .class_function("GetNumberOfGenerationsFromBaseType", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkImplicitTextureCoords::GetNumberOfGenerationsFromBaseType( arg_0.c_str());}))
    .function("GetNumberOfGenerationsFromBase", emscripten::optional_override([](vtkImplicitTextureCoords& self, const std::string & arg_0) -> int {  return self.GetNumberOfGenerationsFromBase( arg_0.c_str());}))
    .function("SetRFunction", &vtkImplicitTextureCoords::SetRFunction, emscripten::allow_raw_pointers())
    .function("GetRFunction", &vtkImplicitTextureCoords::GetRFunction, emscripten::allow_raw_pointers())
    .function("SetSFunction", &vtkImplicitTextureCoords::SetSFunction, emscripten::allow_raw_pointers())
    .function("GetSFunction", &vtkImplicitTextureCoords::GetSFunction, emscripten::allow_raw_pointers())
    .function("SetTFunction", &vtkImplicitTextureCoords::SetTFunction, emscripten::allow_raw_pointers())
    .function("GetTFunction", &vtkImplicitTextureCoords::GetTFunction, emscripten::allow_raw_pointers())
    .function("SetFlipTexture", &vtkImplicitTextureCoords::SetFlipTexture)
    .function("GetFlipTexture", &vtkImplicitTextureCoords::GetFlipTexture)
    .function("FlipTextureOn", &vtkImplicitTextureCoords::FlipTextureOn)
    .function("FlipTextureOff", &vtkImplicitTextureCoords::FlipTextureOff);
}
