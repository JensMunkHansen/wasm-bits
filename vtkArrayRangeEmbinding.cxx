// JavaScript wrapper for vtkArrayRange with embind 
//
// This file was auto-generated using :
/*
node /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/bin/vtkWrapJavaScript.js \
 @/home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkCommonCore.js/vtkCommonCore.js.Release.args \
 -o \
 /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkCommonCore.js/vtkArrayRangeEmbinding.cxx \
 /home/jmh/github/vtk/Common/Core/vtkArrayRange.h
*/
#include "vtkEmbindSmartPointerTrait.h"
#include <emscripten.h>
#include <string>
#include "vtkVariant.h"
#include "vtkArrayRange.h"


EMSCRIPTEN_BINDINGS(vtkArrayRange_class) {
  emscripten::class_<vtkArrayRange>("vtkArrayRange")
    .function("GetBegin", &vtkArrayRange::GetBegin)
    .function("GetEnd", &vtkArrayRange::GetEnd)
    .function("GetSize", &vtkArrayRange::GetSize)
    .function("Contains", emscripten::select_overload<bool(vtkArrayRange&, const vtkArrayRange&)>([](vtkArrayRange& self, const vtkArrayRange& arg_0) -> bool { return self.Contains( arg_0); }))
    .function("Contains", emscripten::select_overload<bool(vtkArrayRange&, int)>([](vtkArrayRange& self, int arg_0) -> bool { return self.Contains( arg_0); }));
}
