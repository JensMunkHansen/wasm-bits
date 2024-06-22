// JavaScript wrapper for vtkSplitColumnComponents with embind 
//
// This file was auto-generated using :
/*
node /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/bin/vtkWrapJavaScript.js \
 @/home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkFiltersGeneral.js/vtkFiltersGeneral.js.Release.args \
 -o \
 /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkFiltersGeneral.js/vtkSplitColumnComponentsEmbinding.cxx \
 /home/jmh/github/vtk/Filters/General/vtkSplitColumnComponents.h
*/
#include "vtkEmbindSmartPointerTrait.h"
#include <emscripten.h>
#include <string>
#include "vtkVariant.h"
#include "vtkObjectBase.h"
#include "vtkIndent.h"
#include "vtkInformationStringKey.h"
#include "vtkInformationIntegerKey.h"
#include "vtkSplitColumnComponents.h"

template<> void emscripten::internal::raw_destructor<vtkSplitColumnComponents>(vtkSplitColumnComponents * ptr){ ptr->Delete(); }
EMSCRIPTEN_BINDINGS(vtkSplitColumnComponents_class) {
  emscripten::class_<vtkSplitColumnComponents, emscripten::base<vtkTableAlgorithm>>("vtkSplitColumnComponents")
    .smart_ptr<vtkSmartPointer<vtkSplitColumnComponents>>("vtkSmartPointer<vtkSplitColumnComponents>")
    .constructor(&vtk::MakeVTKSmartPtr<vtkSplitColumnComponents>)
    .class_function("IsTypeOf", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkSplitColumnComponents::IsTypeOf( arg_0.c_str());}))
    .function("IsA", emscripten::optional_override([](vtkSplitColumnComponents& self, const std::string & arg_0) -> int {  return self.IsA( arg_0.c_str());}))
    .class_function("SafeDownCast", &vtkSplitColumnComponents::SafeDownCast, emscripten::allow_raw_pointers())
    .function("NewInstance", &vtkSplitColumnComponents::NewInstance, emscripten::allow_raw_pointers())
    .class_function("GetNumberOfGenerationsFromBaseType", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkSplitColumnComponents::GetNumberOfGenerationsFromBaseType( arg_0.c_str());}))
    .function("GetNumberOfGenerationsFromBase", emscripten::optional_override([](vtkSplitColumnComponents& self, const std::string & arg_0) -> int {  return self.GetNumberOfGenerationsFromBase( arg_0.c_str());}))
    .function("SetCalculateMagnitudes", &vtkSplitColumnComponents::SetCalculateMagnitudes)
    .function("GetCalculateMagnitudes", &vtkSplitColumnComponents::GetCalculateMagnitudes)
    .function("CalculateMagnitudesOn", &vtkSplitColumnComponents::CalculateMagnitudesOn)
    .function("CalculateMagnitudesOff", &vtkSplitColumnComponents::CalculateMagnitudesOff)
    .function("SetNamingMode", &vtkSplitColumnComponents::SetNamingMode)
    .function("GetNamingModeMinValue", &vtkSplitColumnComponents::GetNamingModeMinValue)
    .function("GetNamingModeMaxValue", &vtkSplitColumnComponents::GetNamingModeMaxValue)
    .function("SetNamingModeToNumberWithParens", &vtkSplitColumnComponents::SetNamingModeToNumberWithParens)
    .function("SetNamingModeToNumberWithUnderscores", &vtkSplitColumnComponents::SetNamingModeToNumberWithUnderscores)
    .function("SetNamingModeToNamesWithParens", &vtkSplitColumnComponents::SetNamingModeToNamesWithParens)
    .function("SetNamingModeToNamesWithUnderscores", &vtkSplitColumnComponents::SetNamingModeToNamesWithUnderscores)
    .function("GetNamingMode", &vtkSplitColumnComponents::GetNamingMode)
    .class_function("ORIGINAL_ARRAY_NAME", &vtkSplitColumnComponents::ORIGINAL_ARRAY_NAME, emscripten::allow_raw_pointers())
    .class_function("ORIGINAL_COMPONENT_NUMBER", &vtkSplitColumnComponents::ORIGINAL_COMPONENT_NUMBER, emscripten::allow_raw_pointers());
}
EMSCRIPTEN_BINDINGS(vtkFiltersGeneral_vtkSplitColumnComponents_0_2_constants) {
  const struct { const char *name; int value; }
    constants[4] = {
      { "vtkSplitColumnComponents_NUMBERS_WITH_PARENS", vtkSplitColumnComponents::NUMBERS_WITH_PARENS },
      { "vtkSplitColumnComponents_NAMES_WITH_PARENS", vtkSplitColumnComponents::NAMES_WITH_PARENS },
      { "vtkSplitColumnComponents_NUMBERS_WITH_UNDERSCORES", vtkSplitColumnComponents::NUMBERS_WITH_UNDERSCORES },
      { "vtkSplitColumnComponents_NAMES_WITH_UNDERSCORES", vtkSplitColumnComponents::NAMES_WITH_UNDERSCORES },
  };
  for (int c = 0; c < 4; c++)
  {
    emscripten::constant(constants[c].name, constants[c].value);
  }
}
