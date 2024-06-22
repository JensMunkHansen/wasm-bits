// JavaScript wrapper for vtkUnstructuredGridHomogeneousRayIntegrator with embind 
//
// This file was auto-generated using :
/*
node /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/bin/vtkWrapJavaScript.js \
 @/home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkRenderingVolume.js/vtkRenderingVolume.js.Release.args \
 -o \
 /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkRenderingVolume.js/vtkUnstructuredGridHomogeneousRayIntegratorEmbinding.cxx \
 /home/jmh/github/vtk/Rendering/Volume/vtkUnstructuredGridHomogeneousRayIntegrator.h
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
#include "vtkUnstructuredGridHomogeneousRayIntegrator.h"

template<> void emscripten::internal::raw_destructor<vtkUnstructuredGridHomogeneousRayIntegrator>(vtkUnstructuredGridHomogeneousRayIntegrator * ptr){ ptr->Delete(); }
EMSCRIPTEN_BINDINGS(vtkUnstructuredGridHomogeneousRayIntegrator_class) {
  emscripten::class_<vtkUnstructuredGridHomogeneousRayIntegrator, emscripten::base<vtkUnstructuredGridVolumeRayIntegrator>>("vtkUnstructuredGridHomogeneousRayIntegrator")
    .smart_ptr<vtkSmartPointer<vtkUnstructuredGridHomogeneousRayIntegrator>>("vtkSmartPointer<vtkUnstructuredGridHomogeneousRayIntegrator>")
    .constructor(&vtk::MakeVTKSmartPtr<vtkUnstructuredGridHomogeneousRayIntegrator>)
    .class_function("IsTypeOf", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkUnstructuredGridHomogeneousRayIntegrator::IsTypeOf( arg_0.c_str());}))
    .function("IsA", emscripten::optional_override([](vtkUnstructuredGridHomogeneousRayIntegrator& self, const std::string & arg_0) -> int {  return self.IsA( arg_0.c_str());}))
    .class_function("SafeDownCast", &vtkUnstructuredGridHomogeneousRayIntegrator::SafeDownCast, emscripten::allow_raw_pointers())
    .function("NewInstance", &vtkUnstructuredGridHomogeneousRayIntegrator::NewInstance, emscripten::allow_raw_pointers())
    .class_function("GetNumberOfGenerationsFromBaseType", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkUnstructuredGridHomogeneousRayIntegrator::GetNumberOfGenerationsFromBaseType( arg_0.c_str());}))
    .function("GetNumberOfGenerationsFromBase", emscripten::optional_override([](vtkUnstructuredGridHomogeneousRayIntegrator& self, const std::string & arg_0) -> int {  return self.GetNumberOfGenerationsFromBase( arg_0.c_str());}))
    .function("Initialize", &vtkUnstructuredGridHomogeneousRayIntegrator::Initialize, emscripten::allow_raw_pointers())
    .function("SetTransferFunctionTableSize", &vtkUnstructuredGridHomogeneousRayIntegrator::SetTransferFunctionTableSize)
    .function("GetTransferFunctionTableSize", &vtkUnstructuredGridHomogeneousRayIntegrator::GetTransferFunctionTableSize);
}
