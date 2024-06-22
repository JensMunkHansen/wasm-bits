// JavaScript wrapper for vtkLabelHierarchyCompositeIterator with embind 
//
// This file was auto-generated using :
/*
node /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/bin/vtkWrapJavaScript.js \
 @/home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkRenderingLabel.js/vtkRenderingLabel.js.Release.args \
 -o \
 /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkRenderingLabel.js/vtkLabelHierarchyCompositeIteratorEmbinding.cxx \
 /home/jmh/github/vtk/Rendering/Label/vtkLabelHierarchyCompositeIterator.h
*/
#include "vtkEmbindSmartPointerTrait.h"
#include <emscripten.h>
#include <string>
#include "vtkVariant.h"
#include "vtkObjectBase.h"
#include "vtkIndent.h"
#include "vtkLabelHierarchyIterator.h"
#include "vtkIdTypeArray.h"
#include "vtkLabelHierarchy.h"
#include "vtkPolyData.h"
#include "vtkLabelHierarchyCompositeIterator.h"

template<> void emscripten::internal::raw_destructor<vtkLabelHierarchyCompositeIterator>(vtkLabelHierarchyCompositeIterator * ptr){ ptr->Delete(); }
EMSCRIPTEN_BINDINGS(vtkLabelHierarchyCompositeIterator_class) {
  emscripten::class_<vtkLabelHierarchyCompositeIterator, emscripten::base<vtkLabelHierarchyIterator>>("vtkLabelHierarchyCompositeIterator")
    .smart_ptr<vtkSmartPointer<vtkLabelHierarchyCompositeIterator>>("vtkSmartPointer<vtkLabelHierarchyCompositeIterator>")
    .constructor(&vtk::MakeVTKSmartPtr<vtkLabelHierarchyCompositeIterator>)
    .class_function("IsTypeOf", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkLabelHierarchyCompositeIterator::IsTypeOf( arg_0.c_str());}))
    .function("IsA", emscripten::optional_override([](vtkLabelHierarchyCompositeIterator& self, const std::string & arg_0) -> int {  return self.IsA( arg_0.c_str());}))
    .class_function("SafeDownCast", &vtkLabelHierarchyCompositeIterator::SafeDownCast, emscripten::allow_raw_pointers())
    .function("NewInstance", &vtkLabelHierarchyCompositeIterator::NewInstance, emscripten::allow_raw_pointers())
    .class_function("GetNumberOfGenerationsFromBaseType", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkLabelHierarchyCompositeIterator::GetNumberOfGenerationsFromBaseType( arg_0.c_str());}))
    .function("GetNumberOfGenerationsFromBase", emscripten::optional_override([](vtkLabelHierarchyCompositeIterator& self, const std::string & arg_0) -> int {  return self.GetNumberOfGenerationsFromBase( arg_0.c_str());}))
    .function("AddIterator", emscripten::select_overload<void(vtkLabelHierarchyCompositeIterator&, vtkLabelHierarchyIterator*)>([](vtkLabelHierarchyCompositeIterator& self, vtkLabelHierarchyIterator* arg_0) -> void { return self.AddIterator( arg_0); }), emscripten::allow_raw_pointers())
    .function("AddIterator", emscripten::select_overload<void(vtkLabelHierarchyCompositeIterator&, vtkLabelHierarchyIterator*, int)>([](vtkLabelHierarchyCompositeIterator& self, vtkLabelHierarchyIterator* arg_0, int arg_1) -> void { return self.AddIterator( arg_0, arg_1); }), emscripten::allow_raw_pointers())
    .function("ClearIterators", &vtkLabelHierarchyCompositeIterator::ClearIterators)
    .function("Begin", &vtkLabelHierarchyCompositeIterator::Begin, emscripten::allow_raw_pointers())
    .function("Next", &vtkLabelHierarchyCompositeIterator::Next)
    .function("IsAtEnd", &vtkLabelHierarchyCompositeIterator::IsAtEnd)
    .function("GetLabelId", &vtkLabelHierarchyCompositeIterator::GetLabelId)
    .function("GetHierarchy", &vtkLabelHierarchyCompositeIterator::GetHierarchy, emscripten::allow_raw_pointers())
    .function("BoxNode", &vtkLabelHierarchyCompositeIterator::BoxNode)
    .function("BoxAllNodes", &vtkLabelHierarchyCompositeIterator::BoxAllNodes, emscripten::allow_raw_pointers());
}
