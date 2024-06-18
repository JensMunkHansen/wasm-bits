// JavaScript wrapper for vtkEvenlySpacedStreamlines2D with embind 
//
// This file was auto-generated using :
/*
node /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/bin/vtkWrapJavaScript.js \
 @/home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkFiltersFlowPaths.js/vtkFiltersFlowPaths.js.Release.args \
 -o \
 /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkFiltersFlowPaths.js/vtkEvenlySpacedStreamlines2DEmbinding.cxx \
 /home/jmh/github/vtk/Filters/FlowPaths/vtkEvenlySpacedStreamlines2D.h
*/
#include "vtkEmbindSmartPointerTrait.h"
#include <emscripten.h>
#include <string>
#include "vtkVariant.h"
#include "vtkObjectBase.h"
#include "vtkIndent.h"
#include "vtkInitialValueProblemSolver.h"
#include "vtkAbstractInterpolatedVelocityField.h"
#include "vtkEvenlySpacedStreamlines2D.h"

EMSCRIPTEN_BINDINGS(vtkFiltersFlowPaths_vtkEvenlySpacedStreamlines2D_class_enums) {
}
template<> void emscripten::internal::raw_destructor<vtkEvenlySpacedStreamlines2D>(vtkEvenlySpacedStreamlines2D * ptr){ ptr->Delete(); }
EMSCRIPTEN_BINDINGS(vtkEvenlySpacedStreamlines2D_class) {
  emscripten::class_<vtkEvenlySpacedStreamlines2D, emscripten::base<vtkPolyDataAlgorithm>>("vtkEvenlySpacedStreamlines2D")
    .smart_ptr<vtkSmartPointer<vtkEvenlySpacedStreamlines2D>>("vtkSmartPointer<vtkEvenlySpacedStreamlines2D>")
    .constructor(&vtk::MakeAvtkSmartPointer<vtkEvenlySpacedStreamlines2D>)
    .class_function("IsTypeOf", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkEvenlySpacedStreamlines2D::IsTypeOf( arg_0.c_str());}))
    .function("IsA", emscripten::optional_override([](vtkEvenlySpacedStreamlines2D& self, const std::string & arg_0) -> int {  return self.IsA( arg_0.c_str());}))
    .class_function("SafeDownCast", &vtkEvenlySpacedStreamlines2D::SafeDownCast, emscripten::allow_raw_pointers())
    .function("NewInstance", &vtkEvenlySpacedStreamlines2D::NewInstance, emscripten::allow_raw_pointers())
    .class_function("GetNumberOfGenerationsFromBaseType", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkEvenlySpacedStreamlines2D::GetNumberOfGenerationsFromBaseType( arg_0.c_str());}))
    .function("GetNumberOfGenerationsFromBase", emscripten::optional_override([](vtkEvenlySpacedStreamlines2D& self, const std::string & arg_0) -> int {  return self.GetNumberOfGenerationsFromBase( arg_0.c_str());}))
    .function("SetStartPosition", emscripten::select_overload<void(vtkEvenlySpacedStreamlines2D&, double, double, double)>([](vtkEvenlySpacedStreamlines2D& self, double arg_0, double arg_1, double arg_2) -> void { return self.SetStartPosition( arg_0, arg_1, arg_2); }))
    .function("SetIntegrator", &vtkEvenlySpacedStreamlines2D::SetIntegrator, emscripten::allow_raw_pointers())
    .function("GetIntegrator", &vtkEvenlySpacedStreamlines2D::GetIntegrator, emscripten::allow_raw_pointers())
    .function("SetIntegratorType", &vtkEvenlySpacedStreamlines2D::SetIntegratorType)
    .function("GetIntegratorType", &vtkEvenlySpacedStreamlines2D::GetIntegratorType)
    .function("SetIntegratorTypeToRungeKutta2", &vtkEvenlySpacedStreamlines2D::SetIntegratorTypeToRungeKutta2)
    .function("SetIntegratorTypeToRungeKutta4", &vtkEvenlySpacedStreamlines2D::SetIntegratorTypeToRungeKutta4)
    .function("SetInterpolatorTypeToDataSetPointLocator", &vtkEvenlySpacedStreamlines2D::SetInterpolatorTypeToDataSetPointLocator)
    .function("SetInterpolatorTypeToCellLocator", &vtkEvenlySpacedStreamlines2D::SetInterpolatorTypeToCellLocator)
    .function("SetIntegrationStepUnit", &vtkEvenlySpacedStreamlines2D::SetIntegrationStepUnit)
    .function("GetIntegrationStepUnit", &vtkEvenlySpacedStreamlines2D::GetIntegrationStepUnit)
    .function("SetMaximumNumberOfSteps", &vtkEvenlySpacedStreamlines2D::SetMaximumNumberOfSteps)
    .function("GetMaximumNumberOfSteps", &vtkEvenlySpacedStreamlines2D::GetMaximumNumberOfSteps)
    .function("SetMinimumNumberOfLoopPoints", &vtkEvenlySpacedStreamlines2D::SetMinimumNumberOfLoopPoints)
    .function("GetMinimumNumberOfLoopPoints", &vtkEvenlySpacedStreamlines2D::GetMinimumNumberOfLoopPoints)
    .function("SetInitialIntegrationStep", &vtkEvenlySpacedStreamlines2D::SetInitialIntegrationStep)
    .function("GetInitialIntegrationStep", &vtkEvenlySpacedStreamlines2D::GetInitialIntegrationStep)
    .function("SetSeparatingDistance", &vtkEvenlySpacedStreamlines2D::SetSeparatingDistance)
    .function("GetSeparatingDistance", &vtkEvenlySpacedStreamlines2D::GetSeparatingDistance)
    .function("SetSeparatingDistanceRatio", &vtkEvenlySpacedStreamlines2D::SetSeparatingDistanceRatio)
    .function("GetSeparatingDistanceRatio", &vtkEvenlySpacedStreamlines2D::GetSeparatingDistanceRatio)
    .function("SetClosedLoopMaximumDistance", &vtkEvenlySpacedStreamlines2D::SetClosedLoopMaximumDistance)
    .function("GetClosedLoopMaximumDistance", &vtkEvenlySpacedStreamlines2D::GetClosedLoopMaximumDistance)
    .function("SetLoopAngle", &vtkEvenlySpacedStreamlines2D::SetLoopAngle)
    .function("GetLoopAngle", &vtkEvenlySpacedStreamlines2D::GetLoopAngle)
    .function("SetTerminalSpeed", &vtkEvenlySpacedStreamlines2D::SetTerminalSpeed)
    .function("GetTerminalSpeed", &vtkEvenlySpacedStreamlines2D::GetTerminalSpeed)
    .function("SetComputeVorticity", &vtkEvenlySpacedStreamlines2D::SetComputeVorticity)
    .function("GetComputeVorticity", &vtkEvenlySpacedStreamlines2D::GetComputeVorticity)
    .function("SetInterpolatorPrototype", &vtkEvenlySpacedStreamlines2D::SetInterpolatorPrototype, emscripten::allow_raw_pointers())
    .function("SetInterpolatorType", &vtkEvenlySpacedStreamlines2D::SetInterpolatorType);
}
