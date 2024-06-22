// JavaScript wrapper for vtkParametricRoman with embind 
//
// This file was auto-generated using :
/*
node /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/bin/vtkWrapJavaScript.js \
 @/home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkCommonComputationalGeometry.js/vtkCommonComputationalGeometry.js.Release.args \
 -o \
 /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkCommonComputationalGeometry.js/vtkParametricRomanEmbinding.cxx \
 /home/jmh/github/vtk/Common/ComputationalGeometry/vtkParametricRoman.h
*/
#include "vtkEmbindSmartPointerTrait.h"
#include <emscripten.h>
#include <string>
#include "vtkVariant.h"
#include "vtkObjectBase.h"
#include "vtkIndent.h"
#include "vtkParametricRoman.h"

template<> void emscripten::internal::raw_destructor<vtkParametricRoman>(vtkParametricRoman * ptr){ ptr->Delete(); }
EMSCRIPTEN_BINDINGS(vtkParametricRoman_class) {
  emscripten::class_<vtkParametricRoman, emscripten::base<vtkParametricFunction>>("vtkParametricRoman")
    .smart_ptr<vtkSmartPointer<vtkParametricRoman>>("vtkSmartPointer<vtkParametricRoman>")
    .constructor(&vtk::MakeVTKSmartPtr<vtkParametricRoman>)
    .class_function("IsTypeOf", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkParametricRoman::IsTypeOf( arg_0.c_str());}))
    .function("IsA", emscripten::optional_override([](vtkParametricRoman& self, const std::string & arg_0) -> int {  return self.IsA( arg_0.c_str());}))
    .class_function("SafeDownCast", &vtkParametricRoman::SafeDownCast, emscripten::allow_raw_pointers())
    .function("NewInstance", &vtkParametricRoman::NewInstance, emscripten::allow_raw_pointers())
    .class_function("GetNumberOfGenerationsFromBaseType", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkParametricRoman::GetNumberOfGenerationsFromBaseType( arg_0.c_str());}))
    .function("GetNumberOfGenerationsFromBase", emscripten::optional_override([](vtkParametricRoman& self, const std::string & arg_0) -> int {  return self.GetNumberOfGenerationsFromBase( arg_0.c_str());}))
    .function("GetDimension", &vtkParametricRoman::GetDimension)
    .function("SetRadius", &vtkParametricRoman::SetRadius)
    .function("GetRadius", &vtkParametricRoman::GetRadius);
}
