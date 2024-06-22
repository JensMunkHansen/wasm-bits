// JavaScript wrapper for vtkSimpleScalarTree with embind 
//
// This file was auto-generated using :
/*
node /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/bin/vtkWrapJavaScript.js \
 @/home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkCommonExecutionModel.js/vtkCommonExecutionModel.js.Release.args \
 -o \
 /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkCommonExecutionModel.js/vtkSimpleScalarTreeEmbinding.cxx \
 /home/jmh/github/vtk/Common/ExecutionModel/vtkSimpleScalarTree.h
*/
#include "vtkEmbindSmartPointerTrait.h"
#include <emscripten.h>
#include <string>
#include "vtkVariant.h"
#include "vtkObjectBase.h"
#include "vtkIndent.h"
#include "vtkScalarTree.h"
#include "vtkCell.h"
#include "vtkIdList.h"
#include "vtkDataArray.h"
#include "vtkSimpleScalarTree.h"

template<> void emscripten::internal::raw_destructor<vtkSimpleScalarTree>(vtkSimpleScalarTree * ptr){ ptr->Delete(); }
EMSCRIPTEN_BINDINGS(vtkSimpleScalarTree_class) {
  emscripten::class_<vtkSimpleScalarTree, emscripten::base<vtkScalarTree>>("vtkSimpleScalarTree")
    .smart_ptr<vtkSmartPointer<vtkSimpleScalarTree>>("vtkSmartPointer<vtkSimpleScalarTree>")
    .constructor(&vtk::MakeVTKSmartPtr<vtkSimpleScalarTree>)
    .class_function("IsTypeOf", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkSimpleScalarTree::IsTypeOf( arg_0.c_str());}))
    .function("IsA", emscripten::optional_override([](vtkSimpleScalarTree& self, const std::string & arg_0) -> int {  return self.IsA( arg_0.c_str());}))
    .class_function("SafeDownCast", &vtkSimpleScalarTree::SafeDownCast, emscripten::allow_raw_pointers())
    .function("NewInstance", &vtkSimpleScalarTree::NewInstance, emscripten::allow_raw_pointers())
    .class_function("GetNumberOfGenerationsFromBaseType", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkSimpleScalarTree::GetNumberOfGenerationsFromBaseType( arg_0.c_str());}))
    .function("GetNumberOfGenerationsFromBase", emscripten::optional_override([](vtkSimpleScalarTree& self, const std::string & arg_0) -> int {  return self.GetNumberOfGenerationsFromBase( arg_0.c_str());}))
    .function("ShallowCopy", &vtkSimpleScalarTree::ShallowCopy, emscripten::allow_raw_pointers())
    .function("SetBranchingFactor", &vtkSimpleScalarTree::SetBranchingFactor)
    .function("GetBranchingFactorMinValue", &vtkSimpleScalarTree::GetBranchingFactorMinValue)
    .function("GetBranchingFactorMaxValue", &vtkSimpleScalarTree::GetBranchingFactorMaxValue)
    .function("GetBranchingFactor", &vtkSimpleScalarTree::GetBranchingFactor)
    .function("GetLevel", &vtkSimpleScalarTree::GetLevel)
    .function("SetMaxLevel", &vtkSimpleScalarTree::SetMaxLevel)
    .function("GetMaxLevelMinValue", &vtkSimpleScalarTree::GetMaxLevelMinValue)
    .function("GetMaxLevelMaxValue", &vtkSimpleScalarTree::GetMaxLevelMaxValue)
    .function("GetMaxLevel", &vtkSimpleScalarTree::GetMaxLevel)
    .function("BuildTree", &vtkSimpleScalarTree::BuildTree)
    .function("Initialize", &vtkSimpleScalarTree::Initialize)
    .function("InitTraversal", &vtkSimpleScalarTree::InitTraversal)
    .function("GetNumberOfCellBatches", &vtkSimpleScalarTree::GetNumberOfCellBatches);
}
