// JavaScript wrapper for vtkAnariVolumeInterface with embind 
//
// This file was auto-generated using :
/*
node /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/bin/vtkWrapJavaScript.js \
 @/home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkRenderingVolume.js/vtkRenderingVolume.js.Release.args \
 -o \
 /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkRenderingVolume.js/vtkAnariVolumeInterfaceEmbinding.cxx \
 /home/jmh/github/vtk/Rendering/Volume/vtkAnariVolumeInterface.h
*/
#include "vtkEmbindSmartPointerTrait.h"
#include <emscripten.h>
#include <string>
#include "vtkVariant.h"
#include "vtkObjectBase.h"
#include "vtkIndent.h"
#include "vtkRenderer.h"
#include "vtkVolume.h"
#include "vtkAnariVolumeInterface.h"

template<> void emscripten::internal::raw_destructor<vtkAnariVolumeInterface>(vtkAnariVolumeInterface * ptr){ ptr->Delete(); }
EMSCRIPTEN_BINDINGS(vtkAnariVolumeInterface_class) {
  emscripten::class_<vtkAnariVolumeInterface, emscripten::base<vtkVolumeMapper>>("vtkAnariVolumeInterface")
    .smart_ptr<vtkSmartPointer<vtkAnariVolumeInterface>>("vtkSmartPointer<vtkAnariVolumeInterface>")
    .constructor(&vtk::MakeVTKSmartPtr<vtkAnariVolumeInterface>)
    .class_function("IsTypeOf", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkAnariVolumeInterface::IsTypeOf( arg_0.c_str());}))
    .function("IsA", emscripten::optional_override([](vtkAnariVolumeInterface& self, const std::string & arg_0) -> int {  return self.IsA( arg_0.c_str());}))
    .class_function("SafeDownCast", &vtkAnariVolumeInterface::SafeDownCast, emscripten::allow_raw_pointers())
    .function("NewInstance", &vtkAnariVolumeInterface::NewInstance, emscripten::allow_raw_pointers())
    .class_function("GetNumberOfGenerationsFromBaseType", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkAnariVolumeInterface::GetNumberOfGenerationsFromBaseType( arg_0.c_str());}))
    .function("GetNumberOfGenerationsFromBase", emscripten::optional_override([](vtkAnariVolumeInterface& self, const std::string & arg_0) -> int {  return self.GetNumberOfGenerationsFromBase( arg_0.c_str());}))
    .function("Render", &vtkAnariVolumeInterface::Render, emscripten::allow_raw_pointers());
}
