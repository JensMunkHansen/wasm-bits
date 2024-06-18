// JavaScript wrapper for vtkScalarTree with embind 
//
// This file was auto-generated using :
/*
node /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/bin/vtkWrapJavaScript.js \
 @/home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkCommonExecutionModel.js/vtkCommonExecutionModel.js.Release.args \
 -o \
 /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkCommonExecutionModel.js/vtkScalarTreeEmbinding.cxx \
 /home/jmh/github/vtk/Common/ExecutionModel/vtkScalarTree.h
*/
#include "vtkEmbindSmartPointerTrait.h"
#include <emscripten.h>
#include <string>
#include "vtkVariant.h"
#include "vtkObjectBase.h"
#include "vtkIndent.h"
#include "vtkDataSet.h"
#include "vtkDataArray.h"
#include "vtkCell.h"
#include "vtkIdList.h"
#include "vtkScalarTree.h"

template<> void emscripten::internal::raw_destructor<vtkScalarTree>(vtkScalarTree * ptr){ ptr->Delete(); }
EMSCRIPTEN_BINDINGS(vtkScalarTree_class) {
  emscripten::class_<vtkScalarTree, emscripten::base<vtkObject>>("vtkScalarTree")
    .class_function("IsTypeOf", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkScalarTree::IsTypeOf( arg_0.c_str());}))
    .function("IsA", emscripten::optional_override([](vtkScalarTree& self, const std::string & arg_0) -> int {  return self.IsA( arg_0.c_str());}))
    .class_function("SafeDownCast", &vtkScalarTree::SafeDownCast, emscripten::allow_raw_pointers())
    .function("NewInstance", &vtkScalarTree::NewInstance, emscripten::allow_raw_pointers())
    .class_function("GetNumberOfGenerationsFromBaseType", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkScalarTree::GetNumberOfGenerationsFromBaseType( arg_0.c_str());}))
    .function("GetNumberOfGenerationsFromBase", emscripten::optional_override([](vtkScalarTree& self, const std::string & arg_0) -> int {  return self.GetNumberOfGenerationsFromBase( arg_0.c_str());}))
    .function("ShallowCopy", &vtkScalarTree::ShallowCopy, emscripten::allow_raw_pointers())
    .function("SetDataSet", &vtkScalarTree::SetDataSet, emscripten::allow_raw_pointers())
    .function("GetDataSet", &vtkScalarTree::GetDataSet, emscripten::allow_raw_pointers())
    .function("SetScalars", &vtkScalarTree::SetScalars, emscripten::allow_raw_pointers())
    .function("GetScalars", &vtkScalarTree::GetScalars, emscripten::allow_raw_pointers())
    .function("GetScalarValue", &vtkScalarTree::GetScalarValue);
}
