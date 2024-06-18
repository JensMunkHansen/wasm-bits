// JavaScript wrapper for vtkWarpTransform with embind 
//
// This file was auto-generated using :
/*
node /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/bin/vtkWrapJavaScript.js \
 @/home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkCommonTransforms.js/vtkCommonTransforms.js.Release.args \
 -o \
 /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkCommonTransforms.js/vtkWarpTransformEmbinding.cxx \
 /home/jmh/github/vtk/Common/Transforms/vtkWarpTransform.h
*/
#include "vtkEmbindSmartPointerTrait.h"
#include <emscripten.h>
#include <string>
#include "vtkVariant.h"
#include "vtkObjectBase.h"
#include "vtkIndent.h"
#include "vtkWarpTransform.h"

template<> void emscripten::internal::raw_destructor<vtkWarpTransform>(vtkWarpTransform * ptr){ ptr->Delete(); }
EMSCRIPTEN_BINDINGS(vtkWarpTransform_class) {
  emscripten::class_<vtkWarpTransform, emscripten::base<vtkAbstractTransform>>("vtkWarpTransform")
    .class_function("IsTypeOf", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkWarpTransform::IsTypeOf( arg_0.c_str());}))
    .function("IsA", emscripten::optional_override([](vtkWarpTransform& self, const std::string & arg_0) -> int {  return self.IsA( arg_0.c_str());}))
    .class_function("SafeDownCast", &vtkWarpTransform::SafeDownCast, emscripten::allow_raw_pointers())
    .function("NewInstance", &vtkWarpTransform::NewInstance, emscripten::allow_raw_pointers())
    .class_function("GetNumberOfGenerationsFromBaseType", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkWarpTransform::GetNumberOfGenerationsFromBaseType( arg_0.c_str());}))
    .function("GetNumberOfGenerationsFromBase", emscripten::optional_override([](vtkWarpTransform& self, const std::string & arg_0) -> int {  return self.GetNumberOfGenerationsFromBase( arg_0.c_str());}))
    .function("Inverse", &vtkWarpTransform::Inverse)
    .function("GetInverseFlag", &vtkWarpTransform::GetInverseFlag)
    .function("SetInverseTolerance", &vtkWarpTransform::SetInverseTolerance)
    .function("GetInverseTolerance", &vtkWarpTransform::GetInverseTolerance)
    .function("SetInverseIterations", &vtkWarpTransform::SetInverseIterations)
    .function("GetInverseIterations", &vtkWarpTransform::GetInverseIterations);
}
