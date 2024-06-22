// JavaScript wrapper for vtkCollectTable with embind 
//
// This file was auto-generated using :
/*
node /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/bin/vtkWrapJavaScript.js \
 @/home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkFiltersParallel.js/vtkFiltersParallel.js.Release.args \
 -o \
 /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkFiltersParallel.js/vtkCollectTableEmbinding.cxx \
 /home/jmh/github/vtk/Filters/Parallel/vtkCollectTable.h
*/
#include "vtkEmbindSmartPointerTrait.h"
#include <emscripten.h>
#include <string>
#include "vtkVariant.h"
#include "vtkObjectBase.h"
#include "vtkIndent.h"
#include "vtkMultiProcessController.h"
#include "vtkSocketController.h"
#include "vtkCollectTable.h"

template<> void emscripten::internal::raw_destructor<vtkCollectTable>(vtkCollectTable * ptr){ ptr->Delete(); }
EMSCRIPTEN_BINDINGS(vtkCollectTable_class) {
  emscripten::class_<vtkCollectTable, emscripten::base<vtkTableAlgorithm>>("vtkCollectTable")
    .smart_ptr<vtkSmartPointer<vtkCollectTable>>("vtkSmartPointer<vtkCollectTable>")
    .constructor(&vtk::MakeVTKSmartPtr<vtkCollectTable>)
    .class_function("IsTypeOf", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkCollectTable::IsTypeOf( arg_0.c_str());}))
    .function("IsA", emscripten::optional_override([](vtkCollectTable& self, const std::string & arg_0) -> int {  return self.IsA( arg_0.c_str());}))
    .class_function("SafeDownCast", &vtkCollectTable::SafeDownCast, emscripten::allow_raw_pointers())
    .function("NewInstance", &vtkCollectTable::NewInstance, emscripten::allow_raw_pointers())
    .class_function("GetNumberOfGenerationsFromBaseType", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkCollectTable::GetNumberOfGenerationsFromBaseType( arg_0.c_str());}))
    .function("GetNumberOfGenerationsFromBase", emscripten::optional_override([](vtkCollectTable& self, const std::string & arg_0) -> int {  return self.GetNumberOfGenerationsFromBase( arg_0.c_str());}))
    .function("SetController", &vtkCollectTable::SetController, emscripten::allow_raw_pointers())
    .function("GetController", &vtkCollectTable::GetController, emscripten::allow_raw_pointers())
    .function("SetSocketController", &vtkCollectTable::SetSocketController, emscripten::allow_raw_pointers())
    .function("GetSocketController", &vtkCollectTable::GetSocketController, emscripten::allow_raw_pointers())
    .function("SetPassThrough", &vtkCollectTable::SetPassThrough)
    .function("GetPassThrough", &vtkCollectTable::GetPassThrough)
    .function("PassThroughOn", &vtkCollectTable::PassThroughOn)
    .function("PassThroughOff", &vtkCollectTable::PassThroughOff);
}
