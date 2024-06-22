// JavaScript wrapper for vtkStereoCompositor with embind 
//
// This file was auto-generated using :
/*
node /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/bin/vtkWrapJavaScript.js \
 @/home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkRenderingCore.js/vtkRenderingCore.js.Release.args \
 -o \
 /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkRenderingCore.js/vtkStereoCompositorEmbinding.cxx \
 /home/jmh/github/vtk/Rendering/Core/vtkStereoCompositor.h
*/
#include "vtkEmbindSmartPointerTrait.h"
#include <emscripten.h>
#include <string>
#include "vtkVariant.h"
#include "vtkObjectBase.h"
#include "vtkIndent.h"
#include "vtkUnsignedCharArray.h"
#include "vtkStereoCompositor.h"

template<> void emscripten::internal::raw_destructor<vtkStereoCompositor>(vtkStereoCompositor * ptr){ ptr->Delete(); }
EMSCRIPTEN_BINDINGS(vtkStereoCompositor_class) {
  emscripten::class_<vtkStereoCompositor, emscripten::base<vtkObject>>("vtkStereoCompositor")
    .smart_ptr<vtkSmartPointer<vtkStereoCompositor>>("vtkSmartPointer<vtkStereoCompositor>")
    .constructor(&vtk::MakeVTKSmartPtr<vtkStereoCompositor>)
    .class_function("IsTypeOf", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkStereoCompositor::IsTypeOf( arg_0.c_str());}))
    .function("IsA", emscripten::optional_override([](vtkStereoCompositor& self, const std::string & arg_0) -> int {  return self.IsA( arg_0.c_str());}))
    .class_function("SafeDownCast", &vtkStereoCompositor::SafeDownCast, emscripten::allow_raw_pointers())
    .function("NewInstance", &vtkStereoCompositor::NewInstance, emscripten::allow_raw_pointers())
    .class_function("GetNumberOfGenerationsFromBaseType", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkStereoCompositor::GetNumberOfGenerationsFromBaseType( arg_0.c_str());}))
    .function("GetNumberOfGenerationsFromBase", emscripten::optional_override([](vtkStereoCompositor& self, const std::string & arg_0) -> int {  return self.GetNumberOfGenerationsFromBase( arg_0.c_str());}))
    .function("RedBlue", &vtkStereoCompositor::RedBlue, emscripten::allow_raw_pointers());
}
