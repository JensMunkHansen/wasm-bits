// JavaScript wrapper for vtkAbstractTransform with embind 
//
// This file was auto-generated using :
/*
node /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/bin/vtkWrapJavaScript.js \
 @/home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkCommonTransforms.js/vtkCommonTransforms.js.Release.args \
 -o \
 /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkCommonTransforms.js/vtkAbstractTransformEmbinding.cxx \
 /home/jmh/github/vtk/Common/Transforms/vtkAbstractTransform.h
*/
#include "vtkEmbindSmartPointerTrait.h"
#include <emscripten.h>
#include <string>
#include "vtkVariant.h"
#include "vtkObjectBase.h"
#include "vtkIndent.h"
#include "vtkPoints.h"
#include "vtkDataArray.h"
#include "vtkAbstractTransform.h"

template<> void emscripten::internal::raw_destructor<vtkAbstractTransform>(vtkAbstractTransform * ptr){ ptr->Delete(); }
EMSCRIPTEN_BINDINGS(vtkAbstractTransform_class) {
  emscripten::class_<vtkAbstractTransform, emscripten::base<vtkObject>>("vtkAbstractTransform")
    .class_function("IsTypeOf", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkAbstractTransform::IsTypeOf( arg_0.c_str());}))
    .function("IsA", emscripten::optional_override([](vtkAbstractTransform& self, const std::string & arg_0) -> int {  return self.IsA( arg_0.c_str());}))
    .class_function("SafeDownCast", &vtkAbstractTransform::SafeDownCast, emscripten::allow_raw_pointers())
    .function("NewInstance", &vtkAbstractTransform::NewInstance, emscripten::allow_raw_pointers())
    .class_function("GetNumberOfGenerationsFromBaseType", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkAbstractTransform::GetNumberOfGenerationsFromBaseType( arg_0.c_str());}))
    .function("GetNumberOfGenerationsFromBase", emscripten::optional_override([](vtkAbstractTransform& self, const std::string & arg_0) -> int {  return self.GetNumberOfGenerationsFromBase( arg_0.c_str());}))
    .function("TransformPoints", &vtkAbstractTransform::TransformPoints, emscripten::allow_raw_pointers())
    .function("GetInverse", &vtkAbstractTransform::GetInverse, emscripten::allow_raw_pointers())
    .function("SetInverse", &vtkAbstractTransform::SetInverse, emscripten::allow_raw_pointers())
    .function("DeepCopy", &vtkAbstractTransform::DeepCopy, emscripten::allow_raw_pointers())
    .function("Update", &vtkAbstractTransform::Update)
    .function("CircuitCheck", &vtkAbstractTransform::CircuitCheck, emscripten::allow_raw_pointers())
    .function("GetMTime", &vtkAbstractTransform::GetMTime);
}

EMSCRIPTEN_BINDINGS(vtkTransformPair_class) {
  emscripten::class_<vtkTransformPair>("vtkTransformPair")
    .function("SwapForwardInverse", &vtkTransformPair::SwapForwardInverse);
}
template<> void emscripten::internal::raw_destructor<vtkTransformConcatenation>(vtkTransformConcatenation * ptr){ ptr->Delete(); }
EMSCRIPTEN_BINDINGS(vtkTransformConcatenation_class) {
  emscripten::class_<vtkTransformConcatenation>("vtkTransformConcatenation")
    .function("Concatenate", emscripten::select_overload<void(vtkTransformConcatenation&, vtkAbstractTransform*)>([](vtkTransformConcatenation& self, vtkAbstractTransform* arg_0) -> void { return self.Concatenate( arg_0); }), emscripten::allow_raw_pointers())
    .function("SetPreMultiplyFlag", &vtkTransformConcatenation::SetPreMultiplyFlag)
    .function("GetPreMultiplyFlag", &vtkTransformConcatenation::GetPreMultiplyFlag)
    .function("Translate", &vtkTransformConcatenation::Translate)
    .function("Rotate", &vtkTransformConcatenation::Rotate)
    .function("Scale", &vtkTransformConcatenation::Scale)
    .function("Inverse", &vtkTransformConcatenation::Inverse)
    .function("GetInverseFlag", &vtkTransformConcatenation::GetInverseFlag)
    .function("Identity", &vtkTransformConcatenation::Identity)
    .function("GetNumberOfTransforms", &vtkTransformConcatenation::GetNumberOfTransforms)
    .function("GetNumberOfPreTransforms", &vtkTransformConcatenation::GetNumberOfPreTransforms)
    .function("GetNumberOfPostTransforms", &vtkTransformConcatenation::GetNumberOfPostTransforms)
    .function("GetTransform", &vtkTransformConcatenation::GetTransform, emscripten::allow_raw_pointers())
    .function("GetMaxMTime", &vtkTransformConcatenation::GetMaxMTime);
}
template<> void emscripten::internal::raw_destructor<vtkTransformConcatenationStack>(vtkTransformConcatenationStack * ptr){ ptr->Delete(); }
EMSCRIPTEN_BINDINGS(vtkTransformConcatenationStack_class) {
  emscripten::class_<vtkTransformConcatenationStack>("vtkTransformConcatenationStack");
}
