// JavaScript wrapper for vtkTanglegramItem with embind 
//
// This file was auto-generated using :
/*
node /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/bin/vtkWrapJavaScript.js \
 @/home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkViewsInfovis.js/vtkViewsInfovis.js.Release.args \
 -o \
 /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkViewsInfovis.js/vtkTanglegramItemEmbinding.cxx \
 /home/jmh/github/vtk/Views/Infovis/vtkTanglegramItem.h
*/
#include "vtkEmbindSmartPointerTrait.h"
#include <emscripten.h>
#include <string>
#include "vtkVariant.h"
#include "vtkObjectBase.h"
#include "vtkIndent.h"
#include "vtkTree.h"
#include "vtkTable.h"
#include "vtkContextMouseEvent.h"
#include "vtkTanglegramItem.h"

template<> void emscripten::internal::raw_destructor<vtkTanglegramItem>(vtkTanglegramItem * ptr){ ptr->Delete(); }
EMSCRIPTEN_BINDINGS(vtkTanglegramItem_class) {
  emscripten::class_<vtkTanglegramItem, emscripten::base<vtkContextItem>>("vtkTanglegramItem")
    .smart_ptr<vtkSmartPointer<vtkTanglegramItem>>("vtkSmartPointer<vtkTanglegramItem>")
    .constructor(&vtk::MakeAvtkSmartPointer<vtkTanglegramItem>)
    .class_function("IsTypeOf", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkTanglegramItem::IsTypeOf( arg_0.c_str());}))
    .function("IsA", emscripten::optional_override([](vtkTanglegramItem& self, const std::string & arg_0) -> int {  return self.IsA( arg_0.c_str());}))
    .class_function("SafeDownCast", &vtkTanglegramItem::SafeDownCast, emscripten::allow_raw_pointers())
    .function("NewInstance", &vtkTanglegramItem::NewInstance, emscripten::allow_raw_pointers())
    .class_function("GetNumberOfGenerationsFromBaseType", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkTanglegramItem::GetNumberOfGenerationsFromBaseType( arg_0.c_str());}))
    .function("GetNumberOfGenerationsFromBase", emscripten::optional_override([](vtkTanglegramItem& self, const std::string & arg_0) -> int {  return self.GetNumberOfGenerationsFromBase( arg_0.c_str());}))
    .function("SetTree1", &vtkTanglegramItem::SetTree1, emscripten::allow_raw_pointers())
    .function("SetTree2", &vtkTanglegramItem::SetTree2, emscripten::allow_raw_pointers())
    .function("GetTable", &vtkTanglegramItem::GetTable, emscripten::allow_raw_pointers())
    .function("SetTable", &vtkTanglegramItem::SetTable, emscripten::allow_raw_pointers())
    .function("GetTree1Label", emscripten::optional_override([](vtkTanglegramItem& self) -> std::string {  return self.GetTree1Label();}))
    .function("SetTree1Label", emscripten::optional_override([](vtkTanglegramItem& self, const std::string & arg_0) -> void {  return self.SetTree1Label( arg_0.c_str());}))
    .function("GetTree2Label", emscripten::optional_override([](vtkTanglegramItem& self) -> std::string {  return self.GetTree2Label();}))
    .function("SetTree2Label", emscripten::optional_override([](vtkTanglegramItem& self, const std::string & arg_0) -> void {  return self.SetTree2Label( arg_0.c_str());}))
    .function("SetOrientation", &vtkTanglegramItem::SetOrientation)
    .function("GetOrientation", &vtkTanglegramItem::GetOrientation)
    .function("GetMinimumVisibleFontSize", &vtkTanglegramItem::GetMinimumVisibleFontSize)
    .function("SetMinimumVisibleFontSize", &vtkTanglegramItem::SetMinimumVisibleFontSize)
    .function("GetLabelSizeDifference", &vtkTanglegramItem::GetLabelSizeDifference)
    .function("SetLabelSizeDifference", &vtkTanglegramItem::SetLabelSizeDifference)
    .function("GetCorrespondenceLineWidth", &vtkTanglegramItem::GetCorrespondenceLineWidth)
    .function("SetCorrespondenceLineWidth", &vtkTanglegramItem::SetCorrespondenceLineWidth)
    .function("GetTreeLineWidth", &vtkTanglegramItem::GetTreeLineWidth)
    .function("SetTreeLineWidth", &vtkTanglegramItem::SetTreeLineWidth)
    .function("Hit", &vtkTanglegramItem::Hit)
    .function("MouseDoubleClickEvent", &vtkTanglegramItem::MouseDoubleClickEvent);
}
