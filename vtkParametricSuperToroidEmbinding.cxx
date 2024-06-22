// JavaScript wrapper for vtkParametricSuperToroid with embind 
//
// This file was auto-generated using :
/*
node /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/bin/vtkWrapJavaScript.js \
 @/home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkCommonComputationalGeometry.js/vtkCommonComputationalGeometry.js.Release.args \
 -o \
 /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkCommonComputationalGeometry.js/vtkParametricSuperToroidEmbinding.cxx \
 /home/jmh/github/vtk/Common/ComputationalGeometry/vtkParametricSuperToroid.h
*/
#include "vtkEmbindSmartPointerTrait.h"
#include <emscripten.h>
#include <string>
#include "vtkVariant.h"
#include "vtkObjectBase.h"
#include "vtkIndent.h"
#include "vtkParametricSuperToroid.h"

template<> void emscripten::internal::raw_destructor<vtkParametricSuperToroid>(vtkParametricSuperToroid * ptr){ ptr->Delete(); }
EMSCRIPTEN_BINDINGS(vtkParametricSuperToroid_class) {
  emscripten::class_<vtkParametricSuperToroid, emscripten::base<vtkParametricFunction>>("vtkParametricSuperToroid")
    .smart_ptr<vtkSmartPointer<vtkParametricSuperToroid>>("vtkSmartPointer<vtkParametricSuperToroid>")
    .constructor(&vtk::MakeVTKSmartPtr<vtkParametricSuperToroid>)
    .class_function("IsTypeOf", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkParametricSuperToroid::IsTypeOf( arg_0.c_str());}))
    .function("IsA", emscripten::optional_override([](vtkParametricSuperToroid& self, const std::string & arg_0) -> int {  return self.IsA( arg_0.c_str());}))
    .class_function("SafeDownCast", &vtkParametricSuperToroid::SafeDownCast, emscripten::allow_raw_pointers())
    .function("NewInstance", &vtkParametricSuperToroid::NewInstance, emscripten::allow_raw_pointers())
    .class_function("GetNumberOfGenerationsFromBaseType", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkParametricSuperToroid::GetNumberOfGenerationsFromBaseType( arg_0.c_str());}))
    .function("GetNumberOfGenerationsFromBase", emscripten::optional_override([](vtkParametricSuperToroid& self, const std::string & arg_0) -> int {  return self.GetNumberOfGenerationsFromBase( arg_0.c_str());}))
    .function("GetDimension", &vtkParametricSuperToroid::GetDimension)
    .function("SetRingRadius", &vtkParametricSuperToroid::SetRingRadius)
    .function("GetRingRadius", &vtkParametricSuperToroid::GetRingRadius)
    .function("SetCrossSectionRadius", &vtkParametricSuperToroid::SetCrossSectionRadius)
    .function("GetCrossSectionRadius", &vtkParametricSuperToroid::GetCrossSectionRadius)
    .function("SetXRadius", &vtkParametricSuperToroid::SetXRadius)
    .function("GetXRadius", &vtkParametricSuperToroid::GetXRadius)
    .function("SetYRadius", &vtkParametricSuperToroid::SetYRadius)
    .function("GetYRadius", &vtkParametricSuperToroid::GetYRadius)
    .function("SetZRadius", &vtkParametricSuperToroid::SetZRadius)
    .function("GetZRadius", &vtkParametricSuperToroid::GetZRadius)
    .function("SetN1", &vtkParametricSuperToroid::SetN1)
    .function("GetN1", &vtkParametricSuperToroid::GetN1)
    .function("SetN2", &vtkParametricSuperToroid::SetN2)
    .function("GetN2", &vtkParametricSuperToroid::GetN2);
}
