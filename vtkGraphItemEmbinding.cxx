// JavaScript wrapper for vtkGraphItem with embind 
//
// This file was auto-generated using :
/*
node /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/bin/vtkWrapJavaScript.js \
 @/home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkViewsInfovis.js/vtkViewsInfovis.js.Release.args \
 -o \
 /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkViewsInfovis.js/vtkGraphItemEmbinding.cxx \
 /home/jmh/github/vtk/Views/Infovis/vtkGraphItem.h
*/
#include "vtkEmbindSmartPointerTrait.h"
#include <emscripten.h>
#include <string>
#include "vtkVariant.h"
#include "vtkObjectBase.h"
#include "vtkIndent.h"
#include "vtkGraph.h"
#include "vtkIncrementalForceLayout.h"
#include "vtkRenderWindowInteractor.h"
#include "vtkGraphItem.h"

template<> void emscripten::internal::raw_destructor<vtkGraphItem>(vtkGraphItem * ptr){ ptr->Delete(); }
EMSCRIPTEN_BINDINGS(vtkGraphItem_class) {
  emscripten::class_<vtkGraphItem, emscripten::base<vtkContextItem>>("vtkGraphItem")
    .smart_ptr<vtkSmartPointer<vtkGraphItem>>("vtkSmartPointer<vtkGraphItem>")
    .constructor(&vtk::MakeVTKSmartPtr<vtkGraphItem>)
    .class_function("IsTypeOf", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkGraphItem::IsTypeOf( arg_0.c_str());}))
    .function("IsA", emscripten::optional_override([](vtkGraphItem& self, const std::string & arg_0) -> int {  return self.IsA( arg_0.c_str());}))
    .class_function("SafeDownCast", &vtkGraphItem::SafeDownCast, emscripten::allow_raw_pointers())
    .function("NewInstance", &vtkGraphItem::NewInstance, emscripten::allow_raw_pointers())
    .class_function("GetNumberOfGenerationsFromBaseType", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkGraphItem::GetNumberOfGenerationsFromBaseType( arg_0.c_str());}))
    .function("GetNumberOfGenerationsFromBase", emscripten::optional_override([](vtkGraphItem& self, const std::string & arg_0) -> int {  return self.GetNumberOfGenerationsFromBase( arg_0.c_str());}))
    .function("SetGraph", &vtkGraphItem::SetGraph, emscripten::allow_raw_pointers())
    .function("GetGraph", &vtkGraphItem::GetGraph, emscripten::allow_raw_pointers())
    .function("GetLayout", &vtkGraphItem::GetLayout, emscripten::allow_raw_pointers())
    .function("StartLayoutAnimation", &vtkGraphItem::StartLayoutAnimation, emscripten::allow_raw_pointers())
    .function("StopLayoutAnimation", &vtkGraphItem::StopLayoutAnimation)
    .function("UpdateLayout", &vtkGraphItem::UpdateLayout);
}
