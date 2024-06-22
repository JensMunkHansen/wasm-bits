// JavaScript wrapper for vtkMarchingContourFilter with embind 
//
// This file was auto-generated using :
/*
node /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/bin/vtkWrapJavaScript.js \
 @/home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkFiltersGeneral.js/vtkFiltersGeneral.js.Release.args \
 -o \
 /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkFiltersGeneral.js/vtkMarchingContourFilterEmbinding.cxx \
 /home/jmh/github/vtk/Filters/General/vtkMarchingContourFilter.h
*/
#include "vtkEmbindSmartPointerTrait.h"
#include <emscripten.h>
#include <string>
#include "vtkVariant.h"
#include "vtkObjectBase.h"
#include "vtkIndent.h"
#include "vtkIncrementalPointLocator.h"
#include "vtkMarchingContourFilter.h"

template<> void emscripten::internal::raw_destructor<vtkMarchingContourFilter>(vtkMarchingContourFilter * ptr){ ptr->Delete(); }
EMSCRIPTEN_BINDINGS(vtkMarchingContourFilter_class) {
  emscripten::class_<vtkMarchingContourFilter, emscripten::base<vtkPolyDataAlgorithm>>("vtkMarchingContourFilter")
    .smart_ptr<vtkSmartPointer<vtkMarchingContourFilter>>("vtkSmartPointer<vtkMarchingContourFilter>")
    .constructor(&vtk::MakeVTKSmartPtr<vtkMarchingContourFilter>)
    .class_function("IsTypeOf", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkMarchingContourFilter::IsTypeOf( arg_0.c_str());}))
    .function("IsA", emscripten::optional_override([](vtkMarchingContourFilter& self, const std::string & arg_0) -> int {  return self.IsA( arg_0.c_str());}))
    .class_function("SafeDownCast", &vtkMarchingContourFilter::SafeDownCast, emscripten::allow_raw_pointers())
    .function("NewInstance", &vtkMarchingContourFilter::NewInstance, emscripten::allow_raw_pointers())
    .class_function("GetNumberOfGenerationsFromBaseType", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkMarchingContourFilter::GetNumberOfGenerationsFromBaseType( arg_0.c_str());}))
    .function("GetNumberOfGenerationsFromBase", emscripten::optional_override([](vtkMarchingContourFilter& self, const std::string & arg_0) -> int {  return self.GetNumberOfGenerationsFromBase( arg_0.c_str());}))
    .function("SetValue", &vtkMarchingContourFilter::SetValue)
    .function("GetValue", &vtkMarchingContourFilter::GetValue)
    .function("GetValues", emscripten::select_overload<std::uintptr_t(vtkMarchingContourFilter&)>([](vtkMarchingContourFilter& self) -> std::uintptr_t { return reinterpret_cast<std::uintptr_t>(self.GetValues()); }))
    .function("GetValues", emscripten::select_overload<void(vtkMarchingContourFilter&, std::uintptr_t)>([](vtkMarchingContourFilter& self, std::uintptr_t arg_0) -> void { return self.GetValues(reinterpret_cast<double*>(arg_0 * sizeof(double))); }))
    .function("SetNumberOfContours", &vtkMarchingContourFilter::SetNumberOfContours)
    .function("GetNumberOfContours", &vtkMarchingContourFilter::GetNumberOfContours)
    .function("GenerateValues", emscripten::select_overload<void(vtkMarchingContourFilter&, int, double, double)>([](vtkMarchingContourFilter& self, int arg_0, double arg_1, double arg_2) -> void { return self.GenerateValues( arg_0, arg_1, arg_2); }))
    .function("GetMTime", &vtkMarchingContourFilter::GetMTime)
    .function("SetComputeNormals", &vtkMarchingContourFilter::SetComputeNormals)
    .function("GetComputeNormals", &vtkMarchingContourFilter::GetComputeNormals)
    .function("ComputeNormalsOn", &vtkMarchingContourFilter::ComputeNormalsOn)
    .function("ComputeNormalsOff", &vtkMarchingContourFilter::ComputeNormalsOff)
    .function("SetComputeGradients", &vtkMarchingContourFilter::SetComputeGradients)
    .function("GetComputeGradients", &vtkMarchingContourFilter::GetComputeGradients)
    .function("ComputeGradientsOn", &vtkMarchingContourFilter::ComputeGradientsOn)
    .function("ComputeGradientsOff", &vtkMarchingContourFilter::ComputeGradientsOff)
    .function("SetComputeScalars", &vtkMarchingContourFilter::SetComputeScalars)
    .function("GetComputeScalars", &vtkMarchingContourFilter::GetComputeScalars)
    .function("ComputeScalarsOn", &vtkMarchingContourFilter::ComputeScalarsOn)
    .function("ComputeScalarsOff", &vtkMarchingContourFilter::ComputeScalarsOff)
    .function("SetUseScalarTree", &vtkMarchingContourFilter::SetUseScalarTree)
    .function("GetUseScalarTree", &vtkMarchingContourFilter::GetUseScalarTree)
    .function("UseScalarTreeOn", &vtkMarchingContourFilter::UseScalarTreeOn)
    .function("UseScalarTreeOff", &vtkMarchingContourFilter::UseScalarTreeOff)
    .function("SetLocator", &vtkMarchingContourFilter::SetLocator, emscripten::allow_raw_pointers())
    .function("GetLocator", &vtkMarchingContourFilter::GetLocator, emscripten::allow_raw_pointers())
    .function("CreateDefaultLocator", &vtkMarchingContourFilter::CreateDefaultLocator);
}
