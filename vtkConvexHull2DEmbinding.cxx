// JavaScript wrapper for vtkConvexHull2D with embind 
//
// This file was auto-generated using :
/*
node /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/bin/vtkWrapJavaScript.js \
 @/home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkRenderingAnnotation.js/vtkRenderingAnnotation.js.Release.args \
 -o \
 /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkRenderingAnnotation.js/vtkConvexHull2DEmbinding.cxx \
 /home/jmh/github/vtk/Rendering/Annotation/vtkConvexHull2D.h
*/
#include "vtkEmbindSmartPointerTrait.h"
#include <emscripten.h>
#include <string>
#include "vtkVariant.h"
#include "vtkObjectBase.h"
#include "vtkIndent.h"
#include "vtkRenderer.h"
#include "vtkPoints.h"
#include "vtkConvexHull2D.h"

EMSCRIPTEN_BINDINGS(vtkRenderingAnnotation_vtkConvexHull2D_class_enums) {
}
template<> void emscripten::internal::raw_destructor<vtkConvexHull2D>(vtkConvexHull2D * ptr){ ptr->Delete(); }
EMSCRIPTEN_BINDINGS(vtkConvexHull2D_class) {
  using HullShapes=vtkConvexHull2D::HullShapes;
  emscripten::class_<vtkConvexHull2D, emscripten::base<vtkPolyDataAlgorithm>>("vtkConvexHull2D")
    .smart_ptr<vtkSmartPointer<vtkConvexHull2D>>("vtkSmartPointer<vtkConvexHull2D>")
    .constructor(&vtk::MakeAvtkSmartPointer<vtkConvexHull2D>)
    .class_function("IsTypeOf", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkConvexHull2D::IsTypeOf( arg_0.c_str());}))
    .function("IsA", emscripten::optional_override([](vtkConvexHull2D& self, const std::string & arg_0) -> int {  return self.IsA( arg_0.c_str());}))
    .class_function("SafeDownCast", &vtkConvexHull2D::SafeDownCast, emscripten::allow_raw_pointers())
    .function("NewInstance", &vtkConvexHull2D::NewInstance, emscripten::allow_raw_pointers())
    .class_function("GetNumberOfGenerationsFromBaseType", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkConvexHull2D::GetNumberOfGenerationsFromBaseType( arg_0.c_str());}))
    .function("GetNumberOfGenerationsFromBase", emscripten::optional_override([](vtkConvexHull2D& self, const std::string & arg_0) -> int {  return self.GetNumberOfGenerationsFromBase( arg_0.c_str());}))
    .function("GetScaleFactor", &vtkConvexHull2D::GetScaleFactor)
    .function("SetScaleFactor", &vtkConvexHull2D::SetScaleFactor)
    .function("GetOutline", &vtkConvexHull2D::GetOutline)
    .function("SetOutline", &vtkConvexHull2D::SetOutline)
    .function("OutlineOn", &vtkConvexHull2D::OutlineOn)
    .function("OutlineOff", &vtkConvexHull2D::OutlineOff)
    .function("GetHullShape", &vtkConvexHull2D::GetHullShape)
    .function("SetHullShape", &vtkConvexHull2D::SetHullShape)
    .function("GetHullShapeMinValue", &vtkConvexHull2D::GetHullShapeMinValue)
    .function("GetHullShapeMaxValue", &vtkConvexHull2D::GetHullShapeMaxValue)
    .function("SetMinHullSizeInWorld", &vtkConvexHull2D::SetMinHullSizeInWorld)
    .function("GetMinHullSizeInWorldMinValue", &vtkConvexHull2D::GetMinHullSizeInWorldMinValue)
    .function("GetMinHullSizeInWorldMaxValue", &vtkConvexHull2D::GetMinHullSizeInWorldMaxValue)
    .function("GetMinHullSizeInWorld", &vtkConvexHull2D::GetMinHullSizeInWorld)
    .function("SetMinHullSizeInDisplay", &vtkConvexHull2D::SetMinHullSizeInDisplay)
    .function("GetMinHullSizeInDisplayMinValue", &vtkConvexHull2D::GetMinHullSizeInDisplayMinValue)
    .function("GetMinHullSizeInDisplayMaxValue", &vtkConvexHull2D::GetMinHullSizeInDisplayMaxValue)
    .function("GetMinHullSizeInDisplay", &vtkConvexHull2D::GetMinHullSizeInDisplay)
    .function("SetRenderer", &vtkConvexHull2D::SetRenderer, emscripten::allow_raw_pointers())
    .function("GetRenderer", &vtkConvexHull2D::GetRenderer, emscripten::allow_raw_pointers())
    .function("GetMTime", &vtkConvexHull2D::GetMTime)
    .class_function("CalculateBoundingRectangle", &vtkConvexHull2D::CalculateBoundingRectangle, emscripten::allow_raw_pointers())
    .class_function("CalculateConvexHull", &vtkConvexHull2D::CalculateConvexHull, emscripten::allow_raw_pointers());
}
EMSCRIPTEN_BINDINGS(vtkRenderingAnnotation_vtkConvexHull2D_0_2_constants) {
    typedef vtkConvexHull2D::HullShapes cxx_enum_type;

  const struct { const char *name; cxx_enum_type value; }
    constants[2] = {
      { "vtkConvexHull2D_HullShapes_BoundingRectangle", vtkConvexHull2D::BoundingRectangle },
      { "vtkConvexHull2D_HullShapes_ConvexHull", vtkConvexHull2D::ConvexHull },
  };
  for (int c = 0; c < 2; c++)
  {
    emscripten::constant(constants[c].name, static_cast<int>(constants[c].value));
  }
}
