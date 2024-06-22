// JavaScript wrapper for vtkImageMarchingCubes with embind 
//
// This file was auto-generated using :
/*
node /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/bin/vtkWrapJavaScript.js \
 @/home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkFiltersGeneral.js/vtkFiltersGeneral.js.Release.args \
 -o \
 /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkFiltersGeneral.js/vtkImageMarchingCubesEmbinding.cxx \
 /home/jmh/github/vtk/Filters/General/vtkImageMarchingCubes.h
*/
#include "vtkEmbindSmartPointerTrait.h"
#include <emscripten.h>
#include <string>
#include "vtkVariant.h"
#include "vtkObjectBase.h"
#include "vtkIndent.h"
#include "vtkImageMarchingCubes.h"

template<> void emscripten::internal::raw_destructor<vtkImageMarchingCubes>(vtkImageMarchingCubes * ptr){ ptr->Delete(); }
EMSCRIPTEN_BINDINGS(vtkImageMarchingCubes_class) {
  emscripten::class_<vtkImageMarchingCubes, emscripten::base<vtkPolyDataAlgorithm>>("vtkImageMarchingCubes")
    .smart_ptr<vtkSmartPointer<vtkImageMarchingCubes>>("vtkSmartPointer<vtkImageMarchingCubes>")
    .constructor(&vtk::MakeVTKSmartPtr<vtkImageMarchingCubes>)
    .class_function("IsTypeOf", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkImageMarchingCubes::IsTypeOf( arg_0.c_str());}))
    .function("IsA", emscripten::optional_override([](vtkImageMarchingCubes& self, const std::string & arg_0) -> int {  return self.IsA( arg_0.c_str());}))
    .class_function("SafeDownCast", &vtkImageMarchingCubes::SafeDownCast, emscripten::allow_raw_pointers())
    .function("NewInstance", &vtkImageMarchingCubes::NewInstance, emscripten::allow_raw_pointers())
    .class_function("GetNumberOfGenerationsFromBaseType", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkImageMarchingCubes::GetNumberOfGenerationsFromBaseType( arg_0.c_str());}))
    .function("GetNumberOfGenerationsFromBase", emscripten::optional_override([](vtkImageMarchingCubes& self, const std::string & arg_0) -> int {  return self.GetNumberOfGenerationsFromBase( arg_0.c_str());}))
    .function("SetValue", &vtkImageMarchingCubes::SetValue)
    .function("GetValue", &vtkImageMarchingCubes::GetValue)
    .function("GetValues", emscripten::select_overload<std::uintptr_t(vtkImageMarchingCubes&)>([](vtkImageMarchingCubes& self) -> std::uintptr_t { return reinterpret_cast<std::uintptr_t>(self.GetValues()); }))
    .function("GetValues", emscripten::select_overload<void(vtkImageMarchingCubes&, std::uintptr_t)>([](vtkImageMarchingCubes& self, std::uintptr_t arg_0) -> void { return self.GetValues(reinterpret_cast<double*>(arg_0 * sizeof(double))); }))
    .function("SetNumberOfContours", &vtkImageMarchingCubes::SetNumberOfContours)
    .function("GetNumberOfContours", &vtkImageMarchingCubes::GetNumberOfContours)
    .function("GenerateValues", emscripten::select_overload<void(vtkImageMarchingCubes&, int, double, double)>([](vtkImageMarchingCubes& self, int arg_0, double arg_1, double arg_2) -> void { return self.GenerateValues( arg_0, arg_1, arg_2); }))
    .function("GetMTime", &vtkImageMarchingCubes::GetMTime)
    .function("SetComputeScalars", &vtkImageMarchingCubes::SetComputeScalars)
    .function("GetComputeScalars", &vtkImageMarchingCubes::GetComputeScalars)
    .function("ComputeScalarsOn", &vtkImageMarchingCubes::ComputeScalarsOn)
    .function("ComputeScalarsOff", &vtkImageMarchingCubes::ComputeScalarsOff)
    .function("SetComputeNormals", &vtkImageMarchingCubes::SetComputeNormals)
    .function("GetComputeNormals", &vtkImageMarchingCubes::GetComputeNormals)
    .function("ComputeNormalsOn", &vtkImageMarchingCubes::ComputeNormalsOn)
    .function("ComputeNormalsOff", &vtkImageMarchingCubes::ComputeNormalsOff)
    .function("SetComputeGradients", &vtkImageMarchingCubes::SetComputeGradients)
    .function("GetComputeGradients", &vtkImageMarchingCubes::GetComputeGradients)
    .function("ComputeGradientsOn", &vtkImageMarchingCubes::ComputeGradientsOn)
    .function("ComputeGradientsOff", &vtkImageMarchingCubes::ComputeGradientsOff)
    .function("GetLocatorPoint", &vtkImageMarchingCubes::GetLocatorPoint)
    .function("AddLocatorPoint", &vtkImageMarchingCubes::AddLocatorPoint)
    .function("IncrementLocatorZ", &vtkImageMarchingCubes::IncrementLocatorZ)
    .function("SetInputMemoryLimit", &vtkImageMarchingCubes::SetInputMemoryLimit)
    .function("GetInputMemoryLimit", &vtkImageMarchingCubes::GetInputMemoryLimit);
}
