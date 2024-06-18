// JavaScript wrapper for vtkOSPRayVolumeInterface with embind 
//
// This file was auto-generated using :
/*
node /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/bin/vtkWrapJavaScript.js \
 @/home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkRenderingVolume.js/vtkRenderingVolume.js.Release.args \
 -o \
 /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkRenderingVolume.js/vtkOSPRayVolumeInterfaceEmbinding.cxx \
 /home/jmh/github/vtk/Rendering/Volume/vtkOSPRayVolumeInterface.h
*/
#include "vtkEmbindSmartPointerTrait.h"
#include <emscripten.h>
#include <string>
#include "vtkVariant.h"
#include "vtkObjectBase.h"
#include "vtkIndent.h"
#include "vtkRenderer.h"
#include "vtkVolume.h"
#include "vtkOSPRayVolumeInterface.h"

template<> void emscripten::internal::raw_destructor<vtkOSPRayVolumeInterface>(vtkOSPRayVolumeInterface * ptr){ ptr->Delete(); }
EMSCRIPTEN_BINDINGS(vtkOSPRayVolumeInterface_class) {
  emscripten::class_<vtkOSPRayVolumeInterface, emscripten::base<vtkVolumeMapper>>("vtkOSPRayVolumeInterface")
    .smart_ptr<vtkSmartPointer<vtkOSPRayVolumeInterface>>("vtkSmartPointer<vtkOSPRayVolumeInterface>")
    .constructor(&vtk::MakeAvtkSmartPointer<vtkOSPRayVolumeInterface>)
    .class_function("IsTypeOf", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkOSPRayVolumeInterface::IsTypeOf( arg_0.c_str());}))
    .function("IsA", emscripten::optional_override([](vtkOSPRayVolumeInterface& self, const std::string & arg_0) -> int {  return self.IsA( arg_0.c_str());}))
    .class_function("SafeDownCast", &vtkOSPRayVolumeInterface::SafeDownCast, emscripten::allow_raw_pointers())
    .function("NewInstance", &vtkOSPRayVolumeInterface::NewInstance, emscripten::allow_raw_pointers())
    .class_function("GetNumberOfGenerationsFromBaseType", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkOSPRayVolumeInterface::GetNumberOfGenerationsFromBaseType( arg_0.c_str());}))
    .function("GetNumberOfGenerationsFromBase", emscripten::optional_override([](vtkOSPRayVolumeInterface& self, const std::string & arg_0) -> int {  return self.GetNumberOfGenerationsFromBase( arg_0.c_str());}))
    .function("Render", &vtkOSPRayVolumeInterface::Render, emscripten::allow_raw_pointers());
}
