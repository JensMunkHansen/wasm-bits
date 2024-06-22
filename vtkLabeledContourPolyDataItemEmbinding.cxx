// JavaScript wrapper for vtkLabeledContourPolyDataItem with embind 
//
// This file was auto-generated using :
/*
node /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/bin/vtkWrapJavaScript.js \
 @/home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkRenderingContext2D.js/vtkRenderingContext2D.js.Release.args \
 -o \
 /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkRenderingContext2D.js/vtkLabeledContourPolyDataItemEmbinding.cxx \
 /home/jmh/github/vtk/Rendering/Context2D/vtkLabeledContourPolyDataItem.h
*/
#include "vtkEmbindSmartPointerTrait.h"
#include <emscripten.h>
#include <string>
#include "vtkVariant.h"
#include "vtkObjectBase.h"
#include "vtkIndent.h"
#include "vtkContext2D.h"
#include "vtkTextProperty.h"
#include "vtkTextPropertyCollection.h"
#include "vtkDoubleArray.h"
#include "vtkLabeledContourPolyDataItem.h"

template<> void emscripten::internal::raw_destructor<vtkLabeledContourPolyDataItem>(vtkLabeledContourPolyDataItem * ptr){ ptr->Delete(); }
EMSCRIPTEN_BINDINGS(vtkLabeledContourPolyDataItem_class) {
  emscripten::class_<vtkLabeledContourPolyDataItem, emscripten::base<vtkPolyDataItem>>("vtkLabeledContourPolyDataItem")
    .smart_ptr<vtkSmartPointer<vtkLabeledContourPolyDataItem>>("vtkSmartPointer<vtkLabeledContourPolyDataItem>")
    .constructor(&vtk::MakeAvtkSmartPointer<vtkLabeledContourPolyDataItem>)
    .class_function("IsTypeOf", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkLabeledContourPolyDataItem::IsTypeOf( arg_0.c_str());}))
    .function("IsA", emscripten::optional_override([](vtkLabeledContourPolyDataItem& self, const std::string & arg_0) -> int {  return self.IsA( arg_0.c_str());}))
    .class_function("SafeDownCast", &vtkLabeledContourPolyDataItem::SafeDownCast, emscripten::allow_raw_pointers())
    .function("NewInstance", &vtkLabeledContourPolyDataItem::NewInstance, emscripten::allow_raw_pointers())
    .class_function("GetNumberOfGenerationsFromBaseType", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkLabeledContourPolyDataItem::GetNumberOfGenerationsFromBaseType( arg_0.c_str());}))
    .function("GetNumberOfGenerationsFromBase", emscripten::optional_override([](vtkLabeledContourPolyDataItem& self, const std::string & arg_0) -> int {  return self.GetNumberOfGenerationsFromBase( arg_0.c_str());}))
    .function("Paint", &vtkLabeledContourPolyDataItem::Paint, emscripten::allow_raw_pointers())
    .function("SetTextProperty", &vtkLabeledContourPolyDataItem::SetTextProperty, emscripten::allow_raw_pointers())
    .function("SetTextProperties", &vtkLabeledContourPolyDataItem::SetTextProperties, emscripten::allow_raw_pointers())
    .function("GetTextProperties", &vtkLabeledContourPolyDataItem::GetTextProperties, emscripten::allow_raw_pointers())
    .function("GetTextPropertyMapping", &vtkLabeledContourPolyDataItem::GetTextPropertyMapping, emscripten::allow_raw_pointers())
    .function("SetTextPropertyMapping", &vtkLabeledContourPolyDataItem::SetTextPropertyMapping, emscripten::allow_raw_pointers())
    .function("SetLabelVisibility", &vtkLabeledContourPolyDataItem::SetLabelVisibility)
    .function("GetLabelVisibility", &vtkLabeledContourPolyDataItem::GetLabelVisibility)
    .function("LabelVisibilityOn", &vtkLabeledContourPolyDataItem::LabelVisibilityOn)
    .function("LabelVisibilityOff", &vtkLabeledContourPolyDataItem::LabelVisibilityOff)
    .function("SetSkipDistance", &vtkLabeledContourPolyDataItem::SetSkipDistance)
    .function("GetSkipDistance", &vtkLabeledContourPolyDataItem::GetSkipDistance);
}
