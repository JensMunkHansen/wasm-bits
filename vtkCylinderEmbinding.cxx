// JavaScript wrapper for vtkCylinder with embind 
//
// This file was auto-generated using :
/*
node /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/bin/vtkWrapJavaScript.js \
 @/home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkCommonDataModel.js/vtkCommonDataModel.js.Release.args \
 -o \
 /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkCommonDataModel.js/vtkCylinderEmbinding.cxx \
 /home/jmh/github/vtk/Common/DataModel/vtkCylinder.h
*/
#include "vtkEmbindSmartPointerTrait.h"
#include <emscripten.h>
#include <string>
#include "vtkVariant.h"
#include "vtkObjectBase.h"
#include "vtkIndent.h"
#include "vtkDataArray.h"
#include "vtkCylinder.h"

template<> void emscripten::internal::raw_destructor<vtkCylinder>(vtkCylinder * ptr){ ptr->Delete(); }
EMSCRIPTEN_BINDINGS(vtkCylinder_class) {
  emscripten::class_<vtkCylinder, emscripten::base<vtkImplicitFunction>>("vtkCylinder")
    .smart_ptr<vtkSmartPointer<vtkCylinder>>("vtkSmartPointer<vtkCylinder>")
    .constructor(&vtk::MakeAvtkSmartPointer<vtkCylinder>)
    .class_function("IsTypeOf", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkCylinder::IsTypeOf( arg_0.c_str());}))
    .function("IsA", emscripten::optional_override([](vtkCylinder& self, const std::string & arg_0) -> int {  return self.IsA( arg_0.c_str());}))
    .class_function("SafeDownCast", &vtkCylinder::SafeDownCast, emscripten::allow_raw_pointers())
    .function("NewInstance", &vtkCylinder::NewInstance, emscripten::allow_raw_pointers())
    .class_function("GetNumberOfGenerationsFromBaseType", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkCylinder::GetNumberOfGenerationsFromBaseType( arg_0.c_str());}))
    .function("GetNumberOfGenerationsFromBase", emscripten::optional_override([](vtkCylinder& self, const std::string & arg_0) -> int {  return self.GetNumberOfGenerationsFromBase( arg_0.c_str());}))
    .function("SetRadius", &vtkCylinder::SetRadius)
    .function("GetRadius", &vtkCylinder::GetRadius)
    .function("SetCenter", emscripten::select_overload<void(vtkCylinder&, double, double, double)>([](vtkCylinder& self, double arg_0, double arg_1, double arg_2) -> void { return self.SetCenter( arg_0, arg_1, arg_2); }))
    .function("SetAxis", emscripten::select_overload<void(vtkCylinder&, double, double, double)>([](vtkCylinder& self, double arg_0, double arg_1, double arg_2) -> void { return self.SetAxis( arg_0, arg_1, arg_2); }))
    .function("EvaluateFunction", emscripten::select_overload<void(vtkCylinder&, vtkDataArray*, vtkDataArray*)>([](vtkCylinder& self, vtkDataArray* arg_0, vtkDataArray* arg_1) -> void { return self.EvaluateFunction( arg_0, arg_1); }), emscripten::allow_raw_pointers())
    .function("EvaluateFunction", emscripten::select_overload<double(vtkCylinder&, double, double, double)>([](vtkCylinder& self, double arg_0, double arg_1, double arg_2) -> double { return self.EvaluateFunction( arg_0, arg_1, arg_2); }));
}
