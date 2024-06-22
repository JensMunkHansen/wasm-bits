// JavaScript wrapper for vtkImagePointIterator with embind 
//
// This file was auto-generated using :
/*
node /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/bin/vtkWrapJavaScript.js \
 @/home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkImagingCore.js/vtkImagingCore.js.Release.args \
 -o \
 /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkImagingCore.js/vtkImagePointIteratorEmbinding.cxx \
 /home/jmh/github/vtk/Imaging/Core/vtkImagePointIterator.h
*/
#include "vtkEmbindSmartPointerTrait.h"
#include <emscripten.h>
#include <string>
#include "vtkVariant.h"
#include "vtkImageData.h"
#include "vtkImageStencilData.h"
#include "vtkAlgorithm.h"
#include "vtkImagePointIterator.h"


EMSCRIPTEN_BINDINGS(vtkImagePointIterator_class) {
  emscripten::class_<vtkImagePointIterator, emscripten::base<vtkImagePointDataIterator>>("vtkImagePointIterator")
    .function("NextSpan", &vtkImagePointIterator::NextSpan)
    .function("Next", &vtkImagePointIterator::Next)
    .function("IsAtEnd", &vtkImagePointIterator::IsAtEnd);
}
