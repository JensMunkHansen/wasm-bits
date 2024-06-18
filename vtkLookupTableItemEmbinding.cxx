// JavaScript wrapper for vtkLookupTableItem with embind 
//
// This file was auto-generated using :
/*
node /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/bin/vtkWrapJavaScript.js \
 @/home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkChartsCore.js/vtkChartsCore.js.Release.args \
 -o \
 /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkChartsCore.js/vtkLookupTableItemEmbinding.cxx \
 /home/jmh/github/vtk/Charts/Core/vtkLookupTableItem.h
*/
#include "vtkEmbindSmartPointerTrait.h"
#include <emscripten.h>
#include <string>
#include "vtkVariant.h"
#include "vtkObjectBase.h"
#include "vtkIndent.h"
#include "vtkLookupTable.h"
#include "vtkLookupTableItem.h"

template<> void emscripten::internal::raw_destructor<vtkLookupTableItem>(vtkLookupTableItem * ptr){ ptr->Delete(); }
EMSCRIPTEN_BINDINGS(vtkLookupTableItem_class) {
  emscripten::class_<vtkLookupTableItem, emscripten::base<vtkScalarsToColorsItem>>("vtkLookupTableItem")
    .smart_ptr<vtkSmartPointer<vtkLookupTableItem>>("vtkSmartPointer<vtkLookupTableItem>")
    .constructor(&vtk::MakeAvtkSmartPointer<vtkLookupTableItem>)
    .class_function("IsTypeOf", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkLookupTableItem::IsTypeOf( arg_0.c_str());}))
    .function("IsA", emscripten::optional_override([](vtkLookupTableItem& self, const std::string & arg_0) -> int {  return self.IsA( arg_0.c_str());}))
    .class_function("SafeDownCast", &vtkLookupTableItem::SafeDownCast, emscripten::allow_raw_pointers())
    .function("NewInstance", &vtkLookupTableItem::NewInstance, emscripten::allow_raw_pointers())
    .class_function("GetNumberOfGenerationsFromBaseType", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkLookupTableItem::GetNumberOfGenerationsFromBaseType( arg_0.c_str());}))
    .function("GetNumberOfGenerationsFromBase", emscripten::optional_override([](vtkLookupTableItem& self, const std::string & arg_0) -> int {  return self.GetNumberOfGenerationsFromBase( arg_0.c_str());}))
    .function("SetLookupTable", &vtkLookupTableItem::SetLookupTable, emscripten::allow_raw_pointers())
    .function("GetLookupTable", &vtkLookupTableItem::GetLookupTable, emscripten::allow_raw_pointers());
}
