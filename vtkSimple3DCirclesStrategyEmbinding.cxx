// JavaScript wrapper for vtkSimple3DCirclesStrategy with embind 
//
// This file was auto-generated using :
/*
node /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/bin/vtkWrapJavaScript.js \
 @/home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkInfovisLayout.js/vtkInfovisLayout.js.Release.args \
 -o \
 /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkInfovisLayout.js/vtkSimple3DCirclesStrategyEmbinding.cxx \
 /home/jmh/github/vtk/Infovis/Layout/vtkSimple3DCirclesStrategy.h
*/
#include "vtkEmbindSmartPointerTrait.h"
#include <emscripten.h>
#include <string>
#include "vtkVariant.h"
#include "vtkObjectBase.h"
#include "vtkIndent.h"
#include "vtkAbstractArray.h"
#include "vtkIntArray.h"
#include "vtkIdTypeArray.h"
#include "vtkGraph.h"
#include "vtkSimple3DCirclesStrategy.h"

template<> void emscripten::internal::raw_destructor<vtkSimple3DCirclesStrategy>(vtkSimple3DCirclesStrategy * ptr){ ptr->Delete(); }
EMSCRIPTEN_BINDINGS(vtkSimple3DCirclesStrategy_class) {
  emscripten::class_<vtkSimple3DCirclesStrategy, emscripten::base<vtkGraphLayoutStrategy>>("vtkSimple3DCirclesStrategy")
    .smart_ptr<vtkSmartPointer<vtkSimple3DCirclesStrategy>>("vtkSmartPointer<vtkSimple3DCirclesStrategy>")
    .constructor(&vtk::MakeAvtkSmartPointer<vtkSimple3DCirclesStrategy>)
    .class_function("IsTypeOf", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkSimple3DCirclesStrategy::IsTypeOf( arg_0.c_str());}))
    .function("IsA", emscripten::optional_override([](vtkSimple3DCirclesStrategy& self, const std::string & arg_0) -> int {  return self.IsA( arg_0.c_str());}))
    .class_function("SafeDownCast", &vtkSimple3DCirclesStrategy::SafeDownCast, emscripten::allow_raw_pointers())
    .function("NewInstance", &vtkSimple3DCirclesStrategy::NewInstance, emscripten::allow_raw_pointers())
    .class_function("GetNumberOfGenerationsFromBaseType", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkSimple3DCirclesStrategy::GetNumberOfGenerationsFromBaseType( arg_0.c_str());}))
    .function("GetNumberOfGenerationsFromBase", emscripten::optional_override([](vtkSimple3DCirclesStrategy& self, const std::string & arg_0) -> int {  return self.GetNumberOfGenerationsFromBase( arg_0.c_str());}))
    .function("SetMethod", &vtkSimple3DCirclesStrategy::SetMethod)
    .function("GetMethod", &vtkSimple3DCirclesStrategy::GetMethod)
    .function("SetRadius", &vtkSimple3DCirclesStrategy::SetRadius)
    .function("GetRadius", &vtkSimple3DCirclesStrategy::GetRadius)
    .function("SetHeight", &vtkSimple3DCirclesStrategy::SetHeight)
    .function("GetHeight", &vtkSimple3DCirclesStrategy::GetHeight)
    .function("SetOrigin", emscripten::select_overload<void(vtkSimple3DCirclesStrategy&, double, double, double)>([](vtkSimple3DCirclesStrategy& self, double arg_0, double arg_1, double arg_2) -> void { return self.SetOrigin( arg_0, arg_1, arg_2); }))
    .function("SetDirection", emscripten::select_overload<void(vtkSimple3DCirclesStrategy&, double, double, double)>([](vtkSimple3DCirclesStrategy& self, double arg_0, double arg_1, double arg_2) -> void { return self.SetDirection( arg_0, arg_1, arg_2); }))
    .function("SetMarkedStartVertices", &vtkSimple3DCirclesStrategy::SetMarkedStartVertices, emscripten::allow_raw_pointers())
    .function("GetMarkedStartVertices", &vtkSimple3DCirclesStrategy::GetMarkedStartVertices, emscripten::allow_raw_pointers())
    .function("SetMarkedValue", &vtkSimple3DCirclesStrategy::SetMarkedValue)
    .function("GetMarkedValue", &vtkSimple3DCirclesStrategy::GetMarkedValue)
    .function("SetForceToUseUniversalStartPointsFinder", &vtkSimple3DCirclesStrategy::SetForceToUseUniversalStartPointsFinder)
    .function("GetForceToUseUniversalStartPointsFinder", &vtkSimple3DCirclesStrategy::GetForceToUseUniversalStartPointsFinder)
    .function("ForceToUseUniversalStartPointsFinderOn", &vtkSimple3DCirclesStrategy::ForceToUseUniversalStartPointsFinderOn)
    .function("ForceToUseUniversalStartPointsFinderOff", &vtkSimple3DCirclesStrategy::ForceToUseUniversalStartPointsFinderOff)
    .function("SetAutoHeight", &vtkSimple3DCirclesStrategy::SetAutoHeight)
    .function("GetAutoHeight", &vtkSimple3DCirclesStrategy::GetAutoHeight)
    .function("AutoHeightOn", &vtkSimple3DCirclesStrategy::AutoHeightOn)
    .function("AutoHeightOff", &vtkSimple3DCirclesStrategy::AutoHeightOff)
    .function("SetMinimumRadian", &vtkSimple3DCirclesStrategy::SetMinimumRadian)
    .function("GetMinimumRadian", &vtkSimple3DCirclesStrategy::GetMinimumRadian)
    .function("SetMinimumDegree", &vtkSimple3DCirclesStrategy::SetMinimumDegree)
    .function("GetMinimumDegree", &vtkSimple3DCirclesStrategy::GetMinimumDegree)
    .function("SetHierarchicalLayers", &vtkSimple3DCirclesStrategy::SetHierarchicalLayers, emscripten::allow_raw_pointers())
    .function("GetHierarchicalLayers", &vtkSimple3DCirclesStrategy::GetHierarchicalLayers, emscripten::allow_raw_pointers())
    .function("SetHierarchicalOrder", &vtkSimple3DCirclesStrategy::SetHierarchicalOrder, emscripten::allow_raw_pointers())
    .function("GetHierarchicalOrder", &vtkSimple3DCirclesStrategy::GetHierarchicalOrder, emscripten::allow_raw_pointers())
    .function("Layout", &vtkSimple3DCirclesStrategy::Layout)
    .function("SetGraph", &vtkSimple3DCirclesStrategy::SetGraph, emscripten::allow_raw_pointers());
}
EMSCRIPTEN_BINDINGS(vtkInfovisLayout_vtkSimple3DCirclesStrategy_0_2_constants) {
  const struct { const char *name; int value; }
    constants[2] = {
      { "vtkSimple3DCirclesStrategy_FixedRadiusMethod", vtkSimple3DCirclesStrategy::FixedRadiusMethod },
      { "vtkSimple3DCirclesStrategy_FixedDistanceMethod", vtkSimple3DCirclesStrategy::FixedDistanceMethod },
  };
  for (int c = 0; c < 2; c++)
  {
    emscripten::constant(constants[c].name, constants[c].value);
  }
}
