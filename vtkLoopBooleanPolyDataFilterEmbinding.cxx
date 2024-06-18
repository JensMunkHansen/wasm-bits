// JavaScript wrapper for vtkLoopBooleanPolyDataFilter with embind 
//
// This file was auto-generated using :
/*
node /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/bin/vtkWrapJavaScript.js \
 @/home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkFiltersGeneral.js/vtkFiltersGeneral.js.Release.args \
 -o \
 /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkFiltersGeneral.js/vtkLoopBooleanPolyDataFilterEmbinding.cxx \
 /home/jmh/github/vtk/Filters/General/vtkLoopBooleanPolyDataFilter.h
*/
#include "vtkEmbindSmartPointerTrait.h"
#include <emscripten.h>
#include <string>
#include "vtkVariant.h"
#include "vtkObjectBase.h"
#include "vtkIndent.h"
#include "vtkLoopBooleanPolyDataFilter.h"

EMSCRIPTEN_BINDINGS(vtkFiltersGeneral_vtkLoopBooleanPolyDataFilter_class_enums) {
}
template<> void emscripten::internal::raw_destructor<vtkLoopBooleanPolyDataFilter>(vtkLoopBooleanPolyDataFilter * ptr){ ptr->Delete(); }
EMSCRIPTEN_BINDINGS(vtkLoopBooleanPolyDataFilter_class) {
  using OperationType=vtkLoopBooleanPolyDataFilter::OperationType;
  using NoIntersectionOutputType=vtkLoopBooleanPolyDataFilter::NoIntersectionOutputType;
  emscripten::class_<vtkLoopBooleanPolyDataFilter, emscripten::base<vtkPolyDataAlgorithm>>("vtkLoopBooleanPolyDataFilter")
    .smart_ptr<vtkSmartPointer<vtkLoopBooleanPolyDataFilter>>("vtkSmartPointer<vtkLoopBooleanPolyDataFilter>")
    .constructor(&vtk::MakeAvtkSmartPointer<vtkLoopBooleanPolyDataFilter>)
    .class_function("IsTypeOf", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkLoopBooleanPolyDataFilter::IsTypeOf( arg_0.c_str());}))
    .function("IsA", emscripten::optional_override([](vtkLoopBooleanPolyDataFilter& self, const std::string & arg_0) -> int {  return self.IsA( arg_0.c_str());}))
    .class_function("SafeDownCast", &vtkLoopBooleanPolyDataFilter::SafeDownCast, emscripten::allow_raw_pointers())
    .function("NewInstance", &vtkLoopBooleanPolyDataFilter::NewInstance, emscripten::allow_raw_pointers())
    .class_function("GetNumberOfGenerationsFromBaseType", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkLoopBooleanPolyDataFilter::GetNumberOfGenerationsFromBaseType( arg_0.c_str());}))
    .function("GetNumberOfGenerationsFromBase", emscripten::optional_override([](vtkLoopBooleanPolyDataFilter& self, const std::string & arg_0) -> int {  return self.GetNumberOfGenerationsFromBase( arg_0.c_str());}))
    .function("GetNumberOfIntersectionPoints", &vtkLoopBooleanPolyDataFilter::GetNumberOfIntersectionPoints)
    .function("GetNumberOfIntersectionLines", &vtkLoopBooleanPolyDataFilter::GetNumberOfIntersectionLines)
    .function("GetNoIntersectionOutput", &vtkLoopBooleanPolyDataFilter::GetNoIntersectionOutput)
    .function("SetNoIntersectionOutput", &vtkLoopBooleanPolyDataFilter::SetNoIntersectionOutput)
    .function("NoIntersectionOutputOn", &vtkLoopBooleanPolyDataFilter::NoIntersectionOutputOn)
    .function("NoIntersectionOutputOff", &vtkLoopBooleanPolyDataFilter::NoIntersectionOutputOff)
    .function("SetOperation", &vtkLoopBooleanPolyDataFilter::SetOperation)
    .function("GetOperationMinValue", &vtkLoopBooleanPolyDataFilter::GetOperationMinValue)
    .function("GetOperationMaxValue", &vtkLoopBooleanPolyDataFilter::GetOperationMaxValue)
    .function("GetOperation", &vtkLoopBooleanPolyDataFilter::GetOperation)
    .function("SetOperationToUnion", &vtkLoopBooleanPolyDataFilter::SetOperationToUnion)
    .function("SetOperationToIntersection", &vtkLoopBooleanPolyDataFilter::SetOperationToIntersection)
    .function("SetOperationToDifference", &vtkLoopBooleanPolyDataFilter::SetOperationToDifference)
    .function("GetStatus", &vtkLoopBooleanPolyDataFilter::GetStatus)
    .function("GetTolerance", &vtkLoopBooleanPolyDataFilter::GetTolerance)
    .function("SetTolerance", &vtkLoopBooleanPolyDataFilter::SetTolerance);
}
EMSCRIPTEN_BINDINGS(vtkFiltersGeneral_vtkLoopBooleanPolyDataFilter_0_2_constants) {
    typedef vtkLoopBooleanPolyDataFilter::OperationType cxx_enum_type;

  const struct { const char *name; cxx_enum_type value; }
    constants[3] = {
      { "vtkLoopBooleanPolyDataFilter_OperationType_VTK_UNION", vtkLoopBooleanPolyDataFilter::VTK_UNION },
      { "vtkLoopBooleanPolyDataFilter_OperationType_VTK_INTERSECTION", vtkLoopBooleanPolyDataFilter::VTK_INTERSECTION },
      { "vtkLoopBooleanPolyDataFilter_OperationType_VTK_DIFFERENCE", vtkLoopBooleanPolyDataFilter::VTK_DIFFERENCE },
  };
  for (int c = 0; c < 3; c++)
  {
    emscripten::constant(constants[c].name, static_cast<int>(constants[c].value));
  }
}
EMSCRIPTEN_BINDINGS(vtkFiltersGeneral_vtkLoopBooleanPolyDataFilter_1_2_constants) {
    typedef vtkLoopBooleanPolyDataFilter::NoIntersectionOutputType cxx_enum_type;

  const struct { const char *name; cxx_enum_type value; }
    constants[4] = {
      { "vtkLoopBooleanPolyDataFilter_NoIntersectionOutputType_VTK_NEITHER", vtkLoopBooleanPolyDataFilter::VTK_NEITHER },
      { "vtkLoopBooleanPolyDataFilter_NoIntersectionOutputType_VTK_FIRST", vtkLoopBooleanPolyDataFilter::VTK_FIRST },
      { "vtkLoopBooleanPolyDataFilter_NoIntersectionOutputType_VTK_SECOND", vtkLoopBooleanPolyDataFilter::VTK_SECOND },
      { "vtkLoopBooleanPolyDataFilter_NoIntersectionOutputType_VTK_BOTH", vtkLoopBooleanPolyDataFilter::VTK_BOTH },
  };
  for (int c = 0; c < 4; c++)
  {
    emscripten::constant(constants[c].name, static_cast<int>(constants[c].value));
  }
}
