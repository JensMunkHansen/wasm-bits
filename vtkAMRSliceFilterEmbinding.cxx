// JavaScript wrapper for vtkAMRSliceFilter with embind 
//
// This file was auto-generated using :
/*
node /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/bin/vtkWrapJavaScript.js \
 @/home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkFiltersAMR.js/vtkFiltersAMR.js.Release.args \
 -o \
 /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkFiltersAMR.js/vtkAMRSliceFilterEmbinding.cxx \
 /home/jmh/github/vtk/Filters/AMR/vtkAMRSliceFilter.h
*/
#include "vtkEmbindSmartPointerTrait.h"
#include <emscripten.h>
#include <string>
#include "vtkVariant.h"
#include "vtkObjectBase.h"
#include "vtkIndent.h"
#include "vtkMultiProcessController.h"
#include "vtkInformation.h"
#include "vtkInformationVector.h"
#include "vtkAMRSliceFilter.h"

EMSCRIPTEN_BINDINGS(vtkFiltersAMR_vtkAMRSliceFilter_class_enums) {
}
template<> void emscripten::internal::raw_destructor<vtkAMRSliceFilter>(vtkAMRSliceFilter * ptr){ ptr->Delete(); }
EMSCRIPTEN_BINDINGS(vtkAMRSliceFilter_class) {
  using NormalTag=vtkAMRSliceFilter::NormalTag;
  emscripten::class_<vtkAMRSliceFilter, emscripten::base<vtkOverlappingAMRAlgorithm>>("vtkAMRSliceFilter")
    .smart_ptr<vtkSmartPointer<vtkAMRSliceFilter>>("vtkSmartPointer<vtkAMRSliceFilter>")
    .constructor(&vtk::MakeVTKSmartPtr<vtkAMRSliceFilter>)
    .class_function("IsTypeOf", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkAMRSliceFilter::IsTypeOf( arg_0.c_str());}))
    .function("IsA", emscripten::optional_override([](vtkAMRSliceFilter& self, const std::string & arg_0) -> int {  return self.IsA( arg_0.c_str());}))
    .class_function("SafeDownCast", &vtkAMRSliceFilter::SafeDownCast, emscripten::allow_raw_pointers())
    .function("NewInstance", &vtkAMRSliceFilter::NewInstance, emscripten::allow_raw_pointers())
    .class_function("GetNumberOfGenerationsFromBaseType", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkAMRSliceFilter::GetNumberOfGenerationsFromBaseType( arg_0.c_str());}))
    .function("GetNumberOfGenerationsFromBase", emscripten::optional_override([](vtkAMRSliceFilter& self, const std::string & arg_0) -> int {  return self.GetNumberOfGenerationsFromBase( arg_0.c_str());}))
    .function("SetOffsetFromOrigin", &vtkAMRSliceFilter::SetOffsetFromOrigin)
    .function("GetOffsetFromOrigin", &vtkAMRSliceFilter::GetOffsetFromOrigin)
    .function("SetMaxResolution", &vtkAMRSliceFilter::SetMaxResolution)
    .function("GetMaxResolution", &vtkAMRSliceFilter::GetMaxResolution)
    .function("SetNormal", &vtkAMRSliceFilter::SetNormal)
    .function("GetNormal", &vtkAMRSliceFilter::GetNormal)
    .function("SetController", &vtkAMRSliceFilter::SetController, emscripten::allow_raw_pointers())
    .function("GetController", &vtkAMRSliceFilter::GetController, emscripten::allow_raw_pointers())
    .function("FillInputPortInformation", &vtkAMRSliceFilter::FillInputPortInformation, emscripten::allow_raw_pointers())
    .function("FillOutputPortInformation", &vtkAMRSliceFilter::FillOutputPortInformation, emscripten::allow_raw_pointers());
}
EMSCRIPTEN_BINDINGS(vtkFiltersAMR_vtkAMRSliceFilter_0_2_constants) {
    typedef vtkAMRSliceFilter::NormalTag cxx_enum_type;

  const struct { const char *name; cxx_enum_type value; }
    constants[3] = {
      { "vtkAMRSliceFilter_NormalTag_X_NORMAL", vtkAMRSliceFilter::X_NORMAL },
      { "vtkAMRSliceFilter_NormalTag_Y_NORMAL", vtkAMRSliceFilter::Y_NORMAL },
      { "vtkAMRSliceFilter_NormalTag_Z_NORMAL", vtkAMRSliceFilter::Z_NORMAL },
  };
  for (int c = 0; c < 3; c++)
  {
    emscripten::constant(constants[c].name, static_cast<int>(constants[c].value));
  }
}
