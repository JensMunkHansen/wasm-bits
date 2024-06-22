// JavaScript wrapper for vtkToImplicitArrayFilter with embind 
//
// This file was auto-generated using :
/*
node /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/bin/vtkWrapJavaScript.js \
 @/home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkFiltersReduction.js/vtkFiltersReduction.js.Release.args \
 -o \
 /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkFiltersReduction.js/vtkToImplicitArrayFilterEmbinding.cxx \
 /home/jmh/github/vtk/Filters/Reduction/vtkToImplicitArrayFilter.h
*/
#include "vtkEmbindSmartPointerTrait.h"
#include <emscripten.h>
#include <string>
#include "vtkVariant.h"
#include "vtkObjectBase.h"
#include "vtkIndent.h"
#include "vtkToImplicitStrategy.h"
#include "vtkDataArraySelection.h"
#include "vtkToImplicitArrayFilter.h"

template<> void emscripten::internal::raw_destructor<vtkToImplicitArrayFilter>(vtkToImplicitArrayFilter * ptr){ ptr->Delete(); }
EMSCRIPTEN_BINDINGS(vtkToImplicitArrayFilter_class) {
  emscripten::class_<vtkToImplicitArrayFilter, emscripten::base<vtkPassInputTypeAlgorithm>>("vtkToImplicitArrayFilter")
    .smart_ptr<vtkSmartPointer<vtkToImplicitArrayFilter>>("vtkSmartPointer<vtkToImplicitArrayFilter>")
    .constructor(&vtk::MakeVTKSmartPtr<vtkToImplicitArrayFilter>)
    .class_function("IsTypeOf", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkToImplicitArrayFilter::IsTypeOf( arg_0.c_str());}))
    .function("IsA", emscripten::optional_override([](vtkToImplicitArrayFilter& self, const std::string & arg_0) -> int {  return self.IsA( arg_0.c_str());}))
    .class_function("SafeDownCast", &vtkToImplicitArrayFilter::SafeDownCast, emscripten::allow_raw_pointers())
    .function("NewInstance", &vtkToImplicitArrayFilter::NewInstance, emscripten::allow_raw_pointers())
    .class_function("GetNumberOfGenerationsFromBaseType", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkToImplicitArrayFilter::GetNumberOfGenerationsFromBaseType( arg_0.c_str());}))
    .function("GetNumberOfGenerationsFromBase", emscripten::optional_override([](vtkToImplicitArrayFilter& self, const std::string & arg_0) -> int {  return self.GetNumberOfGenerationsFromBase( arg_0.c_str());}))
    .function("GetUseMaxNumberOfDegreesOfFreedom", &vtkToImplicitArrayFilter::GetUseMaxNumberOfDegreesOfFreedom)
    .function("SetUseMaxNumberOfDegreesOfFreedom", &vtkToImplicitArrayFilter::SetUseMaxNumberOfDegreesOfFreedom)
    .function("UseMaxNumberOfDegreesOfFreedomOn", &vtkToImplicitArrayFilter::UseMaxNumberOfDegreesOfFreedomOn)
    .function("UseMaxNumberOfDegreesOfFreedomOff", &vtkToImplicitArrayFilter::UseMaxNumberOfDegreesOfFreedomOff)
    .function("GetMaxNumberOfDegreesOfFreedom", &vtkToImplicitArrayFilter::GetMaxNumberOfDegreesOfFreedom)
    .function("SetMaxNumberOfDegreesOfFreedom", &vtkToImplicitArrayFilter::SetMaxNumberOfDegreesOfFreedom)
    .function("GetTargetReduction", &vtkToImplicitArrayFilter::GetTargetReduction)
    .function("SetTargetReduction", &vtkToImplicitArrayFilter::SetTargetReduction)
    .function("SetStrategy", &vtkToImplicitArrayFilter::SetStrategy, emscripten::allow_raw_pointers())
    .function("GetStrategy", &vtkToImplicitArrayFilter::GetStrategy, emscripten::allow_raw_pointers())
    .function("GetArraySelection", &vtkToImplicitArrayFilter::GetArraySelection, emscripten::allow_raw_pointers())
    .function("GetPointDataArraySelection", &vtkToImplicitArrayFilter::GetPointDataArraySelection, emscripten::allow_raw_pointers())
    .function("GetCellDataArraySelection", &vtkToImplicitArrayFilter::GetCellDataArraySelection, emscripten::allow_raw_pointers())
    .function("GetFieldDataArraySelection", &vtkToImplicitArrayFilter::GetFieldDataArraySelection, emscripten::allow_raw_pointers())
    .function("GetPointsThenCellsDataArraySelection", &vtkToImplicitArrayFilter::GetPointsThenCellsDataArraySelection, emscripten::allow_raw_pointers())
    .function("GetVertexDataArraySelection", &vtkToImplicitArrayFilter::GetVertexDataArraySelection, emscripten::allow_raw_pointers())
    .function("GetEdgeDataArraySelection", &vtkToImplicitArrayFilter::GetEdgeDataArraySelection, emscripten::allow_raw_pointers())
    .function("GetRowDataArraySelection", &vtkToImplicitArrayFilter::GetRowDataArraySelection, emscripten::allow_raw_pointers());
}
