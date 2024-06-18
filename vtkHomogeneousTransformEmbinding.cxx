// JavaScript wrapper for vtkHomogeneousTransform with embind 
//
// This file was auto-generated using :
/*
node /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/bin/vtkWrapJavaScript.js \
 @/home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkCommonTransforms.js/vtkCommonTransforms.js.Release.args \
 -o \
 /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkCommonTransforms.js/vtkHomogeneousTransformEmbinding.cxx \
 /home/jmh/github/vtk/Common/Transforms/vtkHomogeneousTransform.h
*/
#include "vtkEmbindSmartPointerTrait.h"
#include <emscripten.h>
#include <string>
#include "vtkVariant.h"
#include "vtkObjectBase.h"
#include "vtkIndent.h"
#include "vtkPoints.h"
#include "vtkDataArray.h"
#include "vtkMatrix4x4.h"
#include "vtkHomogeneousTransform.h"

template<> void emscripten::internal::raw_destructor<vtkHomogeneousTransform>(vtkHomogeneousTransform * ptr){ ptr->Delete(); }
EMSCRIPTEN_BINDINGS(vtkHomogeneousTransform_class) {
  emscripten::class_<vtkHomogeneousTransform, emscripten::base<vtkAbstractTransform>>("vtkHomogeneousTransform")
    .class_function("IsTypeOf", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkHomogeneousTransform::IsTypeOf( arg_0.c_str());}))
    .function("IsA", emscripten::optional_override([](vtkHomogeneousTransform& self, const std::string & arg_0) -> int {  return self.IsA( arg_0.c_str());}))
    .class_function("SafeDownCast", &vtkHomogeneousTransform::SafeDownCast, emscripten::allow_raw_pointers())
    .function("NewInstance", &vtkHomogeneousTransform::NewInstance, emscripten::allow_raw_pointers())
    .class_function("GetNumberOfGenerationsFromBaseType", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkHomogeneousTransform::GetNumberOfGenerationsFromBaseType( arg_0.c_str());}))
    .function("GetNumberOfGenerationsFromBase", emscripten::optional_override([](vtkHomogeneousTransform& self, const std::string & arg_0) -> int {  return self.GetNumberOfGenerationsFromBase( arg_0.c_str());}))
    .function("TransformPoints", &vtkHomogeneousTransform::TransformPoints, emscripten::allow_raw_pointers())
    .function("GetMatrix", emscripten::select_overload<void(vtkHomogeneousTransform&, vtkMatrix4x4*)>([](vtkHomogeneousTransform& self, vtkMatrix4x4* arg_0) -> void { return self.GetMatrix( arg_0); }), emscripten::allow_raw_pointers())
    .function("GetMatrix", emscripten::select_overload<vtkMatrix4x4*(vtkHomogeneousTransform&)>([](vtkHomogeneousTransform& self) -> vtkMatrix4x4* { return self.GetMatrix(); }), emscripten::allow_raw_pointers())
    .function("GetHomogeneousInverse", &vtkHomogeneousTransform::GetHomogeneousInverse, emscripten::allow_raw_pointers());
}
