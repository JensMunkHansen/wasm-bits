// JavaScript wrapper for vtkPConvertToMultiBlockDataSet with embind 
//
// This file was auto-generated using :
/*
node /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/bin/vtkWrapJavaScript.js \
 @/home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkFiltersParallel.js/vtkFiltersParallel.js.Release.args \
 -o \
 /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkFiltersParallel.js/vtkPConvertToMultiBlockDataSetEmbinding.cxx \
 /home/jmh/github/vtk/Filters/Parallel/vtkPConvertToMultiBlockDataSet.h
*/
#include "vtkEmbindSmartPointerTrait.h"
#include <emscripten.h>
#include <string>
#include "vtkVariant.h"
#include "vtkObjectBase.h"
#include "vtkIndent.h"
#include "vtkMultiProcessController.h"
#include "vtkPConvertToMultiBlockDataSet.h"

template<> void emscripten::internal::raw_destructor<vtkPConvertToMultiBlockDataSet>(vtkPConvertToMultiBlockDataSet * ptr){ ptr->Delete(); }
EMSCRIPTEN_BINDINGS(vtkPConvertToMultiBlockDataSet_class) {
  emscripten::class_<vtkPConvertToMultiBlockDataSet, emscripten::base<vtkConvertToMultiBlockDataSet>>("vtkPConvertToMultiBlockDataSet")
    .smart_ptr<vtkSmartPointer<vtkPConvertToMultiBlockDataSet>>("vtkSmartPointer<vtkPConvertToMultiBlockDataSet>")
    .constructor(&vtk::MakeVTKSmartPtr<vtkPConvertToMultiBlockDataSet>)
    .class_function("IsTypeOf", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkPConvertToMultiBlockDataSet::IsTypeOf( arg_0.c_str());}))
    .function("IsA", emscripten::optional_override([](vtkPConvertToMultiBlockDataSet& self, const std::string & arg_0) -> int {  return self.IsA( arg_0.c_str());}))
    .class_function("SafeDownCast", &vtkPConvertToMultiBlockDataSet::SafeDownCast, emscripten::allow_raw_pointers())
    .function("NewInstance", &vtkPConvertToMultiBlockDataSet::NewInstance, emscripten::allow_raw_pointers())
    .class_function("GetNumberOfGenerationsFromBaseType", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkPConvertToMultiBlockDataSet::GetNumberOfGenerationsFromBaseType( arg_0.c_str());}))
    .function("GetNumberOfGenerationsFromBase", emscripten::optional_override([](vtkPConvertToMultiBlockDataSet& self, const std::string & arg_0) -> int {  return self.GetNumberOfGenerationsFromBase( arg_0.c_str());}))
    .function("SetController", &vtkPConvertToMultiBlockDataSet::SetController, emscripten::allow_raw_pointers())
    .function("GetController", &vtkPConvertToMultiBlockDataSet::GetController, emscripten::allow_raw_pointers());
}
