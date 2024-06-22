// JavaScript wrapper for vtkMatrixToLinearTransform with embind 
//
// This file was auto-generated using :
/*
node /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/bin/vtkWrapJavaScript.js \
 @/home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkCommonTransforms.js/vtkCommonTransforms.js.Release.args \
 -o \
 /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkCommonTransforms.js/vtkMatrixToLinearTransformEmbinding.cxx \
 /home/jmh/github/vtk/Common/Transforms/vtkMatrixToLinearTransform.h
*/
#include "vtkEmbindSmartPointerTrait.h"
#include <emscripten.h>
#include <string>
#include "vtkVariant.h"
#include "vtkObjectBase.h"
#include "vtkIndent.h"
#include "vtkMatrix4x4.h"
#include "vtkAbstractTransform.h"
#include "vtkMatrixToLinearTransform.h"

template<> void emscripten::internal::raw_destructor<vtkMatrixToLinearTransform>(vtkMatrixToLinearTransform * ptr){ ptr->Delete(); }
EMSCRIPTEN_BINDINGS(vtkMatrixToLinearTransform_class) {
  emscripten::class_<vtkMatrixToLinearTransform, emscripten::base<vtkLinearTransform>>("vtkMatrixToLinearTransform")
    .smart_ptr<vtkSmartPointer<vtkMatrixToLinearTransform>>("vtkSmartPointer<vtkMatrixToLinearTransform>")
    .constructor(&vtk::MakeAvtkSmartPointer<vtkMatrixToLinearTransform>)
    .class_function("IsTypeOf", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkMatrixToLinearTransform::IsTypeOf( arg_0.c_str());}))
    .function("IsA", emscripten::optional_override([](vtkMatrixToLinearTransform& self, const std::string & arg_0) -> int {  return self.IsA( arg_0.c_str());}))
    .class_function("SafeDownCast", &vtkMatrixToLinearTransform::SafeDownCast, emscripten::allow_raw_pointers())
    .function("NewInstance", &vtkMatrixToLinearTransform::NewInstance, emscripten::allow_raw_pointers())
    .class_function("GetNumberOfGenerationsFromBaseType", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkMatrixToLinearTransform::GetNumberOfGenerationsFromBaseType( arg_0.c_str());}))
    .function("GetNumberOfGenerationsFromBase", emscripten::optional_override([](vtkMatrixToLinearTransform& self, const std::string & arg_0) -> int {  return self.GetNumberOfGenerationsFromBase( arg_0.c_str());}))
    .function("SetInput", &vtkMatrixToLinearTransform::SetInput, emscripten::allow_raw_pointers())
    .function("GetInput", &vtkMatrixToLinearTransform::GetInput, emscripten::allow_raw_pointers())
    .function("Inverse", &vtkMatrixToLinearTransform::Inverse)
    .function("GetMTime", &vtkMatrixToLinearTransform::GetMTime)
    .function("MakeTransform", &vtkMatrixToLinearTransform::MakeTransform, emscripten::allow_raw_pointers());
}
