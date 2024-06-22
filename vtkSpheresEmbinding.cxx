// JavaScript wrapper for vtkSpheres with embind 
//
// This file was auto-generated using :
/*
node /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/bin/vtkWrapJavaScript.js \
 @/home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkCommonDataModel.js/vtkCommonDataModel.js.Release.args \
 -o \
 /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkCommonDataModel.js/vtkSpheresEmbinding.cxx \
 /home/jmh/github/vtk/Common/DataModel/vtkSpheres.h
*/
#include "vtkEmbindSmartPointerTrait.h"
#include <emscripten.h>
#include <string>
#include "vtkVariant.h"
#include "vtkObjectBase.h"
#include "vtkIndent.h"
#include "vtkPoints.h"
#include "vtkDataArray.h"
#include "vtkSphere.h"
#include "vtkSpheres.h"

template<> void emscripten::internal::raw_destructor<vtkSpheres>(vtkSpheres * ptr){ ptr->Delete(); }
EMSCRIPTEN_BINDINGS(vtkSpheres_class) {
  emscripten::class_<vtkSpheres, emscripten::base<vtkImplicitFunction>>("vtkSpheres")
    .smart_ptr<vtkSmartPointer<vtkSpheres>>("vtkSmartPointer<vtkSpheres>")
    .constructor(&vtk::MakeVTKSmartPtr<vtkSpheres>)
    .class_function("IsTypeOf", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkSpheres::IsTypeOf( arg_0.c_str());}))
    .function("IsA", emscripten::optional_override([](vtkSpheres& self, const std::string & arg_0) -> int {  return self.IsA( arg_0.c_str());}))
    .class_function("SafeDownCast", &vtkSpheres::SafeDownCast, emscripten::allow_raw_pointers())
    .function("NewInstance", &vtkSpheres::NewInstance, emscripten::allow_raw_pointers())
    .class_function("GetNumberOfGenerationsFromBaseType", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkSpheres::GetNumberOfGenerationsFromBaseType( arg_0.c_str());}))
    .function("GetNumberOfGenerationsFromBase", emscripten::optional_override([](vtkSpheres& self, const std::string & arg_0) -> int {  return self.GetNumberOfGenerationsFromBase( arg_0.c_str());}))
    .function("SetCenters", &vtkSpheres::SetCenters, emscripten::allow_raw_pointers())
    .function("GetCenters", &vtkSpheres::GetCenters, emscripten::allow_raw_pointers())
    .function("SetRadii", &vtkSpheres::SetRadii, emscripten::allow_raw_pointers())
    .function("GetRadii", &vtkSpheres::GetRadii, emscripten::allow_raw_pointers())
    .function("GetNumberOfSpheres", &vtkSpheres::GetNumberOfSpheres)
    .function("GetSphere", emscripten::select_overload<vtkSphere*(vtkSpheres&, int)>([](vtkSpheres& self, int arg_0) -> vtkSphere* { return self.GetSphere( arg_0); }), emscripten::allow_raw_pointers())
    .function("GetSphere", emscripten::select_overload<void(vtkSpheres&, int, vtkSphere*)>([](vtkSpheres& self, int arg_0, vtkSphere* arg_1) -> void { return self.GetSphere( arg_0, arg_1); }), emscripten::allow_raw_pointers())
    .function("EvaluateFunction", emscripten::select_overload<void(vtkSpheres&, vtkDataArray*, vtkDataArray*)>([](vtkSpheres& self, vtkDataArray* arg_0, vtkDataArray* arg_1) -> void { return self.EvaluateFunction( arg_0, arg_1); }), emscripten::allow_raw_pointers())
    .function("EvaluateFunction", emscripten::select_overload<double(vtkSpheres&, double, double, double)>([](vtkSpheres& self, double arg_0, double arg_1, double arg_2) -> double { return self.EvaluateFunction( arg_0, arg_1, arg_2); }));
}
