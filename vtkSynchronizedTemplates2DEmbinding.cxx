// JavaScript wrapper for vtkSynchronizedTemplates2D with embind 
//
// This file was auto-generated using :
/*
node /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/bin/vtkWrapJavaScript.js \
 @/home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkFiltersCore.js/vtkFiltersCore.js.Release.args \
 -o \
 /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkFiltersCore.js/vtkSynchronizedTemplates2DEmbinding.cxx \
 /home/jmh/github/vtk/Filters/Core/vtkSynchronizedTemplates2D.h
*/
#include "vtkEmbindSmartPointerTrait.h"
#include <emscripten.h>
#include <string>
#include "vtkVariant.h"
#include "vtkObjectBase.h"
#include "vtkIndent.h"
#include "vtkSynchronizedTemplates2D.h"

template<> void emscripten::internal::raw_destructor<vtkSynchronizedTemplates2D>(vtkSynchronizedTemplates2D * ptr){ ptr->Delete(); }
EMSCRIPTEN_BINDINGS(vtkSynchronizedTemplates2D_class) {
  emscripten::class_<vtkSynchronizedTemplates2D, emscripten::base<vtkPolyDataAlgorithm>>("vtkSynchronizedTemplates2D")
    .smart_ptr<vtkSmartPointer<vtkSynchronizedTemplates2D>>("vtkSmartPointer<vtkSynchronizedTemplates2D>")
    .constructor(&vtk::MakeAvtkSmartPointer<vtkSynchronizedTemplates2D>)
    .class_function("IsTypeOf", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkSynchronizedTemplates2D::IsTypeOf( arg_0.c_str());}))
    .function("IsA", emscripten::optional_override([](vtkSynchronizedTemplates2D& self, const std::string & arg_0) -> int {  return self.IsA( arg_0.c_str());}))
    .class_function("SafeDownCast", &vtkSynchronizedTemplates2D::SafeDownCast, emscripten::allow_raw_pointers())
    .function("NewInstance", &vtkSynchronizedTemplates2D::NewInstance, emscripten::allow_raw_pointers())
    .class_function("GetNumberOfGenerationsFromBaseType", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkSynchronizedTemplates2D::GetNumberOfGenerationsFromBaseType( arg_0.c_str());}))
    .function("GetNumberOfGenerationsFromBase", emscripten::optional_override([](vtkSynchronizedTemplates2D& self, const std::string & arg_0) -> int {  return self.GetNumberOfGenerationsFromBase( arg_0.c_str());}))
    .function("GetMTime", &vtkSynchronizedTemplates2D::GetMTime)
    .function("SetValue", &vtkSynchronizedTemplates2D::SetValue)
    .function("GetValue", &vtkSynchronizedTemplates2D::GetValue)
    .function("GetValues", emscripten::select_overload<std::uintptr_t(vtkSynchronizedTemplates2D&)>([](vtkSynchronizedTemplates2D& self) -> std::uintptr_t { return reinterpret_cast<std::uintptr_t>(self.GetValues()); }))
    .function("GetValues", emscripten::select_overload<void(vtkSynchronizedTemplates2D&, std::uintptr_t)>([](vtkSynchronizedTemplates2D& self, std::uintptr_t arg_0) -> void { return self.GetValues(reinterpret_cast<double*>(arg_0 * sizeof(double))); }))
    .function("SetNumberOfContours", &vtkSynchronizedTemplates2D::SetNumberOfContours)
    .function("GetNumberOfContours", &vtkSynchronizedTemplates2D::GetNumberOfContours)
    .function("GenerateValues", emscripten::select_overload<void(vtkSynchronizedTemplates2D&, int, double, double)>([](vtkSynchronizedTemplates2D& self, int arg_0, double arg_1, double arg_2) -> void { return self.GenerateValues( arg_0, arg_1, arg_2); }))
    .function("SetComputeScalars", &vtkSynchronizedTemplates2D::SetComputeScalars)
    .function("GetComputeScalars", &vtkSynchronizedTemplates2D::GetComputeScalars)
    .function("ComputeScalarsOn", &vtkSynchronizedTemplates2D::ComputeScalarsOn)
    .function("ComputeScalarsOff", &vtkSynchronizedTemplates2D::ComputeScalarsOff)
    .function("SetArrayComponent", &vtkSynchronizedTemplates2D::SetArrayComponent)
    .function("GetArrayComponent", &vtkSynchronizedTemplates2D::GetArrayComponent);
}
