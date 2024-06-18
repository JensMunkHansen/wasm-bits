// JavaScript wrapper for vtkUnstructuredGridVolumeMapper with embind 
//
// This file was auto-generated using :
/*
node /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/bin/vtkWrapJavaScript.js \
 @/home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkRenderingVolume.js/vtkRenderingVolume.js.Release.args \
 -o \
 /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkRenderingVolume.js/vtkUnstructuredGridVolumeMapperEmbinding.cxx \
 /home/jmh/github/vtk/Rendering/Volume/vtkUnstructuredGridVolumeMapper.h
*/
#include "vtkEmbindSmartPointerTrait.h"
#include <emscripten.h>
#include <string>
#include "vtkVariant.h"
#include "vtkObjectBase.h"
#include "vtkIndent.h"
#include "vtkUnstructuredGridBase.h"
#include "vtkDataSet.h"
#include "vtkRenderer.h"
#include "vtkVolume.h"
#include "vtkWindow.h"
#include "vtkUnstructuredGridVolumeMapper.h"

template<> void emscripten::internal::raw_destructor<vtkUnstructuredGridVolumeMapper>(vtkUnstructuredGridVolumeMapper * ptr){ ptr->Delete(); }
EMSCRIPTEN_BINDINGS(vtkUnstructuredGridVolumeMapper_class) {
  emscripten::class_<vtkUnstructuredGridVolumeMapper, emscripten::base<vtkAbstractVolumeMapper>>("vtkUnstructuredGridVolumeMapper")
    .class_function("IsTypeOf", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkUnstructuredGridVolumeMapper::IsTypeOf( arg_0.c_str());}))
    .function("IsA", emscripten::optional_override([](vtkUnstructuredGridVolumeMapper& self, const std::string & arg_0) -> int {  return self.IsA( arg_0.c_str());}))
    .class_function("SafeDownCast", &vtkUnstructuredGridVolumeMapper::SafeDownCast, emscripten::allow_raw_pointers())
    .function("NewInstance", &vtkUnstructuredGridVolumeMapper::NewInstance, emscripten::allow_raw_pointers())
    .class_function("GetNumberOfGenerationsFromBaseType", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkUnstructuredGridVolumeMapper::GetNumberOfGenerationsFromBaseType( arg_0.c_str());}))
    .function("GetNumberOfGenerationsFromBase", emscripten::optional_override([](vtkUnstructuredGridVolumeMapper& self, const std::string & arg_0) -> int {  return self.GetNumberOfGenerationsFromBase( arg_0.c_str());}))
    .function("SetInputData", emscripten::select_overload<void(vtkUnstructuredGridVolumeMapper&, vtkUnstructuredGridBase*)>([](vtkUnstructuredGridVolumeMapper& self, vtkUnstructuredGridBase* arg_0) -> void { return self.SetInputData( arg_0); }), emscripten::allow_raw_pointers())
    .function("SetInputData", emscripten::select_overload<void(vtkUnstructuredGridVolumeMapper&, vtkDataSet*)>([](vtkUnstructuredGridVolumeMapper& self, vtkDataSet* arg_0) -> void { return self.SetInputData( arg_0); }), emscripten::allow_raw_pointers())
    .function("GetInput", &vtkUnstructuredGridVolumeMapper::GetInput, emscripten::allow_raw_pointers())
    .function("SetBlendMode", &vtkUnstructuredGridVolumeMapper::SetBlendMode)
    .function("SetBlendModeToComposite", &vtkUnstructuredGridVolumeMapper::SetBlendModeToComposite)
    .function("SetBlendModeToMaximumIntensity", &vtkUnstructuredGridVolumeMapper::SetBlendModeToMaximumIntensity)
    .function("GetBlendMode", &vtkUnstructuredGridVolumeMapper::GetBlendMode)
    .function("ReleaseGraphicsResources", &vtkUnstructuredGridVolumeMapper::ReleaseGraphicsResources, emscripten::allow_raw_pointers());
}
EMSCRIPTEN_BINDINGS(vtkRenderingVolume_vtkUnstructuredGridVolumeMapper_0_2_constants) {
  const struct { const char *name; int value; }
    constants[2] = {
      { "vtkUnstructuredGridVolumeMapper_COMPOSITE_BLEND", vtkUnstructuredGridVolumeMapper::COMPOSITE_BLEND },
      { "vtkUnstructuredGridVolumeMapper_MAXIMUM_INTENSITY_BLEND", vtkUnstructuredGridVolumeMapper::MAXIMUM_INTENSITY_BLEND },
  };
  for (int c = 0; c < 2; c++)
  {
    emscripten::constant(constants[c].name, constants[c].value);
  }
}
