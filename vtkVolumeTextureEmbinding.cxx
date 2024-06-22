// JavaScript wrapper for vtkVolumeTexture with embind 
//
// This file was auto-generated using :
/*
node /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/bin/vtkWrapJavaScript.js \
 @/home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkRenderingVolumeOpenGL2.js/vtkRenderingVolumeOpenGL2.js.Release.args \
 -o \
 /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkRenderingVolumeOpenGL2.js/vtkVolumeTextureEmbinding.cxx \
 /home/jmh/github/vtk/Rendering/VolumeOpenGL2/vtkVolumeTexture.h
*/
#include "vtkEmbindSmartPointerTrait.h"
#include <emscripten.h>
#include <string>
#include "vtkVariant.h"
#include "vtkObjectBase.h"
#include "vtkIndent.h"
#include "vtkTuple.h"
#include "vtkRenderer.h"
#include "vtkDataSet.h"
#include "vtkDataArray.h"
#include "vtkVolumeProperty.h"
#include "vtkMatrix4x4.h"
#include "vtkWindow.h"
#include "vtkVolumeTexture.h"

template<> void emscripten::internal::raw_destructor<vtkVolumeTexture>(vtkVolumeTexture * ptr){ ptr->Delete(); }
EMSCRIPTEN_BINDINGS(vtkVolumeTexture_class) {
  emscripten::class_<vtkVolumeTexture, emscripten::base<vtkObject>>("vtkVolumeTexture")
    .smart_ptr<vtkSmartPointer<vtkVolumeTexture>>("vtkSmartPointer<vtkVolumeTexture>")
    .constructor(&vtk::MakeVTKSmartPtr<vtkVolumeTexture>)
    .class_function("IsTypeOf", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkVolumeTexture::IsTypeOf( arg_0.c_str());}))
    .function("IsA", emscripten::optional_override([](vtkVolumeTexture& self, const std::string & arg_0) -> int {  return self.IsA( arg_0.c_str());}))
    .class_function("SafeDownCast", &vtkVolumeTexture::SafeDownCast, emscripten::allow_raw_pointers())
    .function("NewInstance", &vtkVolumeTexture::NewInstance, emscripten::allow_raw_pointers())
    .class_function("GetNumberOfGenerationsFromBaseType", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkVolumeTexture::GetNumberOfGenerationsFromBaseType( arg_0.c_str());}))
    .function("GetNumberOfGenerationsFromBase", emscripten::optional_override([](vtkVolumeTexture& self, const std::string & arg_0) -> int {  return self.GetNumberOfGenerationsFromBase( arg_0.c_str());}))
    .function("SetPartitions", &vtkVolumeTexture::SetPartitions)
    .function("GetPartitions", &vtkVolumeTexture::GetPartitions)
    .function("LoadVolume", &vtkVolumeTexture::LoadVolume, emscripten::allow_raw_pointers())
    .function("UpdateVolume", &vtkVolumeTexture::UpdateVolume, emscripten::allow_raw_pointers())
    .function("SortBlocksBackToFront", &vtkVolumeTexture::SortBlocksBackToFront, emscripten::allow_raw_pointers())
    .function("ReleaseGraphicsResources", &vtkVolumeTexture::ReleaseGraphicsResources, emscripten::allow_raw_pointers())
    .function("GetLoadedScalars", &vtkVolumeTexture::GetLoadedScalars, emscripten::allow_raw_pointers());
}
