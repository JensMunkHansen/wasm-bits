// JavaScript wrapper for vtkCompositeDataGeometryFilter with embind 
//
// This file was auto-generated using :
/*
node /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/bin/vtkWrapJavaScript.js \
 @/home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkFiltersGeometry.js/vtkFiltersGeometry.js.Release.args \
 -o \
 /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkFiltersGeometry.js/vtkCompositeDataGeometryFilterEmbinding.cxx \
 /home/jmh/github/vtk/Filters/Geometry/vtkCompositeDataGeometryFilter.h
*/
#include "vtkEmbindSmartPointerTrait.h"
#include <emscripten.h>
#include <string>
#include "vtkVariant.h"
#include "vtkObjectBase.h"
#include "vtkIndent.h"
#include "vtkInformation.h"
#include "vtkInformationVector.h"
#include "vtkCompositeDataGeometryFilter.h"

template<> void emscripten::internal::raw_destructor<vtkCompositeDataGeometryFilter>(vtkCompositeDataGeometryFilter * ptr){ ptr->Delete(); }
EMSCRIPTEN_BINDINGS(vtkCompositeDataGeometryFilter_class) {
  emscripten::class_<vtkCompositeDataGeometryFilter, emscripten::base<vtkPolyDataAlgorithm>>("vtkCompositeDataGeometryFilter")
    .smart_ptr<vtkSmartPointer<vtkCompositeDataGeometryFilter>>("vtkSmartPointer<vtkCompositeDataGeometryFilter>")
    .constructor(&vtk::MakeAvtkSmartPointer<vtkCompositeDataGeometryFilter>)
    .class_function("IsTypeOf", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkCompositeDataGeometryFilter::IsTypeOf( arg_0.c_str());}))
    .function("IsA", emscripten::optional_override([](vtkCompositeDataGeometryFilter& self, const std::string & arg_0) -> int {  return self.IsA( arg_0.c_str());}))
    .class_function("SafeDownCast", &vtkCompositeDataGeometryFilter::SafeDownCast, emscripten::allow_raw_pointers())
    .function("NewInstance", &vtkCompositeDataGeometryFilter::NewInstance, emscripten::allow_raw_pointers())
    .class_function("GetNumberOfGenerationsFromBaseType", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkCompositeDataGeometryFilter::GetNumberOfGenerationsFromBaseType( arg_0.c_str());}))
    .function("GetNumberOfGenerationsFromBase", emscripten::optional_override([](vtkCompositeDataGeometryFilter& self, const std::string & arg_0) -> int {  return self.GetNumberOfGenerationsFromBase( arg_0.c_str());}));
}
