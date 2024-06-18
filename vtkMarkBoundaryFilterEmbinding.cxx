// JavaScript wrapper for vtkMarkBoundaryFilter with embind 
//
// This file was auto-generated using :
/*
node /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/bin/vtkWrapJavaScript.js \
 @/home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkFiltersGeometry.js/vtkFiltersGeometry.js.Release.args \
 -o \
 /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkFiltersGeometry.js/vtkMarkBoundaryFilterEmbinding.cxx \
 /home/jmh/github/vtk/Filters/Geometry/vtkMarkBoundaryFilter.h
*/
#include "vtkEmbindSmartPointerTrait.h"
#include <emscripten.h>
#include <string>
#include "vtkVariant.h"
#include "vtkObjectBase.h"
#include "vtkIndent.h"
#include "vtkMarkBoundaryFilter.h"

template<> void emscripten::internal::raw_destructor<vtkMarkBoundaryFilter>(vtkMarkBoundaryFilter * ptr){ ptr->Delete(); }
EMSCRIPTEN_BINDINGS(vtkMarkBoundaryFilter_class) {
  emscripten::class_<vtkMarkBoundaryFilter, emscripten::base<vtkDataSetAlgorithm>>("vtkMarkBoundaryFilter")
    .smart_ptr<vtkSmartPointer<vtkMarkBoundaryFilter>>("vtkSmartPointer<vtkMarkBoundaryFilter>")
    .constructor(&vtk::MakeAvtkSmartPointer<vtkMarkBoundaryFilter>)
    .class_function("IsTypeOf", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkMarkBoundaryFilter::IsTypeOf( arg_0.c_str());}))
    .function("IsA", emscripten::optional_override([](vtkMarkBoundaryFilter& self, const std::string & arg_0) -> int {  return self.IsA( arg_0.c_str());}))
    .class_function("SafeDownCast", &vtkMarkBoundaryFilter::SafeDownCast, emscripten::allow_raw_pointers())
    .function("NewInstance", &vtkMarkBoundaryFilter::NewInstance, emscripten::allow_raw_pointers())
    .class_function("GetNumberOfGenerationsFromBaseType", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkMarkBoundaryFilter::GetNumberOfGenerationsFromBaseType( arg_0.c_str());}))
    .function("GetNumberOfGenerationsFromBase", emscripten::optional_override([](vtkMarkBoundaryFilter& self, const std::string & arg_0) -> int {  return self.GetNumberOfGenerationsFromBase( arg_0.c_str());}))
    .function("SetGenerateBoundaryFaces", &vtkMarkBoundaryFilter::SetGenerateBoundaryFaces)
    .function("GetGenerateBoundaryFaces", &vtkMarkBoundaryFilter::GetGenerateBoundaryFaces)
    .function("GenerateBoundaryFacesOn", &vtkMarkBoundaryFilter::GenerateBoundaryFacesOn)
    .function("GenerateBoundaryFacesOff", &vtkMarkBoundaryFilter::GenerateBoundaryFacesOff)
    .function("SetBoundaryPointsName", emscripten::optional_override([](vtkMarkBoundaryFilter& self, const std::string & arg_0) -> void {  return self.SetBoundaryPointsName( arg_0.c_str());}))
    .function("GetBoundaryPointsName", emscripten::optional_override([](vtkMarkBoundaryFilter& self) -> std::string {  return self.GetBoundaryPointsName();}))
    .function("SetBoundaryCellsName", emscripten::optional_override([](vtkMarkBoundaryFilter& self, const std::string & arg_0) -> void {  return self.SetBoundaryCellsName( arg_0.c_str());}))
    .function("GetBoundaryCellsName", emscripten::optional_override([](vtkMarkBoundaryFilter& self) -> std::string {  return self.GetBoundaryCellsName();}))
    .function("SetBoundaryFacesName", emscripten::optional_override([](vtkMarkBoundaryFilter& self, const std::string & arg_0) -> void {  return self.SetBoundaryFacesName( arg_0.c_str());}))
    .function("GetBoundaryFacesName", emscripten::optional_override([](vtkMarkBoundaryFilter& self) -> std::string {  return self.GetBoundaryFacesName();}));
}
