// JavaScript wrapper for vtkUnstructuredGridPreIntegration with embind 
//
// This file was auto-generated using :
/*
node /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/bin/vtkWrapJavaScript.js \
 @/home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkRenderingVolume.js/vtkRenderingVolume.js.Release.args \
 -o \
 /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkRenderingVolume.js/vtkUnstructuredGridPreIntegrationEmbinding.cxx \
 /home/jmh/github/vtk/Rendering/Volume/vtkUnstructuredGridPreIntegration.h
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
#include "vtkUnstructuredGridPreIntegration.h"

template<> void emscripten::internal::raw_destructor<vtkUnstructuredGridPreIntegration>(vtkUnstructuredGridPreIntegration * ptr){ ptr->Delete(); }
EMSCRIPTEN_BINDINGS(vtkUnstructuredGridPreIntegration_class) {
  emscripten::class_<vtkUnstructuredGridPreIntegration, emscripten::base<vtkUnstructuredGridVolumeRayIntegrator>>("vtkUnstructuredGridPreIntegration")
    .smart_ptr<vtkSmartPointer<vtkUnstructuredGridPreIntegration>>("vtkSmartPointer<vtkUnstructuredGridPreIntegration>")
    .constructor(&vtk::MakeVTKSmartPtr<vtkUnstructuredGridPreIntegration>)
    .class_function("IsTypeOf", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkUnstructuredGridPreIntegration::IsTypeOf( arg_0.c_str());}))
    .function("IsA", emscripten::optional_override([](vtkUnstructuredGridPreIntegration& self, const std::string & arg_0) -> int {  return self.IsA( arg_0.c_str());}))
    .class_function("SafeDownCast", &vtkUnstructuredGridPreIntegration::SafeDownCast, emscripten::allow_raw_pointers())
    .function("NewInstance", &vtkUnstructuredGridPreIntegration::NewInstance, emscripten::allow_raw_pointers())
    .class_function("GetNumberOfGenerationsFromBaseType", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkUnstructuredGridPreIntegration::GetNumberOfGenerationsFromBaseType( arg_0.c_str());}))
    .function("GetNumberOfGenerationsFromBase", emscripten::optional_override([](vtkUnstructuredGridPreIntegration& self, const std::string & arg_0) -> int {  return self.GetNumberOfGenerationsFromBase( arg_0.c_str());}))
    .function("Initialize", &vtkUnstructuredGridPreIntegration::Initialize, emscripten::allow_raw_pointers())
    .function("GetIntegrator", &vtkUnstructuredGridPreIntegration::GetIntegrator, emscripten::allow_raw_pointers())
    .function("SetIntegrator", &vtkUnstructuredGridPreIntegration::SetIntegrator, emscripten::allow_raw_pointers())
    .function("SetIntegrationTableScalarResolution", &vtkUnstructuredGridPreIntegration::SetIntegrationTableScalarResolution)
    .function("GetIntegrationTableScalarResolution", &vtkUnstructuredGridPreIntegration::GetIntegrationTableScalarResolution)
    .function("SetIntegrationTableLengthResolution", &vtkUnstructuredGridPreIntegration::SetIntegrationTableLengthResolution)
    .function("GetIntegrationTableLengthResolution", &vtkUnstructuredGridPreIntegration::GetIntegrationTableLengthResolution)
    .function("GetIntegrationTableScalarShift", &vtkUnstructuredGridPreIntegration::GetIntegrationTableScalarShift)
    .function("GetIntegrationTableScalarScale", &vtkUnstructuredGridPreIntegration::GetIntegrationTableScalarScale)
    .function("GetIntegrationTableLengthScale", &vtkUnstructuredGridPreIntegration::GetIntegrationTableLengthScale)
    .function("GetIncrementalPreIntegration", &vtkUnstructuredGridPreIntegration::GetIncrementalPreIntegration)
    .function("SetIncrementalPreIntegration", &vtkUnstructuredGridPreIntegration::SetIncrementalPreIntegration)
    .function("IncrementalPreIntegrationOn", &vtkUnstructuredGridPreIntegration::IncrementalPreIntegrationOn)
    .function("IncrementalPreIntegrationOff", &vtkUnstructuredGridPreIntegration::IncrementalPreIntegrationOff)
    .function("GetPreIntegrationTable", emscripten::optional_override([](vtkUnstructuredGridPreIntegration& self, int arg_0) -> std::uintptr_t {  return reinterpret_cast<std::uintptr_t>(self.GetPreIntegrationTable( arg_0)) / sizeof(float);}))
    .function("GetTableEntry", emscripten::optional_override([](vtkUnstructuredGridPreIntegration& self, double arg_0, double arg_1, double arg_2, int arg_3) -> std::uintptr_t {  return reinterpret_cast<std::uintptr_t>(self.GetTableEntry( arg_0, arg_1, arg_2, arg_3)) / sizeof(float);}))
    .function("GetIndexedTableEntry", emscripten::optional_override([](vtkUnstructuredGridPreIntegration& self, int arg_0, int arg_1, int arg_2, int arg_3) -> std::uintptr_t {  return reinterpret_cast<std::uintptr_t>(self.GetIndexedTableEntry( arg_0, arg_1, arg_2, arg_3)) / sizeof(float);}));
}
