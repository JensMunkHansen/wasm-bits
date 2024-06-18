// JavaScript wrapper for vtkLinearTransform with embind 
//
// This file was auto-generated using :
/*
node /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/bin/vtkWrapJavaScript.js \
 @/home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkCommonTransforms.js/vtkCommonTransforms.js.Release.args \
 -o \
 /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkCommonTransforms.js/vtkLinearTransformEmbinding.cxx \
 /home/jmh/github/vtk/Common/Transforms/vtkLinearTransform.h
*/
#include "vtkEmbindSmartPointerTrait.h"
#include <emscripten.h>
#include <string>
#include "vtkVariant.h"
#include "vtkObjectBase.h"
#include "vtkIndent.h"
#include "vtkPoints.h"
#include "vtkDataArray.h"
#include "vtkLinearTransform.h"

template<> void emscripten::internal::raw_destructor<vtkLinearTransform>(vtkLinearTransform * ptr){ ptr->Delete(); }
EMSCRIPTEN_BINDINGS(vtkLinearTransform_class) {
  emscripten::class_<vtkLinearTransform, emscripten::base<vtkHomogeneousTransform>>("vtkLinearTransform")
    .class_function("IsTypeOf", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkLinearTransform::IsTypeOf( arg_0.c_str());}))
    .function("IsA", emscripten::optional_override([](vtkLinearTransform& self, const std::string & arg_0) -> int {  return self.IsA( arg_0.c_str());}))
    .class_function("SafeDownCast", &vtkLinearTransform::SafeDownCast, emscripten::allow_raw_pointers())
    .function("NewInstance", &vtkLinearTransform::NewInstance, emscripten::allow_raw_pointers())
    .class_function("GetNumberOfGenerationsFromBaseType", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkLinearTransform::GetNumberOfGenerationsFromBaseType( arg_0.c_str());}))
    .function("GetNumberOfGenerationsFromBase", emscripten::optional_override([](vtkLinearTransform& self, const std::string & arg_0) -> int {  return self.GetNumberOfGenerationsFromBase( arg_0.c_str());}))
    .function("TransformPoints", &vtkLinearTransform::TransformPoints, emscripten::allow_raw_pointers())
    .function("TransformNormals", &vtkLinearTransform::TransformNormals, emscripten::allow_raw_pointers())
    .function("TransformVectors", &vtkLinearTransform::TransformVectors, emscripten::allow_raw_pointers())
    .function("GetLinearInverse", &vtkLinearTransform::GetLinearInverse, emscripten::allow_raw_pointers());
}
