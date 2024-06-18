// JavaScript wrapper for vtkDGEvaluator with embind 
//
// This file was auto-generated using :
/*
node /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/bin/vtkWrapJavaScript.js \
 @/home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkFiltersCellGrid.js/vtkFiltersCellGrid.js.Release.args \
 -o \
 /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkFiltersCellGrid.js/vtkDGEvaluatorEmbinding.cxx \
 /home/jmh/github/vtk/Filters/CellGrid/vtkDGEvaluator.h
*/
#include "vtkEmbindSmartPointerTrait.h"
#include <emscripten.h>
#include <string>
#include "vtkVariant.h"
#include "vtkObjectBase.h"
#include "vtkCellGridEvaluator.h"
#include "vtkCellMetadata.h"
#include "vtkCellGridResponders.h"
#include "vtkDGEvaluator.h"

template<> void emscripten::internal::raw_destructor<vtkDGEvaluator>(vtkDGEvaluator * ptr){ ptr->Delete(); }
EMSCRIPTEN_BINDINGS(vtkDGEvaluator_class) {
  emscripten::class_<vtkDGEvaluator, emscripten::base<vtkCellGridResponder<vtkCellGridEvaluator>>>("vtkDGEvaluator")
    .smart_ptr<vtkSmartPointer<vtkDGEvaluator>>("vtkSmartPointer<vtkDGEvaluator>")
    .constructor(&vtk::MakeAvtkSmartPointer<vtkDGEvaluator>)
    .class_function("IsTypeOf", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkDGEvaluator::IsTypeOf( arg_0.c_str());}))
    .function("IsA", emscripten::optional_override([](vtkDGEvaluator& self, const std::string & arg_0) -> int {  return self.IsA( arg_0.c_str());}))
    .class_function("SafeDownCast", &vtkDGEvaluator::SafeDownCast, emscripten::allow_raw_pointers())
    .function("NewInstance", &vtkDGEvaluator::NewInstance, emscripten::allow_raw_pointers())
    .class_function("GetNumberOfGenerationsFromBaseType", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkDGEvaluator::GetNumberOfGenerationsFromBaseType( arg_0.c_str());}))
    .function("GetNumberOfGenerationsFromBase", emscripten::optional_override([](vtkDGEvaluator& self, const std::string & arg_0) -> int {  return self.GetNumberOfGenerationsFromBase( arg_0.c_str());}))
    .function("Query", &vtkDGEvaluator::Query, emscripten::allow_raw_pointers());
}
