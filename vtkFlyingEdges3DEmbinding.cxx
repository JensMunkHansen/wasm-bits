// JavaScript wrapper for vtkFlyingEdges3D with embind 
//
// This file was auto-generated using :
/*
node /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/bin/vtkWrapJavaScript.js \
 @/home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkFiltersCore.js/vtkFiltersCore.js.Release.args \
 -o \
 /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkFiltersCore.js/vtkFlyingEdges3DEmbinding.cxx \
 /home/jmh/github/vtk/Filters/Core/vtkFlyingEdges3D.h
*/
#include "vtkEmbindSmartPointerTrait.h"
#include <emscripten.h>
#include <string>
#include "vtkVariant.h"
#include "vtkObjectBase.h"
#include "vtkIndent.h"
#include "vtkFlyingEdges3D.h"

template<> void emscripten::internal::raw_destructor<vtkFlyingEdges3D>(vtkFlyingEdges3D * ptr){ ptr->Delete(); }
EMSCRIPTEN_BINDINGS(vtkFlyingEdges3D_class) {
  emscripten::class_<vtkFlyingEdges3D, emscripten::base<vtkPolyDataAlgorithm>>("vtkFlyingEdges3D")
    .smart_ptr<vtkSmartPointer<vtkFlyingEdges3D>>("vtkSmartPointer<vtkFlyingEdges3D>")
    .constructor(&vtk::MakeVTKSmartPtr<vtkFlyingEdges3D>)
    .class_function("IsTypeOf", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkFlyingEdges3D::IsTypeOf( arg_0.c_str());}))
    .function("IsA", emscripten::optional_override([](vtkFlyingEdges3D& self, const std::string & arg_0) -> int {  return self.IsA( arg_0.c_str());}))
    .class_function("SafeDownCast", &vtkFlyingEdges3D::SafeDownCast, emscripten::allow_raw_pointers())
    .function("NewInstance", &vtkFlyingEdges3D::NewInstance, emscripten::allow_raw_pointers())
    .class_function("GetNumberOfGenerationsFromBaseType", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkFlyingEdges3D::GetNumberOfGenerationsFromBaseType( arg_0.c_str());}))
    .function("GetNumberOfGenerationsFromBase", emscripten::optional_override([](vtkFlyingEdges3D& self, const std::string & arg_0) -> int {  return self.GetNumberOfGenerationsFromBase( arg_0.c_str());}))
    .function("GetMTime", &vtkFlyingEdges3D::GetMTime)
    .function("SetComputeNormals", &vtkFlyingEdges3D::SetComputeNormals)
    .function("GetComputeNormals", &vtkFlyingEdges3D::GetComputeNormals)
    .function("ComputeNormalsOn", &vtkFlyingEdges3D::ComputeNormalsOn)
    .function("ComputeNormalsOff", &vtkFlyingEdges3D::ComputeNormalsOff)
    .function("SetComputeGradients", &vtkFlyingEdges3D::SetComputeGradients)
    .function("GetComputeGradients", &vtkFlyingEdges3D::GetComputeGradients)
    .function("ComputeGradientsOn", &vtkFlyingEdges3D::ComputeGradientsOn)
    .function("ComputeGradientsOff", &vtkFlyingEdges3D::ComputeGradientsOff)
    .function("SetComputeScalars", &vtkFlyingEdges3D::SetComputeScalars)
    .function("GetComputeScalars", &vtkFlyingEdges3D::GetComputeScalars)
    .function("ComputeScalarsOn", &vtkFlyingEdges3D::ComputeScalarsOn)
    .function("ComputeScalarsOff", &vtkFlyingEdges3D::ComputeScalarsOff)
    .function("SetInterpolateAttributes", &vtkFlyingEdges3D::SetInterpolateAttributes)
    .function("GetInterpolateAttributes", &vtkFlyingEdges3D::GetInterpolateAttributes)
    .function("InterpolateAttributesOn", &vtkFlyingEdges3D::InterpolateAttributesOn)
    .function("InterpolateAttributesOff", &vtkFlyingEdges3D::InterpolateAttributesOff)
    .function("SetValue", &vtkFlyingEdges3D::SetValue)
    .function("GetValue", &vtkFlyingEdges3D::GetValue)
    .function("GetValues", emscripten::select_overload<std::uintptr_t(vtkFlyingEdges3D&)>([](vtkFlyingEdges3D& self) -> std::uintptr_t { return reinterpret_cast<std::uintptr_t>(self.GetValues()); }))
    .function("GetValues", emscripten::select_overload<void(vtkFlyingEdges3D&, std::uintptr_t)>([](vtkFlyingEdges3D& self, std::uintptr_t arg_0) -> void { return self.GetValues(reinterpret_cast<double*>(arg_0 * sizeof(double))); }))
    .function("SetNumberOfContours", &vtkFlyingEdges3D::SetNumberOfContours)
    .function("GetNumberOfContours", &vtkFlyingEdges3D::GetNumberOfContours)
    .function("GenerateValues", emscripten::select_overload<void(vtkFlyingEdges3D&, int, double, double)>([](vtkFlyingEdges3D& self, int arg_0, double arg_1, double arg_2) -> void { return self.GenerateValues( arg_0, arg_1, arg_2); }))
    .function("SetArrayComponent", &vtkFlyingEdges3D::SetArrayComponent)
    .function("GetArrayComponent", &vtkFlyingEdges3D::GetArrayComponent);
}
