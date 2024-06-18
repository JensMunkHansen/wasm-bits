// JavaScript wrapper for vtkAbstractContextBufferId with embind 
//
// This file was auto-generated using :
/*
node /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/bin/vtkWrapJavaScript.js \
 @/home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkRenderingContext2D.js/vtkRenderingContext2D.js.Release.args \
 -o \
 /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkRenderingContext2D.js/vtkAbstractContextBufferIdEmbinding.cxx \
 /home/jmh/github/vtk/Rendering/Context2D/vtkAbstractContextBufferId.h
*/
#include "vtkEmbindSmartPointerTrait.h"
#include <emscripten.h>
#include <string>
#include "vtkVariant.h"
#include "vtkObjectBase.h"
#include "vtkIndent.h"
#include "vtkRenderWindow.h"
#include "vtkAbstractContextBufferId.h"

template<> void emscripten::internal::raw_destructor<vtkAbstractContextBufferId>(vtkAbstractContextBufferId * ptr){ ptr->Delete(); }
EMSCRIPTEN_BINDINGS(vtkAbstractContextBufferId_class) {
  emscripten::class_<vtkAbstractContextBufferId, emscripten::base<vtkObject>>("vtkAbstractContextBufferId")
    .smart_ptr<vtkSmartPointer<vtkAbstractContextBufferId>>("vtkSmartPointer<vtkAbstractContextBufferId>")
    .constructor(&vtk::MakeAvtkSmartPointer<vtkAbstractContextBufferId>)
    .class_function("IsTypeOf", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkAbstractContextBufferId::IsTypeOf( arg_0.c_str());}))
    .function("IsA", emscripten::optional_override([](vtkAbstractContextBufferId& self, const std::string & arg_0) -> int {  return self.IsA( arg_0.c_str());}))
    .class_function("SafeDownCast", &vtkAbstractContextBufferId::SafeDownCast, emscripten::allow_raw_pointers())
    .function("NewInstance", &vtkAbstractContextBufferId::NewInstance, emscripten::allow_raw_pointers())
    .class_function("GetNumberOfGenerationsFromBaseType", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkAbstractContextBufferId::GetNumberOfGenerationsFromBaseType( arg_0.c_str());}))
    .function("GetNumberOfGenerationsFromBase", emscripten::optional_override([](vtkAbstractContextBufferId& self, const std::string & arg_0) -> int {  return self.GetNumberOfGenerationsFromBase( arg_0.c_str());}))
    .function("GetWidth", &vtkAbstractContextBufferId::GetWidth)
    .function("SetWidth", &vtkAbstractContextBufferId::SetWidth)
    .function("GetHeight", &vtkAbstractContextBufferId::GetHeight)
    .function("SetHeight", &vtkAbstractContextBufferId::SetHeight)
    .function("ReleaseGraphicsResources", &vtkAbstractContextBufferId::ReleaseGraphicsResources);
}
