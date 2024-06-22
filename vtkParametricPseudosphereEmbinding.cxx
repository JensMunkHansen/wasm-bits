// JavaScript wrapper for vtkParametricPseudosphere with embind 
//
// This file was auto-generated using :
/*
node /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/bin/vtkWrapJavaScript.js \
 @/home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkCommonComputationalGeometry.js/vtkCommonComputationalGeometry.js.Release.args \
 -o \
 /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkCommonComputationalGeometry.js/vtkParametricPseudosphereEmbinding.cxx \
 /home/jmh/github/vtk/Common/ComputationalGeometry/vtkParametricPseudosphere.h
*/
#include "vtkEmbindSmartPointerTrait.h"
#include <emscripten.h>
#include <string>
#include "vtkVariant.h"
#include "vtkObjectBase.h"
#include "vtkIndent.h"
#include "vtkParametricPseudosphere.h"

template<> void emscripten::internal::raw_destructor<vtkParametricPseudosphere>(vtkParametricPseudosphere * ptr){ ptr->Delete(); }
EMSCRIPTEN_BINDINGS(vtkParametricPseudosphere_class) {
  emscripten::class_<vtkParametricPseudosphere, emscripten::base<vtkParametricFunction>>("vtkParametricPseudosphere")
    .smart_ptr<vtkSmartPointer<vtkParametricPseudosphere>>("vtkSmartPointer<vtkParametricPseudosphere>")
    .constructor(&vtk::MakeVTKSmartPtr<vtkParametricPseudosphere>)
    .class_function("IsTypeOf", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkParametricPseudosphere::IsTypeOf( arg_0.c_str());}))
    .function("IsA", emscripten::optional_override([](vtkParametricPseudosphere& self, const std::string & arg_0) -> int {  return self.IsA( arg_0.c_str());}))
    .class_function("SafeDownCast", &vtkParametricPseudosphere::SafeDownCast, emscripten::allow_raw_pointers())
    .function("NewInstance", &vtkParametricPseudosphere::NewInstance, emscripten::allow_raw_pointers())
    .class_function("GetNumberOfGenerationsFromBaseType", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkParametricPseudosphere::GetNumberOfGenerationsFromBaseType( arg_0.c_str());}))
    .function("GetNumberOfGenerationsFromBase", emscripten::optional_override([](vtkParametricPseudosphere& self, const std::string & arg_0) -> int {  return self.GetNumberOfGenerationsFromBase( arg_0.c_str());}))
    .function("GetDimension", &vtkParametricPseudosphere::GetDimension);
}
