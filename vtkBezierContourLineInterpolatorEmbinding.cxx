// JavaScript wrapper for vtkBezierContourLineInterpolator with embind 
//
// This file was auto-generated using :
/*
node /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/bin/vtkWrapJavaScript.js \
 @/home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkInteractionWidgets.js/vtkInteractionWidgets.js.Release.args \
 -o \
 /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkInteractionWidgets.js/vtkBezierContourLineInterpolatorEmbinding.cxx \
 /home/jmh/github/vtk/Interaction/Widgets/vtkBezierContourLineInterpolator.h
*/
#include "vtkEmbindSmartPointerTrait.h"
#include <emscripten.h>
#include <string>
#include "vtkVariant.h"
#include "vtkObjectBase.h"
#include "vtkIndent.h"
#include "vtkRenderer.h"
#include "vtkContourRepresentation.h"
#include "vtkIntArray.h"
#include "vtkBezierContourLineInterpolator.h"

template<> void emscripten::internal::raw_destructor<vtkBezierContourLineInterpolator>(vtkBezierContourLineInterpolator * ptr){ ptr->Delete(); }
EMSCRIPTEN_BINDINGS(vtkBezierContourLineInterpolator_class) {
  emscripten::class_<vtkBezierContourLineInterpolator, emscripten::base<vtkContourLineInterpolator>>("vtkBezierContourLineInterpolator")
    .smart_ptr<vtkSmartPointer<vtkBezierContourLineInterpolator>>("vtkSmartPointer<vtkBezierContourLineInterpolator>")
    .constructor(&vtk::MakeAvtkSmartPointer<vtkBezierContourLineInterpolator>)
    .class_function("IsTypeOf", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkBezierContourLineInterpolator::IsTypeOf( arg_0.c_str());}))
    .function("IsA", emscripten::optional_override([](vtkBezierContourLineInterpolator& self, const std::string & arg_0) -> int {  return self.IsA( arg_0.c_str());}))
    .class_function("SafeDownCast", &vtkBezierContourLineInterpolator::SafeDownCast, emscripten::allow_raw_pointers())
    .function("NewInstance", &vtkBezierContourLineInterpolator::NewInstance, emscripten::allow_raw_pointers())
    .class_function("GetNumberOfGenerationsFromBaseType", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkBezierContourLineInterpolator::GetNumberOfGenerationsFromBaseType( arg_0.c_str());}))
    .function("GetNumberOfGenerationsFromBase", emscripten::optional_override([](vtkBezierContourLineInterpolator& self, const std::string & arg_0) -> int {  return self.GetNumberOfGenerationsFromBase( arg_0.c_str());}))
    .function("InterpolateLine", &vtkBezierContourLineInterpolator::InterpolateLine, emscripten::allow_raw_pointers())
    .function("SetMaximumCurveError", &vtkBezierContourLineInterpolator::SetMaximumCurveError)
    .function("GetMaximumCurveErrorMinValue", &vtkBezierContourLineInterpolator::GetMaximumCurveErrorMinValue)
    .function("GetMaximumCurveErrorMaxValue", &vtkBezierContourLineInterpolator::GetMaximumCurveErrorMaxValue)
    .function("GetMaximumCurveError", &vtkBezierContourLineInterpolator::GetMaximumCurveError)
    .function("SetMaximumCurveLineSegments", &vtkBezierContourLineInterpolator::SetMaximumCurveLineSegments)
    .function("GetMaximumCurveLineSegmentsMinValue", &vtkBezierContourLineInterpolator::GetMaximumCurveLineSegmentsMinValue)
    .function("GetMaximumCurveLineSegmentsMaxValue", &vtkBezierContourLineInterpolator::GetMaximumCurveLineSegmentsMaxValue)
    .function("GetMaximumCurveLineSegments", &vtkBezierContourLineInterpolator::GetMaximumCurveLineSegments)
    .function("GetSpan", &vtkBezierContourLineInterpolator::GetSpan, emscripten::allow_raw_pointers());
}
