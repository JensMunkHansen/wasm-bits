// JavaScript wrapper for vtkPlane with embind 
//
// This file was auto-generated using :
/*
node /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/bin/vtkWrapJavaScript.js \
 @/home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkCommonDataModel.js/vtkCommonDataModel.js.Release.args \
 -o \
 /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkCommonDataModel.js/vtkPlaneEmbinding.cxx \
 /home/jmh/github/vtk/Common/DataModel/vtkPlane.h
*/
#include "vtkEmbindSmartPointerTrait.h"
#include <emscripten.h>
#include <string>
#include "vtkVariant.h"
#include "vtkObjectBase.h"
#include "vtkIndent.h"
#include "vtkDataArray.h"
#include "vtkPoints.h"
#include "vtkPlane.h"

template<> void emscripten::internal::raw_destructor<vtkPlane>(vtkPlane * ptr){ ptr->Delete(); }
EMSCRIPTEN_BINDINGS(vtkPlane_class) {
  emscripten::class_<vtkPlane, emscripten::base<vtkImplicitFunction>>("vtkPlane")
    .smart_ptr<vtkSmartPointer<vtkPlane>>("vtkSmartPointer<vtkPlane>")
    .constructor(&vtk::MakeAvtkSmartPointer<vtkPlane>)
    .class_function("IsTypeOf", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkPlane::IsTypeOf( arg_0.c_str());}))
    .function("IsA", emscripten::optional_override([](vtkPlane& self, const std::string & arg_0) -> int {  return self.IsA( arg_0.c_str());}))
    .class_function("SafeDownCast", &vtkPlane::SafeDownCast, emscripten::allow_raw_pointers())
    .function("NewInstance", &vtkPlane::NewInstance, emscripten::allow_raw_pointers())
    .class_function("GetNumberOfGenerationsFromBaseType", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkPlane::GetNumberOfGenerationsFromBaseType( arg_0.c_str());}))
    .function("GetNumberOfGenerationsFromBase", emscripten::optional_override([](vtkPlane& self, const std::string & arg_0) -> int {  return self.GetNumberOfGenerationsFromBase( arg_0.c_str());}))
    .function("EvaluateFunction", emscripten::select_overload<void(vtkPlane&, vtkDataArray*, vtkDataArray*)>([](vtkPlane& self, vtkDataArray* arg_0, vtkDataArray* arg_1) -> void { return self.EvaluateFunction( arg_0, arg_1); }), emscripten::allow_raw_pointers())
    .function("EvaluateFunction", emscripten::select_overload<double(vtkPlane&, double, double, double)>([](vtkPlane& self, double arg_0, double arg_1, double arg_2) -> double { return self.EvaluateFunction( arg_0, arg_1, arg_2); }))
    .function("SetNormal", emscripten::select_overload<void(vtkPlane&, double, double, double)>([](vtkPlane& self, double arg_0, double arg_1, double arg_2) -> void { return self.SetNormal( arg_0, arg_1, arg_2); }))
    .function("SetOrigin", emscripten::select_overload<void(vtkPlane&, double, double, double)>([](vtkPlane& self, double arg_0, double arg_1, double arg_2) -> void { return self.SetOrigin( arg_0, arg_1, arg_2); }))
    .function("Push", &vtkPlane::Push)
    .class_function("ComputeBestFittingPlane", emscripten::optional_override([]( vtkPoints* arg_0, std::uintptr_t arg_1, std::uintptr_t arg_2) -> bool {  return vtkPlane::ComputeBestFittingPlane( arg_0,reinterpret_cast<double*>(arg_1 * sizeof(double)),reinterpret_cast<double*>(arg_2 * sizeof(double)));}), emscripten::allow_raw_pointers());
}
