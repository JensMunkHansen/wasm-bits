// JavaScript wrapper for vtkSurfaceNets2D with embind 
//
// This file was auto-generated using :
/*
node /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/bin/vtkWrapJavaScript.js \
 @/home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkFiltersCore.js/vtkFiltersCore.js.Release.args \
 -o \
 /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkFiltersCore.js/vtkSurfaceNets2DEmbinding.cxx \
 /home/jmh/github/vtk/Filters/Core/vtkSurfaceNets2D.h
*/
#include "vtkEmbindSmartPointerTrait.h"
#include <emscripten.h>
#include <string>
#include "vtkVariant.h"
#include "vtkObjectBase.h"
#include "vtkIndent.h"
#include "vtkConstrainedSmoothingFilter.h"
#include "vtkSurfaceNets2D.h"

template<> void emscripten::internal::raw_destructor<vtkSurfaceNets2D>(vtkSurfaceNets2D * ptr){ ptr->Delete(); }
EMSCRIPTEN_BINDINGS(vtkSurfaceNets2D_class) {
  emscripten::class_<vtkSurfaceNets2D, emscripten::base<vtkPolyDataAlgorithm>>("vtkSurfaceNets2D")
    .smart_ptr<vtkSmartPointer<vtkSurfaceNets2D>>("vtkSmartPointer<vtkSurfaceNets2D>")
    .constructor(&vtk::MakeVTKSmartPtr<vtkSurfaceNets2D>)
    .class_function("IsTypeOf", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkSurfaceNets2D::IsTypeOf( arg_0.c_str());}))
    .function("IsA", emscripten::optional_override([](vtkSurfaceNets2D& self, const std::string & arg_0) -> int {  return self.IsA( arg_0.c_str());}))
    .class_function("SafeDownCast", &vtkSurfaceNets2D::SafeDownCast, emscripten::allow_raw_pointers())
    .function("NewInstance", &vtkSurfaceNets2D::NewInstance, emscripten::allow_raw_pointers())
    .class_function("GetNumberOfGenerationsFromBaseType", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkSurfaceNets2D::GetNumberOfGenerationsFromBaseType( arg_0.c_str());}))
    .function("GetNumberOfGenerationsFromBase", emscripten::optional_override([](vtkSurfaceNets2D& self, const std::string & arg_0) -> int {  return self.GetNumberOfGenerationsFromBase( arg_0.c_str());}))
    .function("GetMTime", &vtkSurfaceNets2D::GetMTime)
    .function("SetValue", &vtkSurfaceNets2D::SetValue)
    .function("SetLabel", &vtkSurfaceNets2D::SetLabel)
    .function("GetValue", &vtkSurfaceNets2D::GetValue)
    .function("GetLabel", &vtkSurfaceNets2D::GetLabel)
    .function("GetValues", emscripten::select_overload<std::uintptr_t(vtkSurfaceNets2D&)>([](vtkSurfaceNets2D& self) -> std::uintptr_t { return reinterpret_cast<std::uintptr_t>(self.GetValues()); }))
    .function("GetValues", emscripten::select_overload<void(vtkSurfaceNets2D&, std::uintptr_t)>([](vtkSurfaceNets2D& self, std::uintptr_t arg_0) -> void { return self.GetValues(reinterpret_cast<double*>(arg_0 * sizeof(double))); }))
    .function("GetLabels", emscripten::select_overload<std::uintptr_t(vtkSurfaceNets2D&)>([](vtkSurfaceNets2D& self) -> std::uintptr_t { return reinterpret_cast<std::uintptr_t>(self.GetLabels()); }))
    .function("GetLabels", emscripten::select_overload<void(vtkSurfaceNets2D&, std::uintptr_t)>([](vtkSurfaceNets2D& self, std::uintptr_t arg_0) -> void { return self.GetLabels(reinterpret_cast<double*>(arg_0 * sizeof(double))); }))
    .function("SetNumberOfLabels", &vtkSurfaceNets2D::SetNumberOfLabels)
    .function("SetNumberOfContours", &vtkSurfaceNets2D::SetNumberOfContours)
    .function("GetNumberOfLabels", &vtkSurfaceNets2D::GetNumberOfLabels)
    .function("GetNumberOfContours", &vtkSurfaceNets2D::GetNumberOfContours)
    .function("GenerateLabels", emscripten::select_overload<void(vtkSurfaceNets2D&, int, double, double)>([](vtkSurfaceNets2D& self, int arg_0, double arg_1, double arg_2) -> void { return self.GenerateLabels( arg_0, arg_1, arg_2); }))
    .function("GenerateValues", emscripten::select_overload<void(vtkSurfaceNets2D&, int, double, double)>([](vtkSurfaceNets2D& self, int arg_0, double arg_1, double arg_2) -> void { return self.GenerateValues( arg_0, arg_1, arg_2); }))
    .function("SetComputeScalars", &vtkSurfaceNets2D::SetComputeScalars)
    .function("GetComputeScalars", &vtkSurfaceNets2D::GetComputeScalars)
    .function("ComputeScalarsOn", &vtkSurfaceNets2D::ComputeScalarsOn)
    .function("ComputeScalarsOff", &vtkSurfaceNets2D::ComputeScalarsOff)
    .function("SetBackgroundLabel", &vtkSurfaceNets2D::SetBackgroundLabel)
    .function("GetBackgroundLabel", &vtkSurfaceNets2D::GetBackgroundLabel)
    .function("SetArrayComponent", &vtkSurfaceNets2D::SetArrayComponent)
    .function("GetArrayComponent", &vtkSurfaceNets2D::GetArrayComponent)
    .function("SetSmoothing", &vtkSurfaceNets2D::SetSmoothing)
    .function("GetSmoothing", &vtkSurfaceNets2D::GetSmoothing)
    .function("SmoothingOn", &vtkSurfaceNets2D::SmoothingOn)
    .function("SmoothingOff", &vtkSurfaceNets2D::SmoothingOff)
    .function("GetSmoother", &vtkSurfaceNets2D::GetSmoother, emscripten::allow_raw_pointers())
    .function("SetDataCaching", &vtkSurfaceNets2D::SetDataCaching)
    .function("GetDataCaching", &vtkSurfaceNets2D::GetDataCaching)
    .function("DataCachingOn", &vtkSurfaceNets2D::DataCachingOn)
    .function("DataCachingOff", &vtkSurfaceNets2D::DataCachingOff);
}
