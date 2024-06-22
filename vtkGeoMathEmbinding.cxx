// JavaScript wrapper for vtkGeoMath with embind 
//
// This file was auto-generated using :
/*
node /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/bin/vtkWrapJavaScript.js \
 @/home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkInfovisLayout.js/vtkInfovisLayout.js.Release.args \
 -o \
 /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkInfovisLayout.js/vtkGeoMathEmbinding.cxx \
 /home/jmh/github/vtk/Infovis/Layout/vtkGeoMath.h
*/
#include "vtkEmbindSmartPointerTrait.h"
#include <emscripten.h>
#include <string>
#include "vtkVariant.h"
#include "vtkObjectBase.h"
#include "vtkIndent.h"
#include "vtkGeoMath.h"

template<> void emscripten::internal::raw_destructor<vtkGeoMath>(vtkGeoMath * ptr){ ptr->Delete(); }
EMSCRIPTEN_BINDINGS(vtkGeoMath_class) {
  emscripten::class_<vtkGeoMath, emscripten::base<vtkObject>>("vtkGeoMath")
    .smart_ptr<vtkSmartPointer<vtkGeoMath>>("vtkSmartPointer<vtkGeoMath>")
    .constructor(&vtk::MakeAvtkSmartPointer<vtkGeoMath>)
    .class_function("IsTypeOf", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkGeoMath::IsTypeOf( arg_0.c_str());}))
    .function("IsA", emscripten::optional_override([](vtkGeoMath& self, const std::string & arg_0) -> int {  return self.IsA( arg_0.c_str());}))
    .class_function("SafeDownCast", &vtkGeoMath::SafeDownCast, emscripten::allow_raw_pointers())
    .function("NewInstance", &vtkGeoMath::NewInstance, emscripten::allow_raw_pointers())
    .class_function("GetNumberOfGenerationsFromBaseType", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkGeoMath::GetNumberOfGenerationsFromBaseType( arg_0.c_str());}))
    .function("GetNumberOfGenerationsFromBase", emscripten::optional_override([](vtkGeoMath& self, const std::string & arg_0) -> int {  return self.GetNumberOfGenerationsFromBase( arg_0.c_str());}))
    .class_function("EarthRadiusMeters", &vtkGeoMath::EarthRadiusMeters);
}
