// JavaScript wrapper for vtk3DWidget with embind 
//
// This file was auto-generated using :
/*
node /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/bin/vtkWrapJavaScript.js \
 @/home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkInteractionWidgets.js/vtkInteractionWidgets.js.Release.args \
 -o \
 /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkInteractionWidgets.js/vtk3DWidgetEmbinding.cxx \
 /home/jmh/github/vtk/Interaction/Widgets/vtk3DWidget.h
*/
#include "vtkEmbindSmartPointerTrait.h"
#include <emscripten.h>
#include <string>
#include "vtkVariant.h"
#include "vtkObjectBase.h"
#include "vtkIndent.h"
#include "vtkProp3D.h"
#include "vtkDataSet.h"
#include "vtkAlgorithmOutput.h"
#include "vtk3DWidget.h"

template<> void emscripten::internal::raw_destructor<vtk3DWidget>(vtk3DWidget * ptr){ ptr->Delete(); }
EMSCRIPTEN_BINDINGS(vtk3DWidget_class) {
  emscripten::class_<vtk3DWidget, emscripten::base<vtkInteractorObserver>>("vtk3DWidget")
    .class_function("IsTypeOf", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtk3DWidget::IsTypeOf( arg_0.c_str());}))
    .function("IsA", emscripten::optional_override([](vtk3DWidget& self, const std::string & arg_0) -> int {  return self.IsA( arg_0.c_str());}))
    .class_function("SafeDownCast", &vtk3DWidget::SafeDownCast, emscripten::allow_raw_pointers())
    .function("NewInstance", &vtk3DWidget::NewInstance, emscripten::allow_raw_pointers())
    .class_function("GetNumberOfGenerationsFromBaseType", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtk3DWidget::GetNumberOfGenerationsFromBaseType( arg_0.c_str());}))
    .function("GetNumberOfGenerationsFromBase", emscripten::optional_override([](vtk3DWidget& self, const std::string & arg_0) -> int {  return self.GetNumberOfGenerationsFromBase( arg_0.c_str());}))
    .function("PlaceWidget", emscripten::select_overload<void(vtk3DWidget&)>([](vtk3DWidget& self) -> void { return self.PlaceWidget(); }))
    .function("PlaceWidget", emscripten::select_overload<void(vtk3DWidget&, double, double, double, double, double, double)>([](vtk3DWidget& self, double arg_0, double arg_1, double arg_2, double arg_3, double arg_4, double arg_5) -> void { return self.PlaceWidget( arg_0, arg_1, arg_2, arg_3, arg_4, arg_5); }))
    .function("SetProp3D", &vtk3DWidget::SetProp3D, emscripten::allow_raw_pointers())
    .function("GetProp3D", &vtk3DWidget::GetProp3D, emscripten::allow_raw_pointers())
    .function("SetInputData", &vtk3DWidget::SetInputData, emscripten::allow_raw_pointers())
    .function("SetInputConnection", &vtk3DWidget::SetInputConnection, emscripten::allow_raw_pointers())
    .function("GetInput", &vtk3DWidget::GetInput, emscripten::allow_raw_pointers())
    .function("SetPlaceFactor", &vtk3DWidget::SetPlaceFactor)
    .function("GetPlaceFactorMinValue", &vtk3DWidget::GetPlaceFactorMinValue)
    .function("GetPlaceFactorMaxValue", &vtk3DWidget::GetPlaceFactorMaxValue)
    .function("GetPlaceFactor", &vtk3DWidget::GetPlaceFactor)
    .function("SetHandleSize", &vtk3DWidget::SetHandleSize)
    .function("GetHandleSizeMinValue", &vtk3DWidget::GetHandleSizeMinValue)
    .function("GetHandleSizeMaxValue", &vtk3DWidget::GetHandleSizeMaxValue)
    .function("GetHandleSize", &vtk3DWidget::GetHandleSize);
}
