// JavaScript wrapper for vtkView with embind 
//
// This file was auto-generated using :
/*
node /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/bin/vtkWrapJavaScript.js \
 @/home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkViewsCore.js/vtkViewsCore.js.Release.args \
 -o \
 /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkViewsCore.js/vtkViewEmbinding.cxx \
 /home/jmh/github/vtk/Views/Core/vtkView.h
*/
#include "vtkEmbindSmartPointerTrait.h"
#include <emscripten.h>
#include <string>
#include "vtkVariant.h"
#include "vtkObjectBase.h"
#include "vtkIndent.h"
#include "vtkDataRepresentation.h"
#include "vtkAlgorithmOutput.h"
#include "vtkDataObject.h"
#include "vtkViewTheme.h"
#include "vtkCommand.h"
#include "vtkObject.h"
#include "vtkView.h"

template<> void emscripten::internal::raw_destructor<vtkView>(vtkView * ptr){ ptr->Delete(); }
EMSCRIPTEN_BINDINGS(vtkView_class) {
  emscripten::class_<vtkView, emscripten::base<vtkObject>>("vtkView")
    .smart_ptr<vtkSmartPointer<vtkView>>("vtkSmartPointer<vtkView>")
    .constructor(&vtk::MakeAvtkSmartPointer<vtkView>)
    .class_function("IsTypeOf", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkView::IsTypeOf( arg_0.c_str());}))
    .function("IsA", emscripten::optional_override([](vtkView& self, const std::string & arg_0) -> int {  return self.IsA( arg_0.c_str());}))
    .class_function("SafeDownCast", &vtkView::SafeDownCast, emscripten::allow_raw_pointers())
    .function("NewInstance", &vtkView::NewInstance, emscripten::allow_raw_pointers())
    .class_function("GetNumberOfGenerationsFromBaseType", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkView::GetNumberOfGenerationsFromBaseType( arg_0.c_str());}))
    .function("GetNumberOfGenerationsFromBase", emscripten::optional_override([](vtkView& self, const std::string & arg_0) -> int {  return self.GetNumberOfGenerationsFromBase( arg_0.c_str());}))
    .function("AddRepresentation", &vtkView::AddRepresentation, emscripten::allow_raw_pointers())
    .function("SetRepresentation", &vtkView::SetRepresentation, emscripten::allow_raw_pointers())
    .function("AddRepresentationFromInputConnection", &vtkView::AddRepresentationFromInputConnection, emscripten::allow_raw_pointers())
    .function("SetRepresentationFromInputConnection", &vtkView::SetRepresentationFromInputConnection, emscripten::allow_raw_pointers())
    .function("AddRepresentationFromInput", &vtkView::AddRepresentationFromInput, emscripten::allow_raw_pointers())
    .function("SetRepresentationFromInput", &vtkView::SetRepresentationFromInput, emscripten::allow_raw_pointers())
    .function("RemoveRepresentation", emscripten::select_overload<void(vtkView&, vtkDataRepresentation*)>([](vtkView& self, vtkDataRepresentation* arg_0) -> void { return self.RemoveRepresentation( arg_0); }), emscripten::allow_raw_pointers())
    .function("RemoveRepresentation", emscripten::select_overload<void(vtkView&, vtkAlgorithmOutput*)>([](vtkView& self, vtkAlgorithmOutput* arg_0) -> void { return self.RemoveRepresentation( arg_0); }), emscripten::allow_raw_pointers())
    .function("RemoveAllRepresentations", &vtkView::RemoveAllRepresentations)
    .function("GetNumberOfRepresentations", &vtkView::GetNumberOfRepresentations)
    .function("GetRepresentation", &vtkView::GetRepresentation, emscripten::allow_raw_pointers())
    .function("IsRepresentationPresent", &vtkView::IsRepresentationPresent, emscripten::allow_raw_pointers())
    .function("Update", &vtkView::Update)
    .function("ApplyViewTheme", &vtkView::ApplyViewTheme, emscripten::allow_raw_pointers())
    .function("GetObserver", &vtkView::GetObserver, emscripten::allow_raw_pointers())
    .function("RegisterProgress", emscripten::optional_override([](vtkView& self, vtkObject* arg_0, const std::string & arg_1) -> void {  return self.RegisterProgress( arg_0, arg_1.c_str());}), emscripten::allow_raw_pointers())
    .function("UnRegisterProgress", &vtkView::UnRegisterProgress, emscripten::allow_raw_pointers());
}
