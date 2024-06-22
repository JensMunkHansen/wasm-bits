// JavaScript wrapper for vtkContourFilter with embind 
//
// This file was auto-generated using :
/*
node /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/bin/vtkWrapJavaScript.js \
 @/home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkFiltersCore.js/vtkFiltersCore.js.Release.args \
 -o \
 /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkFiltersCore.js/vtkContourFilterEmbinding.cxx \
 /home/jmh/github/vtk/Filters/Core/vtkContourFilter.h
*/
#include "vtkEmbindSmartPointerTrait.h"
#include <emscripten.h>
#include <string>
#include "vtkVariant.h"
#include "vtkObjectBase.h"
#include "vtkIndent.h"
#include "vtkScalarTree.h"
#include "vtkIncrementalPointLocator.h"
#include "vtkContourFilter.h"

template<> void emscripten::internal::raw_destructor<vtkContourFilter>(vtkContourFilter * ptr){ ptr->Delete(); }
EMSCRIPTEN_BINDINGS(vtkContourFilter_class) {
  emscripten::class_<vtkContourFilter, emscripten::base<vtkPolyDataAlgorithm>>("vtkContourFilter")
    .smart_ptr<vtkSmartPointer<vtkContourFilter>>("vtkSmartPointer<vtkContourFilter>")
    .constructor(&vtk::MakeAvtkSmartPointer<vtkContourFilter>)
    .class_function("IsTypeOf", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkContourFilter::IsTypeOf( arg_0.c_str());}))
    .function("IsA", emscripten::optional_override([](vtkContourFilter& self, const std::string & arg_0) -> int {  return self.IsA( arg_0.c_str());}))
    .class_function("SafeDownCast", &vtkContourFilter::SafeDownCast, emscripten::allow_raw_pointers())
    .function("NewInstance", &vtkContourFilter::NewInstance, emscripten::allow_raw_pointers())
    .class_function("GetNumberOfGenerationsFromBaseType", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkContourFilter::GetNumberOfGenerationsFromBaseType( arg_0.c_str());}))
    .function("GetNumberOfGenerationsFromBase", emscripten::optional_override([](vtkContourFilter& self, const std::string & arg_0) -> int {  return self.GetNumberOfGenerationsFromBase( arg_0.c_str());}))
    .function("SetValue", &vtkContourFilter::SetValue)
    .function("GetValue", &vtkContourFilter::GetValue)
    .function("GetValues", emscripten::select_overload<std::uintptr_t(vtkContourFilter&)>([](vtkContourFilter& self) -> std::uintptr_t { return reinterpret_cast<std::uintptr_t>(self.GetValues()); }))
    .function("GetValues", emscripten::select_overload<void(vtkContourFilter&, std::uintptr_t)>([](vtkContourFilter& self, std::uintptr_t arg_0) -> void { return self.GetValues(reinterpret_cast<double*>(arg_0 * sizeof(double))); }))
    .function("SetNumberOfContours", &vtkContourFilter::SetNumberOfContours)
    .function("GetNumberOfContours", &vtkContourFilter::GetNumberOfContours)
    .function("GenerateValues", emscripten::select_overload<void(vtkContourFilter&, int, double, double)>([](vtkContourFilter& self, int arg_0, double arg_1, double arg_2) -> void { return self.GenerateValues( arg_0, arg_1, arg_2); }))
    .function("SetContourValues", &vtkContourFilter::SetContourValues)
    .function("GetContourValues", &vtkContourFilter::GetContourValues)
    .function("GetMTime", &vtkContourFilter::GetMTime)
    .function("SetComputeNormals", &vtkContourFilter::SetComputeNormals)
    .function("GetComputeNormals", &vtkContourFilter::GetComputeNormals)
    .function("ComputeNormalsOn", &vtkContourFilter::ComputeNormalsOn)
    .function("ComputeNormalsOff", &vtkContourFilter::ComputeNormalsOff)
    .function("SetComputeGradients", &vtkContourFilter::SetComputeGradients)
    .function("GetComputeGradients", &vtkContourFilter::GetComputeGradients)
    .function("ComputeGradientsOn", &vtkContourFilter::ComputeGradientsOn)
    .function("ComputeGradientsOff", &vtkContourFilter::ComputeGradientsOff)
    .function("SetComputeScalars", &vtkContourFilter::SetComputeScalars)
    .function("GetComputeScalars", &vtkContourFilter::GetComputeScalars)
    .function("ComputeScalarsOn", &vtkContourFilter::ComputeScalarsOn)
    .function("ComputeScalarsOff", &vtkContourFilter::ComputeScalarsOff)
    .function("SetUseScalarTree", &vtkContourFilter::SetUseScalarTree)
    .function("GetUseScalarTree", &vtkContourFilter::GetUseScalarTree)
    .function("UseScalarTreeOn", &vtkContourFilter::UseScalarTreeOn)
    .function("UseScalarTreeOff", &vtkContourFilter::UseScalarTreeOff)
    .function("SetScalarTree", &vtkContourFilter::SetScalarTree, emscripten::allow_raw_pointers())
    .function("GetScalarTree", &vtkContourFilter::GetScalarTree, emscripten::allow_raw_pointers())
    .function("SetLocator", &vtkContourFilter::SetLocator, emscripten::allow_raw_pointers())
    .function("GetLocator", &vtkContourFilter::GetLocator, emscripten::allow_raw_pointers())
    .function("CreateDefaultLocator", &vtkContourFilter::CreateDefaultLocator)
    .function("SetArrayComponent", &vtkContourFilter::SetArrayComponent)
    .function("GetArrayComponent", &vtkContourFilter::GetArrayComponent)
    .function("SetGenerateTriangles", &vtkContourFilter::SetGenerateTriangles)
    .function("GetGenerateTriangles", &vtkContourFilter::GetGenerateTriangles)
    .function("GenerateTrianglesOn", &vtkContourFilter::GenerateTrianglesOn)
    .function("GenerateTrianglesOff", &vtkContourFilter::GenerateTrianglesOff)
    .function("SetOutputPointsPrecision", &vtkContourFilter::SetOutputPointsPrecision)
    .function("GetOutputPointsPrecision", &vtkContourFilter::GetOutputPointsPrecision)
    .function("SetFastMode", &vtkContourFilter::SetFastMode)
    .function("GetFastMode", &vtkContourFilter::GetFastMode)
    .function("FastModeOn", &vtkContourFilter::FastModeOn)
    .function("FastModeOff", &vtkContourFilter::FastModeOff)
    .function("SetInputArray", &vtkContourFilter::SetInputArray);
}
