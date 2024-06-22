// JavaScript wrapper for vtkExplicitStructuredGridSurfaceFilter with embind 
//
// This file was auto-generated using :
/*
node /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/bin/vtkWrapJavaScript.js \
 @/home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkFiltersGeometry.js/vtkFiltersGeometry.js.Release.args \
 -o \
 /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkFiltersGeometry.js/vtkExplicitStructuredGridSurfaceFilterEmbinding.cxx \
 /home/jmh/github/vtk/Filters/Geometry/vtkExplicitStructuredGridSurfaceFilter.h
*/
#include "vtkEmbindSmartPointerTrait.h"
#include <emscripten.h>
#include <string>
#include "vtkVariant.h"
#include "vtkObjectBase.h"
#include "vtkIndent.h"
#include "vtkExplicitStructuredGridSurfaceFilter.h"

template<> void emscripten::internal::raw_destructor<vtkExplicitStructuredGridSurfaceFilter>(vtkExplicitStructuredGridSurfaceFilter * ptr){ ptr->Delete(); }
EMSCRIPTEN_BINDINGS(vtkExplicitStructuredGridSurfaceFilter_class) {
  emscripten::class_<vtkExplicitStructuredGridSurfaceFilter, emscripten::base<vtkPolyDataAlgorithm>>("vtkExplicitStructuredGridSurfaceFilter")
    .smart_ptr<vtkSmartPointer<vtkExplicitStructuredGridSurfaceFilter>>("vtkSmartPointer<vtkExplicitStructuredGridSurfaceFilter>")
    .constructor(&vtk::MakeVTKSmartPtr<vtkExplicitStructuredGridSurfaceFilter>)
    .class_function("IsTypeOf", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkExplicitStructuredGridSurfaceFilter::IsTypeOf( arg_0.c_str());}))
    .function("IsA", emscripten::optional_override([](vtkExplicitStructuredGridSurfaceFilter& self, const std::string & arg_0) -> int {  return self.IsA( arg_0.c_str());}))
    .class_function("SafeDownCast", &vtkExplicitStructuredGridSurfaceFilter::SafeDownCast, emscripten::allow_raw_pointers())
    .function("NewInstance", &vtkExplicitStructuredGridSurfaceFilter::NewInstance, emscripten::allow_raw_pointers())
    .class_function("GetNumberOfGenerationsFromBaseType", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkExplicitStructuredGridSurfaceFilter::GetNumberOfGenerationsFromBaseType( arg_0.c_str());}))
    .function("GetNumberOfGenerationsFromBase", emscripten::optional_override([](vtkExplicitStructuredGridSurfaceFilter& self, const std::string & arg_0) -> int {  return self.GetNumberOfGenerationsFromBase( arg_0.c_str());}))
    .function("SetPassThroughCellIds", &vtkExplicitStructuredGridSurfaceFilter::SetPassThroughCellIds)
    .function("GetPassThroughCellIds", &vtkExplicitStructuredGridSurfaceFilter::GetPassThroughCellIds)
    .function("PassThroughCellIdsOn", &vtkExplicitStructuredGridSurfaceFilter::PassThroughCellIdsOn)
    .function("PassThroughCellIdsOff", &vtkExplicitStructuredGridSurfaceFilter::PassThroughCellIdsOff)
    .function("SetPassThroughPointIds", &vtkExplicitStructuredGridSurfaceFilter::SetPassThroughPointIds)
    .function("GetPassThroughPointIds", &vtkExplicitStructuredGridSurfaceFilter::GetPassThroughPointIds)
    .function("PassThroughPointIdsOn", &vtkExplicitStructuredGridSurfaceFilter::PassThroughPointIdsOn)
    .function("PassThroughPointIdsOff", &vtkExplicitStructuredGridSurfaceFilter::PassThroughPointIdsOff)
    .function("SetOriginalCellIdsName", emscripten::optional_override([](vtkExplicitStructuredGridSurfaceFilter& self, const std::string & arg_0) -> void {  return self.SetOriginalCellIdsName( arg_0.c_str());}))
    .function("GetOriginalCellIdsName", emscripten::optional_override([](vtkExplicitStructuredGridSurfaceFilter& self) -> std::string {  return self.GetOriginalCellIdsName();}))
    .function("SetOriginalPointIdsName", emscripten::optional_override([](vtkExplicitStructuredGridSurfaceFilter& self, const std::string & arg_0) -> void {  return self.SetOriginalPointIdsName( arg_0.c_str());}))
    .function("GetOriginalPointIdsName", emscripten::optional_override([](vtkExplicitStructuredGridSurfaceFilter& self) -> std::string {  return self.GetOriginalPointIdsName();}));
}
