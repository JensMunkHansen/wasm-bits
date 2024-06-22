// JavaScript wrapper for vtkCompositeDataProbeFilter with embind 
//
// This file was auto-generated using :
/*
node /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/bin/vtkWrapJavaScript.js \
 @/home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkFiltersCore.js/vtkFiltersCore.js.Release.args \
 -o \
 /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkFiltersCore.js/vtkCompositeDataProbeFilterEmbinding.cxx \
 /home/jmh/github/vtk/Filters/Core/vtkCompositeDataProbeFilter.h
*/
#include "vtkEmbindSmartPointerTrait.h"
#include <emscripten.h>
#include <string>
#include "vtkVariant.h"
#include "vtkObjectBase.h"
#include "vtkIndent.h"
#include "vtkCompositeDataProbeFilter.h"

template<> void emscripten::internal::raw_destructor<vtkCompositeDataProbeFilter>(vtkCompositeDataProbeFilter * ptr){ ptr->Delete(); }
EMSCRIPTEN_BINDINGS(vtkCompositeDataProbeFilter_class) {
  emscripten::class_<vtkCompositeDataProbeFilter, emscripten::base<vtkProbeFilter>>("vtkCompositeDataProbeFilter")
    .smart_ptr<vtkSmartPointer<vtkCompositeDataProbeFilter>>("vtkSmartPointer<vtkCompositeDataProbeFilter>")
    .constructor(&vtk::MakeVTKSmartPtr<vtkCompositeDataProbeFilter>)
    .class_function("IsTypeOf", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkCompositeDataProbeFilter::IsTypeOf( arg_0.c_str());}))
    .function("IsA", emscripten::optional_override([](vtkCompositeDataProbeFilter& self, const std::string & arg_0) -> int {  return self.IsA( arg_0.c_str());}))
    .class_function("SafeDownCast", &vtkCompositeDataProbeFilter::SafeDownCast, emscripten::allow_raw_pointers())
    .function("NewInstance", &vtkCompositeDataProbeFilter::NewInstance, emscripten::allow_raw_pointers())
    .class_function("GetNumberOfGenerationsFromBaseType", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkCompositeDataProbeFilter::GetNumberOfGenerationsFromBaseType( arg_0.c_str());}))
    .function("GetNumberOfGenerationsFromBase", emscripten::optional_override([](vtkCompositeDataProbeFilter& self, const std::string & arg_0) -> int {  return self.GetNumberOfGenerationsFromBase( arg_0.c_str());}))
    .function("SetPassPartialArrays", &vtkCompositeDataProbeFilter::SetPassPartialArrays)
    .function("GetPassPartialArrays", &vtkCompositeDataProbeFilter::GetPassPartialArrays)
    .function("PassPartialArraysOn", &vtkCompositeDataProbeFilter::PassPartialArraysOn)
    .function("PassPartialArraysOff", &vtkCompositeDataProbeFilter::PassPartialArraysOff)
    .function("SetUseImplicitArrays", &vtkCompositeDataProbeFilter::SetUseImplicitArrays)
    .function("GetUseImplicitArrays", &vtkCompositeDataProbeFilter::GetUseImplicitArrays)
    .function("UseImplicitArraysOn", &vtkCompositeDataProbeFilter::UseImplicitArraysOn)
    .function("UseImplicitArraysOff", &vtkCompositeDataProbeFilter::UseImplicitArraysOff);
}
