// JavaScript wrapper for vtkMultiThreshold with embind 
//
// This file was auto-generated using :
/*
node /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/bin/vtkWrapJavaScript.js \
 @/home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkFiltersGeneral.js/vtkFiltersGeneral.js.Release.args \
 -o \
 /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkFiltersGeneral.js/vtkMultiThresholdEmbinding.cxx \
 /home/jmh/github/vtk/Filters/General/vtkMultiThreshold.h
*/
#include "vtkEmbindSmartPointerTrait.h"
#include <emscripten.h>
#include <string>
#include "vtkVariant.h"
#include "vtkObjectBase.h"
#include "vtkIndent.h"
#include "vtkMultiThreshold.h"

EMSCRIPTEN_BINDINGS(vtkFiltersGeneral_vtkMultiThreshold_class_enums) {
}
template<> void emscripten::internal::raw_destructor<vtkMultiThreshold>(vtkMultiThreshold * ptr){ ptr->Delete(); }
EMSCRIPTEN_BINDINGS(vtkMultiThreshold_class) {
  using Closure=vtkMultiThreshold::Closure;
  using Norm=vtkMultiThreshold::Norm;
  using SetOperation=vtkMultiThreshold::SetOperation;
  emscripten::class_<vtkMultiThreshold, emscripten::base<vtkMultiBlockDataSetAlgorithm>>("vtkMultiThreshold")
    .smart_ptr<vtkSmartPointer<vtkMultiThreshold>>("vtkSmartPointer<vtkMultiThreshold>")
    .constructor(&vtk::MakeAvtkSmartPointer<vtkMultiThreshold>)
    .class_function("IsTypeOf", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkMultiThreshold::IsTypeOf( arg_0.c_str());}))
    .function("IsA", emscripten::optional_override([](vtkMultiThreshold& self, const std::string & arg_0) -> int {  return self.IsA( arg_0.c_str());}))
    .class_function("SafeDownCast", &vtkMultiThreshold::SafeDownCast, emscripten::allow_raw_pointers())
    .function("NewInstance", &vtkMultiThreshold::NewInstance, emscripten::allow_raw_pointers())
    .class_function("GetNumberOfGenerationsFromBaseType", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkMultiThreshold::GetNumberOfGenerationsFromBaseType( arg_0.c_str());}))
    .function("GetNumberOfGenerationsFromBase", emscripten::optional_override([](vtkMultiThreshold& self, const std::string & arg_0) -> int {  return self.GetNumberOfGenerationsFromBase( arg_0.c_str());}))
    .function("AddIntervalSet", emscripten::select_overload<int(vtkMultiThreshold&, double, double, int, int, int, const std::string &, int, int)>([](vtkMultiThreshold& self, double arg_0, double arg_1, int arg_2, int arg_3, int arg_4, const std::string & arg_5, int arg_6, int arg_7) -> int { return self.AddIntervalSet( arg_0, arg_1, arg_2, arg_3, arg_4, arg_5.c_str(), arg_6, arg_7); }))
    .function("AddIntervalSet", emscripten::select_overload<int(vtkMultiThreshold&, double, double, int, int, int, int, int, int)>([](vtkMultiThreshold& self, double arg_0, double arg_1, int arg_2, int arg_3, int arg_4, int arg_5, int arg_6, int arg_7) -> int { return self.AddIntervalSet( arg_0, arg_1, arg_2, arg_3, arg_4, arg_5, arg_6, arg_7); }))
    .function("AddLowpassIntervalSet", emscripten::optional_override([](vtkMultiThreshold& self, double arg_0, int arg_1, const std::string & arg_2, int arg_3, int arg_4) -> int {  return self.AddLowpassIntervalSet( arg_0, arg_1, arg_2.c_str(), arg_3, arg_4);}))
    .function("AddHighpassIntervalSet", emscripten::optional_override([](vtkMultiThreshold& self, double arg_0, int arg_1, const std::string & arg_2, int arg_3, int arg_4) -> int {  return self.AddHighpassIntervalSet( arg_0, arg_1, arg_2.c_str(), arg_3, arg_4);}))
    .function("AddBandpassIntervalSet", emscripten::optional_override([](vtkMultiThreshold& self, double arg_0, double arg_1, int arg_2, const std::string & arg_3, int arg_4, int arg_5) -> int {  return self.AddBandpassIntervalSet( arg_0, arg_1, arg_2, arg_3.c_str(), arg_4, arg_5);}))
    .function("AddNotchIntervalSet", emscripten::optional_override([](vtkMultiThreshold& self, double arg_0, double arg_1, int arg_2, const std::string & arg_3, int arg_4, int arg_5) -> int {  return self.AddNotchIntervalSet( arg_0, arg_1, arg_2, arg_3.c_str(), arg_4, arg_5);}))
    .function("AddBooleanSet", emscripten::optional_override([](vtkMultiThreshold& self, int arg_0, int arg_1, std::uintptr_t arg_2) -> int {  return self.AddBooleanSet( arg_0, arg_1,reinterpret_cast<int*>(arg_2 * sizeof(int)));}))
    .function("OutputSet", &vtkMultiThreshold::OutputSet)
    .function("Reset", &vtkMultiThreshold::Reset);
}
EMSCRIPTEN_BINDINGS(vtkFiltersGeneral_vtkMultiThreshold_0_2_constants) {
    typedef vtkMultiThreshold::Closure cxx_enum_type;

  const struct { const char *name; cxx_enum_type value; }
    constants[2] = {
      { "vtkMultiThreshold_Closure_OPEN", vtkMultiThreshold::OPEN },
      { "vtkMultiThreshold_Closure_CLOSED", vtkMultiThreshold::CLOSED },
  };
  for (int c = 0; c < 2; c++)
  {
    emscripten::constant(constants[c].name, static_cast<int>(constants[c].value));
  }
}
EMSCRIPTEN_BINDINGS(vtkFiltersGeneral_vtkMultiThreshold_1_2_constants) {
    typedef vtkMultiThreshold::Norm cxx_enum_type;

  const struct { const char *name; cxx_enum_type value; }
    constants[3] = {
      { "vtkMultiThreshold_Norm_LINFINITY_NORM", vtkMultiThreshold::LINFINITY_NORM },
      { "vtkMultiThreshold_Norm_L2_NORM", vtkMultiThreshold::L2_NORM },
      { "vtkMultiThreshold_Norm_L1_NORM", vtkMultiThreshold::L1_NORM },
  };
  for (int c = 0; c < 3; c++)
  {
    emscripten::constant(constants[c].name, static_cast<int>(constants[c].value));
  }
}
EMSCRIPTEN_BINDINGS(vtkFiltersGeneral_vtkMultiThreshold_2_2_constants) {
    typedef vtkMultiThreshold::SetOperation cxx_enum_type;

  const struct { const char *name; cxx_enum_type value; }
    constants[5] = {
      { "vtkMultiThreshold_SetOperation_AND", vtkMultiThreshold::AND },
      { "vtkMultiThreshold_SetOperation_OR", vtkMultiThreshold::OR },
      { "vtkMultiThreshold_SetOperation_XOR", vtkMultiThreshold::XOR },
      { "vtkMultiThreshold_SetOperation_WOR", vtkMultiThreshold::WOR },
      { "vtkMultiThreshold_SetOperation_NAND", vtkMultiThreshold::NAND },
  };
  for (int c = 0; c < 5; c++)
  {
    emscripten::constant(constants[c].name, static_cast<int>(constants[c].value));
  }
}
