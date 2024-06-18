// JavaScript wrapper for vtkMultiVolume with embind 
//
// This file was auto-generated using :
/*
node /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/bin/vtkWrapJavaScript.js \
 @/home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkRenderingVolume.js/vtkRenderingVolume.js.Release.args \
 -o \
 /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkRenderingVolume.js/vtkMultiVolumeEmbinding.cxx \
 /home/jmh/github/vtk/Rendering/Volume/vtkMultiVolume.h
*/
#include "vtkEmbindSmartPointerTrait.h"
#include <emscripten.h>
#include <string>
#include "vtkVariant.h"
#include "vtkObjectBase.h"
#include "vtkIndent.h"
#include "vtkVolume.h"
#include "vtkVolumeProperty.h"
#include "vtkProp.h"
#include "vtkMatrix4x4.h"
#include "vtkViewport.h"
#include "vtkMultiVolume.h"

template<> void emscripten::internal::raw_destructor<vtkMultiVolume>(vtkMultiVolume * ptr){ ptr->Delete(); }
EMSCRIPTEN_BINDINGS(vtkMultiVolume_class) {
  emscripten::class_<vtkMultiVolume, emscripten::base<vtkVolume>>("vtkMultiVolume")
    .smart_ptr<vtkSmartPointer<vtkMultiVolume>>("vtkSmartPointer<vtkMultiVolume>")
    .constructor(&vtk::MakeAvtkSmartPointer<vtkMultiVolume>)
    .class_function("IsTypeOf", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkMultiVolume::IsTypeOf( arg_0.c_str());}))
    .function("IsA", emscripten::optional_override([](vtkMultiVolume& self, const std::string & arg_0) -> int {  return self.IsA( arg_0.c_str());}))
    .class_function("SafeDownCast", &vtkMultiVolume::SafeDownCast, emscripten::allow_raw_pointers())
    .function("NewInstance", &vtkMultiVolume::NewInstance, emscripten::allow_raw_pointers())
    .class_function("GetNumberOfGenerationsFromBaseType", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkMultiVolume::GetNumberOfGenerationsFromBaseType( arg_0.c_str());}))
    .function("GetNumberOfGenerationsFromBase", emscripten::optional_override([](vtkMultiVolume& self, const std::string & arg_0) -> int {  return self.GetNumberOfGenerationsFromBase( arg_0.c_str());}))
    .function("SetVolume", &vtkMultiVolume::SetVolume, emscripten::allow_raw_pointers())
    .function("GetVolume", &vtkMultiVolume::GetVolume, emscripten::allow_raw_pointers())
    .function("RemoveVolume", &vtkMultiVolume::RemoveVolume)
    .function("SetProperty", &vtkMultiVolume::SetProperty, emscripten::allow_raw_pointers())
    .function("GetProperty", &vtkMultiVolume::GetProperty, emscripten::allow_raw_pointers())
    .function("GetMTime", &vtkMultiVolume::GetMTime)
    .function("ShallowCopy", &vtkMultiVolume::ShallowCopy, emscripten::allow_raw_pointers())
    .function("GetMatrix", emscripten::select_overload<vtkMatrix4x4*(vtkMultiVolume&)>([](vtkMultiVolume& self) -> vtkMatrix4x4* { return self.GetMatrix(); }), emscripten::allow_raw_pointers())
    .function("GetMatrix", emscripten::select_overload<void(vtkMultiVolume&, vtkMatrix4x4*)>([](vtkMultiVolume& self, vtkMatrix4x4* arg_0) -> void { return self.GetMatrix( arg_0); }), emscripten::allow_raw_pointers())
    .function("GetTextureMatrix", &vtkMultiVolume::GetTextureMatrix, emscripten::allow_raw_pointers())
    .function("GetDataBounds", emscripten::optional_override([](vtkMultiVolume& self) -> std::uintptr_t {  return reinterpret_cast<std::uintptr_t>(self.GetDataBounds()) / sizeof(double);}))
    .function("GetBoundsTime", &vtkMultiVolume::GetBoundsTime)
    .function("RenderVolumetricGeometry", &vtkMultiVolume::RenderVolumetricGeometry, emscripten::allow_raw_pointers())
    .function("GetDataGeometry", emscripten::optional_override([](vtkMultiVolume& self) -> std::uintptr_t {  return reinterpret_cast<std::uintptr_t>(self.GetDataGeometry()) / sizeof(double);}));
}
