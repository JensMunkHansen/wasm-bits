// JavaScript wrapper for vtkRotationFilter with embind 
//
// This file was auto-generated using :
/*
node /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/bin/vtkWrapJavaScript.js \
 @/home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkFiltersGeneral.js/vtkFiltersGeneral.js.Release.args \
 -o \
 /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkFiltersGeneral.js/vtkRotationFilterEmbinding.cxx \
 /home/jmh/github/vtk/Filters/General/vtkRotationFilter.h
*/
#include "vtkEmbindSmartPointerTrait.h"
#include <emscripten.h>
#include <string>
#include "vtkVariant.h"
#include "vtkObjectBase.h"
#include "vtkIndent.h"
#include "vtkRotationFilter.h"

EMSCRIPTEN_BINDINGS(vtkFiltersGeneral_vtkRotationFilter_class_enums) {
}
template<> void emscripten::internal::raw_destructor<vtkRotationFilter>(vtkRotationFilter * ptr){ ptr->Delete(); }
EMSCRIPTEN_BINDINGS(vtkRotationFilter_class) {
  using RotationAxis=vtkRotationFilter::RotationAxis;
  emscripten::class_<vtkRotationFilter, emscripten::base<vtkUnstructuredGridAlgorithm>>("vtkRotationFilter")
    .smart_ptr<vtkSmartPointer<vtkRotationFilter>>("vtkSmartPointer<vtkRotationFilter>")
    .constructor(&vtk::MakeAvtkSmartPointer<vtkRotationFilter>)
    .class_function("IsTypeOf", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkRotationFilter::IsTypeOf( arg_0.c_str());}))
    .function("IsA", emscripten::optional_override([](vtkRotationFilter& self, const std::string & arg_0) -> int {  return self.IsA( arg_0.c_str());}))
    .class_function("SafeDownCast", &vtkRotationFilter::SafeDownCast, emscripten::allow_raw_pointers())
    .function("NewInstance", &vtkRotationFilter::NewInstance, emscripten::allow_raw_pointers())
    .class_function("GetNumberOfGenerationsFromBaseType", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkRotationFilter::GetNumberOfGenerationsFromBaseType( arg_0.c_str());}))
    .function("GetNumberOfGenerationsFromBase", emscripten::optional_override([](vtkRotationFilter& self, const std::string & arg_0) -> int {  return self.GetNumberOfGenerationsFromBase( arg_0.c_str());}))
    .function("SetAxis", &vtkRotationFilter::SetAxis)
    .function("GetAxisMinValue", &vtkRotationFilter::GetAxisMinValue)
    .function("GetAxisMaxValue", &vtkRotationFilter::GetAxisMaxValue)
    .function("GetAxis", &vtkRotationFilter::GetAxis)
    .function("SetAxisToX", &vtkRotationFilter::SetAxisToX)
    .function("SetAxisToY", &vtkRotationFilter::SetAxisToY)
    .function("SetAxisToZ", &vtkRotationFilter::SetAxisToZ)
    .function("SetAngle", &vtkRotationFilter::SetAngle)
    .function("GetAngle", &vtkRotationFilter::GetAngle)
    .function("SetCenter", emscripten::select_overload<void(vtkRotationFilter&, double, double, double)>([](vtkRotationFilter& self, double arg_0, double arg_1, double arg_2) -> void { return self.SetCenter( arg_0, arg_1, arg_2); }))
    .function("SetNumberOfCopies", &vtkRotationFilter::SetNumberOfCopies)
    .function("GetNumberOfCopies", &vtkRotationFilter::GetNumberOfCopies)
    .function("SetCopyInput", &vtkRotationFilter::SetCopyInput)
    .function("GetCopyInput", &vtkRotationFilter::GetCopyInput)
    .function("CopyInputOn", &vtkRotationFilter::CopyInputOn)
    .function("CopyInputOff", &vtkRotationFilter::CopyInputOff);
}
EMSCRIPTEN_BINDINGS(vtkFiltersGeneral_vtkRotationFilter_0_2_constants) {
    typedef vtkRotationFilter::RotationAxis cxx_enum_type;

  const struct { const char *name; cxx_enum_type value; }
    constants[3] = {
      { "vtkRotationFilter_RotationAxis_USE_X", vtkRotationFilter::USE_X },
      { "vtkRotationFilter_RotationAxis_USE_Y", vtkRotationFilter::USE_Y },
      { "vtkRotationFilter_RotationAxis_USE_Z", vtkRotationFilter::USE_Z },
  };
  for (int c = 0; c < 3; c++)
  {
    emscripten::constant(constants[c].name, static_cast<int>(constants[c].value));
  }
}
