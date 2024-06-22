// JavaScript wrapper for vtkStructuredGridGeometryFilter with embind 
//
// This file was auto-generated using :
/*
node /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/bin/vtkWrapJavaScript.js \
 @/home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkFiltersGeometry.js/vtkFiltersGeometry.js.Release.args \
 -o \
 /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkFiltersGeometry.js/vtkStructuredGridGeometryFilterEmbinding.cxx \
 /home/jmh/github/vtk/Filters/Geometry/vtkStructuredGridGeometryFilter.h
*/
#include "vtkEmbindSmartPointerTrait.h"
#include <emscripten.h>
#include <string>
#include "vtkVariant.h"
#include "vtkObjectBase.h"
#include "vtkIndent.h"
#include "vtkStructuredGridGeometryFilter.h"

template<> void emscripten::internal::raw_destructor<vtkStructuredGridGeometryFilter>(vtkStructuredGridGeometryFilter * ptr){ ptr->Delete(); }
EMSCRIPTEN_BINDINGS(vtkStructuredGridGeometryFilter_class) {
  emscripten::class_<vtkStructuredGridGeometryFilter, emscripten::base<vtkPolyDataAlgorithm>>("vtkStructuredGridGeometryFilter")
    .smart_ptr<vtkSmartPointer<vtkStructuredGridGeometryFilter>>("vtkSmartPointer<vtkStructuredGridGeometryFilter>")
    .constructor(&vtk::MakeVTKSmartPtr<vtkStructuredGridGeometryFilter>)
    .class_function("IsTypeOf", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkStructuredGridGeometryFilter::IsTypeOf( arg_0.c_str());}))
    .function("IsA", emscripten::optional_override([](vtkStructuredGridGeometryFilter& self, const std::string & arg_0) -> int {  return self.IsA( arg_0.c_str());}))
    .class_function("SafeDownCast", &vtkStructuredGridGeometryFilter::SafeDownCast, emscripten::allow_raw_pointers())
    .function("NewInstance", &vtkStructuredGridGeometryFilter::NewInstance, emscripten::allow_raw_pointers())
    .class_function("GetNumberOfGenerationsFromBaseType", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkStructuredGridGeometryFilter::GetNumberOfGenerationsFromBaseType( arg_0.c_str());}))
    .function("GetNumberOfGenerationsFromBase", emscripten::optional_override([](vtkStructuredGridGeometryFilter& self, const std::string & arg_0) -> int {  return self.GetNumberOfGenerationsFromBase( arg_0.c_str());}))
    .function("SetExtent", emscripten::select_overload<void(vtkStructuredGridGeometryFilter&, int, int, int, int, int, int)>([](vtkStructuredGridGeometryFilter& self, int arg_0, int arg_1, int arg_2, int arg_3, int arg_4, int arg_5) -> void { return self.SetExtent( arg_0, arg_1, arg_2, arg_3, arg_4, arg_5); }));
}
