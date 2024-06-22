// JavaScript wrapper for vtkLinkEdgels with embind 
//
// This file was auto-generated using :
/*
node /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/bin/vtkWrapJavaScript.js \
 @/home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkFiltersGeneral.js/vtkFiltersGeneral.js.Release.args \
 -o \
 /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkFiltersGeneral.js/vtkLinkEdgelsEmbinding.cxx \
 /home/jmh/github/vtk/Filters/General/vtkLinkEdgels.h
*/
#include "vtkEmbindSmartPointerTrait.h"
#include <emscripten.h>
#include <string>
#include "vtkVariant.h"
#include "vtkObjectBase.h"
#include "vtkIndent.h"
#include "vtkLinkEdgels.h"

template<> void emscripten::internal::raw_destructor<vtkLinkEdgels>(vtkLinkEdgels * ptr){ ptr->Delete(); }
EMSCRIPTEN_BINDINGS(vtkLinkEdgels_class) {
  emscripten::class_<vtkLinkEdgels, emscripten::base<vtkPolyDataAlgorithm>>("vtkLinkEdgels")
    .smart_ptr<vtkSmartPointer<vtkLinkEdgels>>("vtkSmartPointer<vtkLinkEdgels>")
    .constructor(&vtk::MakeVTKSmartPtr<vtkLinkEdgels>)
    .class_function("IsTypeOf", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkLinkEdgels::IsTypeOf( arg_0.c_str());}))
    .function("IsA", emscripten::optional_override([](vtkLinkEdgels& self, const std::string & arg_0) -> int {  return self.IsA( arg_0.c_str());}))
    .class_function("SafeDownCast", &vtkLinkEdgels::SafeDownCast, emscripten::allow_raw_pointers())
    .function("NewInstance", &vtkLinkEdgels::NewInstance, emscripten::allow_raw_pointers())
    .class_function("GetNumberOfGenerationsFromBaseType", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkLinkEdgels::GetNumberOfGenerationsFromBaseType( arg_0.c_str());}))
    .function("GetNumberOfGenerationsFromBase", emscripten::optional_override([](vtkLinkEdgels& self, const std::string & arg_0) -> int {  return self.GetNumberOfGenerationsFromBase( arg_0.c_str());}))
    .function("SetLinkThreshold", &vtkLinkEdgels::SetLinkThreshold)
    .function("GetLinkThreshold", &vtkLinkEdgels::GetLinkThreshold)
    .function("SetPhiThreshold", &vtkLinkEdgels::SetPhiThreshold)
    .function("GetPhiThreshold", &vtkLinkEdgels::GetPhiThreshold)
    .function("SetGradientThreshold", &vtkLinkEdgels::SetGradientThreshold)
    .function("GetGradientThreshold", &vtkLinkEdgels::GetGradientThreshold);
}
