// JavaScript wrapper for vtkArrayExtents with embind 
//
// This file was auto-generated using :
/*
node /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/bin/vtkWrapJavaScript.js \
 @/home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkCommonCore.js/vtkCommonCore.js.Release.args \
 -o \
 /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkCommonCore.js/vtkArrayExtentsEmbinding.cxx \
 /home/jmh/github/vtk/Common/Core/vtkArrayExtents.h
*/
#include "vtkEmbindSmartPointerTrait.h"
#include <emscripten.h>
#include <string>
#include "vtkVariant.h"
#include "vtkArrayRange.h"
#include "vtkArrayCoordinates.h"
#include "vtkArrayExtents.h"


EMSCRIPTEN_BINDINGS(vtkArrayExtents_class) {
  emscripten::class_<vtkArrayExtents>("vtkArrayExtents")
    .class_function("Uniform", &vtkArrayExtents::Uniform)
    .function("Append", &vtkArrayExtents::Append)
    .function("GetDimensions", &vtkArrayExtents::GetDimensions)
    .function("GetSize", &vtkArrayExtents::GetSize)
    .function("SetDimensions", &vtkArrayExtents::SetDimensions)
    .function("GetExtent", &vtkArrayExtents::GetExtent)
    .function("SetExtent", &vtkArrayExtents::SetExtent)
    .function("ZeroBased", &vtkArrayExtents::ZeroBased)
    .function("SameShape", &vtkArrayExtents::SameShape)
    .function("Contains", emscripten::select_overload<bool(vtkArrayExtents&, const vtkArrayExtents&)>([](vtkArrayExtents& self, const vtkArrayExtents& arg_0) -> bool { return self.Contains( arg_0); }))
    .function("Contains", emscripten::select_overload<bool(vtkArrayExtents&, const vtkArrayCoordinates&)>([](vtkArrayExtents& self, const vtkArrayCoordinates& arg_0) -> bool { return self.Contains( arg_0); }));
}
