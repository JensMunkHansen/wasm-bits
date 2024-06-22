// JavaScript wrapper for vtkColorLegend with embind 
//
// This file was auto-generated using :
/*
node /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/bin/vtkWrapJavaScript.js \
 @/home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkChartsCore.js/vtkChartsCore.js.Release.args \
 -o \
 /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkChartsCore.js/vtkColorLegendEmbinding.cxx \
 /home/jmh/github/vtk/Charts/Core/vtkColorLegend.h
*/
#include "vtkEmbindSmartPointerTrait.h"
#include <emscripten.h>
#include <string>
#include "vtkVariant.h"
#include "vtkObjectBase.h"
#include "vtkIndent.h"
#include "vtkContext2D.h"
#include "vtkScalarsToColors.h"
#include "vtkRect.h"
#include "vtkStdString.h"
#include "vtkContextMouseEvent.h"
#include "vtkColorLegend.h"

template<> void emscripten::internal::raw_destructor<vtkColorLegend>(vtkColorLegend * ptr){ ptr->Delete(); }
EMSCRIPTEN_BINDINGS(vtkColorLegend_class) {
  emscripten::class_<vtkColorLegend, emscripten::base<vtkChartLegend>>("vtkColorLegend")
    .smart_ptr<vtkSmartPointer<vtkColorLegend>>("vtkSmartPointer<vtkColorLegend>")
    .constructor(&vtk::MakeAvtkSmartPointer<vtkColorLegend>)
    .class_function("IsTypeOf", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkColorLegend::IsTypeOf( arg_0.c_str());}))
    .function("IsA", emscripten::optional_override([](vtkColorLegend& self, const std::string & arg_0) -> int {  return self.IsA( arg_0.c_str());}))
    .class_function("SafeDownCast", &vtkColorLegend::SafeDownCast, emscripten::allow_raw_pointers())
    .function("NewInstance", &vtkColorLegend::NewInstance, emscripten::allow_raw_pointers())
    .class_function("GetNumberOfGenerationsFromBaseType", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkColorLegend::GetNumberOfGenerationsFromBaseType( arg_0.c_str());}))
    .function("GetNumberOfGenerationsFromBase", emscripten::optional_override([](vtkColorLegend& self, const std::string & arg_0) -> int {  return self.GetNumberOfGenerationsFromBase( arg_0.c_str());}))
    .function("Update", &vtkColorLegend::Update)
    .function("Paint", &vtkColorLegend::Paint, emscripten::allow_raw_pointers())
    .function("SetTransferFunction", &vtkColorLegend::SetTransferFunction, emscripten::allow_raw_pointers())
    .function("GetTransferFunction", &vtkColorLegend::GetTransferFunction, emscripten::allow_raw_pointers())
    .function("SetPoint", &vtkColorLegend::SetPoint)
    .function("SetTextureSize", &vtkColorLegend::SetTextureSize)
    .function("SetPosition", &vtkColorLegend::SetPosition)
    .function("GetPosition", &vtkColorLegend::GetPosition)
    .function("GetBoundingRect", &vtkColorLegend::GetBoundingRect, emscripten::allow_raw_pointers())
    .function("SetOrientation", &vtkColorLegend::SetOrientation)
    .function("GetOrientation", &vtkColorLegend::GetOrientation)
    .function("SetTitle", &vtkColorLegend::SetTitle)
    .function("GetTitle", &vtkColorLegend::GetTitle)
    .function("SetDrawBorder", &vtkColorLegend::SetDrawBorder)
    .function("GetDrawBorder", &vtkColorLegend::GetDrawBorder)
    .function("DrawBorderOn", &vtkColorLegend::DrawBorderOn)
    .function("DrawBorderOff", &vtkColorLegend::DrawBorderOff)
    .function("MouseMoveEvent", &vtkColorLegend::MouseMoveEvent);
}
EMSCRIPTEN_BINDINGS(vtkChartsCore_vtkColorLegend_0_2_constants) {
  const struct { const char *name; int value; }
    constants[2] = {
      { "vtkColorLegend_VERTICAL", vtkColorLegend::VERTICAL },
      { "vtkColorLegend_HORIZONTAL", vtkColorLegend::HORIZONTAL },
  };
  for (int c = 0; c < 2; c++)
  {
    emscripten::constant(constants[c].name, constants[c].value);
  }
}
