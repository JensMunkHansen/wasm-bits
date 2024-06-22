// JavaScript wrapper for vtkGenerateProcessIds with embind 
//
// This file was auto-generated using :
/*
node /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/bin/vtkWrapJavaScript.js \
 @/home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkFiltersParallel.js/vtkFiltersParallel.js.Release.args \
 -o \
 /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkFiltersParallel.js/vtkGenerateProcessIdsEmbinding.cxx \
 /home/jmh/github/vtk/Filters/Parallel/vtkGenerateProcessIds.h
*/
#include "vtkEmbindSmartPointerTrait.h"
#include <emscripten.h>
#include <string>
#include "vtkVariant.h"
#include "vtkObjectBase.h"
#include "vtkIndent.h"
#include "vtkMultiProcessController.h"
#include "vtkGenerateProcessIds.h"

template<> void emscripten::internal::raw_destructor<vtkGenerateProcessIds>(vtkGenerateProcessIds * ptr){ ptr->Delete(); }
EMSCRIPTEN_BINDINGS(vtkGenerateProcessIds_class) {
  emscripten::class_<vtkGenerateProcessIds, emscripten::base<vtkDataSetAlgorithm>>("vtkGenerateProcessIds")
    .smart_ptr<vtkSmartPointer<vtkGenerateProcessIds>>("vtkSmartPointer<vtkGenerateProcessIds>")
    .constructor(&vtk::MakeVTKSmartPtr<vtkGenerateProcessIds>)
    .class_function("IsTypeOf", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkGenerateProcessIds::IsTypeOf( arg_0.c_str());}))
    .function("IsA", emscripten::optional_override([](vtkGenerateProcessIds& self, const std::string & arg_0) -> int {  return self.IsA( arg_0.c_str());}))
    .class_function("SafeDownCast", &vtkGenerateProcessIds::SafeDownCast, emscripten::allow_raw_pointers())
    .function("NewInstance", &vtkGenerateProcessIds::NewInstance, emscripten::allow_raw_pointers())
    .class_function("GetNumberOfGenerationsFromBaseType", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkGenerateProcessIds::GetNumberOfGenerationsFromBaseType( arg_0.c_str());}))
    .function("GetNumberOfGenerationsFromBase", emscripten::optional_override([](vtkGenerateProcessIds& self, const std::string & arg_0) -> int {  return self.GetNumberOfGenerationsFromBase( arg_0.c_str());}))
    .function("SetGeneratePointData", &vtkGenerateProcessIds::SetGeneratePointData)
    .function("GetGeneratePointData", &vtkGenerateProcessIds::GetGeneratePointData)
    .function("GeneratePointDataOn", &vtkGenerateProcessIds::GeneratePointDataOn)
    .function("GeneratePointDataOff", &vtkGenerateProcessIds::GeneratePointDataOff)
    .function("SetGenerateCellData", &vtkGenerateProcessIds::SetGenerateCellData)
    .function("GetGenerateCellData", &vtkGenerateProcessIds::GetGenerateCellData)
    .function("GenerateCellDataOn", &vtkGenerateProcessIds::GenerateCellDataOn)
    .function("GenerateCellDataOff", &vtkGenerateProcessIds::GenerateCellDataOff)
    .function("SetController", &vtkGenerateProcessIds::SetController, emscripten::allow_raw_pointers())
    .function("GetController", &vtkGenerateProcessIds::GetController, emscripten::allow_raw_pointers());
}
