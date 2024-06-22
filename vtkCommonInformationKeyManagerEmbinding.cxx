// JavaScript wrapper for vtkCommonInformationKeyManager with embind 
//
// This file was auto-generated using :
/*
node /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/bin/vtkWrapJavaScript.js \
 @/home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkCommonCore.js/vtkCommonCore.js.Release.args \
 -o \
 /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkCommonCore.js/vtkCommonInformationKeyManagerEmbinding.cxx \
 /home/jmh/github/vtk/Common/Core/vtkCommonInformationKeyManager.h
*/
#include "vtkEmbindSmartPointerTrait.h"
#include <emscripten.h>
#include <string>
#include "vtkVariant.h"
#include "vtkInformationKey.h"
#include "vtkCommonInformationKeyManager.h"


EMSCRIPTEN_BINDINGS(vtkCommonInformationKeyManager_class) {
  emscripten::class_<vtkCommonInformationKeyManager>("vtkCommonInformationKeyManager")
    .smart_ptr<std::shared_ptr<vtkCommonInformationKeyManager>>("std::shared_ptr<vtkCommonInformationKeyManager>")
    .constructor(&std::make_shared<vtkCommonInformationKeyManager>);
}
