// JavaScript wrapper for vtkColorSeries with embind 
//
// This file was auto-generated using :
/*
node /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/bin/vtkWrapJavaScript.js \
 @/home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkCommonColor.js/vtkCommonColor.js.Release.args \
 -o \
 /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkCommonColor.js/vtkColorSeriesEmbinding.cxx \
 /home/jmh/github/vtk/Common/Color/vtkColorSeries.h
*/
#include "vtkEmbindSmartPointerTrait.h"
#include <emscripten.h>
#include <string>
#include "vtkVariant.h"
#include "vtkObjectBase.h"
#include "vtkIndent.h"
#include "vtkStdString.h"
#include "vtkColor.h"
#include "vtkLookupTable.h"
#include "vtkColorSeries.h"

EMSCRIPTEN_BINDINGS(vtkCommonColor_vtkColorSeries_class_enums) {
}
template<> void emscripten::internal::raw_destructor<vtkColorSeries>(vtkColorSeries * ptr){ ptr->Delete(); }
EMSCRIPTEN_BINDINGS(vtkColorSeries_class) {
  using ColorSchemes=vtkColorSeries::ColorSchemes;
  using LUTMode=vtkColorSeries::LUTMode;
  emscripten::class_<vtkColorSeries, emscripten::base<vtkObject>>("vtkColorSeries")
    .smart_ptr<vtkSmartPointer<vtkColorSeries>>("vtkSmartPointer<vtkColorSeries>")
    .constructor(&vtk::MakeAvtkSmartPointer<vtkColorSeries>)
    .class_function("IsTypeOf", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkColorSeries::IsTypeOf( arg_0.c_str());}))
    .function("IsA", emscripten::optional_override([](vtkColorSeries& self, const std::string & arg_0) -> int {  return self.IsA( arg_0.c_str());}))
    .class_function("SafeDownCast", &vtkColorSeries::SafeDownCast, emscripten::allow_raw_pointers())
    .function("NewInstance", &vtkColorSeries::NewInstance, emscripten::allow_raw_pointers())
    .class_function("GetNumberOfGenerationsFromBaseType", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkColorSeries::GetNumberOfGenerationsFromBaseType( arg_0.c_str());}))
    .function("GetNumberOfGenerationsFromBase", emscripten::optional_override([](vtkColorSeries& self, const std::string & arg_0) -> int {  return self.GetNumberOfGenerationsFromBase( arg_0.c_str());}))
    .function("SetColorScheme", &vtkColorSeries::SetColorScheme)
    .function("SetColorSchemeByName", &vtkColorSeries::SetColorSchemeByName)
    .function("GetNumberOfColorSchemes", &vtkColorSeries::GetNumberOfColorSchemes)
    .function("GetColorSchemeName", &vtkColorSeries::GetColorSchemeName)
    .function("SetColorSchemeName", &vtkColorSeries::SetColorSchemeName)
    .function("GetColorScheme", &vtkColorSeries::GetColorScheme)
    .function("GetNumberOfColors", &vtkColorSeries::GetNumberOfColors)
    .function("SetNumberOfColors", &vtkColorSeries::SetNumberOfColors)
    .function("GetColor", &vtkColorSeries::GetColor)
    .function("GetColorRepeating", &vtkColorSeries::GetColorRepeating)
    .function("SetColor", &vtkColorSeries::SetColor)
    .function("AddColor", &vtkColorSeries::AddColor)
    .function("InsertColor", &vtkColorSeries::InsertColor)
    .function("RemoveColor", &vtkColorSeries::RemoveColor)
    .function("ClearColors", &vtkColorSeries::ClearColors)
    .function("DeepCopy", &vtkColorSeries::DeepCopy, emscripten::allow_raw_pointers())
    .function("BuildLookupTable", &vtkColorSeries::BuildLookupTable, emscripten::allow_raw_pointers())
    .function("CreateLookupTable", &vtkColorSeries::CreateLookupTable, emscripten::allow_raw_pointers());
}
EMSCRIPTEN_BINDINGS(vtkCommonColor_vtkColorSeries_0_2_constants) {
    typedef vtkColorSeries::ColorSchemes cxx_enum_type;

  const struct { const char *name; cxx_enum_type value; }
    constants[63] = {
      { "vtkColorSeries_ColorSchemes_SPECTRUM", vtkColorSeries::SPECTRUM },
      { "vtkColorSeries_ColorSchemes_WARM", vtkColorSeries::WARM },
      { "vtkColorSeries_ColorSchemes_COOL", vtkColorSeries::COOL },
      { "vtkColorSeries_ColorSchemes_BLUES", vtkColorSeries::BLUES },
      { "vtkColorSeries_ColorSchemes_WILD_FLOWER", vtkColorSeries::WILD_FLOWER },
      { "vtkColorSeries_ColorSchemes_CITRUS", vtkColorSeries::CITRUS },
      { "vtkColorSeries_ColorSchemes_BREWER_DIVERGING_PURPLE_ORANGE_11", vtkColorSeries::BREWER_DIVERGING_PURPLE_ORANGE_11 },
      { "vtkColorSeries_ColorSchemes_BREWER_DIVERGING_PURPLE_ORANGE_10", vtkColorSeries::BREWER_DIVERGING_PURPLE_ORANGE_10 },
      { "vtkColorSeries_ColorSchemes_BREWER_DIVERGING_PURPLE_ORANGE_9", vtkColorSeries::BREWER_DIVERGING_PURPLE_ORANGE_9 },
      { "vtkColorSeries_ColorSchemes_BREWER_DIVERGING_PURPLE_ORANGE_8", vtkColorSeries::BREWER_DIVERGING_PURPLE_ORANGE_8 },
      { "vtkColorSeries_ColorSchemes_BREWER_DIVERGING_PURPLE_ORANGE_7", vtkColorSeries::BREWER_DIVERGING_PURPLE_ORANGE_7 },
      { "vtkColorSeries_ColorSchemes_BREWER_DIVERGING_PURPLE_ORANGE_6", vtkColorSeries::BREWER_DIVERGING_PURPLE_ORANGE_6 },
      { "vtkColorSeries_ColorSchemes_BREWER_DIVERGING_PURPLE_ORANGE_5", vtkColorSeries::BREWER_DIVERGING_PURPLE_ORANGE_5 },
      { "vtkColorSeries_ColorSchemes_BREWER_DIVERGING_PURPLE_ORANGE_4", vtkColorSeries::BREWER_DIVERGING_PURPLE_ORANGE_4 },
      { "vtkColorSeries_ColorSchemes_BREWER_DIVERGING_PURPLE_ORANGE_3", vtkColorSeries::BREWER_DIVERGING_PURPLE_ORANGE_3 },
      { "vtkColorSeries_ColorSchemes_BREWER_DIVERGING_SPECTRAL_11", vtkColorSeries::BREWER_DIVERGING_SPECTRAL_11 },
      { "vtkColorSeries_ColorSchemes_BREWER_DIVERGING_SPECTRAL_10", vtkColorSeries::BREWER_DIVERGING_SPECTRAL_10 },
      { "vtkColorSeries_ColorSchemes_BREWER_DIVERGING_SPECTRAL_9", vtkColorSeries::BREWER_DIVERGING_SPECTRAL_9 },
      { "vtkColorSeries_ColorSchemes_BREWER_DIVERGING_SPECTRAL_8", vtkColorSeries::BREWER_DIVERGING_SPECTRAL_8 },
      { "vtkColorSeries_ColorSchemes_BREWER_DIVERGING_SPECTRAL_7", vtkColorSeries::BREWER_DIVERGING_SPECTRAL_7 },
      { "vtkColorSeries_ColorSchemes_BREWER_DIVERGING_SPECTRAL_6", vtkColorSeries::BREWER_DIVERGING_SPECTRAL_6 },
      { "vtkColorSeries_ColorSchemes_BREWER_DIVERGING_SPECTRAL_5", vtkColorSeries::BREWER_DIVERGING_SPECTRAL_5 },
      { "vtkColorSeries_ColorSchemes_BREWER_DIVERGING_SPECTRAL_4", vtkColorSeries::BREWER_DIVERGING_SPECTRAL_4 },
      { "vtkColorSeries_ColorSchemes_BREWER_DIVERGING_SPECTRAL_3", vtkColorSeries::BREWER_DIVERGING_SPECTRAL_3 },
      { "vtkColorSeries_ColorSchemes_BREWER_DIVERGING_BROWN_BLUE_GREEN_11", vtkColorSeries::BREWER_DIVERGING_BROWN_BLUE_GREEN_11 },
      { "vtkColorSeries_ColorSchemes_BREWER_DIVERGING_BROWN_BLUE_GREEN_10", vtkColorSeries::BREWER_DIVERGING_BROWN_BLUE_GREEN_10 },
      { "vtkColorSeries_ColorSchemes_BREWER_DIVERGING_BROWN_BLUE_GREEN_9", vtkColorSeries::BREWER_DIVERGING_BROWN_BLUE_GREEN_9 },
      { "vtkColorSeries_ColorSchemes_BREWER_DIVERGING_BROWN_BLUE_GREEN_8", vtkColorSeries::BREWER_DIVERGING_BROWN_BLUE_GREEN_8 },
      { "vtkColorSeries_ColorSchemes_BREWER_DIVERGING_BROWN_BLUE_GREEN_7", vtkColorSeries::BREWER_DIVERGING_BROWN_BLUE_GREEN_7 },
      { "vtkColorSeries_ColorSchemes_BREWER_DIVERGING_BROWN_BLUE_GREEN_6", vtkColorSeries::BREWER_DIVERGING_BROWN_BLUE_GREEN_6 },
      { "vtkColorSeries_ColorSchemes_BREWER_DIVERGING_BROWN_BLUE_GREEN_5", vtkColorSeries::BREWER_DIVERGING_BROWN_BLUE_GREEN_5 },
      { "vtkColorSeries_ColorSchemes_BREWER_DIVERGING_BROWN_BLUE_GREEN_4", vtkColorSeries::BREWER_DIVERGING_BROWN_BLUE_GREEN_4 },
      { "vtkColorSeries_ColorSchemes_BREWER_DIVERGING_BROWN_BLUE_GREEN_3", vtkColorSeries::BREWER_DIVERGING_BROWN_BLUE_GREEN_3 },
      { "vtkColorSeries_ColorSchemes_BREWER_SEQUENTIAL_BLUE_GREEN_9", vtkColorSeries::BREWER_SEQUENTIAL_BLUE_GREEN_9 },
      { "vtkColorSeries_ColorSchemes_BREWER_SEQUENTIAL_BLUE_GREEN_8", vtkColorSeries::BREWER_SEQUENTIAL_BLUE_GREEN_8 },
      { "vtkColorSeries_ColorSchemes_BREWER_SEQUENTIAL_BLUE_GREEN_7", vtkColorSeries::BREWER_SEQUENTIAL_BLUE_GREEN_7 },
      { "vtkColorSeries_ColorSchemes_BREWER_SEQUENTIAL_BLUE_GREEN_6", vtkColorSeries::BREWER_SEQUENTIAL_BLUE_GREEN_6 },
      { "vtkColorSeries_ColorSchemes_BREWER_SEQUENTIAL_BLUE_GREEN_5", vtkColorSeries::BREWER_SEQUENTIAL_BLUE_GREEN_5 },
      { "vtkColorSeries_ColorSchemes_BREWER_SEQUENTIAL_BLUE_GREEN_4", vtkColorSeries::BREWER_SEQUENTIAL_BLUE_GREEN_4 },
      { "vtkColorSeries_ColorSchemes_BREWER_SEQUENTIAL_BLUE_GREEN_3", vtkColorSeries::BREWER_SEQUENTIAL_BLUE_GREEN_3 },
      { "vtkColorSeries_ColorSchemes_BREWER_SEQUENTIAL_YELLOW_ORANGE_BROWN_9", vtkColorSeries::BREWER_SEQUENTIAL_YELLOW_ORANGE_BROWN_9 },
      { "vtkColorSeries_ColorSchemes_BREWER_SEQUENTIAL_YELLOW_ORANGE_BROWN_8", vtkColorSeries::BREWER_SEQUENTIAL_YELLOW_ORANGE_BROWN_8 },
      { "vtkColorSeries_ColorSchemes_BREWER_SEQUENTIAL_YELLOW_ORANGE_BROWN_7", vtkColorSeries::BREWER_SEQUENTIAL_YELLOW_ORANGE_BROWN_7 },
      { "vtkColorSeries_ColorSchemes_BREWER_SEQUENTIAL_YELLOW_ORANGE_BROWN_6", vtkColorSeries::BREWER_SEQUENTIAL_YELLOW_ORANGE_BROWN_6 },
      { "vtkColorSeries_ColorSchemes_BREWER_SEQUENTIAL_YELLOW_ORANGE_BROWN_5", vtkColorSeries::BREWER_SEQUENTIAL_YELLOW_ORANGE_BROWN_5 },
      { "vtkColorSeries_ColorSchemes_BREWER_SEQUENTIAL_YELLOW_ORANGE_BROWN_4", vtkColorSeries::BREWER_SEQUENTIAL_YELLOW_ORANGE_BROWN_4 },
      { "vtkColorSeries_ColorSchemes_BREWER_SEQUENTIAL_YELLOW_ORANGE_BROWN_3", vtkColorSeries::BREWER_SEQUENTIAL_YELLOW_ORANGE_BROWN_3 },
      { "vtkColorSeries_ColorSchemes_BREWER_SEQUENTIAL_BLUE_PURPLE_9", vtkColorSeries::BREWER_SEQUENTIAL_BLUE_PURPLE_9 },
      { "vtkColorSeries_ColorSchemes_BREWER_SEQUENTIAL_BLUE_PURPLE_8", vtkColorSeries::BREWER_SEQUENTIAL_BLUE_PURPLE_8 },
      { "vtkColorSeries_ColorSchemes_BREWER_SEQUENTIAL_BLUE_PURPLE_7", vtkColorSeries::BREWER_SEQUENTIAL_BLUE_PURPLE_7 },
      { "vtkColorSeries_ColorSchemes_BREWER_SEQUENTIAL_BLUE_PURPLE_6", vtkColorSeries::BREWER_SEQUENTIAL_BLUE_PURPLE_6 },
      { "vtkColorSeries_ColorSchemes_BREWER_SEQUENTIAL_BLUE_PURPLE_5", vtkColorSeries::BREWER_SEQUENTIAL_BLUE_PURPLE_5 },
      { "vtkColorSeries_ColorSchemes_BREWER_SEQUENTIAL_BLUE_PURPLE_4", vtkColorSeries::BREWER_SEQUENTIAL_BLUE_PURPLE_4 },
      { "vtkColorSeries_ColorSchemes_BREWER_SEQUENTIAL_BLUE_PURPLE_3", vtkColorSeries::BREWER_SEQUENTIAL_BLUE_PURPLE_3 },
      { "vtkColorSeries_ColorSchemes_BREWER_QUALITATIVE_ACCENT", vtkColorSeries::BREWER_QUALITATIVE_ACCENT },
      { "vtkColorSeries_ColorSchemes_BREWER_QUALITATIVE_DARK2", vtkColorSeries::BREWER_QUALITATIVE_DARK2 },
      { "vtkColorSeries_ColorSchemes_BREWER_QUALITATIVE_SET2", vtkColorSeries::BREWER_QUALITATIVE_SET2 },
      { "vtkColorSeries_ColorSchemes_BREWER_QUALITATIVE_PASTEL2", vtkColorSeries::BREWER_QUALITATIVE_PASTEL2 },
      { "vtkColorSeries_ColorSchemes_BREWER_QUALITATIVE_PASTEL1", vtkColorSeries::BREWER_QUALITATIVE_PASTEL1 },
      { "vtkColorSeries_ColorSchemes_BREWER_QUALITATIVE_SET1", vtkColorSeries::BREWER_QUALITATIVE_SET1 },
      { "vtkColorSeries_ColorSchemes_BREWER_QUALITATIVE_PAIRED", vtkColorSeries::BREWER_QUALITATIVE_PAIRED },
      { "vtkColorSeries_ColorSchemes_BREWER_QUALITATIVE_SET3", vtkColorSeries::BREWER_QUALITATIVE_SET3 },
      { "vtkColorSeries_ColorSchemes_CUSTOM", vtkColorSeries::CUSTOM },
  };
  for (int c = 0; c < 63; c++)
  {
    emscripten::constant(constants[c].name, static_cast<int>(constants[c].value));
  }
}
EMSCRIPTEN_BINDINGS(vtkCommonColor_vtkColorSeries_1_2_constants) {
    typedef vtkColorSeries::LUTMode cxx_enum_type;

  const struct { const char *name; cxx_enum_type value; }
    constants[2] = {
      { "vtkColorSeries_LUTMode_ORDINAL", vtkColorSeries::ORDINAL },
      { "vtkColorSeries_LUTMode_CATEGORICAL", vtkColorSeries::CATEGORICAL },
  };
  for (int c = 0; c < 2; c++)
  {
    emscripten::constant(constants[c].name, static_cast<int>(constants[c].value));
  }
}
