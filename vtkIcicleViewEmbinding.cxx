// JavaScript wrapper for vtkIcicleView with embind 
//
// This file was auto-generated using :
/*
node /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/bin/vtkWrapJavaScript.js \
 @/home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkViewsInfovis.js/vtkViewsInfovis.js.Release.args \
 -o \
 /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkViewsInfovis.js/vtkIcicleViewEmbinding.cxx \
 /home/jmh/github/vtk/Views/Infovis/vtkIcicleView.h
*/
#include "vtkEmbindSmartPointerTrait.h"
#include <emscripten.h>
#include <string>
#include "vtkVariant.h"
#include "vtkObjectBase.h"
#include "vtkIndent.h"
#include "vtkIcicleView.h"

template<> void emscripten::internal::raw_destructor<vtkIcicleView>(vtkIcicleView * ptr){ ptr->Delete(); }
EMSCRIPTEN_BINDINGS(vtkIcicleView_class) {
  emscripten::class_<vtkIcicleView, emscripten::base<vtkTreeAreaView>>("vtkIcicleView")
    .smart_ptr<vtkSmartPointer<vtkIcicleView>>("vtkSmartPointer<vtkIcicleView>")
    .constructor(&vtk::MakeAvtkSmartPointer<vtkIcicleView>)
    .class_function("IsTypeOf", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkIcicleView::IsTypeOf( arg_0.c_str());}))
    .function("IsA", emscripten::optional_override([](vtkIcicleView& self, const std::string & arg_0) -> int {  return self.IsA( arg_0.c_str());}))
    .class_function("SafeDownCast", &vtkIcicleView::SafeDownCast, emscripten::allow_raw_pointers())
    .function("NewInstance", &vtkIcicleView::NewInstance, emscripten::allow_raw_pointers())
    .class_function("GetNumberOfGenerationsFromBaseType", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkIcicleView::GetNumberOfGenerationsFromBaseType( arg_0.c_str());}))
    .function("GetNumberOfGenerationsFromBase", emscripten::optional_override([](vtkIcicleView& self, const std::string & arg_0) -> int {  return self.GetNumberOfGenerationsFromBase( arg_0.c_str());}))
    .function("SetTopToBottom", &vtkIcicleView::SetTopToBottom)
    .function("GetTopToBottom", &vtkIcicleView::GetTopToBottom)
    .function("TopToBottomOn", &vtkIcicleView::TopToBottomOn)
    .function("TopToBottomOff", &vtkIcicleView::TopToBottomOff)
    .function("SetRootWidth", &vtkIcicleView::SetRootWidth)
    .function("GetRootWidth", &vtkIcicleView::GetRootWidth)
    .function("SetLayerThickness", &vtkIcicleView::SetLayerThickness)
    .function("GetLayerThickness", &vtkIcicleView::GetLayerThickness)
    .function("SetUseGradientColoring", &vtkIcicleView::SetUseGradientColoring)
    .function("GetUseGradientColoring", &vtkIcicleView::GetUseGradientColoring)
    .function("UseGradientColoringOn", &vtkIcicleView::UseGradientColoringOn)
    .function("UseGradientColoringOff", &vtkIcicleView::UseGradientColoringOff);
}
