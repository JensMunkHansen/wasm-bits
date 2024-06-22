// JavaScript wrapper for vtkLabelHierarchyAlgorithm with embind 
//
// This file was auto-generated using :
/*
node /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/bin/vtkWrapJavaScript.js \
 @/home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkRenderingLabel.js/vtkRenderingLabel.js.Release.args \
 -o \
 /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkRenderingLabel.js/vtkLabelHierarchyAlgorithmEmbinding.cxx \
 /home/jmh/github/vtk/Rendering/Label/vtkLabelHierarchyAlgorithm.h
*/
#include "vtkEmbindSmartPointerTrait.h"
#include <emscripten.h>
#include <string>
#include "vtkVariant.h"
#include "vtkObjectBase.h"
#include "vtkIndent.h"
#include "vtkLabelHierarchy.h"
#include "vtkDataObject.h"
#include "vtkInformation.h"
#include "vtkInformationVector.h"
#include "vtkLabelHierarchyAlgorithm.h"

template<> void emscripten::internal::raw_destructor<vtkLabelHierarchyAlgorithm>(vtkLabelHierarchyAlgorithm * ptr){ ptr->Delete(); }
EMSCRIPTEN_BINDINGS(vtkLabelHierarchyAlgorithm_class) {
  emscripten::class_<vtkLabelHierarchyAlgorithm, emscripten::base<vtkAlgorithm>>("vtkLabelHierarchyAlgorithm")
    .smart_ptr<vtkSmartPointer<vtkLabelHierarchyAlgorithm>>("vtkSmartPointer<vtkLabelHierarchyAlgorithm>")
    .constructor(&vtk::MakeVTKSmartPtr<vtkLabelHierarchyAlgorithm>)
    .class_function("IsTypeOf", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkLabelHierarchyAlgorithm::IsTypeOf( arg_0.c_str());}))
    .function("IsA", emscripten::optional_override([](vtkLabelHierarchyAlgorithm& self, const std::string & arg_0) -> int {  return self.IsA( arg_0.c_str());}))
    .class_function("SafeDownCast", &vtkLabelHierarchyAlgorithm::SafeDownCast, emscripten::allow_raw_pointers())
    .function("NewInstance", &vtkLabelHierarchyAlgorithm::NewInstance, emscripten::allow_raw_pointers())
    .class_function("GetNumberOfGenerationsFromBaseType", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkLabelHierarchyAlgorithm::GetNumberOfGenerationsFromBaseType( arg_0.c_str());}))
    .function("GetNumberOfGenerationsFromBase", emscripten::optional_override([](vtkLabelHierarchyAlgorithm& self, const std::string & arg_0) -> int {  return self.GetNumberOfGenerationsFromBase( arg_0.c_str());}))
    .function("GetOutput", emscripten::select_overload<vtkLabelHierarchy*(vtkLabelHierarchyAlgorithm&)>([](vtkLabelHierarchyAlgorithm& self) -> vtkLabelHierarchy* { return self.GetOutput(); }), emscripten::allow_raw_pointers())
    .function("GetOutput", emscripten::select_overload<vtkLabelHierarchy*(vtkLabelHierarchyAlgorithm&, int)>([](vtkLabelHierarchyAlgorithm& self, int arg_0) -> vtkLabelHierarchy* { return self.GetOutput( arg_0); }), emscripten::allow_raw_pointers())
    .function("SetOutput", &vtkLabelHierarchyAlgorithm::SetOutput, emscripten::allow_raw_pointers())
    .function("GetInput", emscripten::select_overload<vtkDataObject*(vtkLabelHierarchyAlgorithm&)>([](vtkLabelHierarchyAlgorithm& self) -> vtkDataObject* { return self.GetInput(); }), emscripten::allow_raw_pointers())
    .function("GetInput", emscripten::select_overload<vtkDataObject*(vtkLabelHierarchyAlgorithm&, int)>([](vtkLabelHierarchyAlgorithm& self, int arg_0) -> vtkDataObject* { return self.GetInput( arg_0); }), emscripten::allow_raw_pointers())
    .function("GetLabelHierarchyInput", &vtkLabelHierarchyAlgorithm::GetLabelHierarchyInput, emscripten::allow_raw_pointers())
    .function("SetInputData", emscripten::select_overload<void(vtkLabelHierarchyAlgorithm&, vtkDataObject*)>([](vtkLabelHierarchyAlgorithm& self, vtkDataObject* arg_0) -> void { return self.SetInputData( arg_0); }), emscripten::allow_raw_pointers())
    .function("SetInputData", emscripten::select_overload<void(vtkLabelHierarchyAlgorithm&, int, vtkDataObject*)>([](vtkLabelHierarchyAlgorithm& self, int arg_0, vtkDataObject* arg_1) -> void { return self.SetInputData( arg_0, arg_1); }), emscripten::allow_raw_pointers())
    .function("AddInputData", emscripten::select_overload<void(vtkLabelHierarchyAlgorithm&, vtkDataObject*)>([](vtkLabelHierarchyAlgorithm& self, vtkDataObject* arg_0) -> void { return self.AddInputData( arg_0); }), emscripten::allow_raw_pointers())
    .function("AddInputData", emscripten::select_overload<void(vtkLabelHierarchyAlgorithm&, int, vtkDataObject*)>([](vtkLabelHierarchyAlgorithm& self, int arg_0, vtkDataObject* arg_1) -> void { return self.AddInputData( arg_0, arg_1); }), emscripten::allow_raw_pointers());
}
