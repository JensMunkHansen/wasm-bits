// JavaScript wrapper for vtkParametricCatalanMinimal with embind 
//
// This file was auto-generated using :
/*
node /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/bin/vtkWrapJavaScript.js \
 @/home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkCommonComputationalGeometry.js/vtkCommonComputationalGeometry.js.Release.args \
 -o \
 /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkCommonComputationalGeometry.js/vtkParametricCatalanMinimalEmbinding.cxx \
 /home/jmh/github/vtk/Common/ComputationalGeometry/vtkParametricCatalanMinimal.h
*/
#include "vtkEmbindSmartPointerTrait.h"
#include <emscripten.h>
#include <string>
#include "vtkVariant.h"
#include "vtkObjectBase.h"
#include "vtkIndent.h"
#include "vtkParametricCatalanMinimal.h"

template<> void emscripten::internal::raw_destructor<vtkParametricCatalanMinimal>(vtkParametricCatalanMinimal * ptr){ ptr->Delete(); }
EMSCRIPTEN_BINDINGS(vtkParametricCatalanMinimal_class) {
  emscripten::class_<vtkParametricCatalanMinimal, emscripten::base<vtkParametricFunction>>("vtkParametricCatalanMinimal")
    .smart_ptr<vtkSmartPointer<vtkParametricCatalanMinimal>>("vtkSmartPointer<vtkParametricCatalanMinimal>")
    .constructor(&vtk::MakeAvtkSmartPointer<vtkParametricCatalanMinimal>)
    .class_function("IsTypeOf", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkParametricCatalanMinimal::IsTypeOf( arg_0.c_str());}))
    .function("IsA", emscripten::optional_override([](vtkParametricCatalanMinimal& self, const std::string & arg_0) -> int {  return self.IsA( arg_0.c_str());}))
    .class_function("SafeDownCast", &vtkParametricCatalanMinimal::SafeDownCast, emscripten::allow_raw_pointers())
    .function("NewInstance", &vtkParametricCatalanMinimal::NewInstance, emscripten::allow_raw_pointers())
    .class_function("GetNumberOfGenerationsFromBaseType", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkParametricCatalanMinimal::GetNumberOfGenerationsFromBaseType( arg_0.c_str());}))
    .function("GetNumberOfGenerationsFromBase", emscripten::optional_override([](vtkParametricCatalanMinimal& self, const std::string & arg_0) -> int {  return self.GetNumberOfGenerationsFromBase( arg_0.c_str());}))
    .function("GetDimension", &vtkParametricCatalanMinimal::GetDimension);
}
