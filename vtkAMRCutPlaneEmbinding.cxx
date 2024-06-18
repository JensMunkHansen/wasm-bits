// JavaScript wrapper for vtkAMRCutPlane with embind 
//
// This file was auto-generated using :
/*
node /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/bin/vtkWrapJavaScript.js \
 @/home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkFiltersAMR.js/vtkFiltersAMR.js.Release.args \
 -o \
 /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkFiltersAMR.js/vtkAMRCutPlaneEmbinding.cxx \
 /home/jmh/github/vtk/Filters/AMR/vtkAMRCutPlane.h
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
#include "vtkAMRCutPlane.h"

template<> void emscripten::internal::raw_destructor<vtkAMRCutPlane>(vtkAMRCutPlane * ptr){ ptr->Delete(); }
EMSCRIPTEN_BINDINGS(vtkAMRCutPlane_class) {
  emscripten::class_<vtkAMRCutPlane, emscripten::base<vtkMultiBlockDataSetAlgorithm>>("vtkAMRCutPlane")
    .smart_ptr<vtkSmartPointer<vtkAMRCutPlane>>("vtkSmartPointer<vtkAMRCutPlane>")
    .constructor(&vtk::MakeAvtkSmartPointer<vtkAMRCutPlane>)
    .class_function("IsTypeOf", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkAMRCutPlane::IsTypeOf( arg_0.c_str());}))
    .function("IsA", emscripten::optional_override([](vtkAMRCutPlane& self, const std::string & arg_0) -> int {  return self.IsA( arg_0.c_str());}))
    .class_function("SafeDownCast", &vtkAMRCutPlane::SafeDownCast, emscripten::allow_raw_pointers())
    .function("NewInstance", &vtkAMRCutPlane::NewInstance, emscripten::allow_raw_pointers())
    .class_function("GetNumberOfGenerationsFromBaseType", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkAMRCutPlane::GetNumberOfGenerationsFromBaseType( arg_0.c_str());}))
    .function("GetNumberOfGenerationsFromBase", emscripten::optional_override([](vtkAMRCutPlane& self, const std::string & arg_0) -> int {  return self.GetNumberOfGenerationsFromBase( arg_0.c_str());}))
    .function("SetCenter", emscripten::select_overload<void(vtkAMRCutPlane&, double, double, double)>([](vtkAMRCutPlane& self, double arg_0, double arg_1, double arg_2) -> void { return self.SetCenter( arg_0, arg_1, arg_2); }))
    .function("SetNormal", emscripten::select_overload<void(vtkAMRCutPlane&, double, double, double)>([](vtkAMRCutPlane& self, double arg_0, double arg_1, double arg_2) -> void { return self.SetNormal( arg_0, arg_1, arg_2); }))
    .function("SetLevelOfResolution", &vtkAMRCutPlane::SetLevelOfResolution)
    .function("GetLevelOfResolution", &vtkAMRCutPlane::GetLevelOfResolution)
    .function("SetUseNativeCutter", &vtkAMRCutPlane::SetUseNativeCutter)
    .function("GetUseNativeCutter", &vtkAMRCutPlane::GetUseNativeCutter)
    .function("UseNativeCutterOn", &vtkAMRCutPlane::UseNativeCutterOn)
    .function("UseNativeCutterOff", &vtkAMRCutPlane::UseNativeCutterOff)
    .function("SetController", &vtkAMRCutPlane::SetController, emscripten::allow_raw_pointers())
    .function("GetController", &vtkAMRCutPlane::GetController, emscripten::allow_raw_pointers())
    .function("FillInputPortInformation", &vtkAMRCutPlane::FillInputPortInformation, emscripten::allow_raw_pointers())
    .function("FillOutputPortInformation", &vtkAMRCutPlane::FillOutputPortInformation, emscripten::allow_raw_pointers())
    .function("SetInitialRequest", &vtkAMRCutPlane::SetInitialRequest);
}
