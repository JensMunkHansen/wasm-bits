// JavaScript wrapper for vtkLassoStencilSource with embind 
//
// This file was auto-generated using :
/*
node /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/bin/vtkWrapJavaScript.js \
 @/home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkImagingStencil.js/vtkImagingStencil.js.Release.args \
 -o \
 /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkImagingStencil.js/vtkLassoStencilSourceEmbinding.cxx \
 /home/jmh/github/vtk/Imaging/Stencil/vtkLassoStencilSource.h
*/
#include "vtkEmbindSmartPointerTrait.h"
#include <emscripten.h>
#include <string>
#include "vtkVariant.h"
#include "vtkObjectBase.h"
#include "vtkIndent.h"
#include "vtkPoints.h"
#include "vtkLassoStencilSource.h"

template<> void emscripten::internal::raw_destructor<vtkLassoStencilSource>(vtkLassoStencilSource * ptr){ ptr->Delete(); }
EMSCRIPTEN_BINDINGS(vtkLassoStencilSource_class) {
  emscripten::class_<vtkLassoStencilSource, emscripten::base<vtkImageStencilSource>>("vtkLassoStencilSource")
    .smart_ptr<vtkSmartPointer<vtkLassoStencilSource>>("vtkSmartPointer<vtkLassoStencilSource>")
    .constructor(&vtk::MakeVTKSmartPtr<vtkLassoStencilSource>)
    .class_function("IsTypeOf", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkLassoStencilSource::IsTypeOf( arg_0.c_str());}))
    .function("IsA", emscripten::optional_override([](vtkLassoStencilSource& self, const std::string & arg_0) -> int {  return self.IsA( arg_0.c_str());}))
    .class_function("SafeDownCast", &vtkLassoStencilSource::SafeDownCast, emscripten::allow_raw_pointers())
    .function("NewInstance", &vtkLassoStencilSource::NewInstance, emscripten::allow_raw_pointers())
    .class_function("GetNumberOfGenerationsFromBaseType", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkLassoStencilSource::GetNumberOfGenerationsFromBaseType( arg_0.c_str());}))
    .function("GetNumberOfGenerationsFromBase", emscripten::optional_override([](vtkLassoStencilSource& self, const std::string & arg_0) -> int {  return self.GetNumberOfGenerationsFromBase( arg_0.c_str());}))
    .function("GetShape", &vtkLassoStencilSource::GetShape)
    .function("SetShape", &vtkLassoStencilSource::SetShape)
    .function("GetShapeMinValue", &vtkLassoStencilSource::GetShapeMinValue)
    .function("GetShapeMaxValue", &vtkLassoStencilSource::GetShapeMaxValue)
    .function("SetShapeToPolygon", &vtkLassoStencilSource::SetShapeToPolygon)
    .function("SetShapeToSpline", &vtkLassoStencilSource::SetShapeToSpline)
    .function("GetShapeAsString", emscripten::optional_override([](vtkLassoStencilSource& self) -> std::string {  return self.GetShapeAsString();}))
    .function("SetPoints", &vtkLassoStencilSource::SetPoints, emscripten::allow_raw_pointers())
    .function("GetPoints", &vtkLassoStencilSource::GetPoints, emscripten::allow_raw_pointers())
    .function("GetSliceOrientation", &vtkLassoStencilSource::GetSliceOrientation)
    .function("SetSliceOrientation", &vtkLassoStencilSource::SetSliceOrientation)
    .function("GetSliceOrientationMinValue", &vtkLassoStencilSource::GetSliceOrientationMinValue)
    .function("GetSliceOrientationMaxValue", &vtkLassoStencilSource::GetSliceOrientationMaxValue)
    .function("SetSlicePoints", &vtkLassoStencilSource::SetSlicePoints, emscripten::allow_raw_pointers())
    .function("GetSlicePoints", &vtkLassoStencilSource::GetSlicePoints, emscripten::allow_raw_pointers())
    .function("RemoveAllSlicePoints", &vtkLassoStencilSource::RemoveAllSlicePoints)
    .function("GetMTime", &vtkLassoStencilSource::GetMTime);
}
EMSCRIPTEN_BINDINGS(vtkImagingStencil_vtkLassoStencilSource_0_2_constants) {
  const struct { const char *name; int value; }
    constants[2] = {
      { "vtkLassoStencilSource_POLYGON", vtkLassoStencilSource::POLYGON },
      { "vtkLassoStencilSource_SPLINE", vtkLassoStencilSource::SPLINE },
  };
  for (int c = 0; c < 2; c++)
  {
    emscripten::constant(constants[c].name, constants[c].value);
  }
}
