// JavaScript wrapper for vtkPixelTransfer with embind 
//
// This file was auto-generated using :
/*
node /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/bin/vtkWrapJavaScript.js \
 @/home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkCommonDataModel.js/vtkCommonDataModel.js.Release.args \
 -o \
 /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkCommonDataModel.js/vtkPixelTransferEmbinding.cxx \
 /home/jmh/github/vtk/Common/DataModel/vtkPixelTransfer.h
*/
#include "vtkEmbindSmartPointerTrait.h"
#include <emscripten.h>
#include <string>
#include "vtkVariant.h"
#include "vtkPixelExtent.h"
#include "vtkPixelTransfer.h"


EMSCRIPTEN_BINDINGS(vtkPixelTransfer_class) {
  emscripten::class_<vtkPixelTransfer>("vtkPixelTransfer")
    .class_function("Blit", emscripten::select_overload<int( const vtkPixelExtent&, int, int, std::uintptr_t, int, std::uintptr_t)>([]( const vtkPixelExtent& arg_0, int arg_1, int arg_2, std::uintptr_t arg_3, int arg_4, std::uintptr_t arg_5) -> int { return vtkPixelTransfer::Blit( arg_0, arg_1, arg_2,reinterpret_cast<void*>(arg_3), arg_4,reinterpret_cast<void*>(arg_5)); }))
    .class_function("Blit", emscripten::select_overload<int( const vtkPixelExtent&, const vtkPixelExtent&, const vtkPixelExtent&, const vtkPixelExtent&, int, int, std::uintptr_t, int, int, std::uintptr_t)>([]( const vtkPixelExtent& arg_0, const vtkPixelExtent& arg_1, const vtkPixelExtent& arg_2, const vtkPixelExtent& arg_3, int arg_4, int arg_5, std::uintptr_t arg_6, int arg_7, int arg_8, std::uintptr_t arg_9) -> int { return vtkPixelTransfer::Blit( arg_0, arg_1, arg_2, arg_3, arg_4, arg_5,reinterpret_cast<void*>(arg_6), arg_7, arg_8,reinterpret_cast<void*>(arg_9)); }));
}
