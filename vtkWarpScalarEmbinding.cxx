// JavaScript wrapper for vtkWarpScalar with embind 
//
// This file was auto-generated using :
/*
node /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/bin/vtkWrapJavaScript.js \
 @/home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkFiltersGeneral.js/vtkFiltersGeneral.js.Release.args \
 -o \
 /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkFiltersGeneral.js/vtkWarpScalarEmbinding.cxx \
 /home/jmh/github/vtk/Filters/General/vtkWarpScalar.h
*/
#include "vtkEmbindSmartPointerTrait.h"
#include <emscripten.h>
#include <string>
#include "vtkVariant.h"
#include "vtkObjectBase.h"
#include "vtkIndent.h"
#include "vtkInformation.h"
#include "vtkWarpScalar.h"

template<> void emscripten::internal::raw_destructor<vtkWarpScalar>(vtkWarpScalar * ptr){ ptr->Delete(); }
EMSCRIPTEN_BINDINGS(vtkWarpScalar_class) {
  emscripten::class_<vtkWarpScalar, emscripten::base<vtkPointSetAlgorithm>>("vtkWarpScalar")
    .smart_ptr<vtkSmartPointer<vtkWarpScalar>>("vtkSmartPointer<vtkWarpScalar>")
    .constructor(&vtk::MakeAvtkSmartPointer<vtkWarpScalar>)
    .class_function("IsTypeOf", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkWarpScalar::IsTypeOf( arg_0.c_str());}))
    .function("IsA", emscripten::optional_override([](vtkWarpScalar& self, const std::string & arg_0) -> int {  return self.IsA( arg_0.c_str());}))
    .class_function("SafeDownCast", &vtkWarpScalar::SafeDownCast, emscripten::allow_raw_pointers())
    .function("NewInstance", &vtkWarpScalar::NewInstance, emscripten::allow_raw_pointers())
    .class_function("GetNumberOfGenerationsFromBaseType", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkWarpScalar::GetNumberOfGenerationsFromBaseType( arg_0.c_str());}))
    .function("GetNumberOfGenerationsFromBase", emscripten::optional_override([](vtkWarpScalar& self, const std::string & arg_0) -> int {  return self.GetNumberOfGenerationsFromBase( arg_0.c_str());}))
    .function("SetScaleFactor", &vtkWarpScalar::SetScaleFactor)
    .function("GetScaleFactor", &vtkWarpScalar::GetScaleFactor)
    .function("SetUseNormal", &vtkWarpScalar::SetUseNormal)
    .function("GetUseNormal", &vtkWarpScalar::GetUseNormal)
    .function("UseNormalOn", &vtkWarpScalar::UseNormalOn)
    .function("UseNormalOff", &vtkWarpScalar::UseNormalOff)
    .function("SetNormal", emscripten::select_overload<void(vtkWarpScalar&, double, double, double)>([](vtkWarpScalar& self, double arg_0, double arg_1, double arg_2) -> void { return self.SetNormal( arg_0, arg_1, arg_2); }))
    .function("SetXYPlane", &vtkWarpScalar::SetXYPlane)
    .function("GetXYPlane", &vtkWarpScalar::GetXYPlane)
    .function("XYPlaneOn", &vtkWarpScalar::XYPlaneOn)
    .function("XYPlaneOff", &vtkWarpScalar::XYPlaneOff)
    .function("SetOutputPointsPrecision", &vtkWarpScalar::SetOutputPointsPrecision)
    .function("GetOutputPointsPrecision", &vtkWarpScalar::GetOutputPointsPrecision)
    .function("GetGenerateEnclosure", &vtkWarpScalar::GetGenerateEnclosure)
    .function("SetGenerateEnclosure", &vtkWarpScalar::SetGenerateEnclosure)
    .function("GenerateEnclosureOn", &vtkWarpScalar::GenerateEnclosureOn)
    .function("GenerateEnclosureOff", &vtkWarpScalar::GenerateEnclosureOff)
    .function("FillInputPortInformation", &vtkWarpScalar::FillInputPortInformation, emscripten::allow_raw_pointers());
}
