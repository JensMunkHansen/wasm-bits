// JavaScript wrapper for vtkCellGridEvaluator with embind 
//
// This file was auto-generated using :
/*
node /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/bin/vtkWrapJavaScript.js \
 @/home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkCommonDataModel.js/vtkCommonDataModel.js.Release.args \
 -o \
 /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkCommonDataModel.js/vtkCellGridEvaluatorEmbinding.cxx \
 /home/jmh/github/vtk/Common/DataModel/vtkCellGridEvaluator.h
*/
#include "vtkEmbindSmartPointerTrait.h"
#include <emscripten.h>
#include <string>
#include "vtkVariant.h"
#include "vtkObjectBase.h"
#include "vtkIndent.h"
#include "vtkCellAttribute.h"
#include "vtkDataArray.h"
#include "vtkTypeUInt32Array.h"
#include "vtkTypeUInt64Array.h"
#include "vtkStaticPointLocator.h"
#include "vtkStringToken.h"
#include "vtkCellGridEvaluator.h"

EMSCRIPTEN_BINDINGS(vtkCommonDataModel_vtkCellGridEvaluator_class_enums) {
}
template<> void emscripten::internal::raw_destructor<vtkCellGridEvaluator>(vtkCellGridEvaluator * ptr){ ptr->Delete(); }
EMSCRIPTEN_BINDINGS(vtkCellGridEvaluator_class) {
  using Phases=vtkCellGridEvaluator::Phases;
  emscripten::class_<vtkCellGridEvaluator, emscripten::base<vtkCellGridQuery>>("vtkCellGridEvaluator")
    .smart_ptr<vtkSmartPointer<vtkCellGridEvaluator>>("vtkSmartPointer<vtkCellGridEvaluator>")
    .constructor(&vtk::MakeAvtkSmartPointer<vtkCellGridEvaluator>)
    .class_function("IsTypeOf", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkCellGridEvaluator::IsTypeOf( arg_0.c_str());}))
    .function("IsA", emscripten::optional_override([](vtkCellGridEvaluator& self, const std::string & arg_0) -> int {  return self.IsA( arg_0.c_str());}))
    .class_function("SafeDownCast", &vtkCellGridEvaluator::SafeDownCast, emscripten::allow_raw_pointers())
    .function("NewInstance", &vtkCellGridEvaluator::NewInstance, emscripten::allow_raw_pointers())
    .class_function("GetNumberOfGenerationsFromBaseType", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkCellGridEvaluator::GetNumberOfGenerationsFromBaseType( arg_0.c_str());}))
    .function("GetNumberOfGenerationsFromBase", emscripten::optional_override([](vtkCellGridEvaluator& self, const std::string & arg_0) -> int {  return self.GetNumberOfGenerationsFromBase( arg_0.c_str());}))
    .function("SetCellAttribute", &vtkCellGridEvaluator::SetCellAttribute, emscripten::allow_raw_pointers())
    .function("GetCellAttribute", &vtkCellGridEvaluator::GetCellAttribute, emscripten::allow_raw_pointers())
    .function("GetInputPoints", &vtkCellGridEvaluator::GetInputPoints, emscripten::allow_raw_pointers())
    .function("GetClassifierCellTypes", &vtkCellGridEvaluator::GetClassifierCellTypes, emscripten::allow_raw_pointers())
    .function("GetClassifierCellOffsets", &vtkCellGridEvaluator::GetClassifierCellOffsets, emscripten::allow_raw_pointers())
    .function("GetClassifierPointIDs", &vtkCellGridEvaluator::GetClassifierPointIDs, emscripten::allow_raw_pointers())
    .function("GetClassifierCellIndices", &vtkCellGridEvaluator::GetClassifierCellIndices, emscripten::allow_raw_pointers())
    .function("GetClassifierPointParameters", &vtkCellGridEvaluator::GetClassifierPointParameters, emscripten::allow_raw_pointers())
    .function("GetInterpolatedValues", &vtkCellGridEvaluator::GetInterpolatedValues, emscripten::allow_raw_pointers())
    .function("ClassifyPoints", &vtkCellGridEvaluator::ClassifyPoints, emscripten::allow_raw_pointers())
    .function("InterpolatePoints", &vtkCellGridEvaluator::InterpolatePoints, emscripten::allow_raw_pointers())
    .function("InterpolateCellParameters", &vtkCellGridEvaluator::InterpolateCellParameters, emscripten::allow_raw_pointers())
    .function("GetPhasesToPerform", &vtkCellGridEvaluator::GetPhasesToPerform)
    .function("Initialize", &vtkCellGridEvaluator::Initialize)
    .function("StartPass", &vtkCellGridEvaluator::StartPass)
    .function("IsAnotherPassRequired", &vtkCellGridEvaluator::IsAnotherPassRequired)
    .function("Finalize", &vtkCellGridEvaluator::Finalize)
    .function("GetLocator", &vtkCellGridEvaluator::GetLocator, emscripten::allow_raw_pointers());
}
EMSCRIPTEN_BINDINGS(vtkCommonDataModel_vtkCellGridEvaluator_0_2_constants) {
    typedef vtkCellGridEvaluator::Phases cxx_enum_type;

  const struct { const char *name; cxx_enum_type value; }
    constants[4] = {
      { "vtkCellGridEvaluator_Phases_None", vtkCellGridEvaluator::None },
      { "vtkCellGridEvaluator_Phases_Classify", vtkCellGridEvaluator::Classify },
      { "vtkCellGridEvaluator_Phases_ClassifyAndInterpolate", vtkCellGridEvaluator::ClassifyAndInterpolate },
      { "vtkCellGridEvaluator_Phases_Interpolate", vtkCellGridEvaluator::Interpolate },
  };
  for (int c = 0; c < 4; c++)
  {
    emscripten::constant(constants[c].name, static_cast<int>(constants[c].value));
  }
}
