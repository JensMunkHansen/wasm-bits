// JavaScript wrapper for vtkDiscreteFlyingEdges3D with embind 
//
// This file was auto-generated using :
/*
node /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/bin/vtkWrapJavaScript.js \
 @/home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkFiltersGeneral.js/vtkFiltersGeneral.js.Release.args \
 -o \
 /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkFiltersGeneral.js/vtkDiscreteFlyingEdges3DEmbinding.cxx \
 /home/jmh/github/vtk/Filters/General/vtkDiscreteFlyingEdges3D.h
*/
#include "vtkEmbindSmartPointerTrait.h"
#include <emscripten.h>
#include <string>
#include "vtkVariant.h"
#include "vtkObjectBase.h"
#include "vtkIndent.h"
#include "vtkDiscreteFlyingEdges3D.h"

template<> void emscripten::internal::raw_destructor<vtkDiscreteFlyingEdges3D>(vtkDiscreteFlyingEdges3D * ptr){ ptr->Delete(); }
EMSCRIPTEN_BINDINGS(vtkDiscreteFlyingEdges3D_class) {
  emscripten::class_<vtkDiscreteFlyingEdges3D, emscripten::base<vtkPolyDataAlgorithm>>("vtkDiscreteFlyingEdges3D")
    .smart_ptr<vtkSmartPointer<vtkDiscreteFlyingEdges3D>>("vtkSmartPointer<vtkDiscreteFlyingEdges3D>")
    .constructor(&vtk::MakeAvtkSmartPointer<vtkDiscreteFlyingEdges3D>)
    .class_function("IsTypeOf", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkDiscreteFlyingEdges3D::IsTypeOf( arg_0.c_str());}))
    .function("IsA", emscripten::optional_override([](vtkDiscreteFlyingEdges3D& self, const std::string & arg_0) -> int {  return self.IsA( arg_0.c_str());}))
    .class_function("SafeDownCast", &vtkDiscreteFlyingEdges3D::SafeDownCast, emscripten::allow_raw_pointers())
    .function("NewInstance", &vtkDiscreteFlyingEdges3D::NewInstance, emscripten::allow_raw_pointers())
    .class_function("GetNumberOfGenerationsFromBaseType", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkDiscreteFlyingEdges3D::GetNumberOfGenerationsFromBaseType( arg_0.c_str());}))
    .function("GetNumberOfGenerationsFromBase", emscripten::optional_override([](vtkDiscreteFlyingEdges3D& self, const std::string & arg_0) -> int {  return self.GetNumberOfGenerationsFromBase( arg_0.c_str());}))
    .function("GetMTime", &vtkDiscreteFlyingEdges3D::GetMTime)
    .function("SetComputeNormals", &vtkDiscreteFlyingEdges3D::SetComputeNormals)
    .function("GetComputeNormals", &vtkDiscreteFlyingEdges3D::GetComputeNormals)
    .function("ComputeNormalsOn", &vtkDiscreteFlyingEdges3D::ComputeNormalsOn)
    .function("ComputeNormalsOff", &vtkDiscreteFlyingEdges3D::ComputeNormalsOff)
    .function("SetComputeGradients", &vtkDiscreteFlyingEdges3D::SetComputeGradients)
    .function("GetComputeGradients", &vtkDiscreteFlyingEdges3D::GetComputeGradients)
    .function("ComputeGradientsOn", &vtkDiscreteFlyingEdges3D::ComputeGradientsOn)
    .function("ComputeGradientsOff", &vtkDiscreteFlyingEdges3D::ComputeGradientsOff)
    .function("SetComputeScalars", &vtkDiscreteFlyingEdges3D::SetComputeScalars)
    .function("GetComputeScalars", &vtkDiscreteFlyingEdges3D::GetComputeScalars)
    .function("ComputeScalarsOn", &vtkDiscreteFlyingEdges3D::ComputeScalarsOn)
    .function("ComputeScalarsOff", &vtkDiscreteFlyingEdges3D::ComputeScalarsOff)
    .function("SetInterpolateAttributes", &vtkDiscreteFlyingEdges3D::SetInterpolateAttributes)
    .function("GetInterpolateAttributes", &vtkDiscreteFlyingEdges3D::GetInterpolateAttributes)
    .function("InterpolateAttributesOn", &vtkDiscreteFlyingEdges3D::InterpolateAttributesOn)
    .function("InterpolateAttributesOff", &vtkDiscreteFlyingEdges3D::InterpolateAttributesOff)
    .function("SetValue", &vtkDiscreteFlyingEdges3D::SetValue)
    .function("GetValue", &vtkDiscreteFlyingEdges3D::GetValue)
    .function("GetValues", emscripten::select_overload<std::uintptr_t(vtkDiscreteFlyingEdges3D&)>([](vtkDiscreteFlyingEdges3D& self) -> std::uintptr_t { return reinterpret_cast<std::uintptr_t>(self.GetValues()); }))
    .function("GetValues", emscripten::select_overload<void(vtkDiscreteFlyingEdges3D&, std::uintptr_t)>([](vtkDiscreteFlyingEdges3D& self, std::uintptr_t arg_0) -> void { return self.GetValues(reinterpret_cast<double*>(arg_0 * sizeof(double))); }))
    .function("SetNumberOfContours", &vtkDiscreteFlyingEdges3D::SetNumberOfContours)
    .function("GetNumberOfContours", &vtkDiscreteFlyingEdges3D::GetNumberOfContours)
    .function("GenerateValues", emscripten::select_overload<void(vtkDiscreteFlyingEdges3D&, int, double, double)>([](vtkDiscreteFlyingEdges3D& self, int arg_0, double arg_1, double arg_2) -> void { return self.GenerateValues( arg_0, arg_1, arg_2); }))
    .function("SetArrayComponent", &vtkDiscreteFlyingEdges3D::SetArrayComponent)
    .function("GetArrayComponent", &vtkDiscreteFlyingEdges3D::GetArrayComponent);
}
