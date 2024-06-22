// JavaScript wrapper for vtkDataSetTriangleFilter with embind 
//
// This file was auto-generated using :
/*
node /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/bin/vtkWrapJavaScript.js \
 @/home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkFiltersGeneral.js/vtkFiltersGeneral.js.Release.args \
 -o \
 /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkFiltersGeneral.js/vtkDataSetTriangleFilterEmbinding.cxx \
 /home/jmh/github/vtk/Filters/General/vtkDataSetTriangleFilter.h
*/
#include "vtkEmbindSmartPointerTrait.h"
#include <emscripten.h>
#include <string>
#include "vtkVariant.h"
#include "vtkObjectBase.h"
#include "vtkIndent.h"
#include "vtkDataSetTriangleFilter.h"

template<> void emscripten::internal::raw_destructor<vtkDataSetTriangleFilter>(vtkDataSetTriangleFilter * ptr){ ptr->Delete(); }
EMSCRIPTEN_BINDINGS(vtkDataSetTriangleFilter_class) {
  emscripten::class_<vtkDataSetTriangleFilter, emscripten::base<vtkUnstructuredGridAlgorithm>>("vtkDataSetTriangleFilter")
    .smart_ptr<vtkSmartPointer<vtkDataSetTriangleFilter>>("vtkSmartPointer<vtkDataSetTriangleFilter>")
    .constructor(&vtk::MakeVTKSmartPtr<vtkDataSetTriangleFilter>)
    .class_function("IsTypeOf", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkDataSetTriangleFilter::IsTypeOf( arg_0.c_str());}))
    .function("IsA", emscripten::optional_override([](vtkDataSetTriangleFilter& self, const std::string & arg_0) -> int {  return self.IsA( arg_0.c_str());}))
    .class_function("SafeDownCast", &vtkDataSetTriangleFilter::SafeDownCast, emscripten::allow_raw_pointers())
    .function("NewInstance", &vtkDataSetTriangleFilter::NewInstance, emscripten::allow_raw_pointers())
    .class_function("GetNumberOfGenerationsFromBaseType", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkDataSetTriangleFilter::GetNumberOfGenerationsFromBaseType( arg_0.c_str());}))
    .function("GetNumberOfGenerationsFromBase", emscripten::optional_override([](vtkDataSetTriangleFilter& self, const std::string & arg_0) -> int {  return self.GetNumberOfGenerationsFromBase( arg_0.c_str());}))
    .function("SetTetrahedraOnly", &vtkDataSetTriangleFilter::SetTetrahedraOnly)
    .function("GetTetrahedraOnly", &vtkDataSetTriangleFilter::GetTetrahedraOnly)
    .function("TetrahedraOnlyOn", &vtkDataSetTriangleFilter::TetrahedraOnlyOn)
    .function("TetrahedraOnlyOff", &vtkDataSetTriangleFilter::TetrahedraOnlyOff);
}
