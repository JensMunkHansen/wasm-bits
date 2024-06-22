// JavaScript wrapper for vtkBiDimensionalRepresentation2D with embind 
//
// This file was auto-generated using :
/*
node /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/bin/vtkWrapJavaScript.js \
 @/home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkInteractionWidgets.js/vtkInteractionWidgets.js.Release.args \
 -o \
 /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkInteractionWidgets.js/vtkBiDimensionalRepresentation2DEmbinding.cxx \
 /home/jmh/github/vtk/Interaction/Widgets/vtkBiDimensionalRepresentation2D.h
*/
#include "vtkEmbindSmartPointerTrait.h"
#include <emscripten.h>
#include <string>
#include "vtkVariant.h"
#include "vtkObjectBase.h"
#include "vtkIndent.h"
#include "vtkProperty2D.h"
#include "vtkTextProperty.h"
#include "vtkWindow.h"
#include "vtkViewport.h"
#include "vtkBiDimensionalRepresentation2D.h"

template<> void emscripten::internal::raw_destructor<vtkBiDimensionalRepresentation2D>(vtkBiDimensionalRepresentation2D * ptr){ ptr->Delete(); }
EMSCRIPTEN_BINDINGS(vtkBiDimensionalRepresentation2D_class) {
  emscripten::class_<vtkBiDimensionalRepresentation2D, emscripten::base<vtkBiDimensionalRepresentation>>("vtkBiDimensionalRepresentation2D")
    .smart_ptr<vtkSmartPointer<vtkBiDimensionalRepresentation2D>>("vtkSmartPointer<vtkBiDimensionalRepresentation2D>")
    .constructor(&vtk::MakeVTKSmartPtr<vtkBiDimensionalRepresentation2D>)
    .class_function("IsTypeOf", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkBiDimensionalRepresentation2D::IsTypeOf( arg_0.c_str());}))
    .function("IsA", emscripten::optional_override([](vtkBiDimensionalRepresentation2D& self, const std::string & arg_0) -> int {  return self.IsA( arg_0.c_str());}))
    .class_function("SafeDownCast", &vtkBiDimensionalRepresentation2D::SafeDownCast, emscripten::allow_raw_pointers())
    .function("NewInstance", &vtkBiDimensionalRepresentation2D::NewInstance, emscripten::allow_raw_pointers())
    .class_function("GetNumberOfGenerationsFromBaseType", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkBiDimensionalRepresentation2D::GetNumberOfGenerationsFromBaseType( arg_0.c_str());}))
    .function("GetNumberOfGenerationsFromBase", emscripten::optional_override([](vtkBiDimensionalRepresentation2D& self, const std::string & arg_0) -> int {  return self.GetNumberOfGenerationsFromBase( arg_0.c_str());}))
    .function("GetLineProperty", &vtkBiDimensionalRepresentation2D::GetLineProperty, emscripten::allow_raw_pointers())
    .function("GetSelectedLineProperty", &vtkBiDimensionalRepresentation2D::GetSelectedLineProperty, emscripten::allow_raw_pointers())
    .function("GetTextProperty", &vtkBiDimensionalRepresentation2D::GetTextProperty, emscripten::allow_raw_pointers())
    .function("BuildRepresentation", &vtkBiDimensionalRepresentation2D::BuildRepresentation)
    .function("ComputeInteractionState", &vtkBiDimensionalRepresentation2D::ComputeInteractionState)
    .function("Highlight", &vtkBiDimensionalRepresentation2D::Highlight)
    .function("ReleaseGraphicsResources", &vtkBiDimensionalRepresentation2D::ReleaseGraphicsResources, emscripten::allow_raw_pointers())
    .function("RenderOverlay", &vtkBiDimensionalRepresentation2D::RenderOverlay, emscripten::allow_raw_pointers())
    .function("GetLabelText", emscripten::optional_override([](vtkBiDimensionalRepresentation2D& self) -> std::string {  return self.GetLabelText();}))
    .function("GetLabelPosition", emscripten::select_overload<std::uintptr_t(vtkBiDimensionalRepresentation2D&)>([](vtkBiDimensionalRepresentation2D& self) -> std::uintptr_t { return reinterpret_cast<std::uintptr_t>(self.GetLabelPosition()); }));
}
EMSCRIPTEN_BINDINGS(vtkInteractionWidgets_vtkBiDimensionalRepresentation2D_0_2_constants) {
  const struct { const char *name; int value; }
    constants[10] = {
      { "vtkBiDimensionalRepresentation2D_Outside", vtkBiDimensionalRepresentation2D::Outside },
      { "vtkBiDimensionalRepresentation2D_NearP1", vtkBiDimensionalRepresentation2D::NearP1 },
      { "vtkBiDimensionalRepresentation2D_NearP2", vtkBiDimensionalRepresentation2D::NearP2 },
      { "vtkBiDimensionalRepresentation2D_NearP3", vtkBiDimensionalRepresentation2D::NearP3 },
      { "vtkBiDimensionalRepresentation2D_NearP4", vtkBiDimensionalRepresentation2D::NearP4 },
      { "vtkBiDimensionalRepresentation2D_OnL1Inner", vtkBiDimensionalRepresentation2D::OnL1Inner },
      { "vtkBiDimensionalRepresentation2D_OnL1Outer", vtkBiDimensionalRepresentation2D::OnL1Outer },
      { "vtkBiDimensionalRepresentation2D_OnL2Inner", vtkBiDimensionalRepresentation2D::OnL2Inner },
      { "vtkBiDimensionalRepresentation2D_OnL2Outer", vtkBiDimensionalRepresentation2D::OnL2Outer },
      { "vtkBiDimensionalRepresentation2D_OnCenter", vtkBiDimensionalRepresentation2D::OnCenter },
  };
  for (int c = 0; c < 10; c++)
  {
    emscripten::constant(constants[c].name, constants[c].value);
  }
}
