// JavaScript wrapper for vtkPLinearExtrusionFilter with embind 
//
// This file was auto-generated using :
/*
node /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/bin/vtkWrapJavaScript.js \
 @/home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkFiltersParallel.js/vtkFiltersParallel.js.Release.args \
 -o \
 /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkFiltersParallel.js/vtkPLinearExtrusionFilterEmbinding.cxx \
 /home/jmh/github/vtk/Filters/Parallel/vtkPLinearExtrusionFilter.h
*/
#include "vtkEmbindSmartPointerTrait.h"
#include <emscripten.h>
#include <string>
#include "vtkVariant.h"
#include "vtkObjectBase.h"
#include "vtkIndent.h"
#include "vtkPLinearExtrusionFilter.h"

template<> void emscripten::internal::raw_destructor<vtkPLinearExtrusionFilter>(vtkPLinearExtrusionFilter * ptr){ ptr->Delete(); }
EMSCRIPTEN_BINDINGS(vtkPLinearExtrusionFilter_class) {
  emscripten::class_<vtkPLinearExtrusionFilter, emscripten::base<vtkLinearExtrusionFilter>>("vtkPLinearExtrusionFilter")
    .smart_ptr<vtkSmartPointer<vtkPLinearExtrusionFilter>>("vtkSmartPointer<vtkPLinearExtrusionFilter>")
    .constructor(&vtk::MakeAvtkSmartPointer<vtkPLinearExtrusionFilter>)
    .class_function("IsTypeOf", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkPLinearExtrusionFilter::IsTypeOf( arg_0.c_str());}))
    .function("IsA", emscripten::optional_override([](vtkPLinearExtrusionFilter& self, const std::string & arg_0) -> int {  return self.IsA( arg_0.c_str());}))
    .class_function("SafeDownCast", &vtkPLinearExtrusionFilter::SafeDownCast, emscripten::allow_raw_pointers())
    .function("NewInstance", &vtkPLinearExtrusionFilter::NewInstance, emscripten::allow_raw_pointers())
    .class_function("GetNumberOfGenerationsFromBaseType", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkPLinearExtrusionFilter::GetNumberOfGenerationsFromBaseType( arg_0.c_str());}))
    .function("GetNumberOfGenerationsFromBase", emscripten::optional_override([](vtkPLinearExtrusionFilter& self, const std::string & arg_0) -> int {  return self.GetNumberOfGenerationsFromBase( arg_0.c_str());}))
    .function("SetPieceInvariant", &vtkPLinearExtrusionFilter::SetPieceInvariant)
    .function("GetPieceInvariant", &vtkPLinearExtrusionFilter::GetPieceInvariant)
    .function("PieceInvariantOn", &vtkPLinearExtrusionFilter::PieceInvariantOn)
    .function("PieceInvariantOff", &vtkPLinearExtrusionFilter::PieceInvariantOff);
}
