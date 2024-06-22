// JavaScript wrapper for vtkExtractSurface with embind 
//
// This file was auto-generated using :
/*
node /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/bin/vtkWrapJavaScript.js \
 @/home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkFiltersPoints.js/vtkFiltersPoints.js.Release.args \
 -o \
 /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkFiltersPoints.js/vtkExtractSurfaceEmbinding.cxx \
 /home/jmh/github/vtk/Filters/Points/vtkExtractSurface.h
*/
#include "vtkEmbindSmartPointerTrait.h"
#include <emscripten.h>
#include <string>
#include "vtkVariant.h"
#include "vtkObjectBase.h"
#include "vtkIndent.h"
#include "vtkExtractSurface.h"

template<> void emscripten::internal::raw_destructor<vtkExtractSurface>(vtkExtractSurface * ptr){ ptr->Delete(); }
EMSCRIPTEN_BINDINGS(vtkExtractSurface_class) {
  emscripten::class_<vtkExtractSurface, emscripten::base<vtkPolyDataAlgorithm>>("vtkExtractSurface")
    .smart_ptr<vtkSmartPointer<vtkExtractSurface>>("vtkSmartPointer<vtkExtractSurface>")
    .constructor(&vtk::MakeAvtkSmartPointer<vtkExtractSurface>)
    .class_function("IsTypeOf", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkExtractSurface::IsTypeOf( arg_0.c_str());}))
    .function("IsA", emscripten::optional_override([](vtkExtractSurface& self, const std::string & arg_0) -> int {  return self.IsA( arg_0.c_str());}))
    .class_function("SafeDownCast", &vtkExtractSurface::SafeDownCast, emscripten::allow_raw_pointers())
    .function("NewInstance", &vtkExtractSurface::NewInstance, emscripten::allow_raw_pointers())
    .class_function("GetNumberOfGenerationsFromBaseType", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkExtractSurface::GetNumberOfGenerationsFromBaseType( arg_0.c_str());}))
    .function("GetNumberOfGenerationsFromBase", emscripten::optional_override([](vtkExtractSurface& self, const std::string & arg_0) -> int {  return self.GetNumberOfGenerationsFromBase( arg_0.c_str());}))
    .function("SetRadius", &vtkExtractSurface::SetRadius)
    .function("GetRadiusMinValue", &vtkExtractSurface::GetRadiusMinValue)
    .function("GetRadiusMaxValue", &vtkExtractSurface::GetRadiusMaxValue)
    .function("GetRadius", &vtkExtractSurface::GetRadius)
    .function("SetHoleFilling", &vtkExtractSurface::SetHoleFilling)
    .function("GetHoleFilling", &vtkExtractSurface::GetHoleFilling)
    .function("HoleFillingOn", &vtkExtractSurface::HoleFillingOn)
    .function("HoleFillingOff", &vtkExtractSurface::HoleFillingOff)
    .function("SetComputeNormals", &vtkExtractSurface::SetComputeNormals)
    .function("GetComputeNormals", &vtkExtractSurface::GetComputeNormals)
    .function("ComputeNormalsOn", &vtkExtractSurface::ComputeNormalsOn)
    .function("ComputeNormalsOff", &vtkExtractSurface::ComputeNormalsOff)
    .function("SetComputeGradients", &vtkExtractSurface::SetComputeGradients)
    .function("GetComputeGradients", &vtkExtractSurface::GetComputeGradients)
    .function("ComputeGradientsOn", &vtkExtractSurface::ComputeGradientsOn)
    .function("ComputeGradientsOff", &vtkExtractSurface::ComputeGradientsOff);
}
