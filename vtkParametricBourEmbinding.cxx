// JavaScript wrapper for vtkParametricBour with embind 
//
// This file was auto-generated using :
/*
node /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/bin/vtkWrapJavaScript.js \
 @/home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkCommonComputationalGeometry.js/vtkCommonComputationalGeometry.js.Release.args \
 -o \
 /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkCommonComputationalGeometry.js/vtkParametricBourEmbinding.cxx \
 /home/jmh/github/vtk/Common/ComputationalGeometry/vtkParametricBour.h
*/
#include "vtkEmbindSmartPointerTrait.h"
#include <emscripten.h>
#include <string>
#include "vtkVariant.h"
#include "vtkObjectBase.h"
#include "vtkIndent.h"
#include "vtkParametricBour.h"

template<> void emscripten::internal::raw_destructor<vtkParametricBour>(vtkParametricBour * ptr){ ptr->Delete(); }
EMSCRIPTEN_BINDINGS(vtkParametricBour_class) {
  emscripten::class_<vtkParametricBour, emscripten::base<vtkParametricFunction>>("vtkParametricBour")
    .smart_ptr<vtkSmartPointer<vtkParametricBour>>("vtkSmartPointer<vtkParametricBour>")
    .constructor(&vtk::MakeAvtkSmartPointer<vtkParametricBour>)
    .class_function("IsTypeOf", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkParametricBour::IsTypeOf( arg_0.c_str());}))
    .function("IsA", emscripten::optional_override([](vtkParametricBour& self, const std::string & arg_0) -> int {  return self.IsA( arg_0.c_str());}))
    .class_function("SafeDownCast", &vtkParametricBour::SafeDownCast, emscripten::allow_raw_pointers())
    .function("NewInstance", &vtkParametricBour::NewInstance, emscripten::allow_raw_pointers())
    .class_function("GetNumberOfGenerationsFromBaseType", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkParametricBour::GetNumberOfGenerationsFromBaseType( arg_0.c_str());}))
    .function("GetNumberOfGenerationsFromBase", emscripten::optional_override([](vtkParametricBour& self, const std::string & arg_0) -> int {  return self.GetNumberOfGenerationsFromBase( arg_0.c_str());}))
    .function("GetDimension", &vtkParametricBour::GetDimension);
}
