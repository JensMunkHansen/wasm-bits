// JavaScript wrapper for vtkParametricEllipsoid with embind 
//
// This file was auto-generated using :
/*
node /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/bin/vtkWrapJavaScript.js \
 @/home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkCommonComputationalGeometry.js/vtkCommonComputationalGeometry.js.Release.args \
 -o \
 /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkCommonComputationalGeometry.js/vtkParametricEllipsoidEmbinding.cxx \
 /home/jmh/github/vtk/Common/ComputationalGeometry/vtkParametricEllipsoid.h
*/
#include "vtkEmbindSmartPointerTrait.h"
#include <emscripten.h>
#include <string>
#include "vtkVariant.h"
#include "vtkObjectBase.h"
#include "vtkIndent.h"
#include "vtkParametricEllipsoid.h"

template<> void emscripten::internal::raw_destructor<vtkParametricEllipsoid>(vtkParametricEllipsoid * ptr){ ptr->Delete(); }
EMSCRIPTEN_BINDINGS(vtkParametricEllipsoid_class) {
  emscripten::class_<vtkParametricEllipsoid, emscripten::base<vtkParametricFunction>>("vtkParametricEllipsoid")
    .smart_ptr<vtkSmartPointer<vtkParametricEllipsoid>>("vtkSmartPointer<vtkParametricEllipsoid>")
    .constructor(&vtk::MakeAvtkSmartPointer<vtkParametricEllipsoid>)
    .class_function("IsTypeOf", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkParametricEllipsoid::IsTypeOf( arg_0.c_str());}))
    .function("IsA", emscripten::optional_override([](vtkParametricEllipsoid& self, const std::string & arg_0) -> int {  return self.IsA( arg_0.c_str());}))
    .class_function("SafeDownCast", &vtkParametricEllipsoid::SafeDownCast, emscripten::allow_raw_pointers())
    .function("NewInstance", &vtkParametricEllipsoid::NewInstance, emscripten::allow_raw_pointers())
    .class_function("GetNumberOfGenerationsFromBaseType", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkParametricEllipsoid::GetNumberOfGenerationsFromBaseType( arg_0.c_str());}))
    .function("GetNumberOfGenerationsFromBase", emscripten::optional_override([](vtkParametricEllipsoid& self, const std::string & arg_0) -> int {  return self.GetNumberOfGenerationsFromBase( arg_0.c_str());}))
    .function("GetDimension", &vtkParametricEllipsoid::GetDimension)
    .function("SetXRadius", &vtkParametricEllipsoid::SetXRadius)
    .function("GetXRadius", &vtkParametricEllipsoid::GetXRadius)
    .function("SetYRadius", &vtkParametricEllipsoid::SetYRadius)
    .function("GetYRadius", &vtkParametricEllipsoid::GetYRadius)
    .function("SetZRadius", &vtkParametricEllipsoid::SetZRadius)
    .function("GetZRadius", &vtkParametricEllipsoid::GetZRadius);
}
