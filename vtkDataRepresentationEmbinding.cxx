// JavaScript wrapper for vtkDataRepresentation with embind 
//
// This file was auto-generated using :
/*
node /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/bin/vtkWrapJavaScript.js \
 @/home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkViewsCore.js/vtkViewsCore.js.Release.args \
 -o \
 /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkViewsCore.js/vtkDataRepresentationEmbinding.cxx \
 /home/jmh/github/vtk/Views/Core/vtkDataRepresentation.h
*/
#include "vtkEmbindSmartPointerTrait.h"
#include <emscripten.h>
#include <string>
#include "vtkVariant.h"
#include "vtkObjectBase.h"
#include "vtkIndent.h"
#include "vtkAlgorithmOutput.h"
#include "vtkAnnotationLink.h"
#include "vtkViewTheme.h"
#include "vtkView.h"
#include "vtkSelection.h"
#include "vtkAnnotationLayers.h"
#include "vtkStringArray.h"
#include "vtkDataRepresentation.h"

template<> void emscripten::internal::raw_destructor<vtkDataRepresentation>(vtkDataRepresentation * ptr){ ptr->Delete(); }
EMSCRIPTEN_BINDINGS(vtkDataRepresentation_class) {
  emscripten::class_<vtkDataRepresentation, emscripten::base<vtkPassInputTypeAlgorithm>>("vtkDataRepresentation")
    .smart_ptr<vtkSmartPointer<vtkDataRepresentation>>("vtkSmartPointer<vtkDataRepresentation>")
    .constructor(&vtk::MakeAvtkSmartPointer<vtkDataRepresentation>)
    .class_function("IsTypeOf", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkDataRepresentation::IsTypeOf( arg_0.c_str());}))
    .function("IsA", emscripten::optional_override([](vtkDataRepresentation& self, const std::string & arg_0) -> int {  return self.IsA( arg_0.c_str());}))
    .class_function("SafeDownCast", &vtkDataRepresentation::SafeDownCast, emscripten::allow_raw_pointers())
    .function("NewInstance", &vtkDataRepresentation::NewInstance, emscripten::allow_raw_pointers())
    .class_function("GetNumberOfGenerationsFromBaseType", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkDataRepresentation::GetNumberOfGenerationsFromBaseType( arg_0.c_str());}))
    .function("GetNumberOfGenerationsFromBase", emscripten::optional_override([](vtkDataRepresentation& self, const std::string & arg_0) -> int {  return self.GetNumberOfGenerationsFromBase( arg_0.c_str());}))
    .function("GetInputConnection", &vtkDataRepresentation::GetInputConnection, emscripten::allow_raw_pointers())
    .function("GetAnnotationLink", &vtkDataRepresentation::GetAnnotationLink, emscripten::allow_raw_pointers())
    .function("SetAnnotationLink", &vtkDataRepresentation::SetAnnotationLink, emscripten::allow_raw_pointers())
    .function("ApplyViewTheme", &vtkDataRepresentation::ApplyViewTheme, emscripten::allow_raw_pointers())
    .function("Select", emscripten::select_overload<void(vtkDataRepresentation&, vtkView*, vtkSelection*)>([](vtkDataRepresentation& self, vtkView* arg_0, vtkSelection* arg_1) -> void { return self.Select( arg_0, arg_1); }), emscripten::allow_raw_pointers())
    .function("Select", emscripten::select_overload<void(vtkDataRepresentation&, vtkView*, vtkSelection*, bool)>([](vtkDataRepresentation& self, vtkView* arg_0, vtkSelection* arg_1, bool arg_2) -> void { return self.Select( arg_0, arg_1, arg_2); }), emscripten::allow_raw_pointers())
    .function("Annotate", emscripten::select_overload<void(vtkDataRepresentation&, vtkView*, vtkAnnotationLayers*)>([](vtkDataRepresentation& self, vtkView* arg_0, vtkAnnotationLayers* arg_1) -> void { return self.Annotate( arg_0, arg_1); }), emscripten::allow_raw_pointers())
    .function("Annotate", emscripten::select_overload<void(vtkDataRepresentation&, vtkView*, vtkAnnotationLayers*, bool)>([](vtkDataRepresentation& self, vtkView* arg_0, vtkAnnotationLayers* arg_1, bool arg_2) -> void { return self.Annotate( arg_0, arg_1, arg_2); }), emscripten::allow_raw_pointers())
    .function("SetSelectable", &vtkDataRepresentation::SetSelectable)
    .function("GetSelectable", &vtkDataRepresentation::GetSelectable)
    .function("SelectableOn", &vtkDataRepresentation::SelectableOn)
    .function("SelectableOff", &vtkDataRepresentation::SelectableOff)
    .function("UpdateSelection", emscripten::select_overload<void(vtkDataRepresentation&, vtkSelection*)>([](vtkDataRepresentation& self, vtkSelection* arg_0) -> void { return self.UpdateSelection( arg_0); }), emscripten::allow_raw_pointers())
    .function("UpdateSelection", emscripten::select_overload<void(vtkDataRepresentation&, vtkSelection*, bool)>([](vtkDataRepresentation& self, vtkSelection* arg_0, bool arg_1) -> void { return self.UpdateSelection( arg_0, arg_1); }), emscripten::allow_raw_pointers())
    .function("UpdateAnnotations", emscripten::select_overload<void(vtkDataRepresentation&, vtkAnnotationLayers*)>([](vtkDataRepresentation& self, vtkAnnotationLayers* arg_0) -> void { return self.UpdateAnnotations( arg_0); }), emscripten::allow_raw_pointers())
    .function("UpdateAnnotations", emscripten::select_overload<void(vtkDataRepresentation&, vtkAnnotationLayers*, bool)>([](vtkDataRepresentation& self, vtkAnnotationLayers* arg_0, bool arg_1) -> void { return self.UpdateAnnotations( arg_0, arg_1); }), emscripten::allow_raw_pointers())
    .function("GetInternalAnnotationOutputPort", emscripten::select_overload<vtkAlgorithmOutput*(vtkDataRepresentation&)>([](vtkDataRepresentation& self) -> vtkAlgorithmOutput* { return self.GetInternalAnnotationOutputPort(); }), emscripten::allow_raw_pointers())
    .function("GetInternalAnnotationOutputPort", emscripten::select_overload<vtkAlgorithmOutput*(vtkDataRepresentation&, int)>([](vtkDataRepresentation& self, int arg_0) -> vtkAlgorithmOutput* { return self.GetInternalAnnotationOutputPort( arg_0); }), emscripten::allow_raw_pointers())
    .function("GetInternalAnnotationOutputPort", emscripten::select_overload<vtkAlgorithmOutput*(vtkDataRepresentation&, int, int)>([](vtkDataRepresentation& self, int arg_0, int arg_1) -> vtkAlgorithmOutput* { return self.GetInternalAnnotationOutputPort( arg_0, arg_1); }), emscripten::allow_raw_pointers())
    .function("GetInternalSelectionOutputPort", emscripten::select_overload<vtkAlgorithmOutput*(vtkDataRepresentation&)>([](vtkDataRepresentation& self) -> vtkAlgorithmOutput* { return self.GetInternalSelectionOutputPort(); }), emscripten::allow_raw_pointers())
    .function("GetInternalSelectionOutputPort", emscripten::select_overload<vtkAlgorithmOutput*(vtkDataRepresentation&, int)>([](vtkDataRepresentation& self, int arg_0) -> vtkAlgorithmOutput* { return self.GetInternalSelectionOutputPort( arg_0); }), emscripten::allow_raw_pointers())
    .function("GetInternalSelectionOutputPort", emscripten::select_overload<vtkAlgorithmOutput*(vtkDataRepresentation&, int, int)>([](vtkDataRepresentation& self, int arg_0, int arg_1) -> vtkAlgorithmOutput* { return self.GetInternalSelectionOutputPort( arg_0, arg_1); }), emscripten::allow_raw_pointers())
    .function("GetInternalOutputPort", emscripten::select_overload<vtkAlgorithmOutput*(vtkDataRepresentation&)>([](vtkDataRepresentation& self) -> vtkAlgorithmOutput* { return self.GetInternalOutputPort(); }), emscripten::allow_raw_pointers())
    .function("GetInternalOutputPort", emscripten::select_overload<vtkAlgorithmOutput*(vtkDataRepresentation&, int)>([](vtkDataRepresentation& self, int arg_0) -> vtkAlgorithmOutput* { return self.GetInternalOutputPort( arg_0); }), emscripten::allow_raw_pointers())
    .function("GetInternalOutputPort", emscripten::select_overload<vtkAlgorithmOutput*(vtkDataRepresentation&, int, int)>([](vtkDataRepresentation& self, int arg_0, int arg_1) -> vtkAlgorithmOutput* { return self.GetInternalOutputPort( arg_0, arg_1); }), emscripten::allow_raw_pointers())
    .function("SetSelectionType", &vtkDataRepresentation::SetSelectionType)
    .function("GetSelectionType", &vtkDataRepresentation::GetSelectionType)
    .function("SetSelectionArrayNames", &vtkDataRepresentation::SetSelectionArrayNames, emscripten::allow_raw_pointers())
    .function("GetSelectionArrayNames", &vtkDataRepresentation::GetSelectionArrayNames, emscripten::allow_raw_pointers())
    .function("SetSelectionArrayName", emscripten::optional_override([](vtkDataRepresentation& self, const std::string & arg_0) -> void {  return self.SetSelectionArrayName( arg_0.c_str());}))
    .function("GetSelectionArrayName", emscripten::optional_override([](vtkDataRepresentation& self) -> std::string {  return self.GetSelectionArrayName();}))
    .function("ConvertSelection", &vtkDataRepresentation::ConvertSelection, emscripten::allow_raw_pointers());
}
