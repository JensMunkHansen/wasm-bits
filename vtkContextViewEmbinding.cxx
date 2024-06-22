// JavaScript wrapper for vtkContextView with embind 
//
// This file was auto-generated using :
/*
node /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/bin/vtkWrapJavaScript.js \
 @/home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkViewsContext2D.js/vtkViewsContext2D.js.Release.args \
 -o \
 /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkViewsContext2D.js/vtkContextViewEmbinding.cxx \
 /home/jmh/github/vtk/Views/Context2D/vtkContextView.h
*/
#include "vtkEmbindSmartPointerTrait.h"
#include <emscripten.h>
#include <string>
#include "vtkVariant.h"
#include "vtkIndent.h"
#include "vtkObjectBase.h"
#include "vtkContext2D.h"
#include "vtkContextScene.h"
#include "vtkContextView.h"

template<> void emscripten::internal::raw_destructor<vtkContextView>(vtkContextView * ptr){ ptr->Delete(); }
EMSCRIPTEN_BINDINGS(vtkContextView_class) {
  emscripten::class_<vtkContextView, emscripten::base<vtkRenderViewBase>>("vtkContextView")
    .smart_ptr<vtkSmartPointer<vtkContextView>>("vtkSmartPointer<vtkContextView>")
    .constructor(&vtk::MakeAvtkSmartPointer<vtkContextView>)
    .class_function("IsTypeOf", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkContextView::IsTypeOf( arg_0.c_str());}))
    .function("IsA", emscripten::optional_override([](vtkContextView& self, const std::string & arg_0) -> int {  return self.IsA( arg_0.c_str());}))
    .class_function("SafeDownCast", &vtkContextView::SafeDownCast, emscripten::allow_raw_pointers())
    .function("NewInstance", &vtkContextView::NewInstance, emscripten::allow_raw_pointers())
    .class_function("GetNumberOfGenerationsFromBaseType", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkContextView::GetNumberOfGenerationsFromBaseType( arg_0.c_str());}))
    .function("GetNumberOfGenerationsFromBase", emscripten::optional_override([](vtkContextView& self, const std::string & arg_0) -> int {  return self.GetNumberOfGenerationsFromBase( arg_0.c_str());}))
    .function("SetContext", &vtkContextView::SetContext, emscripten::allow_raw_pointers())
    .function("GetContext", &vtkContextView::GetContext, emscripten::allow_raw_pointers())
    .function("SetScene", &vtkContextView::SetScene, emscripten::allow_raw_pointers())
    .function("GetScene", &vtkContextView::GetScene, emscripten::allow_raw_pointers());
}
