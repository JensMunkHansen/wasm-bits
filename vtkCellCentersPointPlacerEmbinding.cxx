// JavaScript wrapper for vtkCellCentersPointPlacer with embind 
//
// This file was auto-generated using :
/*
node /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/bin/vtkWrapJavaScript.js \
 @/home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkInteractionWidgets.js/vtkInteractionWidgets.js.Release.args \
 -o \
 /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkInteractionWidgets.js/vtkCellCentersPointPlacerEmbinding.cxx \
 /home/jmh/github/vtk/Interaction/Widgets/vtkCellCentersPointPlacer.h
*/
#include "vtkEmbindSmartPointerTrait.h"
#include <emscripten.h>
#include <string>
#include "vtkVariant.h"
#include "vtkObjectBase.h"
#include "vtkIndent.h"
#include "vtkProp.h"
#include "vtkRenderer.h"
#include "vtkCellPicker.h"
#include "vtkCellCentersPointPlacer.h"

template<> void emscripten::internal::raw_destructor<vtkCellCentersPointPlacer>(vtkCellCentersPointPlacer * ptr){ ptr->Delete(); }
EMSCRIPTEN_BINDINGS(vtkCellCentersPointPlacer_class) {
  emscripten::class_<vtkCellCentersPointPlacer, emscripten::base<vtkPointPlacer>>("vtkCellCentersPointPlacer")
    .smart_ptr<vtkSmartPointer<vtkCellCentersPointPlacer>>("vtkSmartPointer<vtkCellCentersPointPlacer>")
    .constructor(&vtk::MakeVTKSmartPtr<vtkCellCentersPointPlacer>)
    .class_function("IsTypeOf", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkCellCentersPointPlacer::IsTypeOf( arg_0.c_str());}))
    .function("IsA", emscripten::optional_override([](vtkCellCentersPointPlacer& self, const std::string & arg_0) -> int {  return self.IsA( arg_0.c_str());}))
    .class_function("SafeDownCast", &vtkCellCentersPointPlacer::SafeDownCast, emscripten::allow_raw_pointers())
    .function("NewInstance", &vtkCellCentersPointPlacer::NewInstance, emscripten::allow_raw_pointers())
    .class_function("GetNumberOfGenerationsFromBaseType", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkCellCentersPointPlacer::GetNumberOfGenerationsFromBaseType( arg_0.c_str());}))
    .function("GetNumberOfGenerationsFromBase", emscripten::optional_override([](vtkCellCentersPointPlacer& self, const std::string & arg_0) -> int {  return self.GetNumberOfGenerationsFromBase( arg_0.c_str());}))
    .function("AddProp", &vtkCellCentersPointPlacer::AddProp, emscripten::allow_raw_pointers())
    .function("RemoveViewProp", &vtkCellCentersPointPlacer::RemoveViewProp, emscripten::allow_raw_pointers())
    .function("RemoveAllProps", &vtkCellCentersPointPlacer::RemoveAllProps)
    .function("HasProp", &vtkCellCentersPointPlacer::HasProp, emscripten::allow_raw_pointers())
    .function("GetNumberOfProps", &vtkCellCentersPointPlacer::GetNumberOfProps)
    .function("GetCellPicker", &vtkCellCentersPointPlacer::GetCellPicker, emscripten::allow_raw_pointers())
    .function("SetMode", &vtkCellCentersPointPlacer::SetMode)
    .function("GetMode", &vtkCellCentersPointPlacer::GetMode);
}
EMSCRIPTEN_BINDINGS(vtkInteractionWidgets_vtkCellCentersPointPlacer_0_2_constants) {
  const struct { const char *name; int value; }
    constants[3] = {
      { "vtkCellCentersPointPlacer_ParametricCenter", vtkCellCentersPointPlacer::ParametricCenter },
      { "vtkCellCentersPointPlacer_CellPointsMean", vtkCellCentersPointPlacer::CellPointsMean },
      { "vtkCellCentersPointPlacer_None", vtkCellCentersPointPlacer::None },
  };
  for (int c = 0; c < 3; c++)
  {
    emscripten::constant(constants[c].name, constants[c].value);
  }
}
