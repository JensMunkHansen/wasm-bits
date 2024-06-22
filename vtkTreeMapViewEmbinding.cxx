// JavaScript wrapper for vtkTreeMapView with embind 
//
// This file was auto-generated using :
/*
node /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/bin/vtkWrapJavaScript.js \
 @/home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkViewsInfovis.js/vtkViewsInfovis.js.Release.args \
 -o \
 /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkViewsInfovis.js/vtkTreeMapViewEmbinding.cxx \
 /home/jmh/github/vtk/Views/Infovis/vtkTreeMapView.h
*/
#include "vtkEmbindSmartPointerTrait.h"
#include <emscripten.h>
#include <string>
#include "vtkVariant.h"
#include "vtkObjectBase.h"
#include "vtkIndent.h"
#include "vtkAreaLayoutStrategy.h"
#include "vtkTreeMapView.h"

template<> void emscripten::internal::raw_destructor<vtkTreeMapView>(vtkTreeMapView * ptr){ ptr->Delete(); }
EMSCRIPTEN_BINDINGS(vtkTreeMapView_class) {
  emscripten::class_<vtkTreeMapView, emscripten::base<vtkTreeAreaView>>("vtkTreeMapView")
    .smart_ptr<vtkSmartPointer<vtkTreeMapView>>("vtkSmartPointer<vtkTreeMapView>")
    .constructor(&vtk::MakeVTKSmartPtr<vtkTreeMapView>)
    .class_function("IsTypeOf", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkTreeMapView::IsTypeOf( arg_0.c_str());}))
    .function("IsA", emscripten::optional_override([](vtkTreeMapView& self, const std::string & arg_0) -> int {  return self.IsA( arg_0.c_str());}))
    .class_function("SafeDownCast", &vtkTreeMapView::SafeDownCast, emscripten::allow_raw_pointers())
    .function("NewInstance", &vtkTreeMapView::NewInstance, emscripten::allow_raw_pointers())
    .class_function("GetNumberOfGenerationsFromBaseType", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkTreeMapView::GetNumberOfGenerationsFromBaseType( arg_0.c_str());}))
    .function("GetNumberOfGenerationsFromBase", emscripten::optional_override([](vtkTreeMapView& self, const std::string & arg_0) -> int {  return self.GetNumberOfGenerationsFromBase( arg_0.c_str());}))
    .function("SetLayoutStrategy", emscripten::select_overload<void(vtkTreeMapView&, vtkAreaLayoutStrategy*)>([](vtkTreeMapView& self, vtkAreaLayoutStrategy* arg_0) -> void { return self.SetLayoutStrategy( arg_0); }), emscripten::allow_raw_pointers())
    .function("SetLayoutStrategy", emscripten::select_overload<void(vtkTreeMapView&, const std::string &)>([](vtkTreeMapView& self, const std::string & arg_0) -> void { return self.SetLayoutStrategy( arg_0.c_str()); }))
    .function("SetLayoutStrategyToBox", &vtkTreeMapView::SetLayoutStrategyToBox)
    .function("SetLayoutStrategyToSliceAndDice", &vtkTreeMapView::SetLayoutStrategyToSliceAndDice)
    .function("SetLayoutStrategyToSquarify", &vtkTreeMapView::SetLayoutStrategyToSquarify)
    .function("SetFontSizeRange", &vtkTreeMapView::SetFontSizeRange);
}
