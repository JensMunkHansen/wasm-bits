// JavaScript wrapper for vtkWeakPointerBase with embind 
//
// This file was auto-generated using :
/*
node /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/bin/vtkWrapJavaScript.js \
 @/home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkCommonCore.js/vtkCommonCore.js.Release.args \
 -o \
 /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkCommonCore.js/vtkWeakPointerBaseEmbinding.cxx \
 /home/jmh/github/vtk/Common/Core/vtkWeakPointerBase.h
*/
#include "vtkEmbindSmartPointerTrait.h"
#include <emscripten.h>
#include <string>
#include "vtkVariant.h"
#include "vtkObjectBase.h"
#include "vtkWeakPointerBase.h"


EMSCRIPTEN_BINDINGS(vtkWeakPointerBase_class) {
  emscripten::class_<vtkWeakPointerBase>("vtkWeakPointerBase")
    .smart_ptr<std::shared_ptr<vtkWeakPointerBase>>("std::shared_ptr<vtkWeakPointerBase>")
    .constructor(&std::make_shared<vtkWeakPointerBase>)
    .function("GetPointer", &vtkWeakPointerBase::GetPointer, emscripten::allow_raw_pointers());
}
