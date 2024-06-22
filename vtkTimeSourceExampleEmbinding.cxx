// JavaScript wrapper for vtkTimeSourceExample with embind 
//
// This file was auto-generated using :
/*
node /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/bin/vtkWrapJavaScript.js \
 @/home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkFiltersGeneral.js/vtkFiltersGeneral.js.Release.args \
 -o \
 /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkFiltersGeneral.js/vtkTimeSourceExampleEmbinding.cxx \
 /home/jmh/github/vtk/Filters/General/vtkTimeSourceExample.h
*/
#include "vtkEmbindSmartPointerTrait.h"
#include <emscripten.h>
#include <string>
#include "vtkVariant.h"
#include "vtkObjectBase.h"
#include "vtkIndent.h"
#include "vtkTimeSourceExample.h"

template<> void emscripten::internal::raw_destructor<vtkTimeSourceExample>(vtkTimeSourceExample * ptr){ ptr->Delete(); }
EMSCRIPTEN_BINDINGS(vtkTimeSourceExample_class) {
  emscripten::class_<vtkTimeSourceExample, emscripten::base<vtkUnstructuredGridAlgorithm>>("vtkTimeSourceExample")
    .smart_ptr<vtkSmartPointer<vtkTimeSourceExample>>("vtkSmartPointer<vtkTimeSourceExample>")
    .constructor(&vtk::MakeVTKSmartPtr<vtkTimeSourceExample>)
    .class_function("IsTypeOf", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkTimeSourceExample::IsTypeOf( arg_0.c_str());}))
    .function("IsA", emscripten::optional_override([](vtkTimeSourceExample& self, const std::string & arg_0) -> int {  return self.IsA( arg_0.c_str());}))
    .class_function("SafeDownCast", &vtkTimeSourceExample::SafeDownCast, emscripten::allow_raw_pointers())
    .function("NewInstance", &vtkTimeSourceExample::NewInstance, emscripten::allow_raw_pointers())
    .class_function("GetNumberOfGenerationsFromBaseType", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkTimeSourceExample::GetNumberOfGenerationsFromBaseType( arg_0.c_str());}))
    .function("GetNumberOfGenerationsFromBase", emscripten::optional_override([](vtkTimeSourceExample& self, const std::string & arg_0) -> int {  return self.GetNumberOfGenerationsFromBase( arg_0.c_str());}))
    .function("SetAnalytic", &vtkTimeSourceExample::SetAnalytic)
    .function("GetAnalyticMinValue", &vtkTimeSourceExample::GetAnalyticMinValue)
    .function("GetAnalyticMaxValue", &vtkTimeSourceExample::GetAnalyticMaxValue)
    .function("GetAnalytic", &vtkTimeSourceExample::GetAnalytic)
    .function("AnalyticOn", &vtkTimeSourceExample::AnalyticOn)
    .function("AnalyticOff", &vtkTimeSourceExample::AnalyticOff)
    .function("SetXAmplitude", &vtkTimeSourceExample::SetXAmplitude)
    .function("GetXAmplitude", &vtkTimeSourceExample::GetXAmplitude)
    .function("SetYAmplitude", &vtkTimeSourceExample::SetYAmplitude)
    .function("GetYAmplitude", &vtkTimeSourceExample::GetYAmplitude)
    .function("SetGrowing", &vtkTimeSourceExample::SetGrowing)
    .function("GetGrowingMinValue", &vtkTimeSourceExample::GetGrowingMinValue)
    .function("GetGrowingMaxValue", &vtkTimeSourceExample::GetGrowingMaxValue)
    .function("GetGrowing", &vtkTimeSourceExample::GetGrowing)
    .function("GrowingOn", &vtkTimeSourceExample::GrowingOn)
    .function("GrowingOff", &vtkTimeSourceExample::GrowingOff);
}
