// JavaScript wrapper for vtkOStrStreamWrapper with embind 
//
// This file was auto-generated using :
/*
node /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/bin/vtkWrapJavaScript.js \
 @/home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkCommonCore.js/vtkCommonCore.js.Release.args \
 -o \
 /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkCommonCore.js/vtkOStrStreamWrapperEmbinding.cxx \
 /home/jmh/github/vtk/Common/Core/vtkOStrStreamWrapper.h
*/
#include "vtkEmbindSmartPointerTrait.h"
#include <emscripten.h>
#include <string>
#include "vtkVariant.h"
#include "vtkOStrStreamWrapper.h"


EMSCRIPTEN_BINDINGS(vtkOStrStreamWrapper_class) {
  emscripten::class_<vtkOStrStreamWrapper>("vtkOStrStreamWrapper")
    .smart_ptr<std::shared_ptr<vtkOStrStreamWrapper>>("std::shared_ptr<vtkOStrStreamWrapper>")
    .constructor(&std::make_shared<vtkOStrStreamWrapper>)
    .function("str", emscripten::optional_override([](vtkOStrStreamWrapper& self) -> std::string {  return self.str();}))
    .function("freeze", emscripten::select_overload<void(vtkOStrStreamWrapper&)>([](vtkOStrStreamWrapper& self) -> void { return self.freeze(); }))
    .function("freeze", emscripten::select_overload<void(vtkOStrStreamWrapper&, int)>([](vtkOStrStreamWrapper& self, int arg_0) -> void { return self.freeze( arg_0); }));
}
