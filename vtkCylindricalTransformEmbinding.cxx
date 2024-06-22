// JavaScript wrapper for vtkCylindricalTransform with embind 
//
// This file was auto-generated using :
/*
node /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/bin/vtkWrapJavaScript.js \
 @/home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkCommonTransforms.js/vtkCommonTransforms.js.Release.args \
 -o \
 /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkCommonTransforms.js/vtkCylindricalTransformEmbinding.cxx \
 /home/jmh/github/vtk/Common/Transforms/vtkCylindricalTransform.h
*/
#include "vtkEmbindSmartPointerTrait.h"
#include <emscripten.h>
#include <string>
#include "vtkVariant.h"
#include "vtkObjectBase.h"
#include "vtkIndent.h"
#include "vtkAbstractTransform.h"
#include "vtkCylindricalTransform.h"

template<> void emscripten::internal::raw_destructor<vtkCylindricalTransform>(vtkCylindricalTransform * ptr){ ptr->Delete(); }
EMSCRIPTEN_BINDINGS(vtkCylindricalTransform_class) {
  emscripten::class_<vtkCylindricalTransform, emscripten::base<vtkWarpTransform>>("vtkCylindricalTransform")
    .smart_ptr<vtkSmartPointer<vtkCylindricalTransform>>("vtkSmartPointer<vtkCylindricalTransform>")
    .constructor(&vtk::MakeAvtkSmartPointer<vtkCylindricalTransform>)
    .class_function("IsTypeOf", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkCylindricalTransform::IsTypeOf( arg_0.c_str());}))
    .function("IsA", emscripten::optional_override([](vtkCylindricalTransform& self, const std::string & arg_0) -> int {  return self.IsA( arg_0.c_str());}))
    .class_function("SafeDownCast", &vtkCylindricalTransform::SafeDownCast, emscripten::allow_raw_pointers())
    .function("NewInstance", &vtkCylindricalTransform::NewInstance, emscripten::allow_raw_pointers())
    .class_function("GetNumberOfGenerationsFromBaseType", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkCylindricalTransform::GetNumberOfGenerationsFromBaseType( arg_0.c_str());}))
    .function("GetNumberOfGenerationsFromBase", emscripten::optional_override([](vtkCylindricalTransform& self, const std::string & arg_0) -> int {  return self.GetNumberOfGenerationsFromBase( arg_0.c_str());}))
    .function("MakeTransform", &vtkCylindricalTransform::MakeTransform, emscripten::allow_raw_pointers());
}
