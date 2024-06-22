// JavaScript wrapper for vtkFilteringInformationKeyManager with embind 
//
// This file was auto-generated using :
/*
node /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/bin/vtkWrapJavaScript.js \
 @/home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkCommonExecutionModel.js/vtkCommonExecutionModel.js.Release.args \
 -o \
 /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkCommonExecutionModel.js/vtkFilteringInformationKeyManagerEmbinding.cxx \
 /home/jmh/github/vtk/Common/ExecutionModel/vtkFilteringInformationKeyManager.h
*/
#include "vtkEmbindSmartPointerTrait.h"
#include <emscripten.h>
#include <string>
#include "vtkVariant.h"
#include "vtkInformationKey.h"
#include "vtkFilteringInformationKeyManager.h"


EMSCRIPTEN_BINDINGS(vtkFilteringInformationKeyManager_class) {
  emscripten::class_<vtkFilteringInformationKeyManager>("vtkFilteringInformationKeyManager")
    .smart_ptr<std::shared_ptr<vtkFilteringInformationKeyManager>>("std::shared_ptr<vtkFilteringInformationKeyManager>")
    .constructor(&std::make_shared<vtkFilteringInformationKeyManager>);
}
