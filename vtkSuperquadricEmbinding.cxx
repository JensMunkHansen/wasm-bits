// JavaScript wrapper for vtkSuperquadric with embind 
//
// This file was auto-generated using :
/*
node /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/bin/vtkWrapJavaScript.js \
 @/home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkCommonDataModel.js/vtkCommonDataModel.js.Release.args \
 -o \
 /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkCommonDataModel.js/vtkSuperquadricEmbinding.cxx \
 /home/jmh/github/vtk/Common/DataModel/vtkSuperquadric.h
*/
#include "vtkEmbindSmartPointerTrait.h"
#include <emscripten.h>
#include <string>
#include "vtkVariant.h"
#include "vtkObjectBase.h"
#include "vtkIndent.h"
#include "vtkDataArray.h"
#include "vtkSuperquadric.h"

EMSCRIPTEN_BINDINGS(vtkCommonDataModel_vtkSuperquadric_0_1_constants) {
  emscripten::constant("VTK_MIN_SUPERQUADRIC_THICKNESS", 1e-4);
}
template<> void emscripten::internal::raw_destructor<vtkSuperquadric>(vtkSuperquadric * ptr){ ptr->Delete(); }
EMSCRIPTEN_BINDINGS(vtkSuperquadric_class) {
  emscripten::class_<vtkSuperquadric, emscripten::base<vtkImplicitFunction>>("vtkSuperquadric")
    .smart_ptr<vtkSmartPointer<vtkSuperquadric>>("vtkSmartPointer<vtkSuperquadric>")
    .constructor(&vtk::MakeVTKSmartPtr<vtkSuperquadric>)
    .class_function("IsTypeOf", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkSuperquadric::IsTypeOf( arg_0.c_str());}))
    .function("IsA", emscripten::optional_override([](vtkSuperquadric& self, const std::string & arg_0) -> int {  return self.IsA( arg_0.c_str());}))
    .class_function("SafeDownCast", &vtkSuperquadric::SafeDownCast, emscripten::allow_raw_pointers())
    .function("NewInstance", &vtkSuperquadric::NewInstance, emscripten::allow_raw_pointers())
    .class_function("GetNumberOfGenerationsFromBaseType", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkSuperquadric::GetNumberOfGenerationsFromBaseType( arg_0.c_str());}))
    .function("GetNumberOfGenerationsFromBase", emscripten::optional_override([](vtkSuperquadric& self, const std::string & arg_0) -> int {  return self.GetNumberOfGenerationsFromBase( arg_0.c_str());}))
    .function("SetCenter", emscripten::select_overload<void(vtkSuperquadric&, double, double, double)>([](vtkSuperquadric& self, double arg_0, double arg_1, double arg_2) -> void { return self.SetCenter( arg_0, arg_1, arg_2); }))
    .function("SetScale", emscripten::select_overload<void(vtkSuperquadric&, double, double, double)>([](vtkSuperquadric& self, double arg_0, double arg_1, double arg_2) -> void { return self.SetScale( arg_0, arg_1, arg_2); }))
    .function("GetThickness", &vtkSuperquadric::GetThickness)
    .function("SetThickness", &vtkSuperquadric::SetThickness)
    .function("GetThicknessMinValue", &vtkSuperquadric::GetThicknessMinValue)
    .function("GetThicknessMaxValue", &vtkSuperquadric::GetThicknessMaxValue)
    .function("GetPhiRoundness", &vtkSuperquadric::GetPhiRoundness)
    .function("SetPhiRoundness", &vtkSuperquadric::SetPhiRoundness)
    .function("GetThetaRoundness", &vtkSuperquadric::GetThetaRoundness)
    .function("SetThetaRoundness", &vtkSuperquadric::SetThetaRoundness)
    .function("SetSize", &vtkSuperquadric::SetSize)
    .function("GetSize", &vtkSuperquadric::GetSize)
    .function("ToroidalOn", &vtkSuperquadric::ToroidalOn)
    .function("ToroidalOff", &vtkSuperquadric::ToroidalOff)
    .function("GetToroidal", &vtkSuperquadric::GetToroidal)
    .function("SetToroidal", &vtkSuperquadric::SetToroidal)
    .function("EvaluateFunction", emscripten::select_overload<void(vtkSuperquadric&, vtkDataArray*, vtkDataArray*)>([](vtkSuperquadric& self, vtkDataArray* arg_0, vtkDataArray* arg_1) -> void { return self.EvaluateFunction( arg_0, arg_1); }), emscripten::allow_raw_pointers())
    .function("EvaluateFunction", emscripten::select_overload<double(vtkSuperquadric&, double, double, double)>([](vtkSuperquadric& self, double arg_0, double arg_1, double arg_2) -> double { return self.EvaluateFunction( arg_0, arg_1, arg_2); }));
}
