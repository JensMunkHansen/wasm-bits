// JavaScript wrapper for vtkMatrixToHomogeneousTransform with embind 
//
// This file was auto-generated using :
/*
node /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/bin/vtkWrapJavaScript.js \
 @/home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkCommonTransforms.js/vtkCommonTransforms.js.Release.args \
 -o \
 /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkCommonTransforms.js/vtkMatrixToHomogeneousTransformEmbinding.cxx \
 /home/jmh/github/vtk/Common/Transforms/vtkMatrixToHomogeneousTransform.h
*/
#include "vtkEmbindSmartPointerTrait.h"
#include <emscripten.h>
#include <string>
#include "vtkVariant.h"
#include "vtkObjectBase.h"
#include "vtkIndent.h"
#include "vtkMatrix4x4.h"
#include "vtkAbstractTransform.h"
#include "vtkMatrixToHomogeneousTransform.h"

template<> void emscripten::internal::raw_destructor<vtkMatrixToHomogeneousTransform>(vtkMatrixToHomogeneousTransform * ptr){ ptr->Delete(); }
EMSCRIPTEN_BINDINGS(vtkMatrixToHomogeneousTransform_class) {
  emscripten::class_<vtkMatrixToHomogeneousTransform, emscripten::base<vtkHomogeneousTransform>>("vtkMatrixToHomogeneousTransform")
    .smart_ptr<vtkSmartPointer<vtkMatrixToHomogeneousTransform>>("vtkSmartPointer<vtkMatrixToHomogeneousTransform>")
    .constructor(&vtk::MakeVTKSmartPtr<vtkMatrixToHomogeneousTransform>)
    .class_function("IsTypeOf", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkMatrixToHomogeneousTransform::IsTypeOf( arg_0.c_str());}))
    .function("IsA", emscripten::optional_override([](vtkMatrixToHomogeneousTransform& self, const std::string & arg_0) -> int {  return self.IsA( arg_0.c_str());}))
    .class_function("SafeDownCast", &vtkMatrixToHomogeneousTransform::SafeDownCast, emscripten::allow_raw_pointers())
    .function("NewInstance", &vtkMatrixToHomogeneousTransform::NewInstance, emscripten::allow_raw_pointers())
    .class_function("GetNumberOfGenerationsFromBaseType", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkMatrixToHomogeneousTransform::GetNumberOfGenerationsFromBaseType( arg_0.c_str());}))
    .function("GetNumberOfGenerationsFromBase", emscripten::optional_override([](vtkMatrixToHomogeneousTransform& self, const std::string & arg_0) -> int {  return self.GetNumberOfGenerationsFromBase( arg_0.c_str());}))
    .function("SetInput", &vtkMatrixToHomogeneousTransform::SetInput, emscripten::allow_raw_pointers())
    .function("GetInput", &vtkMatrixToHomogeneousTransform::GetInput, emscripten::allow_raw_pointers())
    .function("Inverse", &vtkMatrixToHomogeneousTransform::Inverse)
    .function("GetMTime", &vtkMatrixToHomogeneousTransform::GetMTime)
    .function("MakeTransform", &vtkMatrixToHomogeneousTransform::MakeTransform, emscripten::allow_raw_pointers());
}
