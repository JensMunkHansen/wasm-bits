// JavaScript wrapper for vtkLinearToQuadraticCellsFilter with embind 
//
// This file was auto-generated using :
/*
node /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/bin/vtkWrapJavaScript.js \
 @/home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkFiltersGeometry.js/vtkFiltersGeometry.js.Release.args \
 -o \
 /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkFiltersGeometry.js/vtkLinearToQuadraticCellsFilterEmbinding.cxx \
 /home/jmh/github/vtk/Filters/Geometry/vtkLinearToQuadraticCellsFilter.h
*/
#include "vtkEmbindSmartPointerTrait.h"
#include <emscripten.h>
#include <string>
#include "vtkVariant.h"
#include "vtkObjectBase.h"
#include "vtkIndent.h"
#include "vtkIncrementalPointLocator.h"
#include "vtkLinearToQuadraticCellsFilter.h"

template<> void emscripten::internal::raw_destructor<vtkLinearToQuadraticCellsFilter>(vtkLinearToQuadraticCellsFilter * ptr){ ptr->Delete(); }
EMSCRIPTEN_BINDINGS(vtkLinearToQuadraticCellsFilter_class) {
  emscripten::class_<vtkLinearToQuadraticCellsFilter, emscripten::base<vtkUnstructuredGridAlgorithm>>("vtkLinearToQuadraticCellsFilter")
    .smart_ptr<vtkSmartPointer<vtkLinearToQuadraticCellsFilter>>("vtkSmartPointer<vtkLinearToQuadraticCellsFilter>")
    .constructor(&vtk::MakeVTKSmartPtr<vtkLinearToQuadraticCellsFilter>)
    .class_function("IsTypeOf", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkLinearToQuadraticCellsFilter::IsTypeOf( arg_0.c_str());}))
    .function("IsA", emscripten::optional_override([](vtkLinearToQuadraticCellsFilter& self, const std::string & arg_0) -> int {  return self.IsA( arg_0.c_str());}))
    .class_function("SafeDownCast", &vtkLinearToQuadraticCellsFilter::SafeDownCast, emscripten::allow_raw_pointers())
    .function("NewInstance", &vtkLinearToQuadraticCellsFilter::NewInstance, emscripten::allow_raw_pointers())
    .class_function("GetNumberOfGenerationsFromBaseType", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkLinearToQuadraticCellsFilter::GetNumberOfGenerationsFromBaseType( arg_0.c_str());}))
    .function("GetNumberOfGenerationsFromBase", emscripten::optional_override([](vtkLinearToQuadraticCellsFilter& self, const std::string & arg_0) -> int {  return self.GetNumberOfGenerationsFromBase( arg_0.c_str());}))
    .function("SetLocator", &vtkLinearToQuadraticCellsFilter::SetLocator, emscripten::allow_raw_pointers())
    .function("GetLocator", &vtkLinearToQuadraticCellsFilter::GetLocator, emscripten::allow_raw_pointers())
    .function("CreateDefaultLocator", &vtkLinearToQuadraticCellsFilter::CreateDefaultLocator)
    .function("SetOutputPointsPrecision", &vtkLinearToQuadraticCellsFilter::SetOutputPointsPrecision)
    .function("GetOutputPointsPrecision", &vtkLinearToQuadraticCellsFilter::GetOutputPointsPrecision)
    .function("GetMTime", &vtkLinearToQuadraticCellsFilter::GetMTime);
}
