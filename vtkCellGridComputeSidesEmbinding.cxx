// JavaScript wrapper for vtkCellGridComputeSides with embind 
//
// This file was auto-generated using :
/*
node /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/bin/vtkWrapJavaScript.js \
 @/home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkFiltersCellGrid.js/vtkFiltersCellGrid.js.Release.args \
 -o \
 /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkFiltersCellGrid.js/vtkCellGridComputeSidesEmbinding.cxx \
 /home/jmh/github/vtk/Filters/CellGrid/vtkCellGridComputeSides.h
*/
#include "vtkEmbindSmartPointerTrait.h"
#include <emscripten.h>
#include <string>
#include "vtkVariant.h"
#include "vtkObjectBase.h"
#include "vtkIndent.h"
#include "vtkCellGridSidesQuery.h"
#include "vtkStringToken.h"
#include "vtkCellGridComputeSides.h"

template<> void emscripten::internal::raw_destructor<vtkCellGridComputeSides>(vtkCellGridComputeSides * ptr){ ptr->Delete(); }
EMSCRIPTEN_BINDINGS(vtkCellGridComputeSides_class) {
  emscripten::class_<vtkCellGridComputeSides, emscripten::base<vtkCellGridAlgorithm>>("vtkCellGridComputeSides")
    .smart_ptr<vtkSmartPointer<vtkCellGridComputeSides>>("vtkSmartPointer<vtkCellGridComputeSides>")
    .constructor(&vtk::MakeVTKSmartPtr<vtkCellGridComputeSides>)
    .class_function("IsTypeOf", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkCellGridComputeSides::IsTypeOf( arg_0.c_str());}))
    .function("IsA", emscripten::optional_override([](vtkCellGridComputeSides& self, const std::string & arg_0) -> int {  return self.IsA( arg_0.c_str());}))
    .class_function("SafeDownCast", &vtkCellGridComputeSides::SafeDownCast, emscripten::allow_raw_pointers())
    .function("NewInstance", &vtkCellGridComputeSides::NewInstance, emscripten::allow_raw_pointers())
    .class_function("GetNumberOfGenerationsFromBaseType", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkCellGridComputeSides::GetNumberOfGenerationsFromBaseType( arg_0.c_str());}))
    .function("GetNumberOfGenerationsFromBase", emscripten::optional_override([](vtkCellGridComputeSides& self, const std::string & arg_0) -> int {  return self.GetNumberOfGenerationsFromBase( arg_0.c_str());}))
    .function("SetPreserveRenderableInputs", &vtkCellGridComputeSides::SetPreserveRenderableInputs)
    .function("GetPreserveRenderableInputs", &vtkCellGridComputeSides::GetPreserveRenderableInputs)
    .function("PreserveRenderableInputsOn", &vtkCellGridComputeSides::PreserveRenderableInputsOn)
    .function("PreserveRenderableInputsOff", &vtkCellGridComputeSides::PreserveRenderableInputsOff)
    .function("SetOmitSidesForRenderableInputs", &vtkCellGridComputeSides::SetOmitSidesForRenderableInputs)
    .function("GetOmitSidesForRenderableInputs", &vtkCellGridComputeSides::GetOmitSidesForRenderableInputs)
    .function("OmitSidesForRenderableInputsOn", &vtkCellGridComputeSides::OmitSidesForRenderableInputsOn)
    .function("OmitSidesForRenderableInputsOff", &vtkCellGridComputeSides::OmitSidesForRenderableInputsOff)
    .function("SetOutputDimensionControl", &vtkCellGridComputeSides::SetOutputDimensionControl)
    .function("GetOutputDimensionControl", &vtkCellGridComputeSides::GetOutputDimensionControl)
    .function("SetStrategy", &vtkCellGridComputeSides::SetStrategy)
    .function("GetStrategy", &vtkCellGridComputeSides::GetStrategy)
    .function("SetSelectionType", &vtkCellGridComputeSides::SetSelectionType)
    .function("GetSelectionType", &vtkCellGridComputeSides::GetSelectionType)
    .class_function("GetSideAttribute", &vtkCellGridComputeSides::GetSideAttribute);
}
