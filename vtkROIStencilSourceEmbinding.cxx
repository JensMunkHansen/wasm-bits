// JavaScript wrapper for vtkROIStencilSource with embind 
//
// This file was auto-generated using :
/*
node /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/bin/vtkWrapJavaScript.js \
 @/home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkImagingStencil.js/vtkImagingStencil.js.Release.args \
 -o \
 /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkImagingStencil.js/vtkROIStencilSourceEmbinding.cxx \
 /home/jmh/github/vtk/Imaging/Stencil/vtkROIStencilSource.h
*/
#include "vtkEmbindSmartPointerTrait.h"
#include <emscripten.h>
#include <string>
#include "vtkVariant.h"
#include "vtkObjectBase.h"
#include "vtkIndent.h"
#include "vtkROIStencilSource.h"

template<> void emscripten::internal::raw_destructor<vtkROIStencilSource>(vtkROIStencilSource * ptr){ ptr->Delete(); }
EMSCRIPTEN_BINDINGS(vtkROIStencilSource_class) {
  emscripten::class_<vtkROIStencilSource, emscripten::base<vtkImageStencilSource>>("vtkROIStencilSource")
    .smart_ptr<vtkSmartPointer<vtkROIStencilSource>>("vtkSmartPointer<vtkROIStencilSource>")
    .constructor(&vtk::MakeVTKSmartPtr<vtkROIStencilSource>)
    .class_function("IsTypeOf", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkROIStencilSource::IsTypeOf( arg_0.c_str());}))
    .function("IsA", emscripten::optional_override([](vtkROIStencilSource& self, const std::string & arg_0) -> int {  return self.IsA( arg_0.c_str());}))
    .class_function("SafeDownCast", &vtkROIStencilSource::SafeDownCast, emscripten::allow_raw_pointers())
    .function("NewInstance", &vtkROIStencilSource::NewInstance, emscripten::allow_raw_pointers())
    .class_function("GetNumberOfGenerationsFromBaseType", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkROIStencilSource::GetNumberOfGenerationsFromBaseType( arg_0.c_str());}))
    .function("GetNumberOfGenerationsFromBase", emscripten::optional_override([](vtkROIStencilSource& self, const std::string & arg_0) -> int {  return self.GetNumberOfGenerationsFromBase( arg_0.c_str());}))
    .function("GetShape", &vtkROIStencilSource::GetShape)
    .function("SetShape", &vtkROIStencilSource::SetShape)
    .function("GetShapeMinValue", &vtkROIStencilSource::GetShapeMinValue)
    .function("GetShapeMaxValue", &vtkROIStencilSource::GetShapeMaxValue)
    .function("SetShapeToBox", &vtkROIStencilSource::SetShapeToBox)
    .function("SetShapeToEllipsoid", &vtkROIStencilSource::SetShapeToEllipsoid)
    .function("SetShapeToCylinderX", &vtkROIStencilSource::SetShapeToCylinderX)
    .function("SetShapeToCylinderY", &vtkROIStencilSource::SetShapeToCylinderY)
    .function("SetShapeToCylinderZ", &vtkROIStencilSource::SetShapeToCylinderZ)
    .function("GetShapeAsString", emscripten::optional_override([](vtkROIStencilSource& self) -> std::string {  return self.GetShapeAsString();}))
    .function("SetBounds", emscripten::select_overload<void(vtkROIStencilSource&, double, double, double, double, double, double)>([](vtkROIStencilSource& self, double arg_0, double arg_1, double arg_2, double arg_3, double arg_4, double arg_5) -> void { return self.SetBounds( arg_0, arg_1, arg_2, arg_3, arg_4, arg_5); }));
}
EMSCRIPTEN_BINDINGS(vtkImagingStencil_vtkROIStencilSource_0_2_constants) {
  const struct { const char *name; int value; }
    constants[5] = {
      { "vtkROIStencilSource_BOX", vtkROIStencilSource::BOX },
      { "vtkROIStencilSource_ELLIPSOID", vtkROIStencilSource::ELLIPSOID },
      { "vtkROIStencilSource_CYLINDERX", vtkROIStencilSource::CYLINDERX },
      { "vtkROIStencilSource_CYLINDERY", vtkROIStencilSource::CYLINDERY },
      { "vtkROIStencilSource_CYLINDERZ", vtkROIStencilSource::CYLINDERZ },
  };
  for (int c = 0; c < 5; c++)
  {
    emscripten::constant(constants[c].name, constants[c].value);
  }
}
