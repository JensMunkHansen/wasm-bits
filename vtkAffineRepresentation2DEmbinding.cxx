// JavaScript wrapper for vtkAffineRepresentation2D with embind 
//
// This file was auto-generated using :
/*
node /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/bin/vtkWrapJavaScript.js \
 @/home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkInteractionWidgets.js/vtkInteractionWidgets.js.Release.args \
 -o \
 /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkInteractionWidgets.js/vtkAffineRepresentation2DEmbinding.cxx \
 /home/jmh/github/vtk/Interaction/Widgets/vtkAffineRepresentation2D.h
*/
#include "vtkEmbindSmartPointerTrait.h"
#include <emscripten.h>
#include <string>
#include "vtkVariant.h"
#include "vtkObjectBase.h"
#include "vtkIndent.h"
#include "vtkTransform.h"
#include "vtkProperty2D.h"
#include "vtkTextProperty.h"
#include "vtkProp.h"
#include "vtkPropCollection.h"
#include "vtkWindow.h"
#include "vtkViewport.h"
#include "vtkAffineRepresentation2D.h"

template<> void emscripten::internal::raw_destructor<vtkAffineRepresentation2D>(vtkAffineRepresentation2D * ptr){ ptr->Delete(); }
EMSCRIPTEN_BINDINGS(vtkAffineRepresentation2D_class) {
  emscripten::class_<vtkAffineRepresentation2D, emscripten::base<vtkAffineRepresentation>>("vtkAffineRepresentation2D")
    .smart_ptr<vtkSmartPointer<vtkAffineRepresentation2D>>("vtkSmartPointer<vtkAffineRepresentation2D>")
    .constructor(&vtk::MakeVTKSmartPtr<vtkAffineRepresentation2D>)
    .class_function("IsTypeOf", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkAffineRepresentation2D::IsTypeOf( arg_0.c_str());}))
    .function("IsA", emscripten::optional_override([](vtkAffineRepresentation2D& self, const std::string & arg_0) -> int {  return self.IsA( arg_0.c_str());}))
    .class_function("SafeDownCast", &vtkAffineRepresentation2D::SafeDownCast, emscripten::allow_raw_pointers())
    .function("NewInstance", &vtkAffineRepresentation2D::NewInstance, emscripten::allow_raw_pointers())
    .class_function("GetNumberOfGenerationsFromBaseType", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkAffineRepresentation2D::GetNumberOfGenerationsFromBaseType( arg_0.c_str());}))
    .function("GetNumberOfGenerationsFromBase", emscripten::optional_override([](vtkAffineRepresentation2D& self, const std::string & arg_0) -> int {  return self.GetNumberOfGenerationsFromBase( arg_0.c_str());}))
    .function("SetBoxWidth", &vtkAffineRepresentation2D::SetBoxWidth)
    .function("GetBoxWidthMinValue", &vtkAffineRepresentation2D::GetBoxWidthMinValue)
    .function("GetBoxWidthMaxValue", &vtkAffineRepresentation2D::GetBoxWidthMaxValue)
    .function("GetBoxWidth", &vtkAffineRepresentation2D::GetBoxWidth)
    .function("SetCircleWidth", &vtkAffineRepresentation2D::SetCircleWidth)
    .function("GetCircleWidthMinValue", &vtkAffineRepresentation2D::GetCircleWidthMinValue)
    .function("GetCircleWidthMaxValue", &vtkAffineRepresentation2D::GetCircleWidthMaxValue)
    .function("GetCircleWidth", &vtkAffineRepresentation2D::GetCircleWidth)
    .function("SetAxesWidth", &vtkAffineRepresentation2D::SetAxesWidth)
    .function("GetAxesWidthMinValue", &vtkAffineRepresentation2D::GetAxesWidthMinValue)
    .function("GetAxesWidthMaxValue", &vtkAffineRepresentation2D::GetAxesWidthMaxValue)
    .function("GetAxesWidth", &vtkAffineRepresentation2D::GetAxesWidth)
    .function("SetOrigin", emscripten::select_overload<void(vtkAffineRepresentation2D&, double, double, double)>([](vtkAffineRepresentation2D& self, double arg_0, double arg_1, double arg_2) -> void { return self.SetOrigin( arg_0, arg_1, arg_2); }))
    .function("GetTransform", &vtkAffineRepresentation2D::GetTransform, emscripten::allow_raw_pointers())
    .function("SetProperty", &vtkAffineRepresentation2D::SetProperty, emscripten::allow_raw_pointers())
    .function("SetSelectedProperty", &vtkAffineRepresentation2D::SetSelectedProperty, emscripten::allow_raw_pointers())
    .function("SetTextProperty", &vtkAffineRepresentation2D::SetTextProperty, emscripten::allow_raw_pointers())
    .function("GetProperty", &vtkAffineRepresentation2D::GetProperty, emscripten::allow_raw_pointers())
    .function("GetSelectedProperty", &vtkAffineRepresentation2D::GetSelectedProperty, emscripten::allow_raw_pointers())
    .function("GetTextProperty", &vtkAffineRepresentation2D::GetTextProperty, emscripten::allow_raw_pointers())
    .function("SetDisplayText", &vtkAffineRepresentation2D::SetDisplayText)
    .function("GetDisplayText", &vtkAffineRepresentation2D::GetDisplayText)
    .function("DisplayTextOn", &vtkAffineRepresentation2D::DisplayTextOn)
    .function("DisplayTextOff", &vtkAffineRepresentation2D::DisplayTextOff)
    .function("ComputeInteractionState", &vtkAffineRepresentation2D::ComputeInteractionState)
    .function("BuildRepresentation", &vtkAffineRepresentation2D::BuildRepresentation)
    .function("ShallowCopy", &vtkAffineRepresentation2D::ShallowCopy, emscripten::allow_raw_pointers())
    .function("GetActors2D", &vtkAffineRepresentation2D::GetActors2D, emscripten::allow_raw_pointers())
    .function("ReleaseGraphicsResources", &vtkAffineRepresentation2D::ReleaseGraphicsResources, emscripten::allow_raw_pointers())
    .function("RenderOverlay", &vtkAffineRepresentation2D::RenderOverlay, emscripten::allow_raw_pointers());
}
