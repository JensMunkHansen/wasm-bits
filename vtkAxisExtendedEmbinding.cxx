// JavaScript wrapper for vtkAxisExtended with embind 
//
// This file was auto-generated using :
/*
node /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/bin/vtkWrapJavaScript.js \
 @/home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkChartsCore.js/vtkChartsCore.js.Release.args \
 -o \
 /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkChartsCore.js/vtkAxisExtendedEmbinding.cxx \
 /home/jmh/github/vtk/Charts/Core/vtkAxisExtended.h
*/
#include "vtkEmbindSmartPointerTrait.h"
#include <emscripten.h>
#include <string>
#include "vtkVariant.h"
#include "vtkObjectBase.h"
#include "vtkIndent.h"
#include "vtkVector.h"
#include "vtkAxisExtended.h"

template<> void emscripten::internal::raw_destructor<vtkAxisExtended>(vtkAxisExtended * ptr){ ptr->Delete(); }
EMSCRIPTEN_BINDINGS(vtkAxisExtended_class) {
  emscripten::class_<vtkAxisExtended, emscripten::base<vtkObject>>("vtkAxisExtended")
    .smart_ptr<vtkSmartPointer<vtkAxisExtended>>("vtkSmartPointer<vtkAxisExtended>")
    .constructor(&vtk::MakeAvtkSmartPointer<vtkAxisExtended>)
    .class_function("IsTypeOf", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkAxisExtended::IsTypeOf( arg_0.c_str());}))
    .function("IsA", emscripten::optional_override([](vtkAxisExtended& self, const std::string & arg_0) -> int {  return self.IsA( arg_0.c_str());}))
    .class_function("SafeDownCast", &vtkAxisExtended::SafeDownCast, emscripten::allow_raw_pointers())
    .function("NewInstance", &vtkAxisExtended::NewInstance, emscripten::allow_raw_pointers())
    .class_function("GetNumberOfGenerationsFromBaseType", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkAxisExtended::GetNumberOfGenerationsFromBaseType( arg_0.c_str());}))
    .function("GetNumberOfGenerationsFromBase", emscripten::optional_override([](vtkAxisExtended& self, const std::string & arg_0) -> int {  return self.GetNumberOfGenerationsFromBase( arg_0.c_str());}))
    .class_function("Simplicity", &vtkAxisExtended::Simplicity)
    .class_function("SimplicityMax", &vtkAxisExtended::SimplicityMax)
    .class_function("Coverage", &vtkAxisExtended::Coverage)
    .class_function("CoverageMax", &vtkAxisExtended::CoverageMax)
    .class_function("Density", &vtkAxisExtended::Density)
    .class_function("DensityMax", &vtkAxisExtended::DensityMax)
    .class_function("FormatLegibilityScore", &vtkAxisExtended::FormatLegibilityScore)
    .class_function("FormatStringLength", &vtkAxisExtended::FormatStringLength)
    .function("GenerateExtendedTickLabels", &vtkAxisExtended::GenerateExtendedTickLabels)
    .function("GetFontSize", &vtkAxisExtended::GetFontSize)
    .function("SetFontSize", &vtkAxisExtended::SetFontSize)
    .function("GetDesiredFontSize", &vtkAxisExtended::GetDesiredFontSize)
    .function("SetDesiredFontSize", &vtkAxisExtended::SetDesiredFontSize)
    .function("GetPrecision", &vtkAxisExtended::GetPrecision)
    .function("SetPrecision", &vtkAxisExtended::SetPrecision)
    .function("GetLabelFormat", &vtkAxisExtended::GetLabelFormat)
    .function("SetLabelFormat", &vtkAxisExtended::SetLabelFormat)
    .function("GetOrientation", &vtkAxisExtended::GetOrientation)
    .function("SetOrientation", &vtkAxisExtended::SetOrientation)
    .function("GetIsAxisVertical", &vtkAxisExtended::GetIsAxisVertical)
    .function("SetIsAxisVertical", &vtkAxisExtended::SetIsAxisVertical);
}
