// JavaScript wrapper for vtkSphericalHarmonics with embind 
//
// This file was auto-generated using :
/*
node /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/bin/vtkWrapJavaScript.js \
 @/home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkFiltersGeneral.js/vtkFiltersGeneral.js.Release.args \
 -o \
 /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkFiltersGeneral.js/vtkSphericalHarmonicsEmbinding.cxx \
 /home/jmh/github/vtk/Filters/General/vtkSphericalHarmonics.h
*/
#include "vtkEmbindSmartPointerTrait.h"
#include <emscripten.h>
#include <string>
#include "vtkVariant.h"
#include "vtkObjectBase.h"
#include "vtkIndent.h"
#include "vtkSphericalHarmonics.h"

template<> void emscripten::internal::raw_destructor<vtkSphericalHarmonics>(vtkSphericalHarmonics * ptr){ ptr->Delete(); }
EMSCRIPTEN_BINDINGS(vtkSphericalHarmonics_class) {
  emscripten::class_<vtkSphericalHarmonics, emscripten::base<vtkImageAlgorithm>>("vtkSphericalHarmonics")
    .smart_ptr<vtkSmartPointer<vtkSphericalHarmonics>>("vtkSmartPointer<vtkSphericalHarmonics>")
    .constructor(&vtk::MakeVTKSmartPtr<vtkSphericalHarmonics>)
    .class_function("IsTypeOf", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkSphericalHarmonics::IsTypeOf( arg_0.c_str());}))
    .function("IsA", emscripten::optional_override([](vtkSphericalHarmonics& self, const std::string & arg_0) -> int {  return self.IsA( arg_0.c_str());}))
    .class_function("SafeDownCast", &vtkSphericalHarmonics::SafeDownCast, emscripten::allow_raw_pointers())
    .function("NewInstance", &vtkSphericalHarmonics::NewInstance, emscripten::allow_raw_pointers())
    .class_function("GetNumberOfGenerationsFromBaseType", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkSphericalHarmonics::GetNumberOfGenerationsFromBaseType( arg_0.c_str());}))
    .function("GetNumberOfGenerationsFromBase", emscripten::optional_override([](vtkSphericalHarmonics& self, const std::string & arg_0) -> int {  return self.GetNumberOfGenerationsFromBase( arg_0.c_str());}));
}
