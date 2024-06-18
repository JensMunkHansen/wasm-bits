// JavaScript wrapper for vtkAbstractPropPicker with embind 
//
// This file was auto-generated using :
/*
node /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/bin/vtkWrapJavaScript.js \
 @/home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkRenderingCore.js/vtkRenderingCore.js.Release.args \
 -o \
 /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkRenderingCore.js/vtkAbstractPropPickerEmbinding.cxx \
 /home/jmh/github/vtk/Rendering/Core/vtkAbstractPropPicker.h
*/
#include "vtkEmbindSmartPointerTrait.h"
#include <emscripten.h>
#include <string>
#include "vtkVariant.h"
#include "vtkObjectBase.h"
#include "vtkIndent.h"
#include "vtkAssemblyPath.h"
#include "vtkProp.h"
#include "vtkProp3D.h"
#include "vtkActor.h"
#include "vtkActor2D.h"
#include "vtkVolume.h"
#include "vtkAssembly.h"
#include "vtkPropAssembly.h"
#include "vtkAbstractPropPicker.h"

template<> void emscripten::internal::raw_destructor<vtkAbstractPropPicker>(vtkAbstractPropPicker * ptr){ ptr->Delete(); }
EMSCRIPTEN_BINDINGS(vtkAbstractPropPicker_class) {
  emscripten::class_<vtkAbstractPropPicker, emscripten::base<vtkAbstractPicker>>("vtkAbstractPropPicker")
    .class_function("IsTypeOf", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkAbstractPropPicker::IsTypeOf( arg_0.c_str());}))
    .function("IsA", emscripten::optional_override([](vtkAbstractPropPicker& self, const std::string & arg_0) -> int {  return self.IsA( arg_0.c_str());}))
    .class_function("SafeDownCast", &vtkAbstractPropPicker::SafeDownCast, emscripten::allow_raw_pointers())
    .function("NewInstance", &vtkAbstractPropPicker::NewInstance, emscripten::allow_raw_pointers())
    .class_function("GetNumberOfGenerationsFromBaseType", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkAbstractPropPicker::GetNumberOfGenerationsFromBaseType( arg_0.c_str());}))
    .function("GetNumberOfGenerationsFromBase", emscripten::optional_override([](vtkAbstractPropPicker& self, const std::string & arg_0) -> int {  return self.GetNumberOfGenerationsFromBase( arg_0.c_str());}))
    .function("SetPath", &vtkAbstractPropPicker::SetPath, emscripten::allow_raw_pointers())
    .function("GetPath", &vtkAbstractPropPicker::GetPath, emscripten::allow_raw_pointers())
    .function("GetViewProp", &vtkAbstractPropPicker::GetViewProp, emscripten::allow_raw_pointers())
    .function("GetProp3D", &vtkAbstractPropPicker::GetProp3D, emscripten::allow_raw_pointers())
    .function("GetActor", &vtkAbstractPropPicker::GetActor, emscripten::allow_raw_pointers())
    .function("GetActor2D", &vtkAbstractPropPicker::GetActor2D, emscripten::allow_raw_pointers())
    .function("GetVolume", &vtkAbstractPropPicker::GetVolume, emscripten::allow_raw_pointers())
    .function("GetAssembly", &vtkAbstractPropPicker::GetAssembly, emscripten::allow_raw_pointers())
    .function("GetPropAssembly", &vtkAbstractPropPicker::GetPropAssembly, emscripten::allow_raw_pointers());
}
