// JavaScript wrapper for vtkGraphAnnotationLayersFilter with embind 
//
// This file was auto-generated using :
/*
node /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/bin/vtkWrapJavaScript.js \
 @/home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkRenderingAnnotation.js/vtkRenderingAnnotation.js.Release.args \
 -o \
 /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkRenderingAnnotation.js/vtkGraphAnnotationLayersFilterEmbinding.cxx \
 /home/jmh/github/vtk/Rendering/Annotation/vtkGraphAnnotationLayersFilter.h
*/
#include "vtkEmbindSmartPointerTrait.h"
#include <emscripten.h>
#include <string>
#include "vtkVariant.h"
#include "vtkObjectBase.h"
#include "vtkIndent.h"
#include "vtkRenderer.h"
#include "vtkGraphAnnotationLayersFilter.h"

template<> void emscripten::internal::raw_destructor<vtkGraphAnnotationLayersFilter>(vtkGraphAnnotationLayersFilter * ptr){ ptr->Delete(); }
EMSCRIPTEN_BINDINGS(vtkGraphAnnotationLayersFilter_class) {
  emscripten::class_<vtkGraphAnnotationLayersFilter, emscripten::base<vtkPolyDataAlgorithm>>("vtkGraphAnnotationLayersFilter")
    .smart_ptr<vtkSmartPointer<vtkGraphAnnotationLayersFilter>>("vtkSmartPointer<vtkGraphAnnotationLayersFilter>")
    .constructor(&vtk::MakeAvtkSmartPointer<vtkGraphAnnotationLayersFilter>)
    .class_function("IsTypeOf", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkGraphAnnotationLayersFilter::IsTypeOf( arg_0.c_str());}))
    .function("IsA", emscripten::optional_override([](vtkGraphAnnotationLayersFilter& self, const std::string & arg_0) -> int {  return self.IsA( arg_0.c_str());}))
    .class_function("SafeDownCast", &vtkGraphAnnotationLayersFilter::SafeDownCast, emscripten::allow_raw_pointers())
    .function("NewInstance", &vtkGraphAnnotationLayersFilter::NewInstance, emscripten::allow_raw_pointers())
    .class_function("GetNumberOfGenerationsFromBaseType", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkGraphAnnotationLayersFilter::GetNumberOfGenerationsFromBaseType( arg_0.c_str());}))
    .function("GetNumberOfGenerationsFromBase", emscripten::optional_override([](vtkGraphAnnotationLayersFilter& self, const std::string & arg_0) -> int {  return self.GetNumberOfGenerationsFromBase( arg_0.c_str());}))
    .function("OutlineOn", &vtkGraphAnnotationLayersFilter::OutlineOn)
    .function("OutlineOff", &vtkGraphAnnotationLayersFilter::OutlineOff)
    .function("SetOutline", &vtkGraphAnnotationLayersFilter::SetOutline)
    .function("SetScaleFactor", &vtkGraphAnnotationLayersFilter::SetScaleFactor)
    .function("SetHullShapeToBoundingRectangle", &vtkGraphAnnotationLayersFilter::SetHullShapeToBoundingRectangle)
    .function("SetHullShapeToConvexHull", &vtkGraphAnnotationLayersFilter::SetHullShapeToConvexHull)
    .function("SetMinHullSizeInWorld", &vtkGraphAnnotationLayersFilter::SetMinHullSizeInWorld)
    .function("SetMinHullSizeInDisplay", &vtkGraphAnnotationLayersFilter::SetMinHullSizeInDisplay)
    .function("SetRenderer", &vtkGraphAnnotationLayersFilter::SetRenderer, emscripten::allow_raw_pointers())
    .function("GetMTime", &vtkGraphAnnotationLayersFilter::GetMTime);
}
