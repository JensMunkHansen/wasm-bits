// JavaScript wrapper for vtkBooleanOperationPolyDataFilter with embind 
//
// This file was auto-generated using :
/*
node /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/bin/vtkWrapJavaScript.js \
 @/home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkFiltersGeneral.js/vtkFiltersGeneral.js.Release.args \
 -o \
 /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkFiltersGeneral.js/vtkBooleanOperationPolyDataFilterEmbinding.cxx \
 /home/jmh/github/vtk/Filters/General/vtkBooleanOperationPolyDataFilter.h
*/
#include "vtkEmbindSmartPointerTrait.h"
#include <emscripten.h>
#include <string>
#include "vtkVariant.h"
#include "vtkObjectBase.h"
#include "vtkIndent.h"
#include "vtkBooleanOperationPolyDataFilter.h"

EMSCRIPTEN_BINDINGS(vtkFiltersGeneral_vtkBooleanOperationPolyDataFilter_class_enums) {
}
template<> void emscripten::internal::raw_destructor<vtkBooleanOperationPolyDataFilter>(vtkBooleanOperationPolyDataFilter * ptr){ ptr->Delete(); }
EMSCRIPTEN_BINDINGS(vtkBooleanOperationPolyDataFilter_class) {
  using OperationType=vtkBooleanOperationPolyDataFilter::OperationType;
  emscripten::class_<vtkBooleanOperationPolyDataFilter, emscripten::base<vtkPolyDataAlgorithm>>("vtkBooleanOperationPolyDataFilter")
    .smart_ptr<vtkSmartPointer<vtkBooleanOperationPolyDataFilter>>("vtkSmartPointer<vtkBooleanOperationPolyDataFilter>")
    .constructor(&vtk::MakeVTKSmartPtr<vtkBooleanOperationPolyDataFilter>)
    .class_function("IsTypeOf", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkBooleanOperationPolyDataFilter::IsTypeOf( arg_0.c_str());}))
    .function("IsA", emscripten::optional_override([](vtkBooleanOperationPolyDataFilter& self, const std::string & arg_0) -> int {  return self.IsA( arg_0.c_str());}))
    .class_function("SafeDownCast", &vtkBooleanOperationPolyDataFilter::SafeDownCast, emscripten::allow_raw_pointers())
    .function("NewInstance", &vtkBooleanOperationPolyDataFilter::NewInstance, emscripten::allow_raw_pointers())
    .class_function("GetNumberOfGenerationsFromBaseType", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkBooleanOperationPolyDataFilter::GetNumberOfGenerationsFromBaseType( arg_0.c_str());}))
    .function("GetNumberOfGenerationsFromBase", emscripten::optional_override([](vtkBooleanOperationPolyDataFilter& self, const std::string & arg_0) -> int {  return self.GetNumberOfGenerationsFromBase( arg_0.c_str());}))
    .function("SetOperation", &vtkBooleanOperationPolyDataFilter::SetOperation)
    .function("GetOperationMinValue", &vtkBooleanOperationPolyDataFilter::GetOperationMinValue)
    .function("GetOperationMaxValue", &vtkBooleanOperationPolyDataFilter::GetOperationMaxValue)
    .function("GetOperation", &vtkBooleanOperationPolyDataFilter::GetOperation)
    .function("SetOperationToUnion", &vtkBooleanOperationPolyDataFilter::SetOperationToUnion)
    .function("SetOperationToIntersection", &vtkBooleanOperationPolyDataFilter::SetOperationToIntersection)
    .function("SetOperationToDifference", &vtkBooleanOperationPolyDataFilter::SetOperationToDifference)
    .function("SetReorientDifferenceCells", &vtkBooleanOperationPolyDataFilter::SetReorientDifferenceCells)
    .function("GetReorientDifferenceCells", &vtkBooleanOperationPolyDataFilter::GetReorientDifferenceCells)
    .function("ReorientDifferenceCellsOn", &vtkBooleanOperationPolyDataFilter::ReorientDifferenceCellsOn)
    .function("ReorientDifferenceCellsOff", &vtkBooleanOperationPolyDataFilter::ReorientDifferenceCellsOff)
    .function("SetTolerance", &vtkBooleanOperationPolyDataFilter::SetTolerance)
    .function("GetTolerance", &vtkBooleanOperationPolyDataFilter::GetTolerance);
}
EMSCRIPTEN_BINDINGS(vtkFiltersGeneral_vtkBooleanOperationPolyDataFilter_0_2_constants) {
    typedef vtkBooleanOperationPolyDataFilter::OperationType cxx_enum_type;

  const struct { const char *name; cxx_enum_type value; }
    constants[3] = {
      { "vtkBooleanOperationPolyDataFilter_OperationType_VTK_UNION", vtkBooleanOperationPolyDataFilter::VTK_UNION },
      { "vtkBooleanOperationPolyDataFilter_OperationType_VTK_INTERSECTION", vtkBooleanOperationPolyDataFilter::VTK_INTERSECTION },
      { "vtkBooleanOperationPolyDataFilter_OperationType_VTK_DIFFERENCE", vtkBooleanOperationPolyDataFilter::VTK_DIFFERENCE },
  };
  for (int c = 0; c < 3; c++)
  {
    emscripten::constant(constants[c].name, static_cast<int>(constants[c].value));
  }
}
