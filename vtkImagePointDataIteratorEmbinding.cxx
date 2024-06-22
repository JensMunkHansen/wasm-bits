// JavaScript wrapper for vtkImagePointDataIterator with embind 
//
// This file was auto-generated using :
/*
node /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/bin/vtkWrapJavaScript.js \
 @/home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkImagingCore.js/vtkImagingCore.js.Release.args \
 -o \
 /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkImagingCore.js/vtkImagePointDataIteratorEmbinding.cxx \
 /home/jmh/github/vtk/Imaging/Core/vtkImagePointDataIterator.h
*/
#include "vtkEmbindSmartPointerTrait.h"
#include <emscripten.h>
#include <string>
#include "vtkVariant.h"
#include "vtkImageData.h"
#include "vtkImageStencilData.h"
#include "vtkAlgorithm.h"
#include "vtkDataArray.h"
#include "vtkImagePointDataIterator.h"


EMSCRIPTEN_BINDINGS(vtkImagePointDataIterator_class) {
  emscripten::class_<vtkImagePointDataIterator>("vtkImagePointDataIterator")
    .function("NextSpan", &vtkImagePointDataIterator::NextSpan)
    .function("IsAtEnd", &vtkImagePointDataIterator::IsAtEnd)
    .function("IsInStencil", &vtkImagePointDataIterator::IsInStencil)
    .function("GetId", &vtkImagePointDataIterator::GetId)
    .function("SpanEndId", &vtkImagePointDataIterator::SpanEndId)
    .class_function("GetVoidPointer", emscripten::select_overload<std::uintptr_t( vtkImageData*, int, std::uintptr_t)>([]( vtkImageData* arg_0, int arg_1, std::uintptr_t arg_2) -> std::uintptr_t { return reinterpret_cast<std::uintptr_t>(vtkImagePointDataIterator::GetVoidPointer( arg_0, arg_1,reinterpret_cast<int*>(arg_2 * sizeof(int)))); }), emscripten::allow_raw_pointers())
    .class_function("GetVoidPointer", emscripten::select_overload<std::uintptr_t( vtkDataArray*, int, std::uintptr_t)>([]( vtkDataArray* arg_0, int arg_1, std::uintptr_t arg_2) -> std::uintptr_t { return reinterpret_cast<std::uintptr_t>(vtkImagePointDataIterator::GetVoidPointer( arg_0, arg_1,reinterpret_cast<int*>(arg_2 * sizeof(int)))); }), emscripten::allow_raw_pointers());
}
