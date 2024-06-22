// JavaScript wrapper for vtkGenericContourFilter with embind 
//
// This file was auto-generated using :
/*
node /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/bin/vtkWrapJavaScript.js \
 @/home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkFiltersGeneric.js/vtkFiltersGeneric.js.Release.args \
 -o \
 /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkFiltersGeneric.js/vtkGenericContourFilterEmbinding.cxx \
 /home/jmh/github/vtk/Filters/Generic/vtkGenericContourFilter.h
*/
#include "vtkEmbindSmartPointerTrait.h"
#include <emscripten.h>
#include <string>
#include "vtkVariant.h"
#include "vtkObjectBase.h"
#include "vtkIndent.h"
#include "vtkIncrementalPointLocator.h"
#include "vtkGenericContourFilter.h"

template<> void emscripten::internal::raw_destructor<vtkGenericContourFilter>(vtkGenericContourFilter * ptr){ ptr->Delete(); }
EMSCRIPTEN_BINDINGS(vtkGenericContourFilter_class) {
  emscripten::class_<vtkGenericContourFilter, emscripten::base<vtkPolyDataAlgorithm>>("vtkGenericContourFilter")
    .smart_ptr<vtkSmartPointer<vtkGenericContourFilter>>("vtkSmartPointer<vtkGenericContourFilter>")
    .constructor(&vtk::MakeVTKSmartPtr<vtkGenericContourFilter>)
    .class_function("IsTypeOf", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkGenericContourFilter::IsTypeOf( arg_0.c_str());}))
    .function("IsA", emscripten::optional_override([](vtkGenericContourFilter& self, const std::string & arg_0) -> int {  return self.IsA( arg_0.c_str());}))
    .class_function("SafeDownCast", &vtkGenericContourFilter::SafeDownCast, emscripten::allow_raw_pointers())
    .function("NewInstance", &vtkGenericContourFilter::NewInstance, emscripten::allow_raw_pointers())
    .class_function("GetNumberOfGenerationsFromBaseType", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkGenericContourFilter::GetNumberOfGenerationsFromBaseType( arg_0.c_str());}))
    .function("GetNumberOfGenerationsFromBase", emscripten::optional_override([](vtkGenericContourFilter& self, const std::string & arg_0) -> int {  return self.GetNumberOfGenerationsFromBase( arg_0.c_str());}))
    .function("SetValue", &vtkGenericContourFilter::SetValue)
    .function("GetValue", &vtkGenericContourFilter::GetValue)
    .function("GetValues", emscripten::select_overload<std::uintptr_t(vtkGenericContourFilter&)>([](vtkGenericContourFilter& self) -> std::uintptr_t { return reinterpret_cast<std::uintptr_t>(self.GetValues()); }))
    .function("GetValues", emscripten::select_overload<void(vtkGenericContourFilter&, std::uintptr_t)>([](vtkGenericContourFilter& self, std::uintptr_t arg_0) -> void { return self.GetValues(reinterpret_cast<double*>(arg_0 * sizeof(double))); }))
    .function("SetNumberOfContours", &vtkGenericContourFilter::SetNumberOfContours)
    .function("GetNumberOfContours", &vtkGenericContourFilter::GetNumberOfContours)
    .function("GenerateValues", emscripten::select_overload<void(vtkGenericContourFilter&, int, double, double)>([](vtkGenericContourFilter& self, int arg_0, double arg_1, double arg_2) -> void { return self.GenerateValues( arg_0, arg_1, arg_2); }))
    .function("GetMTime", &vtkGenericContourFilter::GetMTime)
    .function("SetComputeNormals", &vtkGenericContourFilter::SetComputeNormals)
    .function("GetComputeNormals", &vtkGenericContourFilter::GetComputeNormals)
    .function("ComputeNormalsOn", &vtkGenericContourFilter::ComputeNormalsOn)
    .function("ComputeNormalsOff", &vtkGenericContourFilter::ComputeNormalsOff)
    .function("SetComputeGradients", &vtkGenericContourFilter::SetComputeGradients)
    .function("GetComputeGradients", &vtkGenericContourFilter::GetComputeGradients)
    .function("ComputeGradientsOn", &vtkGenericContourFilter::ComputeGradientsOn)
    .function("ComputeGradientsOff", &vtkGenericContourFilter::ComputeGradientsOff)
    .function("SetComputeScalars", &vtkGenericContourFilter::SetComputeScalars)
    .function("GetComputeScalars", &vtkGenericContourFilter::GetComputeScalars)
    .function("ComputeScalarsOn", &vtkGenericContourFilter::ComputeScalarsOn)
    .function("ComputeScalarsOff", &vtkGenericContourFilter::ComputeScalarsOff)
    .function("SetLocator", &vtkGenericContourFilter::SetLocator, emscripten::allow_raw_pointers())
    .function("GetLocator", &vtkGenericContourFilter::GetLocator, emscripten::allow_raw_pointers())
    .function("CreateDefaultLocator", &vtkGenericContourFilter::CreateDefaultLocator)
    .function("GetInputScalarsSelection", emscripten::optional_override([](vtkGenericContourFilter& self) -> std::string {  return self.GetInputScalarsSelection();}))
    .function("SelectInputScalars", emscripten::optional_override([](vtkGenericContourFilter& self, const std::string & arg_0) -> void {  return self.SelectInputScalars( arg_0.c_str());}));
}
