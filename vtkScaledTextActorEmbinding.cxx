// JavaScript wrapper for vtkScaledTextActor with embind 
//
// This file was auto-generated using :
/*
node /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/bin/vtkWrapJavaScript.js \
 @/home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkRenderingFreeType.js/vtkRenderingFreeType.js.Release.args \
 -o \
 /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkRenderingFreeType.js/vtkScaledTextActorEmbinding.cxx \
 /home/jmh/github/vtk/Rendering/FreeType/vtkScaledTextActor.h
*/
#include "vtkEmbindSmartPointerTrait.h"
#include <emscripten.h>
#include <string>
#include "vtkVariant.h"
#include "vtkObjectBase.h"
#include "vtkIndent.h"
#include "vtkScaledTextActor.h"

template<> void emscripten::internal::raw_destructor<vtkScaledTextActor>(vtkScaledTextActor * ptr){ ptr->Delete(); }
EMSCRIPTEN_BINDINGS(vtkScaledTextActor_class) {
  emscripten::class_<vtkScaledTextActor, emscripten::base<vtkTextActor>>("vtkScaledTextActor")
    .smart_ptr<vtkSmartPointer<vtkScaledTextActor>>("vtkSmartPointer<vtkScaledTextActor>")
    .constructor(&vtk::MakeAvtkSmartPointer<vtkScaledTextActor>)
    .class_function("IsTypeOf", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkScaledTextActor::IsTypeOf( arg_0.c_str());}))
    .function("IsA", emscripten::optional_override([](vtkScaledTextActor& self, const std::string & arg_0) -> int {  return self.IsA( arg_0.c_str());}))
    .class_function("SafeDownCast", &vtkScaledTextActor::SafeDownCast, emscripten::allow_raw_pointers())
    .function("NewInstance", &vtkScaledTextActor::NewInstance, emscripten::allow_raw_pointers())
    .class_function("GetNumberOfGenerationsFromBaseType", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkScaledTextActor::GetNumberOfGenerationsFromBaseType( arg_0.c_str());}))
    .function("GetNumberOfGenerationsFromBase", emscripten::optional_override([](vtkScaledTextActor& self, const std::string & arg_0) -> int {  return self.GetNumberOfGenerationsFromBase( arg_0.c_str());}));
}
