// JavaScript wrapper for vtkDicer with embind 
//
// This file was auto-generated using :
/*
node /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/bin/vtkWrapJavaScript.js \
 @/home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkFiltersGeneral.js/vtkFiltersGeneral.js.Release.args \
 -o \
 /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkFiltersGeneral.js/vtkDicerEmbinding.cxx \
 /home/jmh/github/vtk/Filters/General/vtkDicer.h
*/
#include "vtkEmbindSmartPointerTrait.h"
#include <emscripten.h>
#include <string>
#include "vtkVariant.h"
#include "vtkObjectBase.h"
#include "vtkIndent.h"
#include "vtkDicer.h"

EMSCRIPTEN_BINDINGS(vtkFiltersGeneral_vtkDicer_0_1_constants) {
  const struct { const char *name; int value; }
    constants[3] = {
      { "VTK_DICE_MODE_NUMBER_OF_POINTS", 0 },
      { "VTK_DICE_MODE_SPECIFIED_NUMBER", 1 },
      { "VTK_DICE_MODE_MEMORY_LIMIT", 2 },
  };
  for (int c = 0; c < 3; c++)
  {
    emscripten::constant(constants[c].name, constants[c].value);
  }
}
template<> void emscripten::internal::raw_destructor<vtkDicer>(vtkDicer * ptr){ ptr->Delete(); }
EMSCRIPTEN_BINDINGS(vtkDicer_class) {
  emscripten::class_<vtkDicer, emscripten::base<vtkDataSetAlgorithm>>("vtkDicer")
    .class_function("IsTypeOf", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkDicer::IsTypeOf( arg_0.c_str());}))
    .function("IsA", emscripten::optional_override([](vtkDicer& self, const std::string & arg_0) -> int {  return self.IsA( arg_0.c_str());}))
    .class_function("SafeDownCast", &vtkDicer::SafeDownCast, emscripten::allow_raw_pointers())
    .function("NewInstance", &vtkDicer::NewInstance, emscripten::allow_raw_pointers())
    .class_function("GetNumberOfGenerationsFromBaseType", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkDicer::GetNumberOfGenerationsFromBaseType( arg_0.c_str());}))
    .function("GetNumberOfGenerationsFromBase", emscripten::optional_override([](vtkDicer& self, const std::string & arg_0) -> int {  return self.GetNumberOfGenerationsFromBase( arg_0.c_str());}))
    .function("SetFieldData", &vtkDicer::SetFieldData)
    .function("GetFieldData", &vtkDicer::GetFieldData)
    .function("FieldDataOn", &vtkDicer::FieldDataOn)
    .function("FieldDataOff", &vtkDicer::FieldDataOff)
    .function("SetDiceMode", &vtkDicer::SetDiceMode)
    .function("GetDiceModeMinValue", &vtkDicer::GetDiceModeMinValue)
    .function("GetDiceModeMaxValue", &vtkDicer::GetDiceModeMaxValue)
    .function("GetDiceMode", &vtkDicer::GetDiceMode)
    .function("SetDiceModeToNumberOfPointsPerPiece", &vtkDicer::SetDiceModeToNumberOfPointsPerPiece)
    .function("SetDiceModeToSpecifiedNumberOfPieces", &vtkDicer::SetDiceModeToSpecifiedNumberOfPieces)
    .function("SetDiceModeToMemoryLimitPerPiece", &vtkDicer::SetDiceModeToMemoryLimitPerPiece)
    .function("GetNumberOfActualPieces", &vtkDicer::GetNumberOfActualPieces)
    .function("SetNumberOfPointsPerPiece", &vtkDicer::SetNumberOfPointsPerPiece)
    .function("GetNumberOfPointsPerPieceMinValue", &vtkDicer::GetNumberOfPointsPerPieceMinValue)
    .function("GetNumberOfPointsPerPieceMaxValue", &vtkDicer::GetNumberOfPointsPerPieceMaxValue)
    .function("GetNumberOfPointsPerPiece", &vtkDicer::GetNumberOfPointsPerPiece)
    .function("SetNumberOfPieces", &vtkDicer::SetNumberOfPieces)
    .function("GetNumberOfPiecesMinValue", &vtkDicer::GetNumberOfPiecesMinValue)
    .function("GetNumberOfPiecesMaxValue", &vtkDicer::GetNumberOfPiecesMaxValue)
    .function("GetNumberOfPieces", &vtkDicer::GetNumberOfPieces)
    .function("SetMemoryLimit", &vtkDicer::SetMemoryLimit)
    .function("GetMemoryLimitMinValue", &vtkDicer::GetMemoryLimitMinValue)
    .function("GetMemoryLimitMaxValue", &vtkDicer::GetMemoryLimitMaxValue)
    .function("GetMemoryLimit", &vtkDicer::GetMemoryLimit);
}
