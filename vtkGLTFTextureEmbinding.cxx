// JavaScript wrapper for vtkGLTFTexture with embind 
//
// This file was auto-generated using :
/*
node /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/bin/vtkWrapJavaScript.js \
 @/home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkIOGeometry.js/vtkIOGeometry.js.Release.args \
 -o \
 /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkIOGeometry.js/vtkGLTFTextureEmbinding.cxx \
 /home/jmh/github/vtk/IO/Geometry/vtkGLTFTexture.h
*/
#include "vtkEmbindSmartPointerTrait.h"
#include <emscripten.h>
#include <string>
#include "vtkVariant.h"
#include "vtkObjectBase.h"
#include "vtkIndent.h"
#include "vtkSmartPointer.h"
#include "vtkGLTFTexture.h"

template<> void emscripten::internal::raw_destructor<vtkGLTFTexture>(vtkGLTFTexture * ptr){ ptr->Delete(); }
EMSCRIPTEN_BINDINGS(vtkGLTFTexture_class) {
  emscripten::class_<vtkGLTFTexture, emscripten::base<vtkObjectBase>>("vtkGLTFTexture")
    .smart_ptr<vtkSmartPointer<vtkGLTFTexture>>("vtkSmartPointer<vtkGLTFTexture>")
    .constructor(&vtk::MakeVTKSmartPtr<vtkGLTFTexture>)
    .class_function("IsTypeOf", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkGLTFTexture::IsTypeOf( arg_0.c_str());}))
    .function("IsA", emscripten::optional_override([](vtkGLTFTexture& self, const std::string & arg_0) -> int {  return self.IsA( arg_0.c_str());}))
    .class_function("SafeDownCast", &vtkGLTFTexture::SafeDownCast, emscripten::allow_raw_pointers())
    .function("NewInstance", &vtkGLTFTexture::NewInstance, emscripten::allow_raw_pointers())
    .class_function("GetNumberOfGenerationsFromBaseType", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkGLTFTexture::GetNumberOfGenerationsFromBaseType( arg_0.c_str());}))
    .function("GetNumberOfGenerationsFromBase", emscripten::optional_override([](vtkGLTFTexture& self, const std::string & arg_0) -> int {  return self.GetNumberOfGenerationsFromBase( arg_0.c_str());}))
    .function("GetVTKTexture", &vtkGLTFTexture::GetVTKTexture);
}
