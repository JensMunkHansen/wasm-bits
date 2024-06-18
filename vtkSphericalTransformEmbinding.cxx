// JavaScript wrapper for vtkSphericalTransform with embind 
//
// This file was auto-generated using :
/*
node /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/bin/vtkWrapJavaScript.js \
 @/home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkCommonTransforms.js/vtkCommonTransforms.js.Release.args \
 -o \
 /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkCommonTransforms.js/vtkSphericalTransformEmbinding.cxx \
 /home/jmh/github/vtk/Common/Transforms/vtkSphericalTransform.h
*/
#include "vtkEmbindSmartPointerTrait.h"
#include <emscripten.h>
#include <string>
#include "vtkVariant.h"
#include "vtkObjectBase.h"
#include "vtkIndent.h"
#include "vtkAbstractTransform.h"
#include "vtkSphericalTransform.h"

template<> void emscripten::internal::raw_destructor<vtkSphericalTransform>(vtkSphericalTransform * ptr){ ptr->Delete(); }
EMSCRIPTEN_BINDINGS(vtkSphericalTransform_class) {
  emscripten::class_<vtkSphericalTransform, emscripten::base<vtkWarpTransform>>("vtkSphericalTransform")
    .smart_ptr<vtkSmartPointer<vtkSphericalTransform>>("vtkSmartPointer<vtkSphericalTransform>")
    .constructor(&vtk::MakeAvtkSmartPointer<vtkSphericalTransform>)
    .class_function("IsTypeOf", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkSphericalTransform::IsTypeOf( arg_0.c_str());}))
    .function("IsA", emscripten::optional_override([](vtkSphericalTransform& self, const std::string & arg_0) -> int {  return self.IsA( arg_0.c_str());}))
    .class_function("SafeDownCast", &vtkSphericalTransform::SafeDownCast, emscripten::allow_raw_pointers())
    .function("NewInstance", &vtkSphericalTransform::NewInstance, emscripten::allow_raw_pointers())
    .class_function("GetNumberOfGenerationsFromBaseType", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkSphericalTransform::GetNumberOfGenerationsFromBaseType( arg_0.c_str());}))
    .function("GetNumberOfGenerationsFromBase", emscripten::optional_override([](vtkSphericalTransform& self, const std::string & arg_0) -> int {  return self.GetNumberOfGenerationsFromBase( arg_0.c_str());}))
    .function("MakeTransform", &vtkSphericalTransform::MakeTransform, emscripten::allow_raw_pointers());
}
