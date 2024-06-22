// JavaScript wrapper for vtkReebGraphSimplificationMetric with embind 
//
// This file was auto-generated using :
/*
node /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/bin/vtkWrapJavaScript.js \
 @/home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkCommonDataModel.js/vtkCommonDataModel.js.Release.args \
 -o \
 /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkCommonDataModel.js/vtkReebGraphSimplificationMetricEmbinding.cxx \
 /home/jmh/github/vtk/Common/DataModel/vtkReebGraphSimplificationMetric.h
*/
#include "vtkEmbindSmartPointerTrait.h"
#include <emscripten.h>
#include <string>
#include "vtkVariant.h"
#include "vtkObjectBase.h"
#include "vtkIndent.h"
#include "vtkDataSet.h"
#include "vtkDataArray.h"
#include "vtkAbstractArray.h"
#include "vtkReebGraphSimplificationMetric.h"

template<> void emscripten::internal::raw_destructor<vtkReebGraphSimplificationMetric>(vtkReebGraphSimplificationMetric * ptr){ ptr->Delete(); }
EMSCRIPTEN_BINDINGS(vtkReebGraphSimplificationMetric_class) {
  emscripten::class_<vtkReebGraphSimplificationMetric, emscripten::base<vtkObject>>("vtkReebGraphSimplificationMetric")
    .smart_ptr<vtkSmartPointer<vtkReebGraphSimplificationMetric>>("vtkSmartPointer<vtkReebGraphSimplificationMetric>")
    .constructor(&vtk::MakeVTKSmartPtr<vtkReebGraphSimplificationMetric>)
    .class_function("IsTypeOf", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkReebGraphSimplificationMetric::IsTypeOf( arg_0.c_str());}))
    .function("IsA", emscripten::optional_override([](vtkReebGraphSimplificationMetric& self, const std::string & arg_0) -> int {  return self.IsA( arg_0.c_str());}))
    .class_function("SafeDownCast", &vtkReebGraphSimplificationMetric::SafeDownCast, emscripten::allow_raw_pointers())
    .function("NewInstance", &vtkReebGraphSimplificationMetric::NewInstance, emscripten::allow_raw_pointers())
    .class_function("GetNumberOfGenerationsFromBaseType", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkReebGraphSimplificationMetric::GetNumberOfGenerationsFromBaseType( arg_0.c_str());}))
    .function("GetNumberOfGenerationsFromBase", emscripten::optional_override([](vtkReebGraphSimplificationMetric& self, const std::string & arg_0) -> int {  return self.GetNumberOfGenerationsFromBase( arg_0.c_str());}))
    .function("SetLowerBound", &vtkReebGraphSimplificationMetric::SetLowerBound)
    .function("GetLowerBound", &vtkReebGraphSimplificationMetric::GetLowerBound)
    .function("SetUpperBound", &vtkReebGraphSimplificationMetric::SetUpperBound)
    .function("GetUpperBound", &vtkReebGraphSimplificationMetric::GetUpperBound)
    .function("ComputeMetric", &vtkReebGraphSimplificationMetric::ComputeMetric, emscripten::allow_raw_pointers());
}
