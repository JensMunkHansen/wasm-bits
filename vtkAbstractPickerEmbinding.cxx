// JavaScript wrapper for vtkAbstractPicker with embind 
//
// This file was auto-generated using :
/*
node /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/bin/vtkWrapJavaScript.js \
 @/home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkRenderingCore.js/vtkRenderingCore.js.Release.args \
 -o \
 /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkRenderingCore.js/vtkAbstractPickerEmbinding.cxx \
 /home/jmh/github/vtk/Rendering/Core/vtkAbstractPicker.h
*/
#include "vtkEmbindSmartPointerTrait.h"
#include <emscripten.h>
#include <string>
#include "vtkVariant.h"
#include "vtkObjectBase.h"
#include "vtkIndent.h"
#include "vtkRenderer.h"
#include "vtkProp.h"
#include "vtkPropCollection.h"
#include "vtkAbstractPicker.h"

template<> void emscripten::internal::raw_destructor<vtkAbstractPicker>(vtkAbstractPicker * ptr){ ptr->Delete(); }
EMSCRIPTEN_BINDINGS(vtkAbstractPicker_class) {
  emscripten::class_<vtkAbstractPicker, emscripten::base<vtkObject>>("vtkAbstractPicker")
    .class_function("IsTypeOf", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkAbstractPicker::IsTypeOf( arg_0.c_str());}))
    .function("IsA", emscripten::optional_override([](vtkAbstractPicker& self, const std::string & arg_0) -> int {  return self.IsA( arg_0.c_str());}))
    .class_function("SafeDownCast", &vtkAbstractPicker::SafeDownCast, emscripten::allow_raw_pointers())
    .function("NewInstance", &vtkAbstractPicker::NewInstance, emscripten::allow_raw_pointers())
    .class_function("GetNumberOfGenerationsFromBaseType", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkAbstractPicker::GetNumberOfGenerationsFromBaseType( arg_0.c_str());}))
    .function("GetNumberOfGenerationsFromBase", emscripten::optional_override([](vtkAbstractPicker& self, const std::string & arg_0) -> int {  return self.GetNumberOfGenerationsFromBase( arg_0.c_str());}))
    .function("GetRenderer", &vtkAbstractPicker::GetRenderer, emscripten::allow_raw_pointers())
    .function("SetPickFromList", &vtkAbstractPicker::SetPickFromList)
    .function("GetPickFromList", &vtkAbstractPicker::GetPickFromList)
    .function("PickFromListOn", &vtkAbstractPicker::PickFromListOn)
    .function("PickFromListOff", &vtkAbstractPicker::PickFromListOff)
    .function("InitializePickList", &vtkAbstractPicker::InitializePickList)
    .function("AddPickList", &vtkAbstractPicker::AddPickList, emscripten::allow_raw_pointers())
    .function("DeletePickList", &vtkAbstractPicker::DeletePickList, emscripten::allow_raw_pointers())
    .function("GetPickList", &vtkAbstractPicker::GetPickList, emscripten::allow_raw_pointers());
}
