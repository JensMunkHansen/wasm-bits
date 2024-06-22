// JavaScript wrapper for vtkOBBTree with embind 
//
// This file was auto-generated using :
/*
node /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/bin/vtkWrapJavaScript.js \
 @/home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkFiltersGeneral.js/vtkFiltersGeneral.js.Release.args \
 -o \
 /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkFiltersGeneral.js/vtkOBBTreeEmbinding.cxx \
 /home/jmh/github/vtk/Filters/General/vtkOBBTree.h
*/
#include "vtkEmbindSmartPointerTrait.h"
#include <emscripten.h>
#include <string>
#include "vtkVariant.h"
#include "vtkObjectBase.h"
#include "vtkIndent.h"
#include "vtkGenericCell.h"
#include "vtkPoints.h"
#include "vtkIdList.h"
#include "vtkDataSet.h"
#include "vtkMatrix4x4.h"
#include "vtkPolyData.h"
#include "vtkOBBTree.h"


EMSCRIPTEN_BINDINGS(vtkOBBNode_class) {
  emscripten::class_<vtkOBBNode>("vtkOBBNode")
    .smart_ptr<std::shared_ptr<vtkOBBNode>>("std::shared_ptr<vtkOBBNode>")
    .constructor(&std::make_shared<vtkOBBNode>)
    .function("DebugPrintTree", emscripten::optional_override([](vtkOBBNode& self, int arg_0, std::uintptr_t arg_1, std::uintptr_t arg_2, std::uintptr_t arg_3) -> void {  return self.DebugPrintTree( arg_0,reinterpret_cast<double*>(arg_1 * sizeof(double)),reinterpret_cast<int*>(arg_2 * sizeof(int)),reinterpret_cast<int*>(arg_3 * sizeof(int)));}));
}
template<> void emscripten::internal::raw_destructor<vtkOBBTree>(vtkOBBTree * ptr){ ptr->Delete(); }
EMSCRIPTEN_BINDINGS(vtkOBBTree_class) {
  emscripten::class_<vtkOBBTree, emscripten::base<vtkAbstractCellLocator>>("vtkOBBTree")
    .smart_ptr<vtkSmartPointer<vtkOBBTree>>("vtkSmartPointer<vtkOBBTree>")
    .constructor(&vtk::MakeVTKSmartPtr<vtkOBBTree>)
    .class_function("IsTypeOf", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkOBBTree::IsTypeOf( arg_0.c_str());}))
    .function("IsA", emscripten::optional_override([](vtkOBBTree& self, const std::string & arg_0) -> int {  return self.IsA( arg_0.c_str());}))
    .class_function("SafeDownCast", &vtkOBBTree::SafeDownCast, emscripten::allow_raw_pointers())
    .function("NewInstance", &vtkOBBTree::NewInstance, emscripten::allow_raw_pointers())
    .class_function("GetNumberOfGenerationsFromBaseType", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkOBBTree::GetNumberOfGenerationsFromBaseType( arg_0.c_str());}))
    .function("GetNumberOfGenerationsFromBase", emscripten::optional_override([](vtkOBBTree& self, const std::string & arg_0) -> int {  return self.GetNumberOfGenerationsFromBase( arg_0.c_str());}))
    .function("FreeSearchStructure", &vtkOBBTree::FreeSearchStructure)
    .function("BuildLocator", &vtkOBBTree::BuildLocator)
    .function("ForceBuildLocator", &vtkOBBTree::ForceBuildLocator)
    .function("GenerateRepresentation", &vtkOBBTree::GenerateRepresentation, emscripten::allow_raw_pointers());
}
