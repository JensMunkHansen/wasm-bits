// JavaScript wrapper for vtkRectilinearGridGeometryFilter with embind 
//
// This file was auto-generated using :
/*
node /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/bin/vtkWrapJavaScript.js \
 @/home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkFiltersGeometry.js/vtkFiltersGeometry.js.Release.args \
 -o \
 /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkFiltersGeometry.js/vtkRectilinearGridGeometryFilterEmbinding.cxx \
 /home/jmh/github/vtk/Filters/Geometry/vtkRectilinearGridGeometryFilter.h
*/
#include "vtkEmbindSmartPointerTrait.h"
#include <emscripten.h>
#include <string>
#include "vtkVariant.h"
#include "vtkObjectBase.h"
#include "vtkIndent.h"
#include "vtkRectilinearGridGeometryFilter.h"

template<> void emscripten::internal::raw_destructor<vtkRectilinearGridGeometryFilter>(vtkRectilinearGridGeometryFilter * ptr){ ptr->Delete(); }
EMSCRIPTEN_BINDINGS(vtkRectilinearGridGeometryFilter_class) {
  emscripten::class_<vtkRectilinearGridGeometryFilter, emscripten::base<vtkPolyDataAlgorithm>>("vtkRectilinearGridGeometryFilter")
    .smart_ptr<vtkSmartPointer<vtkRectilinearGridGeometryFilter>>("vtkSmartPointer<vtkRectilinearGridGeometryFilter>")
    .constructor(&vtk::MakeVTKSmartPtr<vtkRectilinearGridGeometryFilter>)
    .class_function("IsTypeOf", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkRectilinearGridGeometryFilter::IsTypeOf( arg_0.c_str());}))
    .function("IsA", emscripten::optional_override([](vtkRectilinearGridGeometryFilter& self, const std::string & arg_0) -> int {  return self.IsA( arg_0.c_str());}))
    .class_function("SafeDownCast", &vtkRectilinearGridGeometryFilter::SafeDownCast, emscripten::allow_raw_pointers())
    .function("NewInstance", &vtkRectilinearGridGeometryFilter::NewInstance, emscripten::allow_raw_pointers())
    .class_function("GetNumberOfGenerationsFromBaseType", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkRectilinearGridGeometryFilter::GetNumberOfGenerationsFromBaseType( arg_0.c_str());}))
    .function("GetNumberOfGenerationsFromBase", emscripten::optional_override([](vtkRectilinearGridGeometryFilter& self, const std::string & arg_0) -> int {  return self.GetNumberOfGenerationsFromBase( arg_0.c_str());}))
    .function("SetExtent", emscripten::select_overload<void(vtkRectilinearGridGeometryFilter&, int, int, int, int, int, int)>([](vtkRectilinearGridGeometryFilter& self, int arg_0, int arg_1, int arg_2, int arg_3, int arg_4, int arg_5) -> void { return self.SetExtent( arg_0, arg_1, arg_2, arg_3, arg_4, arg_5); }));
}
