// JavaScript wrapper for vtkLandmarkTransform with embind 
//
// This file was auto-generated using :
/*
node /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/bin/vtkWrapJavaScript.js \
 @/home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkCommonTransforms.js/vtkCommonTransforms.js.Release.args \
 -o \
 /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkCommonTransforms.js/vtkLandmarkTransformEmbinding.cxx \
 /home/jmh/github/vtk/Common/Transforms/vtkLandmarkTransform.h
*/
#include "vtkEmbindSmartPointerTrait.h"
#include <emscripten.h>
#include <string>
#include "vtkVariant.h"
#include "vtkObjectBase.h"
#include "vtkIndent.h"
#include "vtkPoints.h"
#include "vtkAbstractTransform.h"
#include "vtkLandmarkTransform.h"

EMSCRIPTEN_BINDINGS(vtkCommonTransforms_vtkLandmarkTransform_0_1_constants) {
  const struct { const char *name; int value; }
    constants[3] = {
      { "VTK_LANDMARK_RIGIDBODY", 6 },
      { "VTK_LANDMARK_SIMILARITY", 7 },
      { "VTK_LANDMARK_AFFINE", 12 },
  };
  for (int c = 0; c < 3; c++)
  {
    emscripten::constant(constants[c].name, constants[c].value);
  }
}
template<> void emscripten::internal::raw_destructor<vtkLandmarkTransform>(vtkLandmarkTransform * ptr){ ptr->Delete(); }
EMSCRIPTEN_BINDINGS(vtkLandmarkTransform_class) {
  emscripten::class_<vtkLandmarkTransform, emscripten::base<vtkLinearTransform>>("vtkLandmarkTransform")
    .smart_ptr<vtkSmartPointer<vtkLandmarkTransform>>("vtkSmartPointer<vtkLandmarkTransform>")
    .constructor(&vtk::MakeVTKSmartPtr<vtkLandmarkTransform>)
    .class_function("IsTypeOf", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkLandmarkTransform::IsTypeOf( arg_0.c_str());}))
    .function("IsA", emscripten::optional_override([](vtkLandmarkTransform& self, const std::string & arg_0) -> int {  return self.IsA( arg_0.c_str());}))
    .class_function("SafeDownCast", &vtkLandmarkTransform::SafeDownCast, emscripten::allow_raw_pointers())
    .function("NewInstance", &vtkLandmarkTransform::NewInstance, emscripten::allow_raw_pointers())
    .class_function("GetNumberOfGenerationsFromBaseType", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkLandmarkTransform::GetNumberOfGenerationsFromBaseType( arg_0.c_str());}))
    .function("GetNumberOfGenerationsFromBase", emscripten::optional_override([](vtkLandmarkTransform& self, const std::string & arg_0) -> int {  return self.GetNumberOfGenerationsFromBase( arg_0.c_str());}))
    .function("SetSourceLandmarks", &vtkLandmarkTransform::SetSourceLandmarks, emscripten::allow_raw_pointers())
    .function("SetTargetLandmarks", &vtkLandmarkTransform::SetTargetLandmarks, emscripten::allow_raw_pointers())
    .function("GetSourceLandmarks", &vtkLandmarkTransform::GetSourceLandmarks, emscripten::allow_raw_pointers())
    .function("GetTargetLandmarks", &vtkLandmarkTransform::GetTargetLandmarks, emscripten::allow_raw_pointers())
    .function("SetMode", &vtkLandmarkTransform::SetMode)
    .function("SetModeToRigidBody", &vtkLandmarkTransform::SetModeToRigidBody)
    .function("SetModeToSimilarity", &vtkLandmarkTransform::SetModeToSimilarity)
    .function("SetModeToAffine", &vtkLandmarkTransform::SetModeToAffine)
    .function("GetMode", &vtkLandmarkTransform::GetMode)
    .function("GetModeAsString", emscripten::optional_override([](vtkLandmarkTransform& self) -> std::string {  return self.GetModeAsString();}))
    .function("Inverse", &vtkLandmarkTransform::Inverse)
    .function("GetMTime", &vtkLandmarkTransform::GetMTime)
    .function("MakeTransform", &vtkLandmarkTransform::MakeTransform, emscripten::allow_raw_pointers());
}
