// JavaScript wrapper for vtkHyperTreeGridEvaluateCoarse with embind 
//
// This file was auto-generated using :
/*
node /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/bin/vtkWrapJavaScript.js \
 @/home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkFiltersHyperTree.js/vtkFiltersHyperTree.js.Release.args \
 -o \
 /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkFiltersHyperTree.js/vtkHyperTreeGridEvaluateCoarseEmbinding.cxx \
 /home/jmh/github/vtk/Filters/HyperTree/vtkHyperTreeGridEvaluateCoarse.h
*/
#include "vtkEmbindSmartPointerTrait.h"
#include <emscripten.h>
#include <string>
#include "vtkVariant.h"
#include "vtkObjectBase.h"
#include "vtkIndent.h"
#include "vtkHyperTreeGridEvaluateCoarse.h"

template<> void emscripten::internal::raw_destructor<vtkHyperTreeGridEvaluateCoarse>(vtkHyperTreeGridEvaluateCoarse * ptr){ ptr->Delete(); }
EMSCRIPTEN_BINDINGS(vtkHyperTreeGridEvaluateCoarse_class) {
  emscripten::class_<vtkHyperTreeGridEvaluateCoarse, emscripten::base<vtkHyperTreeGridAlgorithm>>("vtkHyperTreeGridEvaluateCoarse")
    .smart_ptr<vtkSmartPointer<vtkHyperTreeGridEvaluateCoarse>>("vtkSmartPointer<vtkHyperTreeGridEvaluateCoarse>")
    .constructor(&vtk::MakeAvtkSmartPointer<vtkHyperTreeGridEvaluateCoarse>)
    .class_function("IsTypeOf", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkHyperTreeGridEvaluateCoarse::IsTypeOf( arg_0.c_str());}))
    .function("IsA", emscripten::optional_override([](vtkHyperTreeGridEvaluateCoarse& self, const std::string & arg_0) -> int {  return self.IsA( arg_0.c_str());}))
    .class_function("SafeDownCast", &vtkHyperTreeGridEvaluateCoarse::SafeDownCast, emscripten::allow_raw_pointers())
    .function("NewInstance", &vtkHyperTreeGridEvaluateCoarse::NewInstance, emscripten::allow_raw_pointers())
    .class_function("GetNumberOfGenerationsFromBaseType", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkHyperTreeGridEvaluateCoarse::GetNumberOfGenerationsFromBaseType( arg_0.c_str());}))
    .function("GetNumberOfGenerationsFromBase", emscripten::optional_override([](vtkHyperTreeGridEvaluateCoarse& self, const std::string & arg_0) -> int {  return self.GetNumberOfGenerationsFromBase( arg_0.c_str());}))
    .function("SetOperator", &vtkHyperTreeGridEvaluateCoarse::SetOperator)
    .function("GetOperator", &vtkHyperTreeGridEvaluateCoarse::GetOperator)
    .function("SetDefault", &vtkHyperTreeGridEvaluateCoarse::SetDefault);
}
EMSCRIPTEN_BINDINGS(vtkFiltersHyperTree_vtkHyperTreeGridEvaluateCoarse_0_2_constants) {
  const struct { const char *name; int value; }
    constants[9] = {
      { "vtkHyperTreeGridEvaluateCoarse_OPERATOR_DON_T_CHANGE_FAST", vtkHyperTreeGridEvaluateCoarse::OPERATOR_DON_T_CHANGE_FAST },
      { "vtkHyperTreeGridEvaluateCoarse_OPERATOR_DON_T_CHANGE", vtkHyperTreeGridEvaluateCoarse::OPERATOR_DON_T_CHANGE },
      { "vtkHyperTreeGridEvaluateCoarse_OPERATOR_MIN", vtkHyperTreeGridEvaluateCoarse::OPERATOR_MIN },
      { "vtkHyperTreeGridEvaluateCoarse_OPERATOR_MAX", vtkHyperTreeGridEvaluateCoarse::OPERATOR_MAX },
      { "vtkHyperTreeGridEvaluateCoarse_OPERATOR_SUM", vtkHyperTreeGridEvaluateCoarse::OPERATOR_SUM },
      { "vtkHyperTreeGridEvaluateCoarse_OPERATOR_AVERAGE", vtkHyperTreeGridEvaluateCoarse::OPERATOR_AVERAGE },
      { "vtkHyperTreeGridEvaluateCoarse_OPERATOR_UNMASKED_AVERAGE", vtkHyperTreeGridEvaluateCoarse::OPERATOR_UNMASKED_AVERAGE },
      { "vtkHyperTreeGridEvaluateCoarse_OPERATOR_ELDER_CHILD", vtkHyperTreeGridEvaluateCoarse::OPERATOR_ELDER_CHILD },
      { "vtkHyperTreeGridEvaluateCoarse_OPERATOR_SPLATTING_AVERAGE", vtkHyperTreeGridEvaluateCoarse::OPERATOR_SPLATTING_AVERAGE },
  };
  for (int c = 0; c < 9; c++)
  {
    emscripten::constant(constants[c].name, constants[c].value);
  }
}
