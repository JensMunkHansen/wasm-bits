// JavaScript wrapper for vtkSphere with embind 
//
// This file was auto-generated using :
/*
node /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/bin/vtkWrapJavaScript.js \
 @/home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkCommonDataModel.js/vtkCommonDataModel.js.Release.args \
 -o \
 /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkCommonDataModel.js/vtkSphereEmbinding.cxx \
 /home/jmh/github/vtk/Common/DataModel/vtkSphere.h
*/
#include "vtkEmbindSmartPointerTrait.h"
#include <emscripten.h>
#include <string>
#include "vtkVariant.h"
#include "vtkObjectBase.h"
#include "vtkIndent.h"
#include "vtkDataArray.h"
#include "vtkSphere.h"

template<> void emscripten::internal::raw_destructor<vtkSphere>(vtkSphere * ptr){ ptr->Delete(); }
EMSCRIPTEN_BINDINGS(vtkSphere_class) {
  emscripten::class_<vtkSphere, emscripten::base<vtkImplicitFunction>>("vtkSphere")
    .smart_ptr<vtkSmartPointer<vtkSphere>>("vtkSmartPointer<vtkSphere>")
    .constructor(&vtk::MakeAvtkSmartPointer<vtkSphere>)
    .class_function("IsTypeOf", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkSphere::IsTypeOf( arg_0.c_str());}))
    .function("IsA", emscripten::optional_override([](vtkSphere& self, const std::string & arg_0) -> int {  return self.IsA( arg_0.c_str());}))
    .class_function("SafeDownCast", &vtkSphere::SafeDownCast, emscripten::allow_raw_pointers())
    .function("NewInstance", &vtkSphere::NewInstance, emscripten::allow_raw_pointers())
    .class_function("GetNumberOfGenerationsFromBaseType", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkSphere::GetNumberOfGenerationsFromBaseType( arg_0.c_str());}))
    .function("GetNumberOfGenerationsFromBase", emscripten::optional_override([](vtkSphere& self, const std::string & arg_0) -> int {  return self.GetNumberOfGenerationsFromBase( arg_0.c_str());}))
    .function("SetRadius", &vtkSphere::SetRadius)
    .function("GetRadius", &vtkSphere::GetRadius)
    .function("SetCenter", emscripten::select_overload<void(vtkSphere&, double, double, double)>([](vtkSphere& self, double arg_0, double arg_1, double arg_2) -> void { return self.SetCenter( arg_0, arg_1, arg_2); }))
    .function("EvaluateFunction", emscripten::select_overload<void(vtkSphere&, vtkDataArray*, vtkDataArray*)>([](vtkSphere& self, vtkDataArray* arg_0, vtkDataArray* arg_1) -> void { return self.EvaluateFunction( arg_0, arg_1); }), emscripten::allow_raw_pointers())
    .function("EvaluateFunction", emscripten::select_overload<double(vtkSphere&, double, double, double)>([](vtkSphere& self, double arg_0, double arg_1, double arg_2) -> double { return self.EvaluateFunction( arg_0, arg_1, arg_2); }));
}
