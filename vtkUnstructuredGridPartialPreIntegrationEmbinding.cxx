// JavaScript wrapper for vtkUnstructuredGridPartialPreIntegration with embind 
//
// This file was auto-generated using :
/*
node /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/bin/vtkWrapJavaScript.js \
 @/home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkRenderingVolume.js/vtkRenderingVolume.js.Release.args \
 -o \
 /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkRenderingVolume.js/vtkUnstructuredGridPartialPreIntegrationEmbinding.cxx \
 /home/jmh/github/vtk/Rendering/Volume/vtkUnstructuredGridPartialPreIntegration.h
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
#include "vtkUnstructuredGridPartialPreIntegration.h"

template<> void emscripten::internal::raw_destructor<vtkUnstructuredGridPartialPreIntegration>(vtkUnstructuredGridPartialPreIntegration * ptr){ ptr->Delete(); }
EMSCRIPTEN_BINDINGS(vtkUnstructuredGridPartialPreIntegration_class) {
  emscripten::class_<vtkUnstructuredGridPartialPreIntegration, emscripten::base<vtkUnstructuredGridVolumeRayIntegrator>>("vtkUnstructuredGridPartialPreIntegration")
    .smart_ptr<vtkSmartPointer<vtkUnstructuredGridPartialPreIntegration>>("vtkSmartPointer<vtkUnstructuredGridPartialPreIntegration>")
    .constructor(&vtk::MakeVTKSmartPtr<vtkUnstructuredGridPartialPreIntegration>)
    .class_function("IsTypeOf", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkUnstructuredGridPartialPreIntegration::IsTypeOf( arg_0.c_str());}))
    .function("IsA", emscripten::optional_override([](vtkUnstructuredGridPartialPreIntegration& self, const std::string & arg_0) -> int {  return self.IsA( arg_0.c_str());}))
    .class_function("SafeDownCast", &vtkUnstructuredGridPartialPreIntegration::SafeDownCast, emscripten::allow_raw_pointers())
    .function("NewInstance", &vtkUnstructuredGridPartialPreIntegration::NewInstance, emscripten::allow_raw_pointers())
    .class_function("GetNumberOfGenerationsFromBaseType", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkUnstructuredGridPartialPreIntegration::GetNumberOfGenerationsFromBaseType( arg_0.c_str());}))
    .function("GetNumberOfGenerationsFromBase", emscripten::optional_override([](vtkUnstructuredGridPartialPreIntegration& self, const std::string & arg_0) -> int {  return self.GetNumberOfGenerationsFromBase( arg_0.c_str());}))
    .function("Initialize", &vtkUnstructuredGridPartialPreIntegration::Initialize, emscripten::allow_raw_pointers())
    .class_function("Psi", &vtkUnstructuredGridPartialPreIntegration::Psi)
    .class_function("BuildPsiTable", &vtkUnstructuredGridPartialPreIntegration::BuildPsiTable);
}
