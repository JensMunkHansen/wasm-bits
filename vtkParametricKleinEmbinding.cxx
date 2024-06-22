// JavaScript wrapper for vtkParametricKlein with embind 
//
// This file was auto-generated using :
/*
node /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/bin/vtkWrapJavaScript.js \
 @/home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkCommonComputationalGeometry.js/vtkCommonComputationalGeometry.js.Release.args \
 -o \
 /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkCommonComputationalGeometry.js/vtkParametricKleinEmbinding.cxx \
 /home/jmh/github/vtk/Common/ComputationalGeometry/vtkParametricKlein.h
*/
#include "vtkEmbindSmartPointerTrait.h"
#include <emscripten.h>
#include <string>
#include "vtkVariant.h"
#include "vtkObjectBase.h"
#include "vtkIndent.h"
#include "vtkParametricKlein.h"

template<> void emscripten::internal::raw_destructor<vtkParametricKlein>(vtkParametricKlein * ptr){ ptr->Delete(); }
EMSCRIPTEN_BINDINGS(vtkParametricKlein_class) {
  emscripten::class_<vtkParametricKlein, emscripten::base<vtkParametricFunction>>("vtkParametricKlein")
    .smart_ptr<vtkSmartPointer<vtkParametricKlein>>("vtkSmartPointer<vtkParametricKlein>")
    .constructor(&vtk::MakeVTKSmartPtr<vtkParametricKlein>)
    .class_function("IsTypeOf", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkParametricKlein::IsTypeOf( arg_0.c_str());}))
    .function("IsA", emscripten::optional_override([](vtkParametricKlein& self, const std::string & arg_0) -> int {  return self.IsA( arg_0.c_str());}))
    .class_function("SafeDownCast", &vtkParametricKlein::SafeDownCast, emscripten::allow_raw_pointers())
    .function("NewInstance", &vtkParametricKlein::NewInstance, emscripten::allow_raw_pointers())
    .class_function("GetNumberOfGenerationsFromBaseType", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkParametricKlein::GetNumberOfGenerationsFromBaseType( arg_0.c_str());}))
    .function("GetNumberOfGenerationsFromBase", emscripten::optional_override([](vtkParametricKlein& self, const std::string & arg_0) -> int {  return self.GetNumberOfGenerationsFromBase( arg_0.c_str());}))
    .function("GetDimension", &vtkParametricKlein::GetDimension);
}
