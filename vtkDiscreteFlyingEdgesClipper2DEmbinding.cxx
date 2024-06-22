// JavaScript wrapper for vtkDiscreteFlyingEdgesClipper2D with embind 
//
// This file was auto-generated using :
/*
node /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/bin/vtkWrapJavaScript.js \
 @/home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkFiltersGeneral.js/vtkFiltersGeneral.js.Release.args \
 -o \
 /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkFiltersGeneral.js/vtkDiscreteFlyingEdgesClipper2DEmbinding.cxx \
 /home/jmh/github/vtk/Filters/General/vtkDiscreteFlyingEdgesClipper2D.h
*/
#include "vtkEmbindSmartPointerTrait.h"
#include <emscripten.h>
#include <string>
#include "vtkVariant.h"
#include "vtkObjectBase.h"
#include "vtkIndent.h"
#include "vtkDiscreteFlyingEdgesClipper2D.h"

template<> void emscripten::internal::raw_destructor<vtkDiscreteFlyingEdgesClipper2D>(vtkDiscreteFlyingEdgesClipper2D * ptr){ ptr->Delete(); }
EMSCRIPTEN_BINDINGS(vtkDiscreteFlyingEdgesClipper2D_class) {
  emscripten::class_<vtkDiscreteFlyingEdgesClipper2D, emscripten::base<vtkPolyDataAlgorithm>>("vtkDiscreteFlyingEdgesClipper2D")
    .smart_ptr<vtkSmartPointer<vtkDiscreteFlyingEdgesClipper2D>>("vtkSmartPointer<vtkDiscreteFlyingEdgesClipper2D>")
    .constructor(&vtk::MakeVTKSmartPtr<vtkDiscreteFlyingEdgesClipper2D>)
    .class_function("IsTypeOf", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkDiscreteFlyingEdgesClipper2D::IsTypeOf( arg_0.c_str());}))
    .function("IsA", emscripten::optional_override([](vtkDiscreteFlyingEdgesClipper2D& self, const std::string & arg_0) -> int {  return self.IsA( arg_0.c_str());}))
    .class_function("SafeDownCast", &vtkDiscreteFlyingEdgesClipper2D::SafeDownCast, emscripten::allow_raw_pointers())
    .function("NewInstance", &vtkDiscreteFlyingEdgesClipper2D::NewInstance, emscripten::allow_raw_pointers())
    .class_function("GetNumberOfGenerationsFromBaseType", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkDiscreteFlyingEdgesClipper2D::GetNumberOfGenerationsFromBaseType( arg_0.c_str());}))
    .function("GetNumberOfGenerationsFromBase", emscripten::optional_override([](vtkDiscreteFlyingEdgesClipper2D& self, const std::string & arg_0) -> int {  return self.GetNumberOfGenerationsFromBase( arg_0.c_str());}))
    .function("GetMTime", &vtkDiscreteFlyingEdgesClipper2D::GetMTime)
    .function("SetValue", &vtkDiscreteFlyingEdgesClipper2D::SetValue)
    .function("GetValue", &vtkDiscreteFlyingEdgesClipper2D::GetValue)
    .function("GetValues", emscripten::select_overload<std::uintptr_t(vtkDiscreteFlyingEdgesClipper2D&)>([](vtkDiscreteFlyingEdgesClipper2D& self) -> std::uintptr_t { return reinterpret_cast<std::uintptr_t>(self.GetValues()); }))
    .function("GetValues", emscripten::select_overload<void(vtkDiscreteFlyingEdgesClipper2D&, std::uintptr_t)>([](vtkDiscreteFlyingEdgesClipper2D& self, std::uintptr_t arg_0) -> void { return self.GetValues(reinterpret_cast<double*>(arg_0 * sizeof(double))); }))
    .function("SetNumberOfContours", &vtkDiscreteFlyingEdgesClipper2D::SetNumberOfContours)
    .function("GetNumberOfContours", &vtkDiscreteFlyingEdgesClipper2D::GetNumberOfContours)
    .function("GenerateValues", emscripten::select_overload<void(vtkDiscreteFlyingEdgesClipper2D&, int, double, double)>([](vtkDiscreteFlyingEdgesClipper2D& self, int arg_0, double arg_1, double arg_2) -> void { return self.GenerateValues( arg_0, arg_1, arg_2); }))
    .function("SetComputeScalars", &vtkDiscreteFlyingEdgesClipper2D::SetComputeScalars)
    .function("GetComputeScalars", &vtkDiscreteFlyingEdgesClipper2D::GetComputeScalars)
    .function("ComputeScalarsOn", &vtkDiscreteFlyingEdgesClipper2D::ComputeScalarsOn)
    .function("ComputeScalarsOff", &vtkDiscreteFlyingEdgesClipper2D::ComputeScalarsOff)
    .function("SetArrayComponent", &vtkDiscreteFlyingEdgesClipper2D::SetArrayComponent)
    .function("GetArrayComponent", &vtkDiscreteFlyingEdgesClipper2D::GetArrayComponent);
}
