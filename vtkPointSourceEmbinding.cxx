// JavaScript wrapper for vtkPointSource with embind 
//
// This file was auto-generated using :
/*
node /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/bin/vtkWrapJavaScript.js \
 @/home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkFiltersSources.js/vtkFiltersSources.js.Release.args \
 -o \
 /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkFiltersSources.js/vtkPointSourceEmbinding.cxx \
 /home/jmh/github/vtk/Filters/Sources/vtkPointSource.h
*/
#include "vtkEmbindSmartPointerTrait.h"
#include <emscripten.h>
#include <string>
#include "vtkVariant.h"
#include "vtkObjectBase.h"
#include "vtkIndent.h"
#include "vtkRandomSequence.h"
#include "vtkPointSource.h"

EMSCRIPTEN_BINDINGS(vtkFiltersSources_vtkPointSource_0_1_constants) {
  const struct { const char *name; int value; }
    constants[3] = {
      { "VTK_POINT_SHELL", 0 },
      { "VTK_POINT_UNIFORM", 1 },
      { "VTK_POINT_EXPONENTIAL", 2 },
  };
  for (int c = 0; c < 3; c++)
  {
    emscripten::constant(constants[c].name, constants[c].value);
  }
}
template<> void emscripten::internal::raw_destructor<vtkPointSource>(vtkPointSource * ptr){ ptr->Delete(); }
EMSCRIPTEN_BINDINGS(vtkPointSource_class) {
  emscripten::class_<vtkPointSource, emscripten::base<vtkPolyDataAlgorithm>>("vtkPointSource")
    .smart_ptr<vtkSmartPointer<vtkPointSource>>("vtkSmartPointer<vtkPointSource>")
    .constructor(&vtk::MakeVTKSmartPtr<vtkPointSource>)
    .class_function("IsTypeOf", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkPointSource::IsTypeOf( arg_0.c_str());}))
    .function("IsA", emscripten::optional_override([](vtkPointSource& self, const std::string & arg_0) -> int {  return self.IsA( arg_0.c_str());}))
    .class_function("SafeDownCast", &vtkPointSource::SafeDownCast, emscripten::allow_raw_pointers())
    .function("NewInstance", &vtkPointSource::NewInstance, emscripten::allow_raw_pointers())
    .class_function("GetNumberOfGenerationsFromBaseType", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkPointSource::GetNumberOfGenerationsFromBaseType( arg_0.c_str());}))
    .function("GetNumberOfGenerationsFromBase", emscripten::optional_override([](vtkPointSource& self, const std::string & arg_0) -> int {  return self.GetNumberOfGenerationsFromBase( arg_0.c_str());}))
    .function("SetNumberOfPoints", &vtkPointSource::SetNumberOfPoints)
    .function("GetNumberOfPointsMinValue", &vtkPointSource::GetNumberOfPointsMinValue)
    .function("GetNumberOfPointsMaxValue", &vtkPointSource::GetNumberOfPointsMaxValue)
    .function("GetNumberOfPoints", &vtkPointSource::GetNumberOfPoints)
    .function("SetCenter", emscripten::select_overload<void(vtkPointSource&, double, double, double)>([](vtkPointSource& self, double arg_0, double arg_1, double arg_2) -> void { return self.SetCenter( arg_0, arg_1, arg_2); }))
    .function("SetRadius", &vtkPointSource::SetRadius)
    .function("GetRadiusMinValue", &vtkPointSource::GetRadiusMinValue)
    .function("GetRadiusMaxValue", &vtkPointSource::GetRadiusMaxValue)
    .function("GetRadius", &vtkPointSource::GetRadius)
    .function("SetDistribution", &vtkPointSource::SetDistribution)
    .function("GetDistributionMinValue", &vtkPointSource::GetDistributionMinValue)
    .function("GetDistributionMaxValue", &vtkPointSource::GetDistributionMaxValue)
    .function("SetDistributionToShell", &vtkPointSource::SetDistributionToShell)
    .function("SetDistributionToUniform", &vtkPointSource::SetDistributionToUniform)
    .function("SetDistributionToExponential", &vtkPointSource::SetDistributionToExponential)
    .function("GetDistribution", &vtkPointSource::GetDistribution)
    .function("SetLambda", &vtkPointSource::SetLambda)
    .function("GetLambda", &vtkPointSource::GetLambda)
    .function("SetOutputPointsPrecision", &vtkPointSource::SetOutputPointsPrecision)
    .function("GetOutputPointsPrecision", &vtkPointSource::GetOutputPointsPrecision)
    .function("SetRandomSequence", &vtkPointSource::SetRandomSequence, emscripten::allow_raw_pointers())
    .function("GetRandomSequence", &vtkPointSource::GetRandomSequence, emscripten::allow_raw_pointers());
}
