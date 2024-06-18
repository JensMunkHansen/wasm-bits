// JavaScript wrapper for vtkContextItem with embind 
//
// This file was auto-generated using :
/*
node /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/bin/vtkWrapJavaScript.js \
 @/home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkRenderingContext2D.js/vtkRenderingContext2D.js.Release.args \
 -o \
 /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkRenderingContext2D.js/vtkContextItemEmbinding.cxx \
 /home/jmh/github/vtk/Rendering/Context2D/vtkContextItem.h
*/
#include "vtkEmbindSmartPointerTrait.h"
#include <emscripten.h>
#include <string>
#include "vtkVariant.h"
#include "vtkObjectBase.h"
#include "vtkIndent.h"
#include "vtkContextTransform.h"
#include "vtkContextItem.h"

template<> void emscripten::internal::raw_destructor<vtkContextItem>(vtkContextItem * ptr){ ptr->Delete(); }
EMSCRIPTEN_BINDINGS(vtkContextItem_class) {
  emscripten::class_<vtkContextItem, emscripten::base<vtkAbstractContextItem>>("vtkContextItem")
    .class_function("IsTypeOf", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkContextItem::IsTypeOf( arg_0.c_str());}))
    .function("IsA", emscripten::optional_override([](vtkContextItem& self, const std::string & arg_0) -> int {  return self.IsA( arg_0.c_str());}))
    .class_function("SafeDownCast", &vtkContextItem::SafeDownCast, emscripten::allow_raw_pointers())
    .function("NewInstance", &vtkContextItem::NewInstance, emscripten::allow_raw_pointers())
    .class_function("GetNumberOfGenerationsFromBaseType", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkContextItem::GetNumberOfGenerationsFromBaseType( arg_0.c_str());}))
    .function("GetNumberOfGenerationsFromBase", emscripten::optional_override([](vtkContextItem& self, const std::string & arg_0) -> int {  return self.GetNumberOfGenerationsFromBase( arg_0.c_str());}))
    .function("GetOpacity", &vtkContextItem::GetOpacity)
    .function("SetOpacity", &vtkContextItem::SetOpacity)
    .function("SetTransform", &vtkContextItem::SetTransform, emscripten::allow_raw_pointers());
}
