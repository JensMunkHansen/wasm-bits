// JavaScript wrapper for vtkUnstructuredGridBunykRayCastFunction with embind 
//
// This file was auto-generated using :
/*
node /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/bin/vtkWrapJavaScript.js \
 @/home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkRenderingVolume.js/vtkRenderingVolume.js.Release.args \
 -o \
 /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkRenderingVolume.js/vtkUnstructuredGridBunykRayCastFunctionEmbinding.cxx \
 /home/jmh/github/vtk/Rendering/Volume/vtkUnstructuredGridBunykRayCastFunction.h
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
#include "vtkMatrix4x4.h"
#include "vtkUnstructuredGridBunykRayCastFunction.h"

EMSCRIPTEN_BINDINGS(vtkRenderingVolume_vtkUnstructuredGridBunykRayCastFunction_0_1_constants) {
  const struct { const char *name; int value; }
    constants[2] = {
      { "VTK_BUNYKRCF_MAX_ARRAYS", 10000 },
      { "VTK_BUNYKRCF_ARRAY_SIZE", 10000 },
  };
  for (int c = 0; c < 2; c++)
  {
    emscripten::constant(constants[c].name, constants[c].value);
  }
}
template<> void emscripten::internal::raw_destructor<vtkUnstructuredGridBunykRayCastFunction>(vtkUnstructuredGridBunykRayCastFunction * ptr){ ptr->Delete(); }
EMSCRIPTEN_BINDINGS(vtkUnstructuredGridBunykRayCastFunction_class) {
  emscripten::class_<vtkUnstructuredGridBunykRayCastFunction, emscripten::base<vtkUnstructuredGridVolumeRayCastFunction>>("vtkUnstructuredGridBunykRayCastFunction")
    .smart_ptr<vtkSmartPointer<vtkUnstructuredGridBunykRayCastFunction>>("vtkSmartPointer<vtkUnstructuredGridBunykRayCastFunction>")
    .constructor(&vtk::MakeAvtkSmartPointer<vtkUnstructuredGridBunykRayCastFunction>)
    .class_function("IsTypeOf", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkUnstructuredGridBunykRayCastFunction::IsTypeOf( arg_0.c_str());}))
    .function("IsA", emscripten::optional_override([](vtkUnstructuredGridBunykRayCastFunction& self, const std::string & arg_0) -> int {  return self.IsA( arg_0.c_str());}))
    .class_function("SafeDownCast", &vtkUnstructuredGridBunykRayCastFunction::SafeDownCast, emscripten::allow_raw_pointers())
    .function("NewInstance", &vtkUnstructuredGridBunykRayCastFunction::NewInstance, emscripten::allow_raw_pointers())
    .class_function("GetNumberOfGenerationsFromBaseType", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkUnstructuredGridBunykRayCastFunction::GetNumberOfGenerationsFromBaseType( arg_0.c_str());}))
    .function("GetNumberOfGenerationsFromBase", emscripten::optional_override([](vtkUnstructuredGridBunykRayCastFunction& self, const std::string & arg_0) -> int {  return self.GetNumberOfGenerationsFromBase( arg_0.c_str());}))
    .function("Initialize", &vtkUnstructuredGridBunykRayCastFunction::Initialize, emscripten::allow_raw_pointers())
    .function("Finalize", &vtkUnstructuredGridBunykRayCastFunction::Finalize)
    .function("NewIterator", &vtkUnstructuredGridBunykRayCastFunction::NewIterator, emscripten::allow_raw_pointers())
    .function("GetPoints", emscripten::optional_override([](vtkUnstructuredGridBunykRayCastFunction& self) -> std::uintptr_t {  return reinterpret_cast<std::uintptr_t>(self.GetPoints()) / sizeof(double);}))
    .function("GetViewToWorldMatrix", &vtkUnstructuredGridBunykRayCastFunction::GetViewToWorldMatrix, emscripten::allow_raw_pointers());
}
