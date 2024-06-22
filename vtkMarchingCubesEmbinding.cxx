// JavaScript wrapper for vtkMarchingCubes with embind 
//
// This file was auto-generated using :
/*
node /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/bin/vtkWrapJavaScript.js \
 @/home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkFiltersCore.js/vtkFiltersCore.js.Release.args \
 -o \
 /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkFiltersCore.js/vtkMarchingCubesEmbinding.cxx \
 /home/jmh/github/vtk/Filters/Core/vtkMarchingCubes.h
*/
#include "vtkEmbindSmartPointerTrait.h"
#include <emscripten.h>
#include <string>
#include "vtkVariant.h"
#include "vtkObjectBase.h"
#include "vtkIndent.h"
#include "vtkIncrementalPointLocator.h"
#include "vtkMarchingCubes.h"

template<> void emscripten::internal::raw_destructor<vtkMarchingCubes>(vtkMarchingCubes * ptr){ ptr->Delete(); }
EMSCRIPTEN_BINDINGS(vtkMarchingCubes_class) {
  emscripten::class_<vtkMarchingCubes, emscripten::base<vtkPolyDataAlgorithm>>("vtkMarchingCubes")
    .smart_ptr<vtkSmartPointer<vtkMarchingCubes>>("vtkSmartPointer<vtkMarchingCubes>")
    .constructor(&vtk::MakeAvtkSmartPointer<vtkMarchingCubes>)
    .class_function("IsTypeOf", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkMarchingCubes::IsTypeOf( arg_0.c_str());}))
    .function("IsA", emscripten::optional_override([](vtkMarchingCubes& self, const std::string & arg_0) -> int {  return self.IsA( arg_0.c_str());}))
    .class_function("SafeDownCast", &vtkMarchingCubes::SafeDownCast, emscripten::allow_raw_pointers())
    .function("NewInstance", &vtkMarchingCubes::NewInstance, emscripten::allow_raw_pointers())
    .class_function("GetNumberOfGenerationsFromBaseType", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkMarchingCubes::GetNumberOfGenerationsFromBaseType( arg_0.c_str());}))
    .function("GetNumberOfGenerationsFromBase", emscripten::optional_override([](vtkMarchingCubes& self, const std::string & arg_0) -> int {  return self.GetNumberOfGenerationsFromBase( arg_0.c_str());}))
    .function("SetValue", &vtkMarchingCubes::SetValue)
    .function("GetValue", &vtkMarchingCubes::GetValue)
    .function("GetValues", emscripten::select_overload<std::uintptr_t(vtkMarchingCubes&)>([](vtkMarchingCubes& self) -> std::uintptr_t { return reinterpret_cast<std::uintptr_t>(self.GetValues()); }))
    .function("GetValues", emscripten::select_overload<void(vtkMarchingCubes&, std::uintptr_t)>([](vtkMarchingCubes& self, std::uintptr_t arg_0) -> void { return self.GetValues(reinterpret_cast<double*>(arg_0 * sizeof(double))); }))
    .function("SetNumberOfContours", &vtkMarchingCubes::SetNumberOfContours)
    .function("GetNumberOfContours", &vtkMarchingCubes::GetNumberOfContours)
    .function("GenerateValues", emscripten::select_overload<void(vtkMarchingCubes&, int, double, double)>([](vtkMarchingCubes& self, int arg_0, double arg_1, double arg_2) -> void { return self.GenerateValues( arg_0, arg_1, arg_2); }))
    .function("GetMTime", &vtkMarchingCubes::GetMTime)
    .function("SetComputeNormals", &vtkMarchingCubes::SetComputeNormals)
    .function("GetComputeNormals", &vtkMarchingCubes::GetComputeNormals)
    .function("ComputeNormalsOn", &vtkMarchingCubes::ComputeNormalsOn)
    .function("ComputeNormalsOff", &vtkMarchingCubes::ComputeNormalsOff)
    .function("SetComputeGradients", &vtkMarchingCubes::SetComputeGradients)
    .function("GetComputeGradients", &vtkMarchingCubes::GetComputeGradients)
    .function("ComputeGradientsOn", &vtkMarchingCubes::ComputeGradientsOn)
    .function("ComputeGradientsOff", &vtkMarchingCubes::ComputeGradientsOff)
    .function("SetComputeScalars", &vtkMarchingCubes::SetComputeScalars)
    .function("GetComputeScalars", &vtkMarchingCubes::GetComputeScalars)
    .function("ComputeScalarsOn", &vtkMarchingCubes::ComputeScalarsOn)
    .function("ComputeScalarsOff", &vtkMarchingCubes::ComputeScalarsOff)
    .function("SetLocator", &vtkMarchingCubes::SetLocator, emscripten::allow_raw_pointers())
    .function("GetLocator", &vtkMarchingCubes::GetLocator, emscripten::allow_raw_pointers())
    .function("CreateDefaultLocator", &vtkMarchingCubes::CreateDefaultLocator);
}
