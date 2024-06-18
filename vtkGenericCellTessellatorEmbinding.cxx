// JavaScript wrapper for vtkGenericCellTessellator with embind 
//
// This file was auto-generated using :
/*
node /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/bin/vtkWrapJavaScript.js \
 @/home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkCommonDataModel.js/vtkCommonDataModel.js.Release.args \
 -o \
 /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkCommonDataModel.js/vtkGenericCellTessellatorEmbinding.cxx \
 /home/jmh/github/vtk/Common/DataModel/vtkGenericCellTessellator.h
*/
#include "vtkEmbindSmartPointerTrait.h"
#include <emscripten.h>
#include <string>
#include "vtkVariant.h"
#include "vtkObjectBase.h"
#include "vtkIndent.h"
#include "vtkGenericAdaptorCell.h"
#include "vtkGenericAttributeCollection.h"
#include "vtkDoubleArray.h"
#include "vtkCellArray.h"
#include "vtkPointData.h"
#include "vtkCollection.h"
#include "vtkGenericDataSet.h"
#include "vtkGenericCellTessellator.h"

template<> void emscripten::internal::raw_destructor<vtkGenericCellTessellator>(vtkGenericCellTessellator * ptr){ ptr->Delete(); }
EMSCRIPTEN_BINDINGS(vtkGenericCellTessellator_class) {
  emscripten::class_<vtkGenericCellTessellator, emscripten::base<vtkObject>>("vtkGenericCellTessellator")
    .class_function("IsTypeOf", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkGenericCellTessellator::IsTypeOf( arg_0.c_str());}))
    .function("IsA", emscripten::optional_override([](vtkGenericCellTessellator& self, const std::string & arg_0) -> int {  return self.IsA( arg_0.c_str());}))
    .class_function("SafeDownCast", &vtkGenericCellTessellator::SafeDownCast, emscripten::allow_raw_pointers())
    .function("NewInstance", &vtkGenericCellTessellator::NewInstance, emscripten::allow_raw_pointers())
    .class_function("GetNumberOfGenerationsFromBaseType", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkGenericCellTessellator::GetNumberOfGenerationsFromBaseType( arg_0.c_str());}))
    .function("GetNumberOfGenerationsFromBase", emscripten::optional_override([](vtkGenericCellTessellator& self, const std::string & arg_0) -> int {  return self.GetNumberOfGenerationsFromBase( arg_0.c_str());}))
    .function("SetErrorMetrics", &vtkGenericCellTessellator::SetErrorMetrics, emscripten::allow_raw_pointers())
    .function("GetErrorMetrics", &vtkGenericCellTessellator::GetErrorMetrics, emscripten::allow_raw_pointers())
    .function("InitErrorMetrics", &vtkGenericCellTessellator::InitErrorMetrics, emscripten::allow_raw_pointers())
    .function("GetMeasurement", &vtkGenericCellTessellator::GetMeasurement)
    .function("SetMeasurement", &vtkGenericCellTessellator::SetMeasurement)
    .function("GetMaxErrors", emscripten::optional_override([](vtkGenericCellTessellator& self, std::uintptr_t arg_0) -> void {  return self.GetMaxErrors(reinterpret_cast<double*>(arg_0 * sizeof(double)));}));
}
