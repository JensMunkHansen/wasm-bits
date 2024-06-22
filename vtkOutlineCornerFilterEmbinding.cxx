// JavaScript wrapper for vtkOutlineCornerFilter with embind 
//
// This file was auto-generated using :
/*
node /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/bin/vtkWrapJavaScript.js \
 @/home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkFiltersSources.js/vtkFiltersSources.js.Release.args \
 -o \
 /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkFiltersSources.js/vtkOutlineCornerFilterEmbinding.cxx \
 /home/jmh/github/vtk/Filters/Sources/vtkOutlineCornerFilter.h
*/
#include "vtkEmbindSmartPointerTrait.h"
#include <emscripten.h>
#include <string>
#include "vtkVariant.h"
#include "vtkObjectBase.h"
#include "vtkIndent.h"
#include "vtkOutlineCornerFilter.h"

template<> void emscripten::internal::raw_destructor<vtkOutlineCornerFilter>(vtkOutlineCornerFilter * ptr){ ptr->Delete(); }
EMSCRIPTEN_BINDINGS(vtkOutlineCornerFilter_class) {
  emscripten::class_<vtkOutlineCornerFilter, emscripten::base<vtkPolyDataAlgorithm>>("vtkOutlineCornerFilter")
    .smart_ptr<vtkSmartPointer<vtkOutlineCornerFilter>>("vtkSmartPointer<vtkOutlineCornerFilter>")
    .constructor(&vtk::MakeVTKSmartPtr<vtkOutlineCornerFilter>)
    .class_function("IsTypeOf", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkOutlineCornerFilter::IsTypeOf( arg_0.c_str());}))
    .function("IsA", emscripten::optional_override([](vtkOutlineCornerFilter& self, const std::string & arg_0) -> int {  return self.IsA( arg_0.c_str());}))
    .class_function("SafeDownCast", &vtkOutlineCornerFilter::SafeDownCast, emscripten::allow_raw_pointers())
    .function("NewInstance", &vtkOutlineCornerFilter::NewInstance, emscripten::allow_raw_pointers())
    .class_function("GetNumberOfGenerationsFromBaseType", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkOutlineCornerFilter::GetNumberOfGenerationsFromBaseType( arg_0.c_str());}))
    .function("GetNumberOfGenerationsFromBase", emscripten::optional_override([](vtkOutlineCornerFilter& self, const std::string & arg_0) -> int {  return self.GetNumberOfGenerationsFromBase( arg_0.c_str());}))
    .function("SetCornerFactor", &vtkOutlineCornerFilter::SetCornerFactor)
    .function("GetCornerFactorMinValue", &vtkOutlineCornerFilter::GetCornerFactorMinValue)
    .function("GetCornerFactorMaxValue", &vtkOutlineCornerFilter::GetCornerFactorMaxValue)
    .function("GetCornerFactor", &vtkOutlineCornerFilter::GetCornerFactor);
}
