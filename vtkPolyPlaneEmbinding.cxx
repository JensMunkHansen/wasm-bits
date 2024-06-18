// JavaScript wrapper for vtkPolyPlane with embind 
//
// This file was auto-generated using :
/*
node /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/bin/vtkWrapJavaScript.js \
 @/home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkCommonDataModel.js/vtkCommonDataModel.js.Release.args \
 -o \
 /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkCommonDataModel.js/vtkPolyPlaneEmbinding.cxx \
 /home/jmh/github/vtk/Common/DataModel/vtkPolyPlane.h
*/
#include "vtkEmbindSmartPointerTrait.h"
#include <emscripten.h>
#include <string>
#include "vtkVariant.h"
#include "vtkObjectBase.h"
#include "vtkIndent.h"
#include "vtkPolyLine.h"
#include "vtkDataArray.h"
#include "vtkPolyPlane.h"

template<> void emscripten::internal::raw_destructor<vtkPolyPlane>(vtkPolyPlane * ptr){ ptr->Delete(); }
EMSCRIPTEN_BINDINGS(vtkPolyPlane_class) {
  emscripten::class_<vtkPolyPlane, emscripten::base<vtkImplicitFunction>>("vtkPolyPlane")
    .smart_ptr<vtkSmartPointer<vtkPolyPlane>>("vtkSmartPointer<vtkPolyPlane>")
    .constructor(&vtk::MakeAvtkSmartPointer<vtkPolyPlane>)
    .class_function("IsTypeOf", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkPolyPlane::IsTypeOf( arg_0.c_str());}))
    .function("IsA", emscripten::optional_override([](vtkPolyPlane& self, const std::string & arg_0) -> int {  return self.IsA( arg_0.c_str());}))
    .class_function("SafeDownCast", &vtkPolyPlane::SafeDownCast, emscripten::allow_raw_pointers())
    .function("NewInstance", &vtkPolyPlane::NewInstance, emscripten::allow_raw_pointers())
    .class_function("GetNumberOfGenerationsFromBaseType", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkPolyPlane::GetNumberOfGenerationsFromBaseType( arg_0.c_str());}))
    .function("GetNumberOfGenerationsFromBase", emscripten::optional_override([](vtkPolyPlane& self, const std::string & arg_0) -> int {  return self.GetNumberOfGenerationsFromBase( arg_0.c_str());}))
    .function("SetPolyLine", &vtkPolyPlane::SetPolyLine, emscripten::allow_raw_pointers())
    .function("GetPolyLine", &vtkPolyPlane::GetPolyLine, emscripten::allow_raw_pointers())
    .function("GetMTime", &vtkPolyPlane::GetMTime)
    .function("EvaluateFunction", emscripten::select_overload<void(vtkPolyPlane&, vtkDataArray*, vtkDataArray*)>([](vtkPolyPlane& self, vtkDataArray* arg_0, vtkDataArray* arg_1) -> void { return self.EvaluateFunction( arg_0, arg_1); }), emscripten::allow_raw_pointers())
    .function("EvaluateFunction", emscripten::select_overload<double(vtkPolyPlane&, double, double, double)>([](vtkPolyPlane& self, double arg_0, double arg_1, double arg_2) -> double { return self.EvaluateFunction( arg_0, arg_1, arg_2); }));
}
