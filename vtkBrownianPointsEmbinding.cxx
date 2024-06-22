// JavaScript wrapper for vtkBrownianPoints with embind 
//
// This file was auto-generated using :
/*
node /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/bin/vtkWrapJavaScript.js \
 @/home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkFiltersGeneral.js/vtkFiltersGeneral.js.Release.args \
 -o \
 /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkFiltersGeneral.js/vtkBrownianPointsEmbinding.cxx \
 /home/jmh/github/vtk/Filters/General/vtkBrownianPoints.h
*/
#include "vtkEmbindSmartPointerTrait.h"
#include <emscripten.h>
#include <string>
#include "vtkVariant.h"
#include "vtkObjectBase.h"
#include "vtkIndent.h"
#include "vtkBrownianPoints.h"

template<> void emscripten::internal::raw_destructor<vtkBrownianPoints>(vtkBrownianPoints * ptr){ ptr->Delete(); }
EMSCRIPTEN_BINDINGS(vtkBrownianPoints_class) {
  emscripten::class_<vtkBrownianPoints, emscripten::base<vtkDataSetAlgorithm>>("vtkBrownianPoints")
    .smart_ptr<vtkSmartPointer<vtkBrownianPoints>>("vtkSmartPointer<vtkBrownianPoints>")
    .constructor(&vtk::MakeVTKSmartPtr<vtkBrownianPoints>)
    .class_function("IsTypeOf", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkBrownianPoints::IsTypeOf( arg_0.c_str());}))
    .function("IsA", emscripten::optional_override([](vtkBrownianPoints& self, const std::string & arg_0) -> int {  return self.IsA( arg_0.c_str());}))
    .class_function("SafeDownCast", &vtkBrownianPoints::SafeDownCast, emscripten::allow_raw_pointers())
    .function("NewInstance", &vtkBrownianPoints::NewInstance, emscripten::allow_raw_pointers())
    .class_function("GetNumberOfGenerationsFromBaseType", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkBrownianPoints::GetNumberOfGenerationsFromBaseType( arg_0.c_str());}))
    .function("GetNumberOfGenerationsFromBase", emscripten::optional_override([](vtkBrownianPoints& self, const std::string & arg_0) -> int {  return self.GetNumberOfGenerationsFromBase( arg_0.c_str());}))
    .function("SetMinimumSpeed", &vtkBrownianPoints::SetMinimumSpeed)
    .function("GetMinimumSpeedMinValue", &vtkBrownianPoints::GetMinimumSpeedMinValue)
    .function("GetMinimumSpeedMaxValue", &vtkBrownianPoints::GetMinimumSpeedMaxValue)
    .function("GetMinimumSpeed", &vtkBrownianPoints::GetMinimumSpeed)
    .function("SetMaximumSpeed", &vtkBrownianPoints::SetMaximumSpeed)
    .function("GetMaximumSpeedMinValue", &vtkBrownianPoints::GetMaximumSpeedMinValue)
    .function("GetMaximumSpeedMaxValue", &vtkBrownianPoints::GetMaximumSpeedMaxValue)
    .function("GetMaximumSpeed", &vtkBrownianPoints::GetMaximumSpeed);
}
