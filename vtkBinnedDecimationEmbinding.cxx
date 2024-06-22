// JavaScript wrapper for vtkBinnedDecimation with embind 
//
// This file was auto-generated using :
/*
node /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/bin/vtkWrapJavaScript.js \
 @/home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkFiltersCore.js/vtkFiltersCore.js.Release.args \
 -o \
 /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkFiltersCore.js/vtkBinnedDecimationEmbinding.cxx \
 /home/jmh/github/vtk/Filters/Core/vtkBinnedDecimation.h
*/
#include "vtkEmbindSmartPointerTrait.h"
#include <emscripten.h>
#include <string>
#include "vtkVariant.h"
#include "vtkObjectBase.h"
#include "vtkIndent.h"
#include "vtkBinnedDecimation.h"

template<> void emscripten::internal::raw_destructor<vtkBinnedDecimation>(vtkBinnedDecimation * ptr){ ptr->Delete(); }
EMSCRIPTEN_BINDINGS(vtkBinnedDecimation_class) {
  emscripten::class_<vtkBinnedDecimation, emscripten::base<vtkPolyDataAlgorithm>>("vtkBinnedDecimation")
    .smart_ptr<vtkSmartPointer<vtkBinnedDecimation>>("vtkSmartPointer<vtkBinnedDecimation>")
    .constructor(&vtk::MakeVTKSmartPtr<vtkBinnedDecimation>)
    .class_function("IsTypeOf", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkBinnedDecimation::IsTypeOf( arg_0.c_str());}))
    .function("IsA", emscripten::optional_override([](vtkBinnedDecimation& self, const std::string & arg_0) -> int {  return self.IsA( arg_0.c_str());}))
    .class_function("SafeDownCast", &vtkBinnedDecimation::SafeDownCast, emscripten::allow_raw_pointers())
    .function("NewInstance", &vtkBinnedDecimation::NewInstance, emscripten::allow_raw_pointers())
    .class_function("GetNumberOfGenerationsFromBaseType", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkBinnedDecimation::GetNumberOfGenerationsFromBaseType( arg_0.c_str());}))
    .function("GetNumberOfGenerationsFromBase", emscripten::optional_override([](vtkBinnedDecimation& self, const std::string & arg_0) -> int {  return self.GetNumberOfGenerationsFromBase( arg_0.c_str());}))
    .function("SetNumberOfXDivisions", &vtkBinnedDecimation::SetNumberOfXDivisions)
    .function("SetNumberOfYDivisions", &vtkBinnedDecimation::SetNumberOfYDivisions)
    .function("SetNumberOfZDivisions", &vtkBinnedDecimation::SetNumberOfZDivisions)
    .function("GetNumberOfXDivisions", &vtkBinnedDecimation::GetNumberOfXDivisions)
    .function("GetNumberOfYDivisions", &vtkBinnedDecimation::GetNumberOfYDivisions)
    .function("GetNumberOfZDivisions", &vtkBinnedDecimation::GetNumberOfZDivisions)
    .function("SetNumberOfDivisions", emscripten::select_overload<void(vtkBinnedDecimation&, int, int, int)>([](vtkBinnedDecimation& self, int arg_0, int arg_1, int arg_2) -> void { return self.SetNumberOfDivisions( arg_0, arg_1, arg_2); }))
    .function("SetAutoAdjustNumberOfDivisions", &vtkBinnedDecimation::SetAutoAdjustNumberOfDivisions)
    .function("GetAutoAdjustNumberOfDivisions", &vtkBinnedDecimation::GetAutoAdjustNumberOfDivisions)
    .function("AutoAdjustNumberOfDivisionsOn", &vtkBinnedDecimation::AutoAdjustNumberOfDivisionsOn)
    .function("AutoAdjustNumberOfDivisionsOff", &vtkBinnedDecimation::AutoAdjustNumberOfDivisionsOff)
    .function("SetDivisionOrigin", emscripten::select_overload<void(vtkBinnedDecimation&, double, double, double)>([](vtkBinnedDecimation& self, double arg_0, double arg_1, double arg_2) -> void { return self.SetDivisionOrigin( arg_0, arg_1, arg_2); }))
    .function("SetDivisionSpacing", emscripten::select_overload<void(vtkBinnedDecimation&, double, double, double)>([](vtkBinnedDecimation& self, double arg_0, double arg_1, double arg_2) -> void { return self.SetDivisionSpacing( arg_0, arg_1, arg_2); }))
    .function("SetPointGenerationMode", &vtkBinnedDecimation::SetPointGenerationMode)
    .function("GetPointGenerationModeMinValue", &vtkBinnedDecimation::GetPointGenerationModeMinValue)
    .function("GetPointGenerationModeMaxValue", &vtkBinnedDecimation::GetPointGenerationModeMaxValue)
    .function("GetPointGenerationMode", &vtkBinnedDecimation::GetPointGenerationMode)
    .function("SetPointGenerationModeToUseInputPoints", &vtkBinnedDecimation::SetPointGenerationModeToUseInputPoints)
    .function("SetPointGenerationModeToBinPoints", &vtkBinnedDecimation::SetPointGenerationModeToBinPoints)
    .function("SetPointGenerationModeToBinCenters", &vtkBinnedDecimation::SetPointGenerationModeToBinCenters)
    .function("SetPointGenerationModeToBinAverages", &vtkBinnedDecimation::SetPointGenerationModeToBinAverages)
    .function("SetProducePointData", &vtkBinnedDecimation::SetProducePointData)
    .function("GetProducePointData", &vtkBinnedDecimation::GetProducePointData)
    .function("ProducePointDataOn", &vtkBinnedDecimation::ProducePointDataOn)
    .function("ProducePointDataOff", &vtkBinnedDecimation::ProducePointDataOff)
    .function("SetProduceCellData", &vtkBinnedDecimation::SetProduceCellData)
    .function("GetProduceCellData", &vtkBinnedDecimation::GetProduceCellData)
    .function("ProduceCellDataOn", &vtkBinnedDecimation::ProduceCellDataOn)
    .function("ProduceCellDataOff", &vtkBinnedDecimation::ProduceCellDataOff)
    .function("GetLargeIds", &vtkBinnedDecimation::GetLargeIds);
}
EMSCRIPTEN_BINDINGS(vtkFiltersCore_vtkBinnedDecimation_0_2_constants) {
  const struct { const char *name; int value; }
    constants[4] = {
      { "vtkBinnedDecimation_INPUT_POINTS", vtkBinnedDecimation::INPUT_POINTS },
      { "vtkBinnedDecimation_BIN_POINTS", vtkBinnedDecimation::BIN_POINTS },
      { "vtkBinnedDecimation_BIN_CENTERS", vtkBinnedDecimation::BIN_CENTERS },
      { "vtkBinnedDecimation_BIN_AVERAGES", vtkBinnedDecimation::BIN_AVERAGES },
  };
  for (int c = 0; c < 4; c++)
  {
    emscripten::constant(constants[c].name, constants[c].value);
  }
}
