// JavaScript wrapper for vtkLineSource with embind 
//
// This file was auto-generated using :
/*
node /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/bin/vtkWrapJavaScript.js \
 @/home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkFiltersSources.js/vtkFiltersSources.js.Release.args \
 -o \
 /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkFiltersSources.js/vtkLineSourceEmbinding.cxx \
 /home/jmh/github/vtk/Filters/Sources/vtkLineSource.h
*/
#include "vtkEmbindSmartPointerTrait.h"
#include <emscripten.h>
#include <string>
#include "vtkVariant.h"
#include "vtkObjectBase.h"
#include "vtkIndent.h"
#include "vtkPoints.h"
#include "vtkLineSource.h"

template<> void emscripten::internal::raw_destructor<vtkLineSource>(vtkLineSource * ptr){ ptr->Delete(); }
EMSCRIPTEN_BINDINGS(vtkLineSource_class) {
  emscripten::class_<vtkLineSource, emscripten::base<vtkPolyDataAlgorithm>>("vtkLineSource")
    .smart_ptr<vtkSmartPointer<vtkLineSource>>("vtkSmartPointer<vtkLineSource>")
    .constructor(&vtk::MakeAvtkSmartPointer<vtkLineSource>)
    .class_function("IsTypeOf", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkLineSource::IsTypeOf( arg_0.c_str());}))
    .function("IsA", emscripten::optional_override([](vtkLineSource& self, const std::string & arg_0) -> int {  return self.IsA( arg_0.c_str());}))
    .class_function("SafeDownCast", &vtkLineSource::SafeDownCast, emscripten::allow_raw_pointers())
    .function("NewInstance", &vtkLineSource::NewInstance, emscripten::allow_raw_pointers())
    .class_function("GetNumberOfGenerationsFromBaseType", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkLineSource::GetNumberOfGenerationsFromBaseType( arg_0.c_str());}))
    .function("GetNumberOfGenerationsFromBase", emscripten::optional_override([](vtkLineSource& self, const std::string & arg_0) -> int {  return self.GetNumberOfGenerationsFromBase( arg_0.c_str());}))
    .function("SetPoint1", emscripten::select_overload<void(vtkLineSource&, double, double, double)>([](vtkLineSource& self, double arg_0, double arg_1, double arg_2) -> void { return self.SetPoint1( arg_0, arg_1, arg_2); }))
    .function("SetPoint2", emscripten::select_overload<void(vtkLineSource&, double, double, double)>([](vtkLineSource& self, double arg_0, double arg_1, double arg_2) -> void { return self.SetPoint2( arg_0, arg_1, arg_2); }))
    .function("SetUseRegularRefinement", &vtkLineSource::SetUseRegularRefinement)
    .function("GetUseRegularRefinement", &vtkLineSource::GetUseRegularRefinement)
    .function("UseRegularRefinementOn", &vtkLineSource::UseRegularRefinementOn)
    .function("UseRegularRefinementOff", &vtkLineSource::UseRegularRefinementOff)
    .function("SetResolution", &vtkLineSource::SetResolution)
    .function("GetResolutionMinValue", &vtkLineSource::GetResolutionMinValue)
    .function("GetResolutionMaxValue", &vtkLineSource::GetResolutionMaxValue)
    .function("GetResolution", &vtkLineSource::GetResolution)
    .function("SetNumberOfRefinementRatios", &vtkLineSource::SetNumberOfRefinementRatios)
    .function("SetRefinementRatio", &vtkLineSource::SetRefinementRatio)
    .function("GetNumberOfRefinementRatios", &vtkLineSource::GetNumberOfRefinementRatios)
    .function("GetRefinementRatio", &vtkLineSource::GetRefinementRatio)
    .function("SetPoints", &vtkLineSource::SetPoints, emscripten::allow_raw_pointers())
    .function("GetPoints", &vtkLineSource::GetPoints, emscripten::allow_raw_pointers())
    .function("SetOutputPointsPrecision", &vtkLineSource::SetOutputPointsPrecision)
    .function("GetOutputPointsPrecision", &vtkLineSource::GetOutputPointsPrecision);
}
