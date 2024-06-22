// JavaScript wrapper for vtkHyperStreamline with embind 
//
// This file was auto-generated using :
/*
node /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/bin/vtkWrapJavaScript.js \
 @/home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkFiltersGeneral.js/vtkFiltersGeneral.js.Release.args \
 -o \
 /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkFiltersGeneral.js/vtkHyperStreamlineEmbinding.cxx \
 /home/jmh/github/vtk/Filters/General/vtkHyperStreamline.h
*/
#include "vtkEmbindSmartPointerTrait.h"
#include <emscripten.h>
#include <string>
#include "vtkVariant.h"
#include "vtkObjectBase.h"
#include "vtkIndent.h"
#include "vtkHyperStreamline.h"

EMSCRIPTEN_BINDINGS(vtkFiltersGeneral_vtkHyperStreamline_0_1_constants) {
  const struct { const char *name; int value; }
    constants[6] = {
      { "VTK_INTEGRATE_FORWARD", 0 },
      { "VTK_INTEGRATE_BACKWARD", 1 },
      { "VTK_INTEGRATE_BOTH_DIRECTIONS", 2 },
      { "VTK_INTEGRATE_MAJOR_EIGENVECTOR", 0 },
      { "VTK_INTEGRATE_MEDIUM_EIGENVECTOR", 1 },
      { "VTK_INTEGRATE_MINOR_EIGENVECTOR", 2 },
  };
  for (int c = 0; c < 6; c++)
  {
    emscripten::constant(constants[c].name, constants[c].value);
  }
}
template<> void emscripten::internal::raw_destructor<vtkHyperStreamline>(vtkHyperStreamline * ptr){ ptr->Delete(); }
EMSCRIPTEN_BINDINGS(vtkHyperStreamline_class) {
  emscripten::class_<vtkHyperStreamline, emscripten::base<vtkPolyDataAlgorithm>>("vtkHyperStreamline")
    .smart_ptr<vtkSmartPointer<vtkHyperStreamline>>("vtkSmartPointer<vtkHyperStreamline>")
    .constructor(&vtk::MakeVTKSmartPtr<vtkHyperStreamline>)
    .class_function("IsTypeOf", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkHyperStreamline::IsTypeOf( arg_0.c_str());}))
    .function("IsA", emscripten::optional_override([](vtkHyperStreamline& self, const std::string & arg_0) -> int {  return self.IsA( arg_0.c_str());}))
    .class_function("SafeDownCast", &vtkHyperStreamline::SafeDownCast, emscripten::allow_raw_pointers())
    .function("NewInstance", &vtkHyperStreamline::NewInstance, emscripten::allow_raw_pointers())
    .class_function("GetNumberOfGenerationsFromBaseType", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkHyperStreamline::GetNumberOfGenerationsFromBaseType( arg_0.c_str());}))
    .function("GetNumberOfGenerationsFromBase", emscripten::optional_override([](vtkHyperStreamline& self, const std::string & arg_0) -> int {  return self.GetNumberOfGenerationsFromBase( arg_0.c_str());}))
    .function("SetStartLocation", emscripten::select_overload<void(vtkHyperStreamline&, int, int, double, double, double)>([](vtkHyperStreamline& self, int arg_0, int arg_1, double arg_2, double arg_3, double arg_4) -> void { return self.SetStartLocation( arg_0, arg_1, arg_2, arg_3, arg_4); }))
    .function("SetStartPosition", emscripten::select_overload<void(vtkHyperStreamline&, double, double, double)>([](vtkHyperStreamline& self, double arg_0, double arg_1, double arg_2) -> void { return self.SetStartPosition( arg_0, arg_1, arg_2); }))
    .function("SetMaximumPropagationDistance", &vtkHyperStreamline::SetMaximumPropagationDistance)
    .function("GetMaximumPropagationDistanceMinValue", &vtkHyperStreamline::GetMaximumPropagationDistanceMinValue)
    .function("GetMaximumPropagationDistanceMaxValue", &vtkHyperStreamline::GetMaximumPropagationDistanceMaxValue)
    .function("GetMaximumPropagationDistance", &vtkHyperStreamline::GetMaximumPropagationDistance)
    .function("SetIntegrationEigenvector", &vtkHyperStreamline::SetIntegrationEigenvector)
    .function("GetIntegrationEigenvectorMinValue", &vtkHyperStreamline::GetIntegrationEigenvectorMinValue)
    .function("GetIntegrationEigenvectorMaxValue", &vtkHyperStreamline::GetIntegrationEigenvectorMaxValue)
    .function("GetIntegrationEigenvector", &vtkHyperStreamline::GetIntegrationEigenvector)
    .function("SetIntegrationEigenvectorToMajor", &vtkHyperStreamline::SetIntegrationEigenvectorToMajor)
    .function("SetIntegrationEigenvectorToMedium", &vtkHyperStreamline::SetIntegrationEigenvectorToMedium)
    .function("SetIntegrationEigenvectorToMinor", &vtkHyperStreamline::SetIntegrationEigenvectorToMinor)
    .function("IntegrateMajorEigenvector", &vtkHyperStreamline::IntegrateMajorEigenvector)
    .function("IntegrateMediumEigenvector", &vtkHyperStreamline::IntegrateMediumEigenvector)
    .function("IntegrateMinorEigenvector", &vtkHyperStreamline::IntegrateMinorEigenvector)
    .function("SetIntegrationStepLength", &vtkHyperStreamline::SetIntegrationStepLength)
    .function("GetIntegrationStepLengthMinValue", &vtkHyperStreamline::GetIntegrationStepLengthMinValue)
    .function("GetIntegrationStepLengthMaxValue", &vtkHyperStreamline::GetIntegrationStepLengthMaxValue)
    .function("GetIntegrationStepLength", &vtkHyperStreamline::GetIntegrationStepLength)
    .function("SetStepLength", &vtkHyperStreamline::SetStepLength)
    .function("GetStepLengthMinValue", &vtkHyperStreamline::GetStepLengthMinValue)
    .function("GetStepLengthMaxValue", &vtkHyperStreamline::GetStepLengthMaxValue)
    .function("GetStepLength", &vtkHyperStreamline::GetStepLength)
    .function("SetIntegrationDirection", &vtkHyperStreamline::SetIntegrationDirection)
    .function("GetIntegrationDirectionMinValue", &vtkHyperStreamline::GetIntegrationDirectionMinValue)
    .function("GetIntegrationDirectionMaxValue", &vtkHyperStreamline::GetIntegrationDirectionMaxValue)
    .function("GetIntegrationDirection", &vtkHyperStreamline::GetIntegrationDirection)
    .function("SetIntegrationDirectionToForward", &vtkHyperStreamline::SetIntegrationDirectionToForward)
    .function("SetIntegrationDirectionToBackward", &vtkHyperStreamline::SetIntegrationDirectionToBackward)
    .function("SetIntegrationDirectionToIntegrateBothDirections", &vtkHyperStreamline::SetIntegrationDirectionToIntegrateBothDirections)
    .function("SetTerminalEigenvalue", &vtkHyperStreamline::SetTerminalEigenvalue)
    .function("GetTerminalEigenvalueMinValue", &vtkHyperStreamline::GetTerminalEigenvalueMinValue)
    .function("GetTerminalEigenvalueMaxValue", &vtkHyperStreamline::GetTerminalEigenvalueMaxValue)
    .function("GetTerminalEigenvalue", &vtkHyperStreamline::GetTerminalEigenvalue)
    .function("SetNumberOfSides", &vtkHyperStreamline::SetNumberOfSides)
    .function("GetNumberOfSidesMinValue", &vtkHyperStreamline::GetNumberOfSidesMinValue)
    .function("GetNumberOfSidesMaxValue", &vtkHyperStreamline::GetNumberOfSidesMaxValue)
    .function("GetNumberOfSides", &vtkHyperStreamline::GetNumberOfSides)
    .function("SetRadius", &vtkHyperStreamline::SetRadius)
    .function("GetRadiusMinValue", &vtkHyperStreamline::GetRadiusMinValue)
    .function("GetRadiusMaxValue", &vtkHyperStreamline::GetRadiusMaxValue)
    .function("GetRadius", &vtkHyperStreamline::GetRadius)
    .function("SetLogScaling", &vtkHyperStreamline::SetLogScaling)
    .function("GetLogScaling", &vtkHyperStreamline::GetLogScaling)
    .function("LogScalingOn", &vtkHyperStreamline::LogScalingOn)
    .function("LogScalingOff", &vtkHyperStreamline::LogScalingOff);
}
