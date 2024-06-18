// JavaScript wrapper for vtkFlyingEdges2D with embind 
//
// This file was auto-generated using :
/*
node /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/bin/vtkWrapJavaScript.js \
 @/home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkFiltersCore.js/vtkFiltersCore.js.Release.args \
 -o \
 /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkFiltersCore.js/vtkFlyingEdges2DEmbinding.cxx \
 /home/jmh/github/vtk/Filters/Core/vtkFlyingEdges2D.h
*/
#include "vtkEmbindSmartPointerTrait.h"
#include <emscripten.h>
#include <string>
#include "vtkVariant.h"
#include "vtkObjectBase.h"
#include "vtkIndent.h"
#include "vtkFlyingEdges2D.h"

template<> void emscripten::internal::raw_destructor<vtkFlyingEdges2D>(vtkFlyingEdges2D * ptr){ ptr->Delete(); }
EMSCRIPTEN_BINDINGS(vtkFlyingEdges2D_class) {
  emscripten::class_<vtkFlyingEdges2D, emscripten::base<vtkPolyDataAlgorithm>>("vtkFlyingEdges2D")
    .smart_ptr<vtkSmartPointer<vtkFlyingEdges2D>>("vtkSmartPointer<vtkFlyingEdges2D>")
    .constructor(&vtk::MakeAvtkSmartPointer<vtkFlyingEdges2D>)
    .class_function("IsTypeOf", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkFlyingEdges2D::IsTypeOf( arg_0.c_str());}))
    .function("IsA", emscripten::optional_override([](vtkFlyingEdges2D& self, const std::string & arg_0) -> int {  return self.IsA( arg_0.c_str());}))
    .class_function("SafeDownCast", &vtkFlyingEdges2D::SafeDownCast, emscripten::allow_raw_pointers())
    .function("NewInstance", &vtkFlyingEdges2D::NewInstance, emscripten::allow_raw_pointers())
    .class_function("GetNumberOfGenerationsFromBaseType", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkFlyingEdges2D::GetNumberOfGenerationsFromBaseType( arg_0.c_str());}))
    .function("GetNumberOfGenerationsFromBase", emscripten::optional_override([](vtkFlyingEdges2D& self, const std::string & arg_0) -> int {  return self.GetNumberOfGenerationsFromBase( arg_0.c_str());}))
    .function("GetMTime", &vtkFlyingEdges2D::GetMTime)
    .function("SetValue", &vtkFlyingEdges2D::SetValue)
    .function("GetValue", &vtkFlyingEdges2D::GetValue)
    .function("GetValues", emscripten::select_overload<std::uintptr_t(vtkFlyingEdges2D&)>([](vtkFlyingEdges2D& self) -> std::uintptr_t { return reinterpret_cast<std::uintptr_t>(self.GetValues()); }))
    .function("GetValues", emscripten::select_overload<void(vtkFlyingEdges2D&, std::uintptr_t)>([](vtkFlyingEdges2D& self, std::uintptr_t arg_0) -> void { return self.GetValues(reinterpret_cast<double*>(arg_0 * sizeof(double))); }))
    .function("SetNumberOfContours", &vtkFlyingEdges2D::SetNumberOfContours)
    .function("GetNumberOfContours", &vtkFlyingEdges2D::GetNumberOfContours)
    .function("GenerateValues", emscripten::select_overload<void(vtkFlyingEdges2D&, int, double, double)>([](vtkFlyingEdges2D& self, int arg_0, double arg_1, double arg_2) -> void { return self.GenerateValues( arg_0, arg_1, arg_2); }))
    .function("SetComputeScalars", &vtkFlyingEdges2D::SetComputeScalars)
    .function("GetComputeScalars", &vtkFlyingEdges2D::GetComputeScalars)
    .function("ComputeScalarsOn", &vtkFlyingEdges2D::ComputeScalarsOn)
    .function("ComputeScalarsOff", &vtkFlyingEdges2D::ComputeScalarsOff)
    .function("SetArrayComponent", &vtkFlyingEdges2D::SetArrayComponent)
    .function("GetArrayComponent", &vtkFlyingEdges2D::GetArrayComponent);
}
