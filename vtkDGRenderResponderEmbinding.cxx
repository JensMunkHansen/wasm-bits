// JavaScript wrapper for vtkDGRenderResponder with embind 
//
// This file was auto-generated using :
/*
node /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/bin/vtkWrapJavaScript.js \
 @/home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkRenderingCellGrid.js/vtkRenderingCellGrid.js.Release.args \
 -o \
 /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkRenderingCellGrid.js/vtkDGRenderResponderEmbinding.cxx \
 /home/jmh/github/vtk/Rendering/CellGrid/vtkDGRenderResponder.h
*/
#include "vtkEmbindSmartPointerTrait.h"
#include <emscripten.h>
#include <string>
#include "vtkVariant.h"
#include "vtkObjectBase.h"
#include "vtkCellGridRenderRequest.h"
#include "vtkCellMetadata.h"
#include "vtkCellGridResponders.h"
#include "vtkDGRenderResponder.h"

EMSCRIPTEN_BINDINGS(vtkRenderingCellGrid_vtkDGRenderResponder_class_enums) {
  emscripten::enum_<vtkDGRenderResponder::ScalarVisualizationOverrideType>("vtkDGRenderResponder_ScalarVisualizationOverrideType")
    .value("NONE", vtkDGRenderResponder::ScalarVisualizationOverrideType::NONE)
    .value("R", vtkDGRenderResponder::ScalarVisualizationOverrideType::R)
    .value("S", vtkDGRenderResponder::ScalarVisualizationOverrideType::S)
    .value("T", vtkDGRenderResponder::ScalarVisualizationOverrideType::T)
    .value("L2_NORM_R_S", vtkDGRenderResponder::ScalarVisualizationOverrideType::L2_NORM_R_S)
    .value("L2_NORM_S_T", vtkDGRenderResponder::ScalarVisualizationOverrideType::L2_NORM_S_T)
    .value("L2_NORM_T_R", vtkDGRenderResponder::ScalarVisualizationOverrideType::L2_NORM_T_R);
}
template<> void emscripten::internal::raw_destructor<vtkDGRenderResponder>(vtkDGRenderResponder * ptr){ ptr->Delete(); }
EMSCRIPTEN_BINDINGS(vtkDGRenderResponder_class) {
  using ScalarVisualizationOverrideType=vtkDGRenderResponder::ScalarVisualizationOverrideType;
  emscripten::class_<vtkDGRenderResponder, emscripten::base<vtkCellGridResponder<vtkCellGridRenderRequest>>>("vtkDGRenderResponder")
    .smart_ptr<vtkSmartPointer<vtkDGRenderResponder>>("vtkSmartPointer<vtkDGRenderResponder>")
    .constructor(&vtk::MakeVTKSmartPtr<vtkDGRenderResponder>)
    .class_function("IsTypeOf", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkDGRenderResponder::IsTypeOf( arg_0.c_str());}))
    .function("IsA", emscripten::optional_override([](vtkDGRenderResponder& self, const std::string & arg_0) -> int {  return self.IsA( arg_0.c_str());}))
    .class_function("SafeDownCast", &vtkDGRenderResponder::SafeDownCast, emscripten::allow_raw_pointers())
    .function("NewInstance", &vtkDGRenderResponder::NewInstance, emscripten::allow_raw_pointers())
    .class_function("GetNumberOfGenerationsFromBaseType", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkDGRenderResponder::GetNumberOfGenerationsFromBaseType( arg_0.c_str());}))
    .function("GetNumberOfGenerationsFromBase", emscripten::optional_override([](vtkDGRenderResponder& self, const std::string & arg_0) -> int {  return self.GetNumberOfGenerationsFromBase( arg_0.c_str());}))
    .function("Query", &vtkDGRenderResponder::Query, emscripten::allow_raw_pointers())
    .function("AddMod", &vtkDGRenderResponder::AddMod)
    .function("AddMods", &vtkDGRenderResponder::AddMods)
    .function("RemoveMod", &vtkDGRenderResponder::RemoveMod)
    .function("RemoveAllMods", &vtkDGRenderResponder::RemoveAllMods)
    .function("ResetModsToDefault", &vtkDGRenderResponder::ResetModsToDefault)
    .class_function("SetScalarVisualizationOverrideType", &vtkDGRenderResponder::SetScalarVisualizationOverrideType)
    .class_function("SetVisualizeTessellation", &vtkDGRenderResponder::SetVisualizeTessellation);
}
