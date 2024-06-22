// JavaScript wrapper for vtkLinearExtrusionFilter with embind 
//
// This file was auto-generated using :
/*
node /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/bin/vtkWrapJavaScript.js \
 @/home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkFiltersModeling.js/vtkFiltersModeling.js.Release.args \
 -o \
 /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkFiltersModeling.js/vtkLinearExtrusionFilterEmbinding.cxx \
 /home/jmh/github/vtk/Filters/Modeling/vtkLinearExtrusionFilter.h
*/
#include "vtkEmbindSmartPointerTrait.h"
#include <emscripten.h>
#include <string>
#include "vtkVariant.h"
#include "vtkObjectBase.h"
#include "vtkIndent.h"
#include "vtkLinearExtrusionFilter.h"

EMSCRIPTEN_BINDINGS(vtkFiltersModeling_vtkLinearExtrusionFilter_0_1_constants) {
  const struct { const char *name; int value; }
    constants[3] = {
      { "VTK_VECTOR_EXTRUSION", 1 },
      { "VTK_NORMAL_EXTRUSION", 2 },
      { "VTK_POINT_EXTRUSION", 3 },
  };
  for (int c = 0; c < 3; c++)
  {
    emscripten::constant(constants[c].name, constants[c].value);
  }
}
template<> void emscripten::internal::raw_destructor<vtkLinearExtrusionFilter>(vtkLinearExtrusionFilter * ptr){ ptr->Delete(); }
EMSCRIPTEN_BINDINGS(vtkLinearExtrusionFilter_class) {
  emscripten::class_<vtkLinearExtrusionFilter, emscripten::base<vtkPolyDataAlgorithm>>("vtkLinearExtrusionFilter")
    .smart_ptr<vtkSmartPointer<vtkLinearExtrusionFilter>>("vtkSmartPointer<vtkLinearExtrusionFilter>")
    .constructor(&vtk::MakeVTKSmartPtr<vtkLinearExtrusionFilter>)
    .class_function("IsTypeOf", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkLinearExtrusionFilter::IsTypeOf( arg_0.c_str());}))
    .function("IsA", emscripten::optional_override([](vtkLinearExtrusionFilter& self, const std::string & arg_0) -> int {  return self.IsA( arg_0.c_str());}))
    .class_function("SafeDownCast", &vtkLinearExtrusionFilter::SafeDownCast, emscripten::allow_raw_pointers())
    .function("NewInstance", &vtkLinearExtrusionFilter::NewInstance, emscripten::allow_raw_pointers())
    .class_function("GetNumberOfGenerationsFromBaseType", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkLinearExtrusionFilter::GetNumberOfGenerationsFromBaseType( arg_0.c_str());}))
    .function("GetNumberOfGenerationsFromBase", emscripten::optional_override([](vtkLinearExtrusionFilter& self, const std::string & arg_0) -> int {  return self.GetNumberOfGenerationsFromBase( arg_0.c_str());}))
    .function("SetExtrusionType", &vtkLinearExtrusionFilter::SetExtrusionType)
    .function("GetExtrusionTypeMinValue", &vtkLinearExtrusionFilter::GetExtrusionTypeMinValue)
    .function("GetExtrusionTypeMaxValue", &vtkLinearExtrusionFilter::GetExtrusionTypeMaxValue)
    .function("GetExtrusionType", &vtkLinearExtrusionFilter::GetExtrusionType)
    .function("SetExtrusionTypeToVectorExtrusion", &vtkLinearExtrusionFilter::SetExtrusionTypeToVectorExtrusion)
    .function("SetExtrusionTypeToNormalExtrusion", &vtkLinearExtrusionFilter::SetExtrusionTypeToNormalExtrusion)
    .function("SetExtrusionTypeToPointExtrusion", &vtkLinearExtrusionFilter::SetExtrusionTypeToPointExtrusion)
    .function("SetCapping", &vtkLinearExtrusionFilter::SetCapping)
    .function("GetCapping", &vtkLinearExtrusionFilter::GetCapping)
    .function("CappingOn", &vtkLinearExtrusionFilter::CappingOn)
    .function("CappingOff", &vtkLinearExtrusionFilter::CappingOff)
    .function("SetScaleFactor", &vtkLinearExtrusionFilter::SetScaleFactor)
    .function("GetScaleFactor", &vtkLinearExtrusionFilter::GetScaleFactor)
    .function("SetVector", emscripten::select_overload<void(vtkLinearExtrusionFilter&, double, double, double)>([](vtkLinearExtrusionFilter& self, double arg_0, double arg_1, double arg_2) -> void { return self.SetVector( arg_0, arg_1, arg_2); }))
    .function("SetExtrusionPoint", emscripten::select_overload<void(vtkLinearExtrusionFilter&, double, double, double)>([](vtkLinearExtrusionFilter& self, double arg_0, double arg_1, double arg_2) -> void { return self.SetExtrusionPoint( arg_0, arg_1, arg_2); }));
}
