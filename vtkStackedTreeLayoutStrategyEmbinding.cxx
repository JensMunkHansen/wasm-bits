// JavaScript wrapper for vtkStackedTreeLayoutStrategy with embind 
//
// This file was auto-generated using :
/*
node /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/bin/vtkWrapJavaScript.js \
 @/home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkInfovisLayout.js/vtkInfovisLayout.js.Release.args \
 -o \
 /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkInfovisLayout.js/vtkStackedTreeLayoutStrategyEmbinding.cxx \
 /home/jmh/github/vtk/Infovis/Layout/vtkStackedTreeLayoutStrategy.h
*/
#include "vtkEmbindSmartPointerTrait.h"
#include <emscripten.h>
#include <string>
#include "vtkVariant.h"
#include "vtkObjectBase.h"
#include "vtkIndent.h"
#include "vtkTree.h"
#include "vtkDataArray.h"
#include "vtkStackedTreeLayoutStrategy.h"

template<> void emscripten::internal::raw_destructor<vtkStackedTreeLayoutStrategy>(vtkStackedTreeLayoutStrategy * ptr){ ptr->Delete(); }
EMSCRIPTEN_BINDINGS(vtkStackedTreeLayoutStrategy_class) {
  emscripten::class_<vtkStackedTreeLayoutStrategy, emscripten::base<vtkAreaLayoutStrategy>>("vtkStackedTreeLayoutStrategy")
    .smart_ptr<vtkSmartPointer<vtkStackedTreeLayoutStrategy>>("vtkSmartPointer<vtkStackedTreeLayoutStrategy>")
    .constructor(&vtk::MakeVTKSmartPtr<vtkStackedTreeLayoutStrategy>)
    .class_function("IsTypeOf", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkStackedTreeLayoutStrategy::IsTypeOf( arg_0.c_str());}))
    .function("IsA", emscripten::optional_override([](vtkStackedTreeLayoutStrategy& self, const std::string & arg_0) -> int {  return self.IsA( arg_0.c_str());}))
    .class_function("SafeDownCast", &vtkStackedTreeLayoutStrategy::SafeDownCast, emscripten::allow_raw_pointers())
    .function("NewInstance", &vtkStackedTreeLayoutStrategy::NewInstance, emscripten::allow_raw_pointers())
    .class_function("GetNumberOfGenerationsFromBaseType", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkStackedTreeLayoutStrategy::GetNumberOfGenerationsFromBaseType( arg_0.c_str());}))
    .function("GetNumberOfGenerationsFromBase", emscripten::optional_override([](vtkStackedTreeLayoutStrategy& self, const std::string & arg_0) -> int {  return self.GetNumberOfGenerationsFromBase( arg_0.c_str());}))
    .function("Layout", &vtkStackedTreeLayoutStrategy::Layout, emscripten::allow_raw_pointers())
    .function("LayoutEdgePoints", &vtkStackedTreeLayoutStrategy::LayoutEdgePoints, emscripten::allow_raw_pointers())
    .function("SetInteriorRadius", &vtkStackedTreeLayoutStrategy::SetInteriorRadius)
    .function("GetInteriorRadius", &vtkStackedTreeLayoutStrategy::GetInteriorRadius)
    .function("SetRingThickness", &vtkStackedTreeLayoutStrategy::SetRingThickness)
    .function("GetRingThickness", &vtkStackedTreeLayoutStrategy::GetRingThickness)
    .function("SetRootStartAngle", &vtkStackedTreeLayoutStrategy::SetRootStartAngle)
    .function("GetRootStartAngle", &vtkStackedTreeLayoutStrategy::GetRootStartAngle)
    .function("SetRootEndAngle", &vtkStackedTreeLayoutStrategy::SetRootEndAngle)
    .function("GetRootEndAngle", &vtkStackedTreeLayoutStrategy::GetRootEndAngle)
    .function("SetUseRectangularCoordinates", &vtkStackedTreeLayoutStrategy::SetUseRectangularCoordinates)
    .function("GetUseRectangularCoordinates", &vtkStackedTreeLayoutStrategy::GetUseRectangularCoordinates)
    .function("UseRectangularCoordinatesOn", &vtkStackedTreeLayoutStrategy::UseRectangularCoordinatesOn)
    .function("UseRectangularCoordinatesOff", &vtkStackedTreeLayoutStrategy::UseRectangularCoordinatesOff)
    .function("SetReverse", &vtkStackedTreeLayoutStrategy::SetReverse)
    .function("GetReverse", &vtkStackedTreeLayoutStrategy::GetReverse)
    .function("ReverseOn", &vtkStackedTreeLayoutStrategy::ReverseOn)
    .function("ReverseOff", &vtkStackedTreeLayoutStrategy::ReverseOff)
    .function("SetInteriorLogSpacingValue", &vtkStackedTreeLayoutStrategy::SetInteriorLogSpacingValue)
    .function("GetInteriorLogSpacingValue", &vtkStackedTreeLayoutStrategy::GetInteriorLogSpacingValue);
}
