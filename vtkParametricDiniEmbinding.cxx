// JavaScript wrapper for vtkParametricDini with embind 
//
// This file was auto-generated using :
/*
node /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/bin/vtkWrapJavaScript.js \
 @/home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkCommonComputationalGeometry.js/vtkCommonComputationalGeometry.js.Release.args \
 -o \
 /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkCommonComputationalGeometry.js/vtkParametricDiniEmbinding.cxx \
 /home/jmh/github/vtk/Common/ComputationalGeometry/vtkParametricDini.h
*/
#include "vtkEmbindSmartPointerTrait.h"
#include <emscripten.h>
#include <string>
#include "vtkVariant.h"
#include "vtkObjectBase.h"
#include "vtkIndent.h"
#include "vtkParametricDini.h"

template<> void emscripten::internal::raw_destructor<vtkParametricDini>(vtkParametricDini * ptr){ ptr->Delete(); }
EMSCRIPTEN_BINDINGS(vtkParametricDini_class) {
  emscripten::class_<vtkParametricDini, emscripten::base<vtkParametricFunction>>("vtkParametricDini")
    .smart_ptr<vtkSmartPointer<vtkParametricDini>>("vtkSmartPointer<vtkParametricDini>")
    .constructor(&vtk::MakeVTKSmartPtr<vtkParametricDini>)
    .class_function("IsTypeOf", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkParametricDini::IsTypeOf( arg_0.c_str());}))
    .function("IsA", emscripten::optional_override([](vtkParametricDini& self, const std::string & arg_0) -> int {  return self.IsA( arg_0.c_str());}))
    .class_function("SafeDownCast", &vtkParametricDini::SafeDownCast, emscripten::allow_raw_pointers())
    .function("NewInstance", &vtkParametricDini::NewInstance, emscripten::allow_raw_pointers())
    .class_function("GetNumberOfGenerationsFromBaseType", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkParametricDini::GetNumberOfGenerationsFromBaseType( arg_0.c_str());}))
    .function("GetNumberOfGenerationsFromBase", emscripten::optional_override([](vtkParametricDini& self, const std::string & arg_0) -> int {  return self.GetNumberOfGenerationsFromBase( arg_0.c_str());}))
    .function("GetDimension", &vtkParametricDini::GetDimension)
    .function("SetA", &vtkParametricDini::SetA)
    .function("GetA", &vtkParametricDini::GetA)
    .function("SetB", &vtkParametricDini::SetB)
    .function("GetB", &vtkParametricDini::GetB);
}
