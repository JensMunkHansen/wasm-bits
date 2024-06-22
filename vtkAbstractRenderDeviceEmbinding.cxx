// JavaScript wrapper for vtkAbstractRenderDevice with embind 
//
// This file was auto-generated using :
/*
node /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/bin/vtkWrapJavaScript.js \
 @/home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkRenderingCore.js/vtkRenderingCore.js.Release.args \
 -o \
 /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkRenderingCore.js/vtkAbstractRenderDeviceEmbinding.cxx \
 /home/jmh/github/vtk/Rendering/Core/vtkAbstractRenderDevice.h
*/
#include "vtkEmbindSmartPointerTrait.h"
#include <emscripten.h>
#include <string>
#include "vtkVariant.h"
#include "vtkObjectBase.h"
#include "vtkIndent.h"
#include "vtkRect.h"
#include "vtkAbstractRenderDevice.h"

template<> void emscripten::internal::raw_destructor<vtkAbstractRenderDevice>(vtkAbstractRenderDevice * ptr){ ptr->Delete(); }
EMSCRIPTEN_BINDINGS(vtkAbstractRenderDevice_class) {
  emscripten::class_<vtkAbstractRenderDevice, emscripten::base<vtkObject>>("vtkAbstractRenderDevice")
    .smart_ptr<vtkSmartPointer<vtkAbstractRenderDevice>>("vtkSmartPointer<vtkAbstractRenderDevice>")
    .constructor(&vtk::MakeVTKSmartPtr<vtkAbstractRenderDevice>)
    .class_function("IsTypeOf", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkAbstractRenderDevice::IsTypeOf( arg_0.c_str());}))
    .function("IsA", emscripten::optional_override([](vtkAbstractRenderDevice& self, const std::string & arg_0) -> int {  return self.IsA( arg_0.c_str());}))
    .class_function("SafeDownCast", &vtkAbstractRenderDevice::SafeDownCast, emscripten::allow_raw_pointers())
    .function("NewInstance", &vtkAbstractRenderDevice::NewInstance, emscripten::allow_raw_pointers())
    .class_function("GetNumberOfGenerationsFromBaseType", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkAbstractRenderDevice::GetNumberOfGenerationsFromBaseType( arg_0.c_str());}))
    .function("GetNumberOfGenerationsFromBase", emscripten::optional_override([](vtkAbstractRenderDevice& self, const std::string & arg_0) -> int {  return self.GetNumberOfGenerationsFromBase( arg_0.c_str());}))
    .function("SetRequestedGLVersion", &vtkAbstractRenderDevice::SetRequestedGLVersion);
}
