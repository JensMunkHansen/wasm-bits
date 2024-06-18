// JavaScript wrapper for vtkUnstructuredGridVolumeRayIntegrator with embind 
//
// This file was auto-generated using :
/*
node /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/bin/vtkWrapJavaScript.js \
 @/home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkRenderingVolume.js/vtkRenderingVolume.js.Release.args \
 -o \
 /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkRenderingVolume.js/vtkUnstructuredGridVolumeRayIntegratorEmbinding.cxx \
 /home/jmh/github/vtk/Rendering/Volume/vtkUnstructuredGridVolumeRayIntegrator.h
*/
#include "vtkEmbindSmartPointerTrait.h"
#include <emscripten.h>
#include <string>
#include "vtkVariant.h"
#include "vtkObjectBase.h"
#include "vtkIndent.h"
#include "vtkVolume.h"
#include "vtkDataArray.h"
#include "vtkDoubleArray.h"
#include "vtkUnstructuredGridVolumeRayIntegrator.h"

template<> void emscripten::internal::raw_destructor<vtkUnstructuredGridVolumeRayIntegrator>(vtkUnstructuredGridVolumeRayIntegrator * ptr){ ptr->Delete(); }
EMSCRIPTEN_BINDINGS(vtkUnstructuredGridVolumeRayIntegrator_class) {
  emscripten::class_<vtkUnstructuredGridVolumeRayIntegrator, emscripten::base<vtkObject>>("vtkUnstructuredGridVolumeRayIntegrator")
    .class_function("IsTypeOf", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkUnstructuredGridVolumeRayIntegrator::IsTypeOf( arg_0.c_str());}))
    .function("IsA", emscripten::optional_override([](vtkUnstructuredGridVolumeRayIntegrator& self, const std::string & arg_0) -> int {  return self.IsA( arg_0.c_str());}))
    .class_function("SafeDownCast", &vtkUnstructuredGridVolumeRayIntegrator::SafeDownCast, emscripten::allow_raw_pointers())
    .function("NewInstance", &vtkUnstructuredGridVolumeRayIntegrator::NewInstance, emscripten::allow_raw_pointers())
    .class_function("GetNumberOfGenerationsFromBaseType", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkUnstructuredGridVolumeRayIntegrator::GetNumberOfGenerationsFromBaseType( arg_0.c_str());}))
    .function("GetNumberOfGenerationsFromBase", emscripten::optional_override([](vtkUnstructuredGridVolumeRayIntegrator& self, const std::string & arg_0) -> int {  return self.GetNumberOfGenerationsFromBase( arg_0.c_str());}));
}
