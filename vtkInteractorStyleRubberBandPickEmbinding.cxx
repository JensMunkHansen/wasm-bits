// JavaScript wrapper for vtkInteractorStyleRubberBandPick with embind 
//
// This file was auto-generated using :
/*
node /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/bin/vtkWrapJavaScript.js \
 @/home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkInteractionStyle.js/vtkInteractionStyle.js.Release.args \
 -o \
 /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkInteractionStyle.js/vtkInteractorStyleRubberBandPickEmbinding.cxx \
 /home/jmh/github/vtk/Interaction/Style/vtkInteractorStyleRubberBandPick.h
*/
#include "vtkEmbindSmartPointerTrait.h"
#include <emscripten.h>
#include <string>
#include "vtkVariant.h"
#include "vtkObjectBase.h"
#include "vtkIndent.h"
#include "vtkInteractorStyleRubberBandPick.h"

template<> void emscripten::internal::raw_destructor<vtkInteractorStyleRubberBandPick>(vtkInteractorStyleRubberBandPick * ptr){ ptr->Delete(); }
EMSCRIPTEN_BINDINGS(vtkInteractorStyleRubberBandPick_class) {
  emscripten::class_<vtkInteractorStyleRubberBandPick, emscripten::base<vtkInteractorStyleTrackballCamera>>("vtkInteractorStyleRubberBandPick")
    .smart_ptr<vtkSmartPointer<vtkInteractorStyleRubberBandPick>>("vtkSmartPointer<vtkInteractorStyleRubberBandPick>")
    .constructor(&vtk::MakeAvtkSmartPointer<vtkInteractorStyleRubberBandPick>)
    .class_function("IsTypeOf", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkInteractorStyleRubberBandPick::IsTypeOf( arg_0.c_str());}))
    .function("IsA", emscripten::optional_override([](vtkInteractorStyleRubberBandPick& self, const std::string & arg_0) -> int {  return self.IsA( arg_0.c_str());}))
    .class_function("SafeDownCast", &vtkInteractorStyleRubberBandPick::SafeDownCast, emscripten::allow_raw_pointers())
    .function("NewInstance", &vtkInteractorStyleRubberBandPick::NewInstance, emscripten::allow_raw_pointers())
    .class_function("GetNumberOfGenerationsFromBaseType", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkInteractorStyleRubberBandPick::GetNumberOfGenerationsFromBaseType( arg_0.c_str());}))
    .function("GetNumberOfGenerationsFromBase", emscripten::optional_override([](vtkInteractorStyleRubberBandPick& self, const std::string & arg_0) -> int {  return self.GetNumberOfGenerationsFromBase( arg_0.c_str());}))
    .function("StartSelect", &vtkInteractorStyleRubberBandPick::StartSelect)
    .function("OnMouseMove", &vtkInteractorStyleRubberBandPick::OnMouseMove)
    .function("OnLeftButtonDown", &vtkInteractorStyleRubberBandPick::OnLeftButtonDown)
    .function("OnLeftButtonUp", &vtkInteractorStyleRubberBandPick::OnLeftButtonUp)
    .function("OnChar", &vtkInteractorStyleRubberBandPick::OnChar);
}
