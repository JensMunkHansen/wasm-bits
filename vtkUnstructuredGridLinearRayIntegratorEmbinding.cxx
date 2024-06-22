// JavaScript wrapper for vtkUnstructuredGridLinearRayIntegrator with embind 
//
// This file was auto-generated using :
/*
node /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/bin/vtkWrapJavaScript.js \
 @/home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkRenderingVolume.js/vtkRenderingVolume.js.Release.args \
 -o \
 /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkRenderingVolume.js/vtkUnstructuredGridLinearRayIntegratorEmbinding.cxx \
 /home/jmh/github/vtk/Rendering/Volume/vtkUnstructuredGridLinearRayIntegrator.h
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
#include "vtkUnstructuredGridLinearRayIntegrator.h"

template<> void emscripten::internal::raw_destructor<vtkUnstructuredGridLinearRayIntegrator>(vtkUnstructuredGridLinearRayIntegrator * ptr){ ptr->Delete(); }
EMSCRIPTEN_BINDINGS(vtkUnstructuredGridLinearRayIntegrator_class) {
  emscripten::class_<vtkUnstructuredGridLinearRayIntegrator, emscripten::base<vtkUnstructuredGridVolumeRayIntegrator>>("vtkUnstructuredGridLinearRayIntegrator")
    .smart_ptr<vtkSmartPointer<vtkUnstructuredGridLinearRayIntegrator>>("vtkSmartPointer<vtkUnstructuredGridLinearRayIntegrator>")
    .constructor(&vtk::MakeVTKSmartPtr<vtkUnstructuredGridLinearRayIntegrator>)
    .class_function("IsTypeOf", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkUnstructuredGridLinearRayIntegrator::IsTypeOf( arg_0.c_str());}))
    .function("IsA", emscripten::optional_override([](vtkUnstructuredGridLinearRayIntegrator& self, const std::string & arg_0) -> int {  return self.IsA( arg_0.c_str());}))
    .class_function("SafeDownCast", &vtkUnstructuredGridLinearRayIntegrator::SafeDownCast, emscripten::allow_raw_pointers())
    .function("NewInstance", &vtkUnstructuredGridLinearRayIntegrator::NewInstance, emscripten::allow_raw_pointers())
    .class_function("GetNumberOfGenerationsFromBaseType", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkUnstructuredGridLinearRayIntegrator::GetNumberOfGenerationsFromBaseType( arg_0.c_str());}))
    .function("GetNumberOfGenerationsFromBase", emscripten::optional_override([](vtkUnstructuredGridLinearRayIntegrator& self, const std::string & arg_0) -> int {  return self.GetNumberOfGenerationsFromBase( arg_0.c_str());}))
    .function("Initialize", &vtkUnstructuredGridLinearRayIntegrator::Initialize, emscripten::allow_raw_pointers())
    .class_function("Psi", &vtkUnstructuredGridLinearRayIntegrator::Psi);
}
