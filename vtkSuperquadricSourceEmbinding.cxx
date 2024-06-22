// JavaScript wrapper for vtkSuperquadricSource with embind 
//
// This file was auto-generated using :
/*
node /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/bin/vtkWrapJavaScript.js \
 @/home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkFiltersSources.js/vtkFiltersSources.js.Release.args \
 -o \
 /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkFiltersSources.js/vtkSuperquadricSourceEmbinding.cxx \
 /home/jmh/github/vtk/Filters/Sources/vtkSuperquadricSource.h
*/
#include "vtkEmbindSmartPointerTrait.h"
#include <emscripten.h>
#include <string>
#include "vtkVariant.h"
#include "vtkObjectBase.h"
#include "vtkIndent.h"
#include "vtkSuperquadricSource.h"

EMSCRIPTEN_BINDINGS(vtkFiltersSources_vtkSuperquadricSource_0_1_constants) {
  emscripten::constant("VTK_MAX_SUPERQUADRIC_RESOLUTION", 1024);
}
EMSCRIPTEN_BINDINGS(vtkFiltersSources_vtkSuperquadricSource_1_1_constants) {
  const struct { const char *name; double value; }
    constants[2] = {
      { "VTK_MIN_SUPERQUADRIC_THICKNESS", 1e-4 },
      { "VTK_MIN_SUPERQUADRIC_ROUNDNESS", 1e-24 },
  };
  for (int c = 0; c < 2; c++)
  {
    emscripten::constant(constants[c].name, constants[c].value);
  }
}
template<> void emscripten::internal::raw_destructor<vtkSuperquadricSource>(vtkSuperquadricSource * ptr){ ptr->Delete(); }
EMSCRIPTEN_BINDINGS(vtkSuperquadricSource_class) {
  emscripten::class_<vtkSuperquadricSource, emscripten::base<vtkPolyDataAlgorithm>>("vtkSuperquadricSource")
    .smart_ptr<vtkSmartPointer<vtkSuperquadricSource>>("vtkSmartPointer<vtkSuperquadricSource>")
    .constructor(&vtk::MakeAvtkSmartPointer<vtkSuperquadricSource>)
    .class_function("IsTypeOf", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkSuperquadricSource::IsTypeOf( arg_0.c_str());}))
    .function("IsA", emscripten::optional_override([](vtkSuperquadricSource& self, const std::string & arg_0) -> int {  return self.IsA( arg_0.c_str());}))
    .class_function("SafeDownCast", &vtkSuperquadricSource::SafeDownCast, emscripten::allow_raw_pointers())
    .function("NewInstance", &vtkSuperquadricSource::NewInstance, emscripten::allow_raw_pointers())
    .class_function("GetNumberOfGenerationsFromBaseType", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkSuperquadricSource::GetNumberOfGenerationsFromBaseType( arg_0.c_str());}))
    .function("GetNumberOfGenerationsFromBase", emscripten::optional_override([](vtkSuperquadricSource& self, const std::string & arg_0) -> int {  return self.GetNumberOfGenerationsFromBase( arg_0.c_str());}))
    .function("SetCenter", emscripten::select_overload<void(vtkSuperquadricSource&, double, double, double)>([](vtkSuperquadricSource& self, double arg_0, double arg_1, double arg_2) -> void { return self.SetCenter( arg_0, arg_1, arg_2); }))
    .function("SetScale", emscripten::select_overload<void(vtkSuperquadricSource&, double, double, double)>([](vtkSuperquadricSource& self, double arg_0, double arg_1, double arg_2) -> void { return self.SetScale( arg_0, arg_1, arg_2); }))
    .function("GetThetaResolution", &vtkSuperquadricSource::GetThetaResolution)
    .function("SetThetaResolution", &vtkSuperquadricSource::SetThetaResolution)
    .function("GetPhiResolution", &vtkSuperquadricSource::GetPhiResolution)
    .function("SetPhiResolution", &vtkSuperquadricSource::SetPhiResolution)
    .function("GetThickness", &vtkSuperquadricSource::GetThickness)
    .function("SetThickness", &vtkSuperquadricSource::SetThickness)
    .function("GetThicknessMinValue", &vtkSuperquadricSource::GetThicknessMinValue)
    .function("GetThicknessMaxValue", &vtkSuperquadricSource::GetThicknessMaxValue)
    .function("GetPhiRoundness", &vtkSuperquadricSource::GetPhiRoundness)
    .function("SetPhiRoundness", &vtkSuperquadricSource::SetPhiRoundness)
    .function("GetThetaRoundness", &vtkSuperquadricSource::GetThetaRoundness)
    .function("SetThetaRoundness", &vtkSuperquadricSource::SetThetaRoundness)
    .function("SetSize", &vtkSuperquadricSource::SetSize)
    .function("GetSize", &vtkSuperquadricSource::GetSize)
    .function("SetAxisOfSymmetry", &vtkSuperquadricSource::SetAxisOfSymmetry)
    .function("GetAxisOfSymmetry", &vtkSuperquadricSource::GetAxisOfSymmetry)
    .function("SetXAxisOfSymmetry", &vtkSuperquadricSource::SetXAxisOfSymmetry)
    .function("SetYAxisOfSymmetry", &vtkSuperquadricSource::SetYAxisOfSymmetry)
    .function("SetZAxisOfSymmetry", &vtkSuperquadricSource::SetZAxisOfSymmetry)
    .function("ToroidalOn", &vtkSuperquadricSource::ToroidalOn)
    .function("ToroidalOff", &vtkSuperquadricSource::ToroidalOff)
    .function("GetToroidal", &vtkSuperquadricSource::GetToroidal)
    .function("SetToroidal", &vtkSuperquadricSource::SetToroidal)
    .function("SetOutputPointsPrecision", &vtkSuperquadricSource::SetOutputPointsPrecision)
    .function("GetOutputPointsPrecision", &vtkSuperquadricSource::GetOutputPointsPrecision);
}
