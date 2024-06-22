// JavaScript wrapper for vtkContourGrid with embind 
//
// This file was auto-generated using :
/*
node /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/bin/vtkWrapJavaScript.js \
 @/home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkFiltersCore.js/vtkFiltersCore.js.Release.args \
 -o \
 /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkFiltersCore.js/vtkContourGridEmbinding.cxx \
 /home/jmh/github/vtk/Filters/Core/vtkContourGrid.h
*/
#include "vtkEmbindSmartPointerTrait.h"
#include <emscripten.h>
#include <string>
#include "vtkVariant.h"
#include "vtkObjectBase.h"
#include "vtkIndent.h"
#include "vtkScalarTree.h"
#include "vtkIncrementalPointLocator.h"
#include "vtkContourGrid.h"

template<> void emscripten::internal::raw_destructor<vtkContourGrid>(vtkContourGrid * ptr){ ptr->Delete(); }
EMSCRIPTEN_BINDINGS(vtkContourGrid_class) {
  emscripten::class_<vtkContourGrid, emscripten::base<vtkPolyDataAlgorithm>>("vtkContourGrid")
    .smart_ptr<vtkSmartPointer<vtkContourGrid>>("vtkSmartPointer<vtkContourGrid>")
    .constructor(&vtk::MakeAvtkSmartPointer<vtkContourGrid>)
    .class_function("IsTypeOf", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkContourGrid::IsTypeOf( arg_0.c_str());}))
    .function("IsA", emscripten::optional_override([](vtkContourGrid& self, const std::string & arg_0) -> int {  return self.IsA( arg_0.c_str());}))
    .class_function("SafeDownCast", &vtkContourGrid::SafeDownCast, emscripten::allow_raw_pointers())
    .function("NewInstance", &vtkContourGrid::NewInstance, emscripten::allow_raw_pointers())
    .class_function("GetNumberOfGenerationsFromBaseType", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkContourGrid::GetNumberOfGenerationsFromBaseType( arg_0.c_str());}))
    .function("GetNumberOfGenerationsFromBase", emscripten::optional_override([](vtkContourGrid& self, const std::string & arg_0) -> int {  return self.GetNumberOfGenerationsFromBase( arg_0.c_str());}))
    .function("SetValue", &vtkContourGrid::SetValue)
    .function("GetValue", &vtkContourGrid::GetValue)
    .function("GetValues", emscripten::select_overload<std::uintptr_t(vtkContourGrid&)>([](vtkContourGrid& self) -> std::uintptr_t { return reinterpret_cast<std::uintptr_t>(self.GetValues()); }))
    .function("GetValues", emscripten::select_overload<void(vtkContourGrid&, std::uintptr_t)>([](vtkContourGrid& self, std::uintptr_t arg_0) -> void { return self.GetValues(reinterpret_cast<double*>(arg_0 * sizeof(double))); }))
    .function("SetNumberOfContours", &vtkContourGrid::SetNumberOfContours)
    .function("GetNumberOfContours", &vtkContourGrid::GetNumberOfContours)
    .function("GenerateValues", emscripten::select_overload<void(vtkContourGrid&, int, double, double)>([](vtkContourGrid& self, int arg_0, double arg_1, double arg_2) -> void { return self.GenerateValues( arg_0, arg_1, arg_2); }))
    .function("GetMTime", &vtkContourGrid::GetMTime)
    .function("SetComputeNormals", &vtkContourGrid::SetComputeNormals)
    .function("GetComputeNormals", &vtkContourGrid::GetComputeNormals)
    .function("ComputeNormalsOn", &vtkContourGrid::ComputeNormalsOn)
    .function("ComputeNormalsOff", &vtkContourGrid::ComputeNormalsOff)
    .function("SetComputeScalars", &vtkContourGrid::SetComputeScalars)
    .function("GetComputeScalars", &vtkContourGrid::GetComputeScalars)
    .function("ComputeScalarsOn", &vtkContourGrid::ComputeScalarsOn)
    .function("ComputeScalarsOff", &vtkContourGrid::ComputeScalarsOff)
    .function("SetUseScalarTree", &vtkContourGrid::SetUseScalarTree)
    .function("GetUseScalarTree", &vtkContourGrid::GetUseScalarTree)
    .function("UseScalarTreeOn", &vtkContourGrid::UseScalarTreeOn)
    .function("UseScalarTreeOff", &vtkContourGrid::UseScalarTreeOff)
    .function("SetScalarTree", &vtkContourGrid::SetScalarTree, emscripten::allow_raw_pointers())
    .function("GetScalarTree", &vtkContourGrid::GetScalarTree, emscripten::allow_raw_pointers())
    .function("SetLocator", &vtkContourGrid::SetLocator, emscripten::allow_raw_pointers())
    .function("GetLocator", &vtkContourGrid::GetLocator, emscripten::allow_raw_pointers())
    .function("SetGenerateTriangles", &vtkContourGrid::SetGenerateTriangles)
    .function("GetGenerateTriangles", &vtkContourGrid::GetGenerateTriangles)
    .function("GenerateTrianglesOn", &vtkContourGrid::GenerateTrianglesOn)
    .function("GenerateTrianglesOff", &vtkContourGrid::GenerateTrianglesOff)
    .function("CreateDefaultLocator", &vtkContourGrid::CreateDefaultLocator)
    .function("SetOutputPointsPrecision", &vtkContourGrid::SetOutputPointsPrecision)
    .function("GetOutputPointsPrecision", &vtkContourGrid::GetOutputPointsPrecision);
}
