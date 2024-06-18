// JavaScript wrapper for vtkInteractorStyleAreaSelectHover with embind 
//
// This file was auto-generated using :
/*
node /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/bin/vtkWrapJavaScript.js \
 @/home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkViewsInfovis.js/vtkViewsInfovis.js.Release.args \
 -o \
 /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkViewsInfovis.js/vtkInteractorStyleAreaSelectHoverEmbinding.cxx \
 /home/jmh/github/vtk/Views/Infovis/vtkInteractorStyleAreaSelectHover.h
*/
#include "vtkEmbindSmartPointerTrait.h"
#include <emscripten.h>
#include <string>
#include "vtkVariant.h"
#include "vtkObjectBase.h"
#include "vtkIndent.h"
#include "vtkAreaLayout.h"
#include "vtkRenderWindowInteractor.h"
#include "vtkInteractorStyleAreaSelectHover.h"

template<> void emscripten::internal::raw_destructor<vtkInteractorStyleAreaSelectHover>(vtkInteractorStyleAreaSelectHover * ptr){ ptr->Delete(); }
EMSCRIPTEN_BINDINGS(vtkInteractorStyleAreaSelectHover_class) {
  emscripten::class_<vtkInteractorStyleAreaSelectHover, emscripten::base<vtkInteractorStyleRubberBand2D>>("vtkInteractorStyleAreaSelectHover")
    .smart_ptr<vtkSmartPointer<vtkInteractorStyleAreaSelectHover>>("vtkSmartPointer<vtkInteractorStyleAreaSelectHover>")
    .constructor(&vtk::MakeAvtkSmartPointer<vtkInteractorStyleAreaSelectHover>)
    .class_function("IsTypeOf", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkInteractorStyleAreaSelectHover::IsTypeOf( arg_0.c_str());}))
    .function("IsA", emscripten::optional_override([](vtkInteractorStyleAreaSelectHover& self, const std::string & arg_0) -> int {  return self.IsA( arg_0.c_str());}))
    .class_function("SafeDownCast", &vtkInteractorStyleAreaSelectHover::SafeDownCast, emscripten::allow_raw_pointers())
    .function("NewInstance", &vtkInteractorStyleAreaSelectHover::NewInstance, emscripten::allow_raw_pointers())
    .class_function("GetNumberOfGenerationsFromBaseType", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkInteractorStyleAreaSelectHover::GetNumberOfGenerationsFromBaseType( arg_0.c_str());}))
    .function("GetNumberOfGenerationsFromBase", emscripten::optional_override([](vtkInteractorStyleAreaSelectHover& self, const std::string & arg_0) -> int {  return self.GetNumberOfGenerationsFromBase( arg_0.c_str());}))
    .function("SetLayout", &vtkInteractorStyleAreaSelectHover::SetLayout, emscripten::allow_raw_pointers())
    .function("GetLayout", &vtkInteractorStyleAreaSelectHover::GetLayout, emscripten::allow_raw_pointers())
    .function("SetLabelField", emscripten::optional_override([](vtkInteractorStyleAreaSelectHover& self, const std::string & arg_0) -> void {  return self.SetLabelField( arg_0.c_str());}))
    .function("GetLabelField", emscripten::optional_override([](vtkInteractorStyleAreaSelectHover& self) -> std::string {  return self.GetLabelField();}))
    .function("SetUseRectangularCoordinates", &vtkInteractorStyleAreaSelectHover::SetUseRectangularCoordinates)
    .function("GetUseRectangularCoordinates", &vtkInteractorStyleAreaSelectHover::GetUseRectangularCoordinates)
    .function("UseRectangularCoordinatesOn", &vtkInteractorStyleAreaSelectHover::UseRectangularCoordinatesOn)
    .function("UseRectangularCoordinatesOff", &vtkInteractorStyleAreaSelectHover::UseRectangularCoordinatesOff)
    .function("OnMouseMove", &vtkInteractorStyleAreaSelectHover::OnMouseMove)
    .function("SetInteractor", &vtkInteractorStyleAreaSelectHover::SetInteractor, emscripten::allow_raw_pointers())
    .function("SetHighLightColor", &vtkInteractorStyleAreaSelectHover::SetHighLightColor)
    .function("SetHighLightWidth", &vtkInteractorStyleAreaSelectHover::SetHighLightWidth)
    .function("GetHighLightWidth", &vtkInteractorStyleAreaSelectHover::GetHighLightWidth)
    .function("GetIdAtPos", &vtkInteractorStyleAreaSelectHover::GetIdAtPos);
}
