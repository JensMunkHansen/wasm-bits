// JavaScript wrapper for vtkHyperTreeGridPlaneCutter with embind 
//
// This file was auto-generated using :
/*
node /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/bin/vtkWrapJavaScript.js \
 @/home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkFiltersHyperTree.js/vtkFiltersHyperTree.js.Release.args \
 -o \
 /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkFiltersHyperTree.js/vtkHyperTreeGridPlaneCutterEmbinding.cxx \
 /home/jmh/github/vtk/Filters/HyperTree/vtkHyperTreeGridPlaneCutter.h
*/
#include "vtkEmbindSmartPointerTrait.h"
#include <emscripten.h>
#include <string>
#include "vtkVariant.h"
#include "vtkObjectBase.h"
#include "vtkIndent.h"
#include "vtkHyperTreeGridPlaneCutter.h"

template<> void emscripten::internal::raw_destructor<vtkHyperTreeGridPlaneCutter>(vtkHyperTreeGridPlaneCutter * ptr){ ptr->Delete(); }
EMSCRIPTEN_BINDINGS(vtkHyperTreeGridPlaneCutter_class) {
  emscripten::class_<vtkHyperTreeGridPlaneCutter, emscripten::base<vtkHyperTreeGridAlgorithm>>("vtkHyperTreeGridPlaneCutter")
    .smart_ptr<vtkSmartPointer<vtkHyperTreeGridPlaneCutter>>("vtkSmartPointer<vtkHyperTreeGridPlaneCutter>")
    .constructor(&vtk::MakeVTKSmartPtr<vtkHyperTreeGridPlaneCutter>)
    .class_function("IsTypeOf", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkHyperTreeGridPlaneCutter::IsTypeOf( arg_0.c_str());}))
    .function("IsA", emscripten::optional_override([](vtkHyperTreeGridPlaneCutter& self, const std::string & arg_0) -> int {  return self.IsA( arg_0.c_str());}))
    .class_function("SafeDownCast", &vtkHyperTreeGridPlaneCutter::SafeDownCast, emscripten::allow_raw_pointers())
    .function("NewInstance", &vtkHyperTreeGridPlaneCutter::NewInstance, emscripten::allow_raw_pointers())
    .class_function("GetNumberOfGenerationsFromBaseType", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkHyperTreeGridPlaneCutter::GetNumberOfGenerationsFromBaseType( arg_0.c_str());}))
    .function("GetNumberOfGenerationsFromBase", emscripten::optional_override([](vtkHyperTreeGridPlaneCutter& self, const std::string & arg_0) -> int {  return self.GetNumberOfGenerationsFromBase( arg_0.c_str());}))
    .function("SetPlane", &vtkHyperTreeGridPlaneCutter::SetPlane)
    .function("GetAxisAlignment", &vtkHyperTreeGridPlaneCutter::GetAxisAlignment)
    .function("IsPlaneOrthogonalToXAxis", &vtkHyperTreeGridPlaneCutter::IsPlaneOrthogonalToXAxis)
    .function("IsPlaneOrthogonalToYAxis", &vtkHyperTreeGridPlaneCutter::IsPlaneOrthogonalToYAxis)
    .function("IsPlaneOrthogonalToZAxis", &vtkHyperTreeGridPlaneCutter::IsPlaneOrthogonalToZAxis)
    .function("SetDual", &vtkHyperTreeGridPlaneCutter::SetDual)
    .function("GetDual", &vtkHyperTreeGridPlaneCutter::GetDual)
    .function("DualOn", &vtkHyperTreeGridPlaneCutter::DualOn)
    .function("DualOff", &vtkHyperTreeGridPlaneCutter::DualOff);
}
