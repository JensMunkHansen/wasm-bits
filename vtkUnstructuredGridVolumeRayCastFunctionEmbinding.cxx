// JavaScript wrapper for vtkUnstructuredGridVolumeRayCastFunction with embind 
//
// This file was auto-generated using :
/*
node /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/bin/vtkWrapJavaScript.js \
 @/home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkRenderingVolume.js/vtkRenderingVolume.js.Release.args \
 -o \
 /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkRenderingVolume.js/vtkUnstructuredGridVolumeRayCastFunctionEmbinding.cxx \
 /home/jmh/github/vtk/Rendering/Volume/vtkUnstructuredGridVolumeRayCastFunction.h
*/
#include "vtkEmbindSmartPointerTrait.h"
#include <emscripten.h>
#include <string>
#include "vtkVariant.h"
#include "vtkObjectBase.h"
#include "vtkIndent.h"
#include "vtkRenderer.h"
#include "vtkVolume.h"
#include "vtkUnstructuredGridVolumeRayCastIterator.h"
#include "vtkUnstructuredGridVolumeRayCastFunction.h"

template<> void emscripten::internal::raw_destructor<vtkUnstructuredGridVolumeRayCastFunction>(vtkUnstructuredGridVolumeRayCastFunction * ptr){ ptr->Delete(); }
EMSCRIPTEN_BINDINGS(vtkUnstructuredGridVolumeRayCastFunction_class) {
  emscripten::class_<vtkUnstructuredGridVolumeRayCastFunction, emscripten::base<vtkObject>>("vtkUnstructuredGridVolumeRayCastFunction")
    .class_function("IsTypeOf", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkUnstructuredGridVolumeRayCastFunction::IsTypeOf( arg_0.c_str());}))
    .function("IsA", emscripten::optional_override([](vtkUnstructuredGridVolumeRayCastFunction& self, const std::string & arg_0) -> int {  return self.IsA( arg_0.c_str());}))
    .class_function("SafeDownCast", &vtkUnstructuredGridVolumeRayCastFunction::SafeDownCast, emscripten::allow_raw_pointers())
    .function("NewInstance", &vtkUnstructuredGridVolumeRayCastFunction::NewInstance, emscripten::allow_raw_pointers())
    .class_function("GetNumberOfGenerationsFromBaseType", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkUnstructuredGridVolumeRayCastFunction::GetNumberOfGenerationsFromBaseType( arg_0.c_str());}))
    .function("GetNumberOfGenerationsFromBase", emscripten::optional_override([](vtkUnstructuredGridVolumeRayCastFunction& self, const std::string & arg_0) -> int {  return self.GetNumberOfGenerationsFromBase( arg_0.c_str());}));
}