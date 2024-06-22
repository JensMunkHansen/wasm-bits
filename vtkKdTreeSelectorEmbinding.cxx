// JavaScript wrapper for vtkKdTreeSelector with embind 
//
// This file was auto-generated using :
/*
node /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/bin/vtkWrapJavaScript.js \
 @/home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkFiltersSelection.js/vtkFiltersSelection.js.Release.args \
 -o \
 /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkFiltersSelection.js/vtkKdTreeSelectorEmbinding.cxx \
 /home/jmh/github/vtk/Filters/Selection/vtkKdTreeSelector.h
*/
#include "vtkEmbindSmartPointerTrait.h"
#include <emscripten.h>
#include <string>
#include "vtkVariant.h"
#include "vtkObjectBase.h"
#include "vtkIndent.h"
#include "vtkKdTree.h"
#include "vtkKdTreeSelector.h"

template<> void emscripten::internal::raw_destructor<vtkKdTreeSelector>(vtkKdTreeSelector * ptr){ ptr->Delete(); }
EMSCRIPTEN_BINDINGS(vtkKdTreeSelector_class) {
  emscripten::class_<vtkKdTreeSelector, emscripten::base<vtkSelectionAlgorithm>>("vtkKdTreeSelector")
    .smart_ptr<vtkSmartPointer<vtkKdTreeSelector>>("vtkSmartPointer<vtkKdTreeSelector>")
    .constructor(&vtk::MakeVTKSmartPtr<vtkKdTreeSelector>)
    .class_function("IsTypeOf", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkKdTreeSelector::IsTypeOf( arg_0.c_str());}))
    .function("IsA", emscripten::optional_override([](vtkKdTreeSelector& self, const std::string & arg_0) -> int {  return self.IsA( arg_0.c_str());}))
    .class_function("SafeDownCast", &vtkKdTreeSelector::SafeDownCast, emscripten::allow_raw_pointers())
    .function("NewInstance", &vtkKdTreeSelector::NewInstance, emscripten::allow_raw_pointers())
    .class_function("GetNumberOfGenerationsFromBaseType", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkKdTreeSelector::GetNumberOfGenerationsFromBaseType( arg_0.c_str());}))
    .function("GetNumberOfGenerationsFromBase", emscripten::optional_override([](vtkKdTreeSelector& self, const std::string & arg_0) -> int {  return self.GetNumberOfGenerationsFromBase( arg_0.c_str());}))
    .function("SetKdTree", &vtkKdTreeSelector::SetKdTree, emscripten::allow_raw_pointers())
    .function("GetKdTree", &vtkKdTreeSelector::GetKdTree, emscripten::allow_raw_pointers())
    .function("SetSelectionBounds", emscripten::select_overload<void(vtkKdTreeSelector&, double, double, double, double, double, double)>([](vtkKdTreeSelector& self, double arg_0, double arg_1, double arg_2, double arg_3, double arg_4, double arg_5) -> void { return self.SetSelectionBounds( arg_0, arg_1, arg_2, arg_3, arg_4, arg_5); }))
    .function("SetSelectionFieldName", emscripten::optional_override([](vtkKdTreeSelector& self, const std::string & arg_0) -> void {  return self.SetSelectionFieldName( arg_0.c_str());}))
    .function("GetSelectionFieldName", emscripten::optional_override([](vtkKdTreeSelector& self) -> std::string {  return self.GetSelectionFieldName();}))
    .function("SetSelectionAttribute", &vtkKdTreeSelector::SetSelectionAttribute)
    .function("GetSelectionAttribute", &vtkKdTreeSelector::GetSelectionAttribute)
    .function("SetSingleSelection", &vtkKdTreeSelector::SetSingleSelection)
    .function("GetSingleSelection", &vtkKdTreeSelector::GetSingleSelection)
    .function("SingleSelectionOn", &vtkKdTreeSelector::SingleSelectionOn)
    .function("SingleSelectionOff", &vtkKdTreeSelector::SingleSelectionOff)
    .function("SetSingleSelectionThreshold", &vtkKdTreeSelector::SetSingleSelectionThreshold)
    .function("GetSingleSelectionThreshold", &vtkKdTreeSelector::GetSingleSelectionThreshold)
    .function("GetMTime", &vtkKdTreeSelector::GetMTime);
}
