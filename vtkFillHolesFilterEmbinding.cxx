// JavaScript wrapper for vtkFillHolesFilter with embind 
//
// This file was auto-generated using :
/*
node /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/bin/vtkWrapJavaScript.js \
 @/home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkFiltersModeling.js/vtkFiltersModeling.js.Release.args \
 -o \
 /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkFiltersModeling.js/vtkFillHolesFilterEmbinding.cxx \
 /home/jmh/github/vtk/Filters/Modeling/vtkFillHolesFilter.h
*/
#include "vtkEmbindSmartPointerTrait.h"
#include <emscripten.h>
#include <string>
#include "vtkVariant.h"
#include "vtkObjectBase.h"
#include "vtkIndent.h"
#include "vtkFillHolesFilter.h"

template<> void emscripten::internal::raw_destructor<vtkFillHolesFilter>(vtkFillHolesFilter * ptr){ ptr->Delete(); }
EMSCRIPTEN_BINDINGS(vtkFillHolesFilter_class) {
  emscripten::class_<vtkFillHolesFilter, emscripten::base<vtkPolyDataAlgorithm>>("vtkFillHolesFilter")
    .smart_ptr<vtkSmartPointer<vtkFillHolesFilter>>("vtkSmartPointer<vtkFillHolesFilter>")
    .constructor(&vtk::MakeAvtkSmartPointer<vtkFillHolesFilter>)
    .class_function("IsTypeOf", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkFillHolesFilter::IsTypeOf( arg_0.c_str());}))
    .function("IsA", emscripten::optional_override([](vtkFillHolesFilter& self, const std::string & arg_0) -> int {  return self.IsA( arg_0.c_str());}))
    .class_function("SafeDownCast", &vtkFillHolesFilter::SafeDownCast, emscripten::allow_raw_pointers())
    .function("NewInstance", &vtkFillHolesFilter::NewInstance, emscripten::allow_raw_pointers())
    .class_function("GetNumberOfGenerationsFromBaseType", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkFillHolesFilter::GetNumberOfGenerationsFromBaseType( arg_0.c_str());}))
    .function("GetNumberOfGenerationsFromBase", emscripten::optional_override([](vtkFillHolesFilter& self, const std::string & arg_0) -> int {  return self.GetNumberOfGenerationsFromBase( arg_0.c_str());}))
    .function("SetHoleSize", &vtkFillHolesFilter::SetHoleSize)
    .function("GetHoleSizeMinValue", &vtkFillHolesFilter::GetHoleSizeMinValue)
    .function("GetHoleSizeMaxValue", &vtkFillHolesFilter::GetHoleSizeMaxValue)
    .function("GetHoleSize", &vtkFillHolesFilter::GetHoleSize);
}
