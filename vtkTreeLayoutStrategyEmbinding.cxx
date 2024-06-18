// JavaScript wrapper for vtkTreeLayoutStrategy with embind 
//
// This file was auto-generated using :
/*
node /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/bin/vtkWrapJavaScript.js \
 @/home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkInfovisLayout.js/vtkInfovisLayout.js.Release.args \
 -o \
 /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkInfovisLayout.js/vtkTreeLayoutStrategyEmbinding.cxx \
 /home/jmh/github/vtk/Infovis/Layout/vtkTreeLayoutStrategy.h
*/
#include "vtkEmbindSmartPointerTrait.h"
#include <emscripten.h>
#include <string>
#include "vtkVariant.h"
#include "vtkObjectBase.h"
#include "vtkIndent.h"
#include "vtkTreeLayoutStrategy.h"

template<> void emscripten::internal::raw_destructor<vtkTreeLayoutStrategy>(vtkTreeLayoutStrategy * ptr){ ptr->Delete(); }
EMSCRIPTEN_BINDINGS(vtkTreeLayoutStrategy_class) {
  emscripten::class_<vtkTreeLayoutStrategy, emscripten::base<vtkGraphLayoutStrategy>>("vtkTreeLayoutStrategy")
    .smart_ptr<vtkSmartPointer<vtkTreeLayoutStrategy>>("vtkSmartPointer<vtkTreeLayoutStrategy>")
    .constructor(&vtk::MakeAvtkSmartPointer<vtkTreeLayoutStrategy>)
    .class_function("IsTypeOf", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkTreeLayoutStrategy::IsTypeOf( arg_0.c_str());}))
    .function("IsA", emscripten::optional_override([](vtkTreeLayoutStrategy& self, const std::string & arg_0) -> int {  return self.IsA( arg_0.c_str());}))
    .class_function("SafeDownCast", &vtkTreeLayoutStrategy::SafeDownCast, emscripten::allow_raw_pointers())
    .function("NewInstance", &vtkTreeLayoutStrategy::NewInstance, emscripten::allow_raw_pointers())
    .class_function("GetNumberOfGenerationsFromBaseType", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkTreeLayoutStrategy::GetNumberOfGenerationsFromBaseType( arg_0.c_str());}))
    .function("GetNumberOfGenerationsFromBase", emscripten::optional_override([](vtkTreeLayoutStrategy& self, const std::string & arg_0) -> int {  return self.GetNumberOfGenerationsFromBase( arg_0.c_str());}))
    .function("Layout", &vtkTreeLayoutStrategy::Layout)
    .function("SetAngle", &vtkTreeLayoutStrategy::SetAngle)
    .function("GetAngleMinValue", &vtkTreeLayoutStrategy::GetAngleMinValue)
    .function("GetAngleMaxValue", &vtkTreeLayoutStrategy::GetAngleMaxValue)
    .function("GetAngle", &vtkTreeLayoutStrategy::GetAngle)
    .function("SetRadial", &vtkTreeLayoutStrategy::SetRadial)
    .function("GetRadial", &vtkTreeLayoutStrategy::GetRadial)
    .function("RadialOn", &vtkTreeLayoutStrategy::RadialOn)
    .function("RadialOff", &vtkTreeLayoutStrategy::RadialOff)
    .function("SetLogSpacingValue", &vtkTreeLayoutStrategy::SetLogSpacingValue)
    .function("GetLogSpacingValue", &vtkTreeLayoutStrategy::GetLogSpacingValue)
    .function("SetLeafSpacing", &vtkTreeLayoutStrategy::SetLeafSpacing)
    .function("GetLeafSpacingMinValue", &vtkTreeLayoutStrategy::GetLeafSpacingMinValue)
    .function("GetLeafSpacingMaxValue", &vtkTreeLayoutStrategy::GetLeafSpacingMaxValue)
    .function("GetLeafSpacing", &vtkTreeLayoutStrategy::GetLeafSpacing)
    .function("SetDistanceArrayName", emscripten::optional_override([](vtkTreeLayoutStrategy& self, const std::string & arg_0) -> void {  return self.SetDistanceArrayName( arg_0.c_str());}))
    .function("GetDistanceArrayName", emscripten::optional_override([](vtkTreeLayoutStrategy& self) -> std::string {  return self.GetDistanceArrayName();}))
    .function("SetRotation", &vtkTreeLayoutStrategy::SetRotation)
    .function("GetRotation", &vtkTreeLayoutStrategy::GetRotation)
    .function("SetReverseEdges", &vtkTreeLayoutStrategy::SetReverseEdges)
    .function("GetReverseEdges", &vtkTreeLayoutStrategy::GetReverseEdges)
    .function("ReverseEdgesOn", &vtkTreeLayoutStrategy::ReverseEdgesOn)
    .function("ReverseEdgesOff", &vtkTreeLayoutStrategy::ReverseEdgesOff);
}
