// JavaScript wrapper for vtkCellAttributeCalculator with embind 
//
// This file was auto-generated using :
/*
node /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/bin/vtkWrapJavaScript.js \
 @/home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkCommonDataModel.js/vtkCommonDataModel.js.Release.args \
 -o \
 /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkCommonDataModel.js/vtkCellAttributeCalculatorEmbinding.cxx \
 /home/jmh/github/vtk/Common/DataModel/vtkCellAttributeCalculator.h
*/
#include "vtkEmbindSmartPointerTrait.h"
#include <emscripten.h>
#include <string>
#include "vtkVariant.h"
#include "vtkObjectBase.h"
#include "vtkIndent.h"
#include "vtkSmartPointer.h"
#include "vtkCellMetadata.h"
#include "vtkCellAttribute.h"
#include "vtkCellAttributeCalculator.h"

template<> void emscripten::internal::raw_destructor<vtkCellAttributeCalculator>(vtkCellAttributeCalculator * ptr){ ptr->Delete(); }
EMSCRIPTEN_BINDINGS(vtkCellAttributeCalculator_class) {
  emscripten::class_<vtkCellAttributeCalculator, emscripten::base<vtkObject>>("vtkCellAttributeCalculator")
    .smart_ptr<vtkSmartPointer<vtkCellAttributeCalculator>>("vtkSmartPointer<vtkCellAttributeCalculator>")
    .constructor(&vtk::MakeAvtkSmartPointer<vtkCellAttributeCalculator>)
    .class_function("IsTypeOf", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkCellAttributeCalculator::IsTypeOf( arg_0.c_str());}))
    .function("IsA", emscripten::optional_override([](vtkCellAttributeCalculator& self, const std::string & arg_0) -> int {  return self.IsA( arg_0.c_str());}))
    .class_function("SafeDownCast", &vtkCellAttributeCalculator::SafeDownCast, emscripten::allow_raw_pointers())
    .function("NewInstance", &vtkCellAttributeCalculator::NewInstance, emscripten::allow_raw_pointers())
    .class_function("GetNumberOfGenerationsFromBaseType", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkCellAttributeCalculator::GetNumberOfGenerationsFromBaseType( arg_0.c_str());}))
    .function("GetNumberOfGenerationsFromBase", emscripten::optional_override([](vtkCellAttributeCalculator& self, const std::string & arg_0) -> int {  return self.GetNumberOfGenerationsFromBase( arg_0.c_str());}))
    .function("PrepareForGrid", &vtkCellAttributeCalculator::PrepareForGrid, emscripten::allow_raw_pointers());
}
