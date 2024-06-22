// JavaScript wrapper for vtkParametricSuperEllipsoid with embind 
//
// This file was auto-generated using :
/*
node /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/bin/vtkWrapJavaScript.js \
 @/home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkCommonComputationalGeometry.js/vtkCommonComputationalGeometry.js.Release.args \
 -o \
 /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkCommonComputationalGeometry.js/vtkParametricSuperEllipsoidEmbinding.cxx \
 /home/jmh/github/vtk/Common/ComputationalGeometry/vtkParametricSuperEllipsoid.h
*/
#include "vtkEmbindSmartPointerTrait.h"
#include <emscripten.h>
#include <string>
#include "vtkVariant.h"
#include "vtkObjectBase.h"
#include "vtkIndent.h"
#include "vtkParametricSuperEllipsoid.h"

template<> void emscripten::internal::raw_destructor<vtkParametricSuperEllipsoid>(vtkParametricSuperEllipsoid * ptr){ ptr->Delete(); }
EMSCRIPTEN_BINDINGS(vtkParametricSuperEllipsoid_class) {
  emscripten::class_<vtkParametricSuperEllipsoid, emscripten::base<vtkParametricFunction>>("vtkParametricSuperEllipsoid")
    .smart_ptr<vtkSmartPointer<vtkParametricSuperEllipsoid>>("vtkSmartPointer<vtkParametricSuperEllipsoid>")
    .constructor(&vtk::MakeVTKSmartPtr<vtkParametricSuperEllipsoid>)
    .class_function("IsTypeOf", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkParametricSuperEllipsoid::IsTypeOf( arg_0.c_str());}))
    .function("IsA", emscripten::optional_override([](vtkParametricSuperEllipsoid& self, const std::string & arg_0) -> int {  return self.IsA( arg_0.c_str());}))
    .class_function("SafeDownCast", &vtkParametricSuperEllipsoid::SafeDownCast, emscripten::allow_raw_pointers())
    .function("NewInstance", &vtkParametricSuperEllipsoid::NewInstance, emscripten::allow_raw_pointers())
    .class_function("GetNumberOfGenerationsFromBaseType", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkParametricSuperEllipsoid::GetNumberOfGenerationsFromBaseType( arg_0.c_str());}))
    .function("GetNumberOfGenerationsFromBase", emscripten::optional_override([](vtkParametricSuperEllipsoid& self, const std::string & arg_0) -> int {  return self.GetNumberOfGenerationsFromBase( arg_0.c_str());}))
    .function("GetDimension", &vtkParametricSuperEllipsoid::GetDimension)
    .function("SetXRadius", &vtkParametricSuperEllipsoid::SetXRadius)
    .function("GetXRadius", &vtkParametricSuperEllipsoid::GetXRadius)
    .function("SetYRadius", &vtkParametricSuperEllipsoid::SetYRadius)
    .function("GetYRadius", &vtkParametricSuperEllipsoid::GetYRadius)
    .function("SetZRadius", &vtkParametricSuperEllipsoid::SetZRadius)
    .function("GetZRadius", &vtkParametricSuperEllipsoid::GetZRadius)
    .function("SetN1", &vtkParametricSuperEllipsoid::SetN1)
    .function("GetN1", &vtkParametricSuperEllipsoid::GetN1)
    .function("SetN2", &vtkParametricSuperEllipsoid::SetN2)
    .function("GetN2", &vtkParametricSuperEllipsoid::GetN2);
}
