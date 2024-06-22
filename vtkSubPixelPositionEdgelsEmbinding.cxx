// JavaScript wrapper for vtkSubPixelPositionEdgels with embind 
//
// This file was auto-generated using :
/*
node /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/bin/vtkWrapJavaScript.js \
 @/home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkFiltersGeneral.js/vtkFiltersGeneral.js.Release.args \
 -o \
 /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkFiltersGeneral.js/vtkSubPixelPositionEdgelsEmbinding.cxx \
 /home/jmh/github/vtk/Filters/General/vtkSubPixelPositionEdgels.h
*/
#include "vtkEmbindSmartPointerTrait.h"
#include <emscripten.h>
#include <string>
#include "vtkVariant.h"
#include "vtkObjectBase.h"
#include "vtkIndent.h"
#include "vtkStructuredPoints.h"
#include "vtkSubPixelPositionEdgels.h"

template<> void emscripten::internal::raw_destructor<vtkSubPixelPositionEdgels>(vtkSubPixelPositionEdgels * ptr){ ptr->Delete(); }
EMSCRIPTEN_BINDINGS(vtkSubPixelPositionEdgels_class) {
  emscripten::class_<vtkSubPixelPositionEdgels, emscripten::base<vtkPolyDataAlgorithm>>("vtkSubPixelPositionEdgels")
    .smart_ptr<vtkSmartPointer<vtkSubPixelPositionEdgels>>("vtkSmartPointer<vtkSubPixelPositionEdgels>")
    .constructor(&vtk::MakeVTKSmartPtr<vtkSubPixelPositionEdgels>)
    .class_function("IsTypeOf", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkSubPixelPositionEdgels::IsTypeOf( arg_0.c_str());}))
    .function("IsA", emscripten::optional_override([](vtkSubPixelPositionEdgels& self, const std::string & arg_0) -> int {  return self.IsA( arg_0.c_str());}))
    .class_function("SafeDownCast", &vtkSubPixelPositionEdgels::SafeDownCast, emscripten::allow_raw_pointers())
    .function("NewInstance", &vtkSubPixelPositionEdgels::NewInstance, emscripten::allow_raw_pointers())
    .class_function("GetNumberOfGenerationsFromBaseType", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkSubPixelPositionEdgels::GetNumberOfGenerationsFromBaseType( arg_0.c_str());}))
    .function("GetNumberOfGenerationsFromBase", emscripten::optional_override([](vtkSubPixelPositionEdgels& self, const std::string & arg_0) -> int {  return self.GetNumberOfGenerationsFromBase( arg_0.c_str());}))
    .function("SetGradMapsData", &vtkSubPixelPositionEdgels::SetGradMapsData, emscripten::allow_raw_pointers())
    .function("GetGradMaps", &vtkSubPixelPositionEdgels::GetGradMaps, emscripten::allow_raw_pointers())
    .function("SetTargetFlag", &vtkSubPixelPositionEdgels::SetTargetFlag)
    .function("GetTargetFlag", &vtkSubPixelPositionEdgels::GetTargetFlag)
    .function("TargetFlagOn", &vtkSubPixelPositionEdgels::TargetFlagOn)
    .function("TargetFlagOff", &vtkSubPixelPositionEdgels::TargetFlagOff)
    .function("SetTargetValue", &vtkSubPixelPositionEdgels::SetTargetValue)
    .function("GetTargetValue", &vtkSubPixelPositionEdgels::GetTargetValue);
}
