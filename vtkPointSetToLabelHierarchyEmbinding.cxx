// JavaScript wrapper for vtkPointSetToLabelHierarchy with embind 
//
// This file was auto-generated using :
/*
node /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/bin/vtkWrapJavaScript.js \
 @/home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkRenderingLabel.js/vtkRenderingLabel.js.Release.args \
 -o \
 /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkRenderingLabel.js/vtkPointSetToLabelHierarchyEmbinding.cxx \
 /home/jmh/github/vtk/Rendering/Label/vtkPointSetToLabelHierarchy.h
*/
#include "vtkEmbindSmartPointerTrait.h"
#include <emscripten.h>
#include <string>
#include "vtkVariant.h"
#include "vtkObjectBase.h"
#include "vtkIndent.h"
#include "vtkTextProperty.h"
#include "vtkPointSetToLabelHierarchy.h"

template<> void emscripten::internal::raw_destructor<vtkPointSetToLabelHierarchy>(vtkPointSetToLabelHierarchy * ptr){ ptr->Delete(); }
EMSCRIPTEN_BINDINGS(vtkPointSetToLabelHierarchy_class) {
  emscripten::class_<vtkPointSetToLabelHierarchy, emscripten::base<vtkLabelHierarchyAlgorithm>>("vtkPointSetToLabelHierarchy")
    .smart_ptr<vtkSmartPointer<vtkPointSetToLabelHierarchy>>("vtkSmartPointer<vtkPointSetToLabelHierarchy>")
    .constructor(&vtk::MakeVTKSmartPtr<vtkPointSetToLabelHierarchy>)
    .class_function("IsTypeOf", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkPointSetToLabelHierarchy::IsTypeOf( arg_0.c_str());}))
    .function("IsA", emscripten::optional_override([](vtkPointSetToLabelHierarchy& self, const std::string & arg_0) -> int {  return self.IsA( arg_0.c_str());}))
    .class_function("SafeDownCast", &vtkPointSetToLabelHierarchy::SafeDownCast, emscripten::allow_raw_pointers())
    .function("NewInstance", &vtkPointSetToLabelHierarchy::NewInstance, emscripten::allow_raw_pointers())
    .class_function("GetNumberOfGenerationsFromBaseType", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkPointSetToLabelHierarchy::GetNumberOfGenerationsFromBaseType( arg_0.c_str());}))
    .function("GetNumberOfGenerationsFromBase", emscripten::optional_override([](vtkPointSetToLabelHierarchy& self, const std::string & arg_0) -> int {  return self.GetNumberOfGenerationsFromBase( arg_0.c_str());}))
    .function("SetTargetLabelCount", &vtkPointSetToLabelHierarchy::SetTargetLabelCount)
    .function("GetTargetLabelCount", &vtkPointSetToLabelHierarchy::GetTargetLabelCount)
    .function("SetMaximumDepth", &vtkPointSetToLabelHierarchy::SetMaximumDepth)
    .function("GetMaximumDepth", &vtkPointSetToLabelHierarchy::GetMaximumDepth)
    .function("SetLabelArrayName", emscripten::optional_override([](vtkPointSetToLabelHierarchy& self, const std::string & arg_0) -> void {  return self.SetLabelArrayName( arg_0.c_str());}))
    .function("GetLabelArrayName", emscripten::optional_override([](vtkPointSetToLabelHierarchy& self) -> std::string {  return self.GetLabelArrayName();}))
    .function("SetSizeArrayName", emscripten::optional_override([](vtkPointSetToLabelHierarchy& self, const std::string & arg_0) -> void {  return self.SetSizeArrayName( arg_0.c_str());}))
    .function("GetSizeArrayName", emscripten::optional_override([](vtkPointSetToLabelHierarchy& self) -> std::string {  return self.GetSizeArrayName();}))
    .function("SetPriorityArrayName", emscripten::optional_override([](vtkPointSetToLabelHierarchy& self, const std::string & arg_0) -> void {  return self.SetPriorityArrayName( arg_0.c_str());}))
    .function("GetPriorityArrayName", emscripten::optional_override([](vtkPointSetToLabelHierarchy& self) -> std::string {  return self.GetPriorityArrayName();}))
    .function("SetIconIndexArrayName", emscripten::optional_override([](vtkPointSetToLabelHierarchy& self, const std::string & arg_0) -> void {  return self.SetIconIndexArrayName( arg_0.c_str());}))
    .function("GetIconIndexArrayName", emscripten::optional_override([](vtkPointSetToLabelHierarchy& self) -> std::string {  return self.GetIconIndexArrayName();}))
    .function("SetOrientationArrayName", emscripten::optional_override([](vtkPointSetToLabelHierarchy& self, const std::string & arg_0) -> void {  return self.SetOrientationArrayName( arg_0.c_str());}))
    .function("GetOrientationArrayName", emscripten::optional_override([](vtkPointSetToLabelHierarchy& self) -> std::string {  return self.GetOrientationArrayName();}))
    .function("SetBoundedSizeArrayName", emscripten::optional_override([](vtkPointSetToLabelHierarchy& self, const std::string & arg_0) -> void {  return self.SetBoundedSizeArrayName( arg_0.c_str());}))
    .function("GetBoundedSizeArrayName", emscripten::optional_override([](vtkPointSetToLabelHierarchy& self) -> std::string {  return self.GetBoundedSizeArrayName();}))
    .function("SetTextProperty", &vtkPointSetToLabelHierarchy::SetTextProperty, emscripten::allow_raw_pointers())
    .function("GetTextProperty", &vtkPointSetToLabelHierarchy::GetTextProperty, emscripten::allow_raw_pointers());
}
