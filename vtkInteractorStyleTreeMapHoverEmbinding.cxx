// JavaScript wrapper for vtkInteractorStyleTreeMapHover with embind 
//
// This file was auto-generated using :
/*
node /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/bin/vtkWrapJavaScript.js \
 @/home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkViewsInfovis.js/vtkViewsInfovis.js.Release.args \
 -o \
 /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkViewsInfovis.js/vtkInteractorStyleTreeMapHoverEmbinding.cxx \
 /home/jmh/github/vtk/Views/Infovis/vtkInteractorStyleTreeMapHover.h
*/
#include "vtkEmbindSmartPointerTrait.h"
#include <emscripten.h>
#include <string>
#include "vtkVariant.h"
#include "vtkObjectBase.h"
#include "vtkIndent.h"
#include "vtkTreeMapLayout.h"
#include "vtkTreeMapToPolyData.h"
#include "vtkRenderWindowInteractor.h"
#include "vtkInteractorStyleTreeMapHover.h"

template<> void emscripten::internal::raw_destructor<vtkInteractorStyleTreeMapHover>(vtkInteractorStyleTreeMapHover * ptr){ ptr->Delete(); }
EMSCRIPTEN_BINDINGS(vtkInteractorStyleTreeMapHover_class) {
  emscripten::class_<vtkInteractorStyleTreeMapHover, emscripten::base<vtkInteractorStyleImage>>("vtkInteractorStyleTreeMapHover")
    .smart_ptr<vtkSmartPointer<vtkInteractorStyleTreeMapHover>>("vtkSmartPointer<vtkInteractorStyleTreeMapHover>")
    .constructor(&vtk::MakeAvtkSmartPointer<vtkInteractorStyleTreeMapHover>)
    .class_function("IsTypeOf", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkInteractorStyleTreeMapHover::IsTypeOf( arg_0.c_str());}))
    .function("IsA", emscripten::optional_override([](vtkInteractorStyleTreeMapHover& self, const std::string & arg_0) -> int {  return self.IsA( arg_0.c_str());}))
    .class_function("SafeDownCast", &vtkInteractorStyleTreeMapHover::SafeDownCast, emscripten::allow_raw_pointers())
    .function("NewInstance", &vtkInteractorStyleTreeMapHover::NewInstance, emscripten::allow_raw_pointers())
    .class_function("GetNumberOfGenerationsFromBaseType", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkInteractorStyleTreeMapHover::GetNumberOfGenerationsFromBaseType( arg_0.c_str());}))
    .function("GetNumberOfGenerationsFromBase", emscripten::optional_override([](vtkInteractorStyleTreeMapHover& self, const std::string & arg_0) -> int {  return self.GetNumberOfGenerationsFromBase( arg_0.c_str());}))
    .function("SetLayout", &vtkInteractorStyleTreeMapHover::SetLayout, emscripten::allow_raw_pointers())
    .function("GetLayout", &vtkInteractorStyleTreeMapHover::GetLayout, emscripten::allow_raw_pointers())
    .function("SetTreeMapToPolyData", &vtkInteractorStyleTreeMapHover::SetTreeMapToPolyData, emscripten::allow_raw_pointers())
    .function("GetTreeMapToPolyData", &vtkInteractorStyleTreeMapHover::GetTreeMapToPolyData, emscripten::allow_raw_pointers())
    .function("SetLabelField", emscripten::optional_override([](vtkInteractorStyleTreeMapHover& self, const std::string & arg_0) -> void {  return self.SetLabelField( arg_0.c_str());}))
    .function("GetLabelField", emscripten::optional_override([](vtkInteractorStyleTreeMapHover& self) -> std::string {  return self.GetLabelField();}))
    .function("OnMouseMove", &vtkInteractorStyleTreeMapHover::OnMouseMove)
    .function("OnLeftButtonUp", &vtkInteractorStyleTreeMapHover::OnLeftButtonUp)
    .function("HighLightItem", &vtkInteractorStyleTreeMapHover::HighLightItem)
    .function("HighLightCurrentSelectedItem", &vtkInteractorStyleTreeMapHover::HighLightCurrentSelectedItem)
    .function("SetInteractor", &vtkInteractorStyleTreeMapHover::SetInteractor, emscripten::allow_raw_pointers())
    .function("SetHighLightColor", &vtkInteractorStyleTreeMapHover::SetHighLightColor)
    .function("SetSelectionLightColor", &vtkInteractorStyleTreeMapHover::SetSelectionLightColor)
    .function("SetHighLightWidth", &vtkInteractorStyleTreeMapHover::SetHighLightWidth)
    .function("GetHighLightWidth", &vtkInteractorStyleTreeMapHover::GetHighLightWidth)
    .function("SetSelectionWidth", &vtkInteractorStyleTreeMapHover::SetSelectionWidth)
    .function("GetSelectionWidth", &vtkInteractorStyleTreeMapHover::GetSelectionWidth);
}
