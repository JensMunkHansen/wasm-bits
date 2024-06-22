// JavaScript wrapper for vtkArrayWeights with embind 
//
// This file was auto-generated using :
/*
node /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/bin/vtkWrapJavaScript.js \
 @/home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkCommonCore.js/vtkCommonCore.js.Release.args \
 -o \
 /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkCommonCore.js/vtkArrayWeightsEmbinding.cxx \
 /home/jmh/github/vtk/Common/Core/vtkArrayWeights.h
*/
#include "vtkEmbindSmartPointerTrait.h"
#include <emscripten.h>
#include <string>
#include "vtkVariant.h"
#include "vtkArrayWeights.h"


EMSCRIPTEN_BINDINGS(vtkArrayWeights_class) {
  emscripten::class_<vtkArrayWeights>("vtkArrayWeights")
    .smart_ptr<std::shared_ptr<vtkArrayWeights>>("std::shared_ptr<vtkArrayWeights>")
    .constructor(&std::make_shared<vtkArrayWeights>)
    .function("GetCount", &vtkArrayWeights::GetCount)
    .function("SetCount", &vtkArrayWeights::SetCount);
}
