// JavaScript wrapper for vtkQuantizePolyDataPoints with embind 
//
// This file was auto-generated using :
/*
node /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/bin/vtkWrapJavaScript.js \
 @/home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkFiltersGeneral.js/vtkFiltersGeneral.js.Release.args \
 -o \
 /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkFiltersGeneral.js/vtkQuantizePolyDataPointsEmbinding.cxx \
 /home/jmh/github/vtk/Filters/General/vtkQuantizePolyDataPoints.h
*/
#include "vtkEmbindSmartPointerTrait.h"
#include <emscripten.h>
#include <string>
#include "vtkVariant.h"
#include "vtkObjectBase.h"
#include "vtkIndent.h"
#include "vtkQuantizePolyDataPoints.h"

template<> void emscripten::internal::raw_destructor<vtkQuantizePolyDataPoints>(vtkQuantizePolyDataPoints * ptr){ ptr->Delete(); }
EMSCRIPTEN_BINDINGS(vtkQuantizePolyDataPoints_class) {
  emscripten::class_<vtkQuantizePolyDataPoints, emscripten::base<vtkCleanPolyData>>("vtkQuantizePolyDataPoints")
    .smart_ptr<vtkSmartPointer<vtkQuantizePolyDataPoints>>("vtkSmartPointer<vtkQuantizePolyDataPoints>")
    .constructor(&vtk::MakeVTKSmartPtr<vtkQuantizePolyDataPoints>)
    .class_function("IsTypeOf", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkQuantizePolyDataPoints::IsTypeOf( arg_0.c_str());}))
    .function("IsA", emscripten::optional_override([](vtkQuantizePolyDataPoints& self, const std::string & arg_0) -> int {  return self.IsA( arg_0.c_str());}))
    .class_function("SafeDownCast", &vtkQuantizePolyDataPoints::SafeDownCast, emscripten::allow_raw_pointers())
    .function("NewInstance", &vtkQuantizePolyDataPoints::NewInstance, emscripten::allow_raw_pointers())
    .class_function("GetNumberOfGenerationsFromBaseType", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkQuantizePolyDataPoints::GetNumberOfGenerationsFromBaseType( arg_0.c_str());}))
    .function("GetNumberOfGenerationsFromBase", emscripten::optional_override([](vtkQuantizePolyDataPoints& self, const std::string & arg_0) -> int {  return self.GetNumberOfGenerationsFromBase( arg_0.c_str());}))
    .function("SetQFactor", &vtkQuantizePolyDataPoints::SetQFactor)
    .function("GetQFactorMinValue", &vtkQuantizePolyDataPoints::GetQFactorMinValue)
    .function("GetQFactorMaxValue", &vtkQuantizePolyDataPoints::GetQFactorMaxValue)
    .function("GetQFactor", &vtkQuantizePolyDataPoints::GetQFactor);
}
