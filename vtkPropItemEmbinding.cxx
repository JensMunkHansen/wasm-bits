// JavaScript wrapper for vtkPropItem with embind 
//
// This file was auto-generated using :
/*
node /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/bin/vtkWrapJavaScript.js \
 @/home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkRenderingContext2D.js/vtkRenderingContext2D.js.Release.args \
 -o \
 /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkRenderingContext2D.js/vtkPropItemEmbinding.cxx \
 /home/jmh/github/vtk/Rendering/Context2D/vtkPropItem.h
*/
#include "vtkEmbindSmartPointerTrait.h"
#include <emscripten.h>
#include <string>
#include "vtkVariant.h"
#include "vtkObjectBase.h"
#include "vtkIndent.h"
#include "vtkContext2D.h"
#include "vtkProp.h"
#include "vtkPropItem.h"

template<> void emscripten::internal::raw_destructor<vtkPropItem>(vtkPropItem * ptr){ ptr->Delete(); }
EMSCRIPTEN_BINDINGS(vtkPropItem_class) {
  emscripten::class_<vtkPropItem, emscripten::base<vtkAbstractContextItem>>("vtkPropItem")
    .smart_ptr<vtkSmartPointer<vtkPropItem>>("vtkSmartPointer<vtkPropItem>")
    .constructor(&vtk::MakeAvtkSmartPointer<vtkPropItem>)
    .class_function("IsTypeOf", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkPropItem::IsTypeOf( arg_0.c_str());}))
    .function("IsA", emscripten::optional_override([](vtkPropItem& self, const std::string & arg_0) -> int {  return self.IsA( arg_0.c_str());}))
    .class_function("SafeDownCast", &vtkPropItem::SafeDownCast, emscripten::allow_raw_pointers())
    .function("NewInstance", &vtkPropItem::NewInstance, emscripten::allow_raw_pointers())
    .class_function("GetNumberOfGenerationsFromBaseType", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkPropItem::GetNumberOfGenerationsFromBaseType( arg_0.c_str());}))
    .function("GetNumberOfGenerationsFromBase", emscripten::optional_override([](vtkPropItem& self, const std::string & arg_0) -> int {  return self.GetNumberOfGenerationsFromBase( arg_0.c_str());}))
    .function("Paint", &vtkPropItem::Paint, emscripten::allow_raw_pointers())
    .function("ReleaseGraphicsResources", &vtkPropItem::ReleaseGraphicsResources)
    .function("SetPropObject", &vtkPropItem::SetPropObject, emscripten::allow_raw_pointers())
    .function("GetPropObject", &vtkPropItem::GetPropObject, emscripten::allow_raw_pointers());
}
