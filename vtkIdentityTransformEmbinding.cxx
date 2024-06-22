// JavaScript wrapper for vtkIdentityTransform with embind 
//
// This file was auto-generated using :
/*
node /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/bin/vtkWrapJavaScript.js \
 @/home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkCommonTransforms.js/vtkCommonTransforms.js.Release.args \
 -o \
 /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkCommonTransforms.js/vtkIdentityTransformEmbinding.cxx \
 /home/jmh/github/vtk/Common/Transforms/vtkIdentityTransform.h
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
#include "vtkIdentityTransform.h"

template<> void emscripten::internal::raw_destructor<vtkIdentityTransform>(vtkIdentityTransform * ptr){ ptr->Delete(); }
EMSCRIPTEN_BINDINGS(vtkIdentityTransform_class) {
  emscripten::class_<vtkIdentityTransform, emscripten::base<vtkLinearTransform>>("vtkIdentityTransform")
    .smart_ptr<vtkSmartPointer<vtkIdentityTransform>>("vtkSmartPointer<vtkIdentityTransform>")
    .constructor(&vtk::MakeVTKSmartPtr<vtkIdentityTransform>)
    .class_function("IsTypeOf", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkIdentityTransform::IsTypeOf( arg_0.c_str());}))
    .function("IsA", emscripten::optional_override([](vtkIdentityTransform& self, const std::string & arg_0) -> int {  return self.IsA( arg_0.c_str());}))
    .class_function("SafeDownCast", &vtkIdentityTransform::SafeDownCast, emscripten::allow_raw_pointers())
    .function("NewInstance", &vtkIdentityTransform::NewInstance, emscripten::allow_raw_pointers())
    .class_function("GetNumberOfGenerationsFromBaseType", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkIdentityTransform::GetNumberOfGenerationsFromBaseType( arg_0.c_str());}))
    .function("GetNumberOfGenerationsFromBase", emscripten::optional_override([](vtkIdentityTransform& self, const std::string & arg_0) -> int {  return self.GetNumberOfGenerationsFromBase( arg_0.c_str());}))
    .function("TransformPoints", &vtkIdentityTransform::TransformPoints, emscripten::allow_raw_pointers())
    .function("TransformNormals", &vtkIdentityTransform::TransformNormals, emscripten::allow_raw_pointers())
    .function("TransformVectors", &vtkIdentityTransform::TransformVectors, emscripten::allow_raw_pointers())
    .function("Inverse", &vtkIdentityTransform::Inverse)
    .function("MakeTransform", &vtkIdentityTransform::MakeTransform, emscripten::allow_raw_pointers());
}
