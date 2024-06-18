// JavaScript wrapper for vtkLabelHierarchyIterator with embind 
//
// This file was auto-generated using :
/*
node /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/bin/vtkWrapJavaScript.js \
 @/home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkRenderingLabel.js/vtkRenderingLabel.js.Release.args \
 -o \
 /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkRenderingLabel.js/vtkLabelHierarchyIteratorEmbinding.cxx \
 /home/jmh/github/vtk/Rendering/Label/vtkLabelHierarchyIterator.h
*/
#include "vtkEmbindSmartPointerTrait.h"
#include <emscripten.h>
#include <string>
#include "vtkVariant.h"
#include "vtkObjectBase.h"
#include "vtkIndent.h"
#include "vtkIdTypeArray.h"
#include "vtkStdString.h"
#include "vtkLabelHierarchy.h"
#include "vtkPolyData.h"
#include "vtkLabelHierarchyIterator.h"

template<> void emscripten::internal::raw_destructor<vtkLabelHierarchyIterator>(vtkLabelHierarchyIterator * ptr){ ptr->Delete(); }
EMSCRIPTEN_BINDINGS(vtkLabelHierarchyIterator_class) {
  emscripten::class_<vtkLabelHierarchyIterator, emscripten::base<vtkObject>>("vtkLabelHierarchyIterator")
    .class_function("IsTypeOf", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkLabelHierarchyIterator::IsTypeOf( arg_0.c_str());}))
    .function("IsA", emscripten::optional_override([](vtkLabelHierarchyIterator& self, const std::string & arg_0) -> int {  return self.IsA( arg_0.c_str());}))
    .class_function("SafeDownCast", &vtkLabelHierarchyIterator::SafeDownCast, emscripten::allow_raw_pointers())
    .function("NewInstance", &vtkLabelHierarchyIterator::NewInstance, emscripten::allow_raw_pointers())
    .class_function("GetNumberOfGenerationsFromBaseType", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkLabelHierarchyIterator::GetNumberOfGenerationsFromBaseType( arg_0.c_str());}))
    .function("GetNumberOfGenerationsFromBase", emscripten::optional_override([](vtkLabelHierarchyIterator& self, const std::string & arg_0) -> int {  return self.GetNumberOfGenerationsFromBase( arg_0.c_str());}))
    .function("Begin", &vtkLabelHierarchyIterator::Begin, emscripten::allow_raw_pointers())
    .function("Next", &vtkLabelHierarchyIterator::Next)
    .function("IsAtEnd", &vtkLabelHierarchyIterator::IsAtEnd)
    .function("GetType", &vtkLabelHierarchyIterator::GetType)
    .function("GetLabel", &vtkLabelHierarchyIterator::GetLabel)
    .function("GetOrientation", &vtkLabelHierarchyIterator::GetOrientation)
    .function("GetLabelId", &vtkLabelHierarchyIterator::GetLabelId)
    .function("GetHierarchy", &vtkLabelHierarchyIterator::GetHierarchy, emscripten::allow_raw_pointers())
    .function("SetTraversedBounds", &vtkLabelHierarchyIterator::SetTraversedBounds, emscripten::allow_raw_pointers())
    .function("BoxNode", &vtkLabelHierarchyIterator::BoxNode)
    .function("BoxAllNodes", &vtkLabelHierarchyIterator::BoxAllNodes, emscripten::allow_raw_pointers())
    .function("SetAllBounds", &vtkLabelHierarchyIterator::SetAllBounds)
    .function("GetAllBounds", &vtkLabelHierarchyIterator::GetAllBounds);
}
