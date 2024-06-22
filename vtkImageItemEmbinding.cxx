// JavaScript wrapper for vtkImageItem with embind 
//
// This file was auto-generated using :
/*
node /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/bin/vtkWrapJavaScript.js \
 @/home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkRenderingContext2D.js/vtkRenderingContext2D.js.Release.args \
 -o \
 /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkRenderingContext2D.js/vtkImageItemEmbinding.cxx \
 /home/jmh/github/vtk/Rendering/Context2D/vtkImageItem.h
*/
#include "vtkEmbindSmartPointerTrait.h"
#include <emscripten.h>
#include <string>
#include "vtkVariant.h"
#include "vtkObjectBase.h"
#include "vtkIndent.h"
#include "vtkContext2D.h"
#include "vtkImageData.h"
#include "vtkImageItem.h"

template<> void emscripten::internal::raw_destructor<vtkImageItem>(vtkImageItem * ptr){ ptr->Delete(); }
EMSCRIPTEN_BINDINGS(vtkImageItem_class) {
  emscripten::class_<vtkImageItem, emscripten::base<vtkContextItem>>("vtkImageItem")
    .smart_ptr<vtkSmartPointer<vtkImageItem>>("vtkSmartPointer<vtkImageItem>")
    .constructor(&vtk::MakeAvtkSmartPointer<vtkImageItem>)
    .class_function("IsTypeOf", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkImageItem::IsTypeOf( arg_0.c_str());}))
    .function("IsA", emscripten::optional_override([](vtkImageItem& self, const std::string & arg_0) -> int {  return self.IsA( arg_0.c_str());}))
    .class_function("SafeDownCast", &vtkImageItem::SafeDownCast, emscripten::allow_raw_pointers())
    .function("NewInstance", &vtkImageItem::NewInstance, emscripten::allow_raw_pointers())
    .class_function("GetNumberOfGenerationsFromBaseType", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkImageItem::GetNumberOfGenerationsFromBaseType( arg_0.c_str());}))
    .function("GetNumberOfGenerationsFromBase", emscripten::optional_override([](vtkImageItem& self, const std::string & arg_0) -> int {  return self.GetNumberOfGenerationsFromBase( arg_0.c_str());}))
    .function("Paint", &vtkImageItem::Paint, emscripten::allow_raw_pointers())
    .function("SetImage", &vtkImageItem::SetImage, emscripten::allow_raw_pointers())
    .function("GetImage", &vtkImageItem::GetImage, emscripten::allow_raw_pointers())
    .function("SetPosition", emscripten::select_overload<void(vtkImageItem&, float, float)>([](vtkImageItem& self, float arg_0, float arg_1) -> void { return self.SetPosition( arg_0, arg_1); }));
}
