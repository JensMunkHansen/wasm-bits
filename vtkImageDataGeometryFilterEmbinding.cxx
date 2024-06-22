// JavaScript wrapper for vtkImageDataGeometryFilter with embind 
//
// This file was auto-generated using :
/*
node /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/bin/vtkWrapJavaScript.js \
 @/home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkFiltersGeometry.js/vtkFiltersGeometry.js.Release.args \
 -o \
 /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkFiltersGeometry.js/vtkImageDataGeometryFilterEmbinding.cxx \
 /home/jmh/github/vtk/Filters/Geometry/vtkImageDataGeometryFilter.h
*/
#include "vtkEmbindSmartPointerTrait.h"
#include <emscripten.h>
#include <string>
#include "vtkVariant.h"
#include "vtkObjectBase.h"
#include "vtkIndent.h"
#include "vtkImageDataGeometryFilter.h"

template<> void emscripten::internal::raw_destructor<vtkImageDataGeometryFilter>(vtkImageDataGeometryFilter * ptr){ ptr->Delete(); }
EMSCRIPTEN_BINDINGS(vtkImageDataGeometryFilter_class) {
  emscripten::class_<vtkImageDataGeometryFilter, emscripten::base<vtkPolyDataAlgorithm>>("vtkImageDataGeometryFilter")
    .smart_ptr<vtkSmartPointer<vtkImageDataGeometryFilter>>("vtkSmartPointer<vtkImageDataGeometryFilter>")
    .constructor(&vtk::MakeAvtkSmartPointer<vtkImageDataGeometryFilter>)
    .class_function("IsTypeOf", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkImageDataGeometryFilter::IsTypeOf( arg_0.c_str());}))
    .function("IsA", emscripten::optional_override([](vtkImageDataGeometryFilter& self, const std::string & arg_0) -> int {  return self.IsA( arg_0.c_str());}))
    .class_function("SafeDownCast", &vtkImageDataGeometryFilter::SafeDownCast, emscripten::allow_raw_pointers())
    .function("NewInstance", &vtkImageDataGeometryFilter::NewInstance, emscripten::allow_raw_pointers())
    .class_function("GetNumberOfGenerationsFromBaseType", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkImageDataGeometryFilter::GetNumberOfGenerationsFromBaseType( arg_0.c_str());}))
    .function("GetNumberOfGenerationsFromBase", emscripten::optional_override([](vtkImageDataGeometryFilter& self, const std::string & arg_0) -> int {  return self.GetNumberOfGenerationsFromBase( arg_0.c_str());}))
    .function("SetExtent", emscripten::select_overload<void(vtkImageDataGeometryFilter&, int, int, int, int, int, int)>([](vtkImageDataGeometryFilter& self, int arg_0, int arg_1, int arg_2, int arg_3, int arg_4, int arg_5) -> void { return self.SetExtent( arg_0, arg_1, arg_2, arg_3, arg_4, arg_5); }))
    .function("SetThresholdCells", &vtkImageDataGeometryFilter::SetThresholdCells)
    .function("GetThresholdCells", &vtkImageDataGeometryFilter::GetThresholdCells)
    .function("ThresholdCellsOn", &vtkImageDataGeometryFilter::ThresholdCellsOn)
    .function("ThresholdCellsOff", &vtkImageDataGeometryFilter::ThresholdCellsOff)
    .function("SetThresholdValue", &vtkImageDataGeometryFilter::SetThresholdValue)
    .function("GetThresholdValue", &vtkImageDataGeometryFilter::GetThresholdValue)
    .function("ThresholdValueOn", &vtkImageDataGeometryFilter::ThresholdValueOn)
    .function("ThresholdValueOff", &vtkImageDataGeometryFilter::ThresholdValueOff)
    .function("SetOutputTriangles", &vtkImageDataGeometryFilter::SetOutputTriangles)
    .function("GetOutputTriangles", &vtkImageDataGeometryFilter::GetOutputTriangles)
    .function("OutputTrianglesOn", &vtkImageDataGeometryFilter::OutputTrianglesOn)
    .function("OutputTrianglesOff", &vtkImageDataGeometryFilter::OutputTrianglesOff);
}
