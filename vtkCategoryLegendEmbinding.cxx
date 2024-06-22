// JavaScript wrapper for vtkCategoryLegend with embind 
//
// This file was auto-generated using :
/*
node /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/bin/vtkWrapJavaScript.js \
 @/home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkChartsCore.js/vtkChartsCore.js.Release.args \
 -o \
 /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkChartsCore.js/vtkCategoryLegendEmbinding.cxx \
 /home/jmh/github/vtk/Charts/Core/vtkCategoryLegend.h
*/
#include "vtkEmbindSmartPointerTrait.h"
#include <emscripten.h>
#include <string>
#include "vtkVariant.h"
#include "vtkObjectBase.h"
#include "vtkIndent.h"
#include "vtkContext2D.h"
#include "vtkRect.h"
#include "vtkScalarsToColors.h"
#include "vtkVariantArray.h"
#include "vtkStdString.h"
#include "vtkCategoryLegend.h"

template<> void emscripten::internal::raw_destructor<vtkCategoryLegend>(vtkCategoryLegend * ptr){ ptr->Delete(); }
EMSCRIPTEN_BINDINGS(vtkCategoryLegend_class) {
  emscripten::class_<vtkCategoryLegend, emscripten::base<vtkChartLegend>>("vtkCategoryLegend")
    .smart_ptr<vtkSmartPointer<vtkCategoryLegend>>("vtkSmartPointer<vtkCategoryLegend>")
    .constructor(&vtk::MakeVTKSmartPtr<vtkCategoryLegend>)
    .class_function("IsTypeOf", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkCategoryLegend::IsTypeOf( arg_0.c_str());}))
    .function("IsA", emscripten::optional_override([](vtkCategoryLegend& self, const std::string & arg_0) -> int {  return self.IsA( arg_0.c_str());}))
    .class_function("SafeDownCast", &vtkCategoryLegend::SafeDownCast, emscripten::allow_raw_pointers())
    .function("NewInstance", &vtkCategoryLegend::NewInstance, emscripten::allow_raw_pointers())
    .class_function("GetNumberOfGenerationsFromBaseType", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkCategoryLegend::GetNumberOfGenerationsFromBaseType( arg_0.c_str());}))
    .function("GetNumberOfGenerationsFromBase", emscripten::optional_override([](vtkCategoryLegend& self, const std::string & arg_0) -> int {  return self.GetNumberOfGenerationsFromBase( arg_0.c_str());}))
    .function("Paint", &vtkCategoryLegend::Paint, emscripten::allow_raw_pointers())
    .function("GetBoundingRect", &vtkCategoryLegend::GetBoundingRect, emscripten::allow_raw_pointers())
    .function("SetScalarsToColors", &vtkCategoryLegend::SetScalarsToColors, emscripten::allow_raw_pointers())
    .function("GetScalarsToColors", &vtkCategoryLegend::GetScalarsToColors, emscripten::allow_raw_pointers())
    .function("GetValues", &vtkCategoryLegend::GetValues, emscripten::allow_raw_pointers())
    .function("SetValues", &vtkCategoryLegend::SetValues, emscripten::allow_raw_pointers())
    .function("SetTitle", &vtkCategoryLegend::SetTitle)
    .function("GetTitle", &vtkCategoryLegend::GetTitle)
    .function("GetOutlierLabel", &vtkCategoryLegend::GetOutlierLabel)
    .function("SetOutlierLabel", &vtkCategoryLegend::SetOutlierLabel);
}
EMSCRIPTEN_BINDINGS(vtkChartsCore_vtkCategoryLegend_0_2_constants) {
  const struct { const char *name; int value; }
    constants[2] = {
      { "vtkCategoryLegend_VERTICAL", vtkCategoryLegend::VERTICAL },
      { "vtkCategoryLegend_HORIZONTAL", vtkCategoryLegend::HORIZONTAL },
  };
  for (int c = 0; c < 2; c++)
  {
    emscripten::constant(constants[c].name, constants[c].value);
  }
}
