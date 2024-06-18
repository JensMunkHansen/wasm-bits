// JavaScript wrapper for vtkGenericSubdivisionErrorMetric with embind 
//
// This file was auto-generated using :
/*
node /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/bin/vtkWrapJavaScript.js \
 @/home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkCommonDataModel.js/vtkCommonDataModel.js.Release.args \
 -o \
 /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkCommonDataModel.js/vtkGenericSubdivisionErrorMetricEmbinding.cxx \
 /home/jmh/github/vtk/Common/DataModel/vtkGenericSubdivisionErrorMetric.h
*/
#include "vtkEmbindSmartPointerTrait.h"
#include <emscripten.h>
#include <string>
#include "vtkVariant.h"
#include "vtkObjectBase.h"
#include "vtkIndent.h"
#include "vtkGenericAdaptorCell.h"
#include "vtkGenericDataSet.h"
#include "vtkGenericSubdivisionErrorMetric.h"

template<> void emscripten::internal::raw_destructor<vtkGenericSubdivisionErrorMetric>(vtkGenericSubdivisionErrorMetric * ptr){ ptr->Delete(); }
EMSCRIPTEN_BINDINGS(vtkGenericSubdivisionErrorMetric_class) {
  emscripten::class_<vtkGenericSubdivisionErrorMetric, emscripten::base<vtkObject>>("vtkGenericSubdivisionErrorMetric")
    .class_function("IsTypeOf", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkGenericSubdivisionErrorMetric::IsTypeOf( arg_0.c_str());}))
    .function("IsA", emscripten::optional_override([](vtkGenericSubdivisionErrorMetric& self, const std::string & arg_0) -> int {  return self.IsA( arg_0.c_str());}))
    .class_function("SafeDownCast", &vtkGenericSubdivisionErrorMetric::SafeDownCast, emscripten::allow_raw_pointers())
    .function("NewInstance", &vtkGenericSubdivisionErrorMetric::NewInstance, emscripten::allow_raw_pointers())
    .class_function("GetNumberOfGenerationsFromBaseType", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkGenericSubdivisionErrorMetric::GetNumberOfGenerationsFromBaseType( arg_0.c_str());}))
    .function("GetNumberOfGenerationsFromBase", emscripten::optional_override([](vtkGenericSubdivisionErrorMetric& self, const std::string & arg_0) -> int {  return self.GetNumberOfGenerationsFromBase( arg_0.c_str());}))
    .function("SetGenericCell", &vtkGenericSubdivisionErrorMetric::SetGenericCell, emscripten::allow_raw_pointers())
    .function("GetGenericCell", &vtkGenericSubdivisionErrorMetric::GetGenericCell, emscripten::allow_raw_pointers())
    .function("SetDataSet", &vtkGenericSubdivisionErrorMetric::SetDataSet, emscripten::allow_raw_pointers())
    .function("GetDataSet", &vtkGenericSubdivisionErrorMetric::GetDataSet, emscripten::allow_raw_pointers());
}
