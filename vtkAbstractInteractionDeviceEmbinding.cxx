// JavaScript wrapper for vtkAbstractInteractionDevice with embind 
//
// This file was auto-generated using :
/*
node /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/bin/vtkWrapJavaScript.js \
 @/home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkRenderingCore.js/vtkRenderingCore.js.Release.args \
 -o \
 /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkRenderingCore.js/vtkAbstractInteractionDeviceEmbinding.cxx \
 /home/jmh/github/vtk/Rendering/Core/vtkAbstractInteractionDevice.h
*/
#include "vtkEmbindSmartPointerTrait.h"
#include <emscripten.h>
#include <string>
#include "vtkVariant.h"
#include "vtkObjectBase.h"
#include "vtkIndent.h"
#include "vtkRenderWidget.h"
#include "vtkAbstractRenderDevice.h"
#include "vtkAbstractInteractionDevice.h"

template<> void emscripten::internal::raw_destructor<vtkAbstractInteractionDevice>(vtkAbstractInteractionDevice * ptr){ ptr->Delete(); }
EMSCRIPTEN_BINDINGS(vtkAbstractInteractionDevice_class) {
  emscripten::class_<vtkAbstractInteractionDevice, emscripten::base<vtkObject>>("vtkAbstractInteractionDevice")
    .smart_ptr<vtkSmartPointer<vtkAbstractInteractionDevice>>("vtkSmartPointer<vtkAbstractInteractionDevice>")
    .constructor(&vtk::MakeAvtkSmartPointer<vtkAbstractInteractionDevice>)
    .class_function("IsTypeOf", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkAbstractInteractionDevice::IsTypeOf( arg_0.c_str());}))
    .function("IsA", emscripten::optional_override([](vtkAbstractInteractionDevice& self, const std::string & arg_0) -> int {  return self.IsA( arg_0.c_str());}))
    .class_function("SafeDownCast", &vtkAbstractInteractionDevice::SafeDownCast, emscripten::allow_raw_pointers())
    .function("NewInstance", &vtkAbstractInteractionDevice::NewInstance, emscripten::allow_raw_pointers())
    .class_function("GetNumberOfGenerationsFromBaseType", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkAbstractInteractionDevice::GetNumberOfGenerationsFromBaseType( arg_0.c_str());}))
    .function("GetNumberOfGenerationsFromBase", emscripten::optional_override([](vtkAbstractInteractionDevice& self, const std::string & arg_0) -> int {  return self.GetNumberOfGenerationsFromBase( arg_0.c_str());}))
    .function("SetRenderWidget", &vtkAbstractInteractionDevice::SetRenderWidget, emscripten::allow_raw_pointers())
    .function("GetRenderWidget", &vtkAbstractInteractionDevice::GetRenderWidget, emscripten::allow_raw_pointers())
    .function("SetRenderDevice", &vtkAbstractInteractionDevice::SetRenderDevice, emscripten::allow_raw_pointers())
    .function("GetRenderDevice", &vtkAbstractInteractionDevice::GetRenderDevice, emscripten::allow_raw_pointers());
}
