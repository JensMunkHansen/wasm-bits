// JavaScript wrapper for vtkBilinearQuadIntersection with embind 
//
// This file was auto-generated using :
/*
node /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/bin/vtkWrapJavaScript.js \
 @/home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkCommonComputationalGeometry.js/vtkCommonComputationalGeometry.js.Release.args \
 -o \
 /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkCommonComputationalGeometry.js/vtkBilinearQuadIntersectionEmbinding.cxx \
 /home/jmh/github/vtk/Common/ComputationalGeometry/vtkBilinearQuadIntersection.h
*/
#include "vtkEmbindSmartPointerTrait.h"
#include <emscripten.h>
#include <string>
#include "vtkVariant.h"
#include "vtkVector.h"
#include "vtkBilinearQuadIntersection.h"


EMSCRIPTEN_BINDINGS(vtkBilinearQuadIntersection_class) {
  emscripten::class_<vtkBilinearQuadIntersection>("vtkBilinearQuadIntersection")
    .function("GetP00Data", emscripten::optional_override([](vtkBilinearQuadIntersection& self) -> std::uintptr_t {  return reinterpret_cast<std::uintptr_t>(self.GetP00Data()) / sizeof(double);}))
    .function("GetP01Data", emscripten::optional_override([](vtkBilinearQuadIntersection& self) -> std::uintptr_t {  return reinterpret_cast<std::uintptr_t>(self.GetP01Data()) / sizeof(double);}))
    .function("GetP10Data", emscripten::optional_override([](vtkBilinearQuadIntersection& self) -> std::uintptr_t {  return reinterpret_cast<std::uintptr_t>(self.GetP10Data()) / sizeof(double);}))
    .function("GetP11Data", emscripten::optional_override([](vtkBilinearQuadIntersection& self) -> std::uintptr_t {  return reinterpret_cast<std::uintptr_t>(self.GetP11Data()) / sizeof(double);}))
    .function("ComputeCartesianCoordinates", &vtkBilinearQuadIntersection::ComputeCartesianCoordinates);
}
