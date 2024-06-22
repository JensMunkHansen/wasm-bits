// JavaScript wrapper for vtkHausdorffDistancePointSetFilter with embind 
//
// This file was auto-generated using :
/*
node /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/bin/vtkWrapJavaScript.js \
 @/home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkFiltersModeling.js/vtkFiltersModeling.js.Release.args \
 -o \
 /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkFiltersModeling.js/vtkHausdorffDistancePointSetFilterEmbinding.cxx \
 /home/jmh/github/vtk/Filters/Modeling/vtkHausdorffDistancePointSetFilter.h
*/
#include "vtkEmbindSmartPointerTrait.h"
#include <emscripten.h>
#include <string>
#include "vtkVariant.h"
#include "vtkObjectBase.h"
#include "vtkIndent.h"
#include "vtkHausdorffDistancePointSetFilter.h"

EMSCRIPTEN_BINDINGS(vtkFiltersModeling_vtkHausdorffDistancePointSetFilter_class_enums) {
}
template<> void emscripten::internal::raw_destructor<vtkHausdorffDistancePointSetFilter>(vtkHausdorffDistancePointSetFilter * ptr){ ptr->Delete(); }
EMSCRIPTEN_BINDINGS(vtkHausdorffDistancePointSetFilter_class) {
  using DistanceMethod=vtkHausdorffDistancePointSetFilter::DistanceMethod;
  emscripten::class_<vtkHausdorffDistancePointSetFilter, emscripten::base<vtkPointSetAlgorithm>>("vtkHausdorffDistancePointSetFilter")
    .smart_ptr<vtkSmartPointer<vtkHausdorffDistancePointSetFilter>>("vtkSmartPointer<vtkHausdorffDistancePointSetFilter>")
    .constructor(&vtk::MakeVTKSmartPtr<vtkHausdorffDistancePointSetFilter>)
    .class_function("IsTypeOf", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkHausdorffDistancePointSetFilter::IsTypeOf( arg_0.c_str());}))
    .function("IsA", emscripten::optional_override([](vtkHausdorffDistancePointSetFilter& self, const std::string & arg_0) -> int {  return self.IsA( arg_0.c_str());}))
    .class_function("SafeDownCast", &vtkHausdorffDistancePointSetFilter::SafeDownCast, emscripten::allow_raw_pointers())
    .function("NewInstance", &vtkHausdorffDistancePointSetFilter::NewInstance, emscripten::allow_raw_pointers())
    .class_function("GetNumberOfGenerationsFromBaseType", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkHausdorffDistancePointSetFilter::GetNumberOfGenerationsFromBaseType( arg_0.c_str());}))
    .function("GetNumberOfGenerationsFromBase", emscripten::optional_override([](vtkHausdorffDistancePointSetFilter& self, const std::string & arg_0) -> int {  return self.GetNumberOfGenerationsFromBase( arg_0.c_str());}))
    .function("GetHausdorffDistance", &vtkHausdorffDistancePointSetFilter::GetHausdorffDistance)
    .function("SetTargetDistanceMethod", &vtkHausdorffDistancePointSetFilter::SetTargetDistanceMethod)
    .function("GetTargetDistanceMethod", &vtkHausdorffDistancePointSetFilter::GetTargetDistanceMethod)
    .function("SetTargetDistanceMethodToPointToPoint", &vtkHausdorffDistancePointSetFilter::SetTargetDistanceMethodToPointToPoint)
    .function("SetTargetDistanceMethodToPointToCell", &vtkHausdorffDistancePointSetFilter::SetTargetDistanceMethodToPointToCell)
    .function("GetTargetDistanceMethodAsString", emscripten::optional_override([](vtkHausdorffDistancePointSetFilter& self) -> std::string {  return self.GetTargetDistanceMethodAsString();}));
}
EMSCRIPTEN_BINDINGS(vtkFiltersModeling_vtkHausdorffDistancePointSetFilter_0_2_constants) {
    typedef vtkHausdorffDistancePointSetFilter::DistanceMethod cxx_enum_type;

  const struct { const char *name; cxx_enum_type value; }
    constants[2] = {
      { "vtkHausdorffDistancePointSetFilter_DistanceMethod_POINT_TO_POINT", vtkHausdorffDistancePointSetFilter::POINT_TO_POINT },
      { "vtkHausdorffDistancePointSetFilter_DistanceMethod_POINT_TO_CELL", vtkHausdorffDistancePointSetFilter::POINT_TO_CELL },
  };
  for (int c = 0; c < 2; c++)
  {
    emscripten::constant(constants[c].name, static_cast<int>(constants[c].value));
  }
}
