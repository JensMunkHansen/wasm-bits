// JavaScript wrapper for vtkArrayExtentsList with embind 
//
// This file was auto-generated using :
/*
node /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/bin/vtkWrapJavaScript.js \
 @/home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkCommonCore.js/vtkCommonCore.js.Release.args \
 -o \
 /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkCommonCore.js/vtkArrayExtentsListEmbinding.cxx \
 /home/jmh/github/vtk/Common/Core/vtkArrayExtentsList.h
*/
#include "vtkEmbindSmartPointerTrait.h"
#include <emscripten.h>
#include <string>
#include "vtkVariant.h"
#include "vtkArrayExtents.h"
#include "vtkArrayExtentsList.h"


EMSCRIPTEN_BINDINGS(vtkArrayExtentsList_class) {
  emscripten::class_<vtkArrayExtentsList>("vtkArrayExtentsList")
    .function("GetCount", &vtkArrayExtentsList::GetCount)
    .function("SetCount", &vtkArrayExtentsList::SetCount);
}
