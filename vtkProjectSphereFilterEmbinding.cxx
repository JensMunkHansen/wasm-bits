// JavaScript wrapper for vtkProjectSphereFilter with embind 
//
// This file was auto-generated using :
/*
node /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/bin/vtkWrapJavaScript.js \
 @/home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkFiltersGeometry.js/vtkFiltersGeometry.js.Release.args \
 -o \
 /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkFiltersGeometry.js/vtkProjectSphereFilterEmbinding.cxx \
 /home/jmh/github/vtk/Filters/Geometry/vtkProjectSphereFilter.h
*/
#include "vtkEmbindSmartPointerTrait.h"
#include <emscripten.h>
#include <string>
#include "vtkVariant.h"
#include "vtkObjectBase.h"
#include "vtkIndent.h"
#include "vtkProjectSphereFilter.h"

template<> void emscripten::internal::raw_destructor<vtkProjectSphereFilter>(vtkProjectSphereFilter * ptr){ ptr->Delete(); }
EMSCRIPTEN_BINDINGS(vtkProjectSphereFilter_class) {
  emscripten::class_<vtkProjectSphereFilter, emscripten::base<vtkPointSetAlgorithm>>("vtkProjectSphereFilter")
    .smart_ptr<vtkSmartPointer<vtkProjectSphereFilter>>("vtkSmartPointer<vtkProjectSphereFilter>")
    .constructor(&vtk::MakeVTKSmartPtr<vtkProjectSphereFilter>)
    .class_function("IsTypeOf", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkProjectSphereFilter::IsTypeOf( arg_0.c_str());}))
    .function("IsA", emscripten::optional_override([](vtkProjectSphereFilter& self, const std::string & arg_0) -> int {  return self.IsA( arg_0.c_str());}))
    .class_function("SafeDownCast", &vtkProjectSphereFilter::SafeDownCast, emscripten::allow_raw_pointers())
    .function("NewInstance", &vtkProjectSphereFilter::NewInstance, emscripten::allow_raw_pointers())
    .class_function("GetNumberOfGenerationsFromBaseType", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkProjectSphereFilter::GetNumberOfGenerationsFromBaseType( arg_0.c_str());}))
    .function("GetNumberOfGenerationsFromBase", emscripten::optional_override([](vtkProjectSphereFilter& self, const std::string & arg_0) -> int {  return self.GetNumberOfGenerationsFromBase( arg_0.c_str());}))
    .function("SetCenter", emscripten::select_overload<void(vtkProjectSphereFilter&, double, double, double)>([](vtkProjectSphereFilter& self, double arg_0, double arg_1, double arg_2) -> void { return self.SetCenter( arg_0, arg_1, arg_2); }))
    .function("GetKeepPolePoints", &vtkProjectSphereFilter::GetKeepPolePoints)
    .function("SetKeepPolePoints", &vtkProjectSphereFilter::SetKeepPolePoints)
    .function("KeepPolePointsOn", &vtkProjectSphereFilter::KeepPolePointsOn)
    .function("KeepPolePointsOff", &vtkProjectSphereFilter::KeepPolePointsOff)
    .function("GetTranslateZ", &vtkProjectSphereFilter::GetTranslateZ)
    .function("SetTranslateZ", &vtkProjectSphereFilter::SetTranslateZ)
    .function("TranslateZOn", &vtkProjectSphereFilter::TranslateZOn)
    .function("TranslateZOff", &vtkProjectSphereFilter::TranslateZOff);
}
