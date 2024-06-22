// JavaScript wrapper for vtkImplicitPolyDataDistance with embind 
//
// This file was auto-generated using :
/*
node /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/bin/vtkWrapJavaScript.js \
 @/home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkFiltersCore.js/vtkFiltersCore.js.Release.args \
 -o \
 /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkFiltersCore.js/vtkImplicitPolyDataDistanceEmbinding.cxx \
 /home/jmh/github/vtk/Filters/Core/vtkImplicitPolyDataDistance.h
*/
#include "vtkEmbindSmartPointerTrait.h"
#include <emscripten.h>
#include <string>
#include "vtkVariant.h"
#include "vtkObjectBase.h"
#include "vtkIndent.h"
#include "vtkPolyData.h"
#include "vtkDataArray.h"
#include "vtkImplicitPolyDataDistance.h"

template<> void emscripten::internal::raw_destructor<vtkImplicitPolyDataDistance>(vtkImplicitPolyDataDistance * ptr){ ptr->Delete(); }
EMSCRIPTEN_BINDINGS(vtkImplicitPolyDataDistance_class) {
  emscripten::class_<vtkImplicitPolyDataDistance, emscripten::base<vtkImplicitFunction>>("vtkImplicitPolyDataDistance")
    .smart_ptr<vtkSmartPointer<vtkImplicitPolyDataDistance>>("vtkSmartPointer<vtkImplicitPolyDataDistance>")
    .constructor(&vtk::MakeVTKSmartPtr<vtkImplicitPolyDataDistance>)
    .class_function("IsTypeOf", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkImplicitPolyDataDistance::IsTypeOf( arg_0.c_str());}))
    .function("IsA", emscripten::optional_override([](vtkImplicitPolyDataDistance& self, const std::string & arg_0) -> int {  return self.IsA( arg_0.c_str());}))
    .class_function("SafeDownCast", &vtkImplicitPolyDataDistance::SafeDownCast, emscripten::allow_raw_pointers())
    .function("NewInstance", &vtkImplicitPolyDataDistance::NewInstance, emscripten::allow_raw_pointers())
    .class_function("GetNumberOfGenerationsFromBaseType", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkImplicitPolyDataDistance::GetNumberOfGenerationsFromBaseType( arg_0.c_str());}))
    .function("GetNumberOfGenerationsFromBase", emscripten::optional_override([](vtkImplicitPolyDataDistance& self, const std::string & arg_0) -> int {  return self.GetNumberOfGenerationsFromBase( arg_0.c_str());}))
    .function("GetMTime", &vtkImplicitPolyDataDistance::GetMTime)
    .function("SetInput", &vtkImplicitPolyDataDistance::SetInput, emscripten::allow_raw_pointers())
    .function("SetNoValue", &vtkImplicitPolyDataDistance::SetNoValue)
    .function("GetNoValue", &vtkImplicitPolyDataDistance::GetNoValue)
    .function("SetNoGradient", emscripten::select_overload<void(vtkImplicitPolyDataDistance&, double, double, double)>([](vtkImplicitPolyDataDistance& self, double arg_0, double arg_1, double arg_2) -> void { return self.SetNoGradient( arg_0, arg_1, arg_2); }))
    .function("SetNoClosestPoint", emscripten::select_overload<void(vtkImplicitPolyDataDistance&, double, double, double)>([](vtkImplicitPolyDataDistance& self, double arg_0, double arg_1, double arg_2) -> void { return self.SetNoClosestPoint( arg_0, arg_1, arg_2); }))
    .function("GetTolerance", &vtkImplicitPolyDataDistance::GetTolerance)
    .function("SetTolerance", &vtkImplicitPolyDataDistance::SetTolerance)
    .function("EvaluateFunction", emscripten::select_overload<void(vtkImplicitPolyDataDistance&, vtkDataArray*, vtkDataArray*)>([](vtkImplicitPolyDataDistance& self, vtkDataArray* arg_0, vtkDataArray* arg_1) -> void { return self.EvaluateFunction( arg_0, arg_1); }), emscripten::allow_raw_pointers())
    .function("EvaluateFunction", emscripten::select_overload<double(vtkImplicitPolyDataDistance&, double, double, double)>([](vtkImplicitPolyDataDistance& self, double arg_0, double arg_1, double arg_2) -> double { return self.EvaluateFunction( arg_0, arg_1, arg_2); }));
}
