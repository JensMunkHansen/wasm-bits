// JavaScript wrapper for vtkConvertToMultiBlockDataSet with embind 
//
// This file was auto-generated using :
/*
node /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/bin/vtkWrapJavaScript.js \
 @/home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkFiltersCore.js/vtkFiltersCore.js.Release.args \
 -o \
 /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkFiltersCore.js/vtkConvertToMultiBlockDataSetEmbinding.cxx \
 /home/jmh/github/vtk/Filters/Core/vtkConvertToMultiBlockDataSet.h
*/
#include "vtkEmbindSmartPointerTrait.h"
#include <emscripten.h>
#include <string>
#include "vtkVariant.h"
#include "vtkObjectBase.h"
#include "vtkIndent.h"
#include "vtkConvertToMultiBlockDataSet.h"

template<> void emscripten::internal::raw_destructor<vtkConvertToMultiBlockDataSet>(vtkConvertToMultiBlockDataSet * ptr){ ptr->Delete(); }
EMSCRIPTEN_BINDINGS(vtkConvertToMultiBlockDataSet_class) {
  emscripten::class_<vtkConvertToMultiBlockDataSet, emscripten::base<vtkMultiBlockDataSetAlgorithm>>("vtkConvertToMultiBlockDataSet")
    .smart_ptr<vtkSmartPointer<vtkConvertToMultiBlockDataSet>>("vtkSmartPointer<vtkConvertToMultiBlockDataSet>")
    .constructor(&vtk::MakeVTKSmartPtr<vtkConvertToMultiBlockDataSet>)
    .class_function("IsTypeOf", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkConvertToMultiBlockDataSet::IsTypeOf( arg_0.c_str());}))
    .function("IsA", emscripten::optional_override([](vtkConvertToMultiBlockDataSet& self, const std::string & arg_0) -> int {  return self.IsA( arg_0.c_str());}))
    .class_function("SafeDownCast", &vtkConvertToMultiBlockDataSet::SafeDownCast, emscripten::allow_raw_pointers())
    .function("NewInstance", &vtkConvertToMultiBlockDataSet::NewInstance, emscripten::allow_raw_pointers())
    .class_function("GetNumberOfGenerationsFromBaseType", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkConvertToMultiBlockDataSet::GetNumberOfGenerationsFromBaseType( arg_0.c_str());}))
    .function("GetNumberOfGenerationsFromBase", emscripten::optional_override([](vtkConvertToMultiBlockDataSet& self, const std::string & arg_0) -> int {  return self.GetNumberOfGenerationsFromBase( arg_0.c_str());}));
}
