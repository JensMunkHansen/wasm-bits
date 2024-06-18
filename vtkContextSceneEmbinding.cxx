// JavaScript wrapper for vtkContextScene with embind 
//
// This file was auto-generated using :
/*
node /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/bin/vtkWrapJavaScript.js \
 @/home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkRenderingContext2D.js/vtkRenderingContext2D.js.Release.args \
 -o \
 /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkRenderingContext2D.js/vtkContextSceneEmbinding.cxx \
 /home/jmh/github/vtk/Rendering/Context2D/vtkContextScene.h
*/
#include "vtkEmbindSmartPointerTrait.h"
#include <emscripten.h>
#include <string>
#include "vtkVariant.h"
#include "vtkObjectBase.h"
#include "vtkIndent.h"
#include "vtkContext2D.h"
#include "vtkAbstractContextItem.h"
#include "vtkAnnotationLink.h"
#include "vtkVector.h"
#include "vtkRenderer.h"
#include "vtkWeakPointer.h"
#include "vtkAbstractContextBufferId.h"
#include "vtkTransform2D.h"
#include "vtkContextScene.h"

EMSCRIPTEN_BINDINGS(vtkRenderingContext2D_vtkContextScene_class_enums) {
}
template<> void emscripten::internal::raw_destructor<vtkContextScene>(vtkContextScene * ptr){ ptr->Delete(); }
EMSCRIPTEN_BINDINGS(vtkContextScene_class) {
  using SelectionModifier=vtkContextScene::SelectionModifier;
  emscripten::class_<vtkContextScene, emscripten::base<vtkObject>>("vtkContextScene")
    .smart_ptr<vtkSmartPointer<vtkContextScene>>("vtkSmartPointer<vtkContextScene>")
    .constructor(&vtk::MakeAvtkSmartPointer<vtkContextScene>)
    .class_function("IsTypeOf", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkContextScene::IsTypeOf( arg_0.c_str());}))
    .function("IsA", emscripten::optional_override([](vtkContextScene& self, const std::string & arg_0) -> int {  return self.IsA( arg_0.c_str());}))
    .class_function("SafeDownCast", &vtkContextScene::SafeDownCast, emscripten::allow_raw_pointers())
    .function("NewInstance", &vtkContextScene::NewInstance, emscripten::allow_raw_pointers())
    .class_function("GetNumberOfGenerationsFromBaseType", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkContextScene::GetNumberOfGenerationsFromBaseType( arg_0.c_str());}))
    .function("GetNumberOfGenerationsFromBase", emscripten::optional_override([](vtkContextScene& self, const std::string & arg_0) -> int {  return self.GetNumberOfGenerationsFromBase( arg_0.c_str());}))
    .function("Paint", &vtkContextScene::Paint, emscripten::allow_raw_pointers())
    .function("AddItem", &vtkContextScene::AddItem, emscripten::allow_raw_pointers())
    .function("RemoveItem", emscripten::select_overload<bool(vtkContextScene&, vtkAbstractContextItem*)>([](vtkContextScene& self, vtkAbstractContextItem* arg_0) -> bool { return self.RemoveItem( arg_0); }), emscripten::allow_raw_pointers())
    .function("RemoveItem", emscripten::select_overload<bool(vtkContextScene&, unsigned int)>([](vtkContextScene& self, unsigned int arg_0) -> bool { return self.RemoveItem( arg_0); }))
    .function("GetItem", &vtkContextScene::GetItem, emscripten::allow_raw_pointers())
    .function("GetNumberOfItems", &vtkContextScene::GetNumberOfItems)
    .function("ClearItems", &vtkContextScene::ClearItems)
    .function("RemoveAllItems", &vtkContextScene::RemoveAllItems)
    .function("SetAnnotationLink", &vtkContextScene::SetAnnotationLink, emscripten::allow_raw_pointers())
    .function("GetAnnotationLink", &vtkContextScene::GetAnnotationLink, emscripten::allow_raw_pointers())
    .function("SetOrigin", emscripten::select_overload<void(vtkContextScene&, int, int)>([](vtkContextScene& self, int arg_0, int arg_1) -> void { return self.SetOrigin( arg_0, arg_1); }))
    .function("SetGeometry", emscripten::select_overload<void(vtkContextScene&, int, int)>([](vtkContextScene& self, int arg_0, int arg_1) -> void { return self.SetGeometry( arg_0, arg_1); }))
    .function("SetUseBufferId", &vtkContextScene::SetUseBufferId)
    .function("GetUseBufferId", &vtkContextScene::GetUseBufferId)
    .function("GetViewWidth", &vtkContextScene::GetViewWidth)
    .function("GetViewHeight", &vtkContextScene::GetViewHeight)
    .function("GetSceneLeft", &vtkContextScene::GetSceneLeft)
    .function("GetSceneBottom", &vtkContextScene::GetSceneBottom)
    .function("GetSceneWidth", &vtkContextScene::GetSceneWidth)
    .function("GetSceneHeight", &vtkContextScene::GetSceneHeight)
    .function("SetScaleTiles", &vtkContextScene::SetScaleTiles)
    .function("GetScaleTiles", &vtkContextScene::GetScaleTiles)
    .function("ScaleTilesOn", &vtkContextScene::ScaleTilesOn)
    .function("ScaleTilesOff", &vtkContextScene::ScaleTilesOff)
    .function("GetLogicalTileScale", &vtkContextScene::GetLogicalTileScale)
    .function("SetRenderer", &vtkContextScene::SetRenderer, emscripten::allow_raw_pointers())
    .function("GetRenderer", &vtkContextScene::GetRenderer, emscripten::allow_raw_pointers())
    .function("SetDirty", &vtkContextScene::SetDirty)
    .function("GetDirty", &vtkContextScene::GetDirty)
    .function("ReleaseGraphicsResources", &vtkContextScene::ReleaseGraphicsResources)
    .function("GetLastPainter", &vtkContextScene::GetLastPainter)
    .function("GetBufferId", &vtkContextScene::GetBufferId, emscripten::allow_raw_pointers())
    .function("SetTransform", &vtkContextScene::SetTransform, emscripten::allow_raw_pointers())
    .function("GetTransform", &vtkContextScene::GetTransform, emscripten::allow_raw_pointers())
    .function("HasTransform", &vtkContextScene::HasTransform)
    .function("GetPickedItem", emscripten::select_overload<int(vtkContextScene&, int, int)>([](vtkContextScene& self, int arg_0, int arg_1) -> int { return self.GetPickedItem( arg_0, arg_1); }))
    .function("GetPickedItem", emscripten::select_overload<vtkAbstractContextItem*(vtkContextScene&)>([](vtkContextScene& self) -> vtkAbstractContextItem* { return self.GetPickedItem(); }), emscripten::allow_raw_pointers());
}
EMSCRIPTEN_BINDINGS(vtkRenderingContext2D_vtkContextScene_0_2_constants) {
    typedef vtkContextScene::SelectionModifier cxx_enum_type;

  const struct { const char *name; cxx_enum_type value; }
    constants[4] = {
      { "vtkContextScene_SelectionModifier_SELECTION_DEFAULT", vtkContextScene::SELECTION_DEFAULT },
      { "vtkContextScene_SelectionModifier_SELECTION_ADDITION", vtkContextScene::SELECTION_ADDITION },
      { "vtkContextScene_SelectionModifier_SELECTION_SUBTRACTION", vtkContextScene::SELECTION_SUBTRACTION },
      { "vtkContextScene_SelectionModifier_SELECTION_TOGGLE", vtkContextScene::SELECTION_TOGGLE },
  };
  for (int c = 0; c < 4; c++)
  {
    emscripten::constant(constants[c].name, static_cast<int>(constants[c].value));
  }
}
