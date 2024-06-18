// JavaScript wrapper for vtkSmartPointerBase with embind 
//
// This file was auto-generated using :
/*
node /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/bin/vtkWrapJavaScript.js \
 @/home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkCommonCore.js/vtkCommonCore.js.Release.args \
 -o \
 /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkCommonCore.js/vtkSmartPointerBaseEmbinding.cxx \
 /home/jmh/github/vtk/Common/Core/vtkSmartPointerBase.h
*/
#include "vtkEmbindSmartPointerTrait.h"
#include <emscripten.h>
#include <string>
#include "vtkVariant.h"
#include "vtkObjectBase.h"
#include "vtkGarbageCollector.h"
#include "vtkSmartPointerBase.h"


EMSCRIPTEN_BINDINGS(vtkSmartPointerBase_class) {
  emscripten::class_<vtkSmartPointerBase>("vtkSmartPointerBase")
    .smart_ptr<std::shared_ptr<vtkSmartPointerBase>>("std::shared_ptr<vtkSmartPointerBase>")
    .constructor(&std::make_shared<vtkSmartPointerBase>)
    .function("GetPointer", &vtkSmartPointerBase::GetPointer, emscripten::allow_raw_pointers())
    .function("Report", emscripten::optional_override([](vtkSmartPointerBase& self, vtkGarbageCollector* arg_0, const std::string & arg_1) -> void {  return self.Report( arg_0, arg_1.c_str());}), emscripten::allow_raw_pointers());
}
