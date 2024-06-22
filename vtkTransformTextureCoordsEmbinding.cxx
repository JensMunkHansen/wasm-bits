// JavaScript wrapper for vtkTransformTextureCoords with embind 
//
// This file was auto-generated using :
/*
node /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/bin/vtkWrapJavaScript.js \
 @/home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkFiltersTexture.js/vtkFiltersTexture.js.Release.args \
 -o \
 /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkFiltersTexture.js/vtkTransformTextureCoordsEmbinding.cxx \
 /home/jmh/github/vtk/Filters/Texture/vtkTransformTextureCoords.h
*/
#include "vtkEmbindSmartPointerTrait.h"
#include <emscripten.h>
#include <string>
#include "vtkVariant.h"
#include "vtkObjectBase.h"
#include "vtkIndent.h"
#include "vtkTransformTextureCoords.h"

template<> void emscripten::internal::raw_destructor<vtkTransformTextureCoords>(vtkTransformTextureCoords * ptr){ ptr->Delete(); }
EMSCRIPTEN_BINDINGS(vtkTransformTextureCoords_class) {
  emscripten::class_<vtkTransformTextureCoords, emscripten::base<vtkDataSetAlgorithm>>("vtkTransformTextureCoords")
    .smart_ptr<vtkSmartPointer<vtkTransformTextureCoords>>("vtkSmartPointer<vtkTransformTextureCoords>")
    .constructor(&vtk::MakeVTKSmartPtr<vtkTransformTextureCoords>)
    .class_function("IsTypeOf", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkTransformTextureCoords::IsTypeOf( arg_0.c_str());}))
    .function("IsA", emscripten::optional_override([](vtkTransformTextureCoords& self, const std::string & arg_0) -> int {  return self.IsA( arg_0.c_str());}))
    .class_function("SafeDownCast", &vtkTransformTextureCoords::SafeDownCast, emscripten::allow_raw_pointers())
    .function("NewInstance", &vtkTransformTextureCoords::NewInstance, emscripten::allow_raw_pointers())
    .class_function("GetNumberOfGenerationsFromBaseType", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkTransformTextureCoords::GetNumberOfGenerationsFromBaseType( arg_0.c_str());}))
    .function("GetNumberOfGenerationsFromBase", emscripten::optional_override([](vtkTransformTextureCoords& self, const std::string & arg_0) -> int {  return self.GetNumberOfGenerationsFromBase( arg_0.c_str());}))
    .function("SetPosition", emscripten::select_overload<void(vtkTransformTextureCoords&, double, double, double)>([](vtkTransformTextureCoords& self, double arg_0, double arg_1, double arg_2) -> void { return self.SetPosition( arg_0, arg_1, arg_2); }))
    .function("AddPosition", emscripten::select_overload<void(vtkTransformTextureCoords&, double, double, double)>([](vtkTransformTextureCoords& self, double arg_0, double arg_1, double arg_2) -> void { return self.AddPosition( arg_0, arg_1, arg_2); }))
    .function("SetScale", emscripten::select_overload<void(vtkTransformTextureCoords&, double, double, double)>([](vtkTransformTextureCoords& self, double arg_0, double arg_1, double arg_2) -> void { return self.SetScale( arg_0, arg_1, arg_2); }))
    .function("SetOrigin", emscripten::select_overload<void(vtkTransformTextureCoords&, double, double, double)>([](vtkTransformTextureCoords& self, double arg_0, double arg_1, double arg_2) -> void { return self.SetOrigin( arg_0, arg_1, arg_2); }))
    .function("SetFlipR", &vtkTransformTextureCoords::SetFlipR)
    .function("GetFlipR", &vtkTransformTextureCoords::GetFlipR)
    .function("FlipROn", &vtkTransformTextureCoords::FlipROn)
    .function("FlipROff", &vtkTransformTextureCoords::FlipROff)
    .function("SetFlipS", &vtkTransformTextureCoords::SetFlipS)
    .function("GetFlipS", &vtkTransformTextureCoords::GetFlipS)
    .function("FlipSOn", &vtkTransformTextureCoords::FlipSOn)
    .function("FlipSOff", &vtkTransformTextureCoords::FlipSOff)
    .function("SetFlipT", &vtkTransformTextureCoords::SetFlipT)
    .function("GetFlipT", &vtkTransformTextureCoords::GetFlipT)
    .function("FlipTOn", &vtkTransformTextureCoords::FlipTOn)
    .function("FlipTOff", &vtkTransformTextureCoords::FlipTOff);
}
