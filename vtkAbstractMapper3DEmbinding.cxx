// JavaScript wrapper for vtkAbstractMapper3D with embind 
//
// This file was auto-generated using :
/*
node /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/bin/vtkWrapJavaScript.js \
 @/home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkRenderingCore.js/vtkRenderingCore.js.Release.args \
 -o \
 /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkRenderingCore.js/vtkAbstractMapper3DEmbinding.cxx \
 /home/jmh/github/vtk/Rendering/Core/vtkAbstractMapper3D.h
*/
#include "vtkEmbindSmartPointerTrait.h"
#include <emscripten.h>
#include <string>
#include "vtkVariant.h"
#include "vtkObjectBase.h"
#include "vtkIndent.h"
#include "vtkMatrix4x4.h"
#include "vtkAbstractMapper3D.h"

template<> void emscripten::internal::raw_destructor<vtkAbstractMapper3D>(vtkAbstractMapper3D * ptr){ ptr->Delete(); }
EMSCRIPTEN_BINDINGS(vtkAbstractMapper3D_class) {
  emscripten::class_<vtkAbstractMapper3D, emscripten::base<vtkAbstractMapper>>("vtkAbstractMapper3D")
    .class_function("IsTypeOf", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkAbstractMapper3D::IsTypeOf( arg_0.c_str());}))
    .function("IsA", emscripten::optional_override([](vtkAbstractMapper3D& self, const std::string & arg_0) -> int {  return self.IsA( arg_0.c_str());}))
    .class_function("SafeDownCast", &vtkAbstractMapper3D::SafeDownCast, emscripten::allow_raw_pointers())
    .function("NewInstance", &vtkAbstractMapper3D::NewInstance, emscripten::allow_raw_pointers())
    .class_function("GetNumberOfGenerationsFromBaseType", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkAbstractMapper3D::GetNumberOfGenerationsFromBaseType( arg_0.c_str());}))
    .function("GetNumberOfGenerationsFromBase", emscripten::optional_override([](vtkAbstractMapper3D& self, const std::string & arg_0) -> int {  return self.GetNumberOfGenerationsFromBase( arg_0.c_str());}))
    .function("GetLength", &vtkAbstractMapper3D::GetLength)
    .function("IsARayCastMapper", &vtkAbstractMapper3D::IsARayCastMapper)
    .function("IsARenderIntoImageMapper", &vtkAbstractMapper3D::IsARenderIntoImageMapper);
}
