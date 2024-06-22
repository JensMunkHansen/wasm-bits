// JavaScript wrapper for vtkTreeRingView with embind 
//
// This file was auto-generated using :
/*
node /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/bin/vtkWrapJavaScript.js \
 @/home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkViewsInfovis.js/vtkViewsInfovis.js.Release.args \
 -o \
 /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkViewsInfovis.js/vtkTreeRingViewEmbinding.cxx \
 /home/jmh/github/vtk/Views/Infovis/vtkTreeRingView.h
*/
#include "vtkEmbindSmartPointerTrait.h"
#include <emscripten.h>
#include <string>
#include "vtkVariant.h"
#include "vtkObjectBase.h"
#include "vtkIndent.h"
#include "vtkTreeRingView.h"

template<> void emscripten::internal::raw_destructor<vtkTreeRingView>(vtkTreeRingView * ptr){ ptr->Delete(); }
EMSCRIPTEN_BINDINGS(vtkTreeRingView_class) {
  emscripten::class_<vtkTreeRingView, emscripten::base<vtkTreeAreaView>>("vtkTreeRingView")
    .smart_ptr<vtkSmartPointer<vtkTreeRingView>>("vtkSmartPointer<vtkTreeRingView>")
    .constructor(&vtk::MakeAvtkSmartPointer<vtkTreeRingView>)
    .class_function("IsTypeOf", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkTreeRingView::IsTypeOf( arg_0.c_str());}))
    .function("IsA", emscripten::optional_override([](vtkTreeRingView& self, const std::string & arg_0) -> int {  return self.IsA( arg_0.c_str());}))
    .class_function("SafeDownCast", &vtkTreeRingView::SafeDownCast, emscripten::allow_raw_pointers())
    .function("NewInstance", &vtkTreeRingView::NewInstance, emscripten::allow_raw_pointers())
    .class_function("GetNumberOfGenerationsFromBaseType", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkTreeRingView::GetNumberOfGenerationsFromBaseType( arg_0.c_str());}))
    .function("GetNumberOfGenerationsFromBase", emscripten::optional_override([](vtkTreeRingView& self, const std::string & arg_0) -> int {  return self.GetNumberOfGenerationsFromBase( arg_0.c_str());}))
    .function("SetRootAngles", &vtkTreeRingView::SetRootAngles)
    .function("SetRootAtCenter", &vtkTreeRingView::SetRootAtCenter)
    .function("GetRootAtCenter", &vtkTreeRingView::GetRootAtCenter)
    .function("RootAtCenterOn", &vtkTreeRingView::RootAtCenterOn)
    .function("RootAtCenterOff", &vtkTreeRingView::RootAtCenterOff)
    .function("SetLayerThickness", &vtkTreeRingView::SetLayerThickness)
    .function("GetLayerThickness", &vtkTreeRingView::GetLayerThickness)
    .function("SetInteriorRadius", &vtkTreeRingView::SetInteriorRadius)
    .function("GetInteriorRadius", &vtkTreeRingView::GetInteriorRadius)
    .function("SetInteriorLogSpacingValue", &vtkTreeRingView::SetInteriorLogSpacingValue)
    .function("GetInteriorLogSpacingValue", &vtkTreeRingView::GetInteriorLogSpacingValue);
}
