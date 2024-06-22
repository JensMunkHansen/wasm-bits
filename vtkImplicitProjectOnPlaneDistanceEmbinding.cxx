// JavaScript wrapper for vtkImplicitProjectOnPlaneDistance with embind 
//
// This file was auto-generated using :
/*
node /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/bin/vtkWrapJavaScript.js \
 @/home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkFiltersCore.js/vtkFiltersCore.js.Release.args \
 -o \
 /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkFiltersCore.js/vtkImplicitProjectOnPlaneDistanceEmbinding.cxx \
 /home/jmh/github/vtk/Filters/Core/vtkImplicitProjectOnPlaneDistance.h
*/
#include "vtkEmbindSmartPointerTrait.h"
#include <emscripten.h>
#include <string>
#include "vtkVariant.h"
#include "vtkObjectBase.h"
#include "vtkIndent.h"
#include "vtkPolyData.h"
#include "vtkAbstractCellLocator.h"
#include "vtkDataArray.h"
#include "vtkImplicitProjectOnPlaneDistance.h"

EMSCRIPTEN_BINDINGS(vtkFiltersCore_vtkImplicitProjectOnPlaneDistance_class_enums) {
  emscripten::enum_<vtkImplicitProjectOnPlaneDistance::NormType>("vtkImplicitProjectOnPlaneDistance_NormType")
    .value("L0", vtkImplicitProjectOnPlaneDistance::NormType::L0)
    .value("L2", vtkImplicitProjectOnPlaneDistance::NormType::L2);
}
template<> void emscripten::internal::raw_destructor<vtkImplicitProjectOnPlaneDistance>(vtkImplicitProjectOnPlaneDistance * ptr){ ptr->Delete(); }
EMSCRIPTEN_BINDINGS(vtkImplicitProjectOnPlaneDistance_class) {
  using NormType=vtkImplicitProjectOnPlaneDistance::NormType;
  emscripten::class_<vtkImplicitProjectOnPlaneDistance, emscripten::base<vtkImplicitFunction>>("vtkImplicitProjectOnPlaneDistance")
    .smart_ptr<vtkSmartPointer<vtkImplicitProjectOnPlaneDistance>>("vtkSmartPointer<vtkImplicitProjectOnPlaneDistance>")
    .constructor(&vtk::MakeVTKSmartPtr<vtkImplicitProjectOnPlaneDistance>)
    .class_function("IsTypeOf", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkImplicitProjectOnPlaneDistance::IsTypeOf( arg_0.c_str());}))
    .function("IsA", emscripten::optional_override([](vtkImplicitProjectOnPlaneDistance& self, const std::string & arg_0) -> int {  return self.IsA( arg_0.c_str());}))
    .class_function("SafeDownCast", &vtkImplicitProjectOnPlaneDistance::SafeDownCast, emscripten::allow_raw_pointers())
    .function("NewInstance", &vtkImplicitProjectOnPlaneDistance::NewInstance, emscripten::allow_raw_pointers())
    .class_function("GetNumberOfGenerationsFromBaseType", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkImplicitProjectOnPlaneDistance::GetNumberOfGenerationsFromBaseType( arg_0.c_str());}))
    .function("GetNumberOfGenerationsFromBase", emscripten::optional_override([](vtkImplicitProjectOnPlaneDistance& self, const std::string & arg_0) -> int {  return self.GetNumberOfGenerationsFromBase( arg_0.c_str());}))
    .function("GetMTime", &vtkImplicitProjectOnPlaneDistance::GetMTime)
    .function("SetInput", &vtkImplicitProjectOnPlaneDistance::SetInput, emscripten::allow_raw_pointers())
    .function("GetTolerance", &vtkImplicitProjectOnPlaneDistance::GetTolerance)
    .function("SetTolerance", &vtkImplicitProjectOnPlaneDistance::SetTolerance)
    .function("GetNorm", &vtkImplicitProjectOnPlaneDistance::GetNorm)
    .function("SetNorm", emscripten::select_overload<void(vtkImplicitProjectOnPlaneDistance&, NormType)>([](vtkImplicitProjectOnPlaneDistance& self, NormType arg_0) -> void { return self.SetNorm( arg_0); }))
    .function("SetNorm", emscripten::select_overload<void(vtkImplicitProjectOnPlaneDistance&, int)>([](vtkImplicitProjectOnPlaneDistance& self, int arg_0) -> void { return self.SetNorm( arg_0); }))
    .function("GetLocator", &vtkImplicitProjectOnPlaneDistance::GetLocator, emscripten::allow_raw_pointers())
    .function("SetLocator", &vtkImplicitProjectOnPlaneDistance::SetLocator, emscripten::allow_raw_pointers())
    .function("EvaluateFunction", emscripten::select_overload<void(vtkImplicitProjectOnPlaneDistance&, vtkDataArray*, vtkDataArray*)>([](vtkImplicitProjectOnPlaneDistance& self, vtkDataArray* arg_0, vtkDataArray* arg_1) -> void { return self.EvaluateFunction( arg_0, arg_1); }), emscripten::allow_raw_pointers())
    .function("EvaluateFunction", emscripten::select_overload<double(vtkImplicitProjectOnPlaneDistance&, double, double, double)>([](vtkImplicitProjectOnPlaneDistance& self, double arg_0, double arg_1, double arg_2) -> double { return self.EvaluateFunction( arg_0, arg_1, arg_2); }));
}
