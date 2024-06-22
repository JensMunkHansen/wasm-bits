// JavaScript wrapper for vtkDelaunay3D with embind 
//
// This file was auto-generated using :
/*
node /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/bin/vtkWrapJavaScript.js \
 @/home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkFiltersCore.js/vtkFiltersCore.js.Release.args \
 -o \
 /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkFiltersCore.js/vtkDelaunay3DEmbinding.cxx \
 /home/jmh/github/vtk/Filters/Core/vtkDelaunay3D.h
*/
#include "vtkEmbindSmartPointerTrait.h"
#include <emscripten.h>
#include <string>
#include "vtkVariant.h"
#include "vtkObjectBase.h"
#include "vtkIndent.h"
#include "vtkIncrementalPointLocator.h"
#include "vtkUnstructuredGrid.h"
#include "vtkPoints.h"
#include "vtkIdList.h"
#include "vtkDelaunay3D.h"

template<> void emscripten::internal::raw_destructor<vtkDelaunay3D>(vtkDelaunay3D * ptr){ ptr->Delete(); }
EMSCRIPTEN_BINDINGS(vtkDelaunay3D_class) {
  emscripten::class_<vtkDelaunay3D, emscripten::base<vtkUnstructuredGridAlgorithm>>("vtkDelaunay3D")
    .smart_ptr<vtkSmartPointer<vtkDelaunay3D>>("vtkSmartPointer<vtkDelaunay3D>")
    .constructor(&vtk::MakeVTKSmartPtr<vtkDelaunay3D>)
    .class_function("IsTypeOf", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkDelaunay3D::IsTypeOf( arg_0.c_str());}))
    .function("IsA", emscripten::optional_override([](vtkDelaunay3D& self, const std::string & arg_0) -> int {  return self.IsA( arg_0.c_str());}))
    .class_function("SafeDownCast", &vtkDelaunay3D::SafeDownCast, emscripten::allow_raw_pointers())
    .function("NewInstance", &vtkDelaunay3D::NewInstance, emscripten::allow_raw_pointers())
    .class_function("GetNumberOfGenerationsFromBaseType", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkDelaunay3D::GetNumberOfGenerationsFromBaseType( arg_0.c_str());}))
    .function("GetNumberOfGenerationsFromBase", emscripten::optional_override([](vtkDelaunay3D& self, const std::string & arg_0) -> int {  return self.GetNumberOfGenerationsFromBase( arg_0.c_str());}))
    .function("SetAlpha", &vtkDelaunay3D::SetAlpha)
    .function("GetAlphaMinValue", &vtkDelaunay3D::GetAlphaMinValue)
    .function("GetAlphaMaxValue", &vtkDelaunay3D::GetAlphaMaxValue)
    .function("GetAlpha", &vtkDelaunay3D::GetAlpha)
    .function("SetAlphaTets", &vtkDelaunay3D::SetAlphaTets)
    .function("GetAlphaTets", &vtkDelaunay3D::GetAlphaTets)
    .function("AlphaTetsOn", &vtkDelaunay3D::AlphaTetsOn)
    .function("AlphaTetsOff", &vtkDelaunay3D::AlphaTetsOff)
    .function("SetAlphaTris", &vtkDelaunay3D::SetAlphaTris)
    .function("GetAlphaTris", &vtkDelaunay3D::GetAlphaTris)
    .function("AlphaTrisOn", &vtkDelaunay3D::AlphaTrisOn)
    .function("AlphaTrisOff", &vtkDelaunay3D::AlphaTrisOff)
    .function("SetAlphaLines", &vtkDelaunay3D::SetAlphaLines)
    .function("GetAlphaLines", &vtkDelaunay3D::GetAlphaLines)
    .function("AlphaLinesOn", &vtkDelaunay3D::AlphaLinesOn)
    .function("AlphaLinesOff", &vtkDelaunay3D::AlphaLinesOff)
    .function("SetAlphaVerts", &vtkDelaunay3D::SetAlphaVerts)
    .function("GetAlphaVerts", &vtkDelaunay3D::GetAlphaVerts)
    .function("AlphaVertsOn", &vtkDelaunay3D::AlphaVertsOn)
    .function("AlphaVertsOff", &vtkDelaunay3D::AlphaVertsOff)
    .function("SetTolerance", &vtkDelaunay3D::SetTolerance)
    .function("GetToleranceMinValue", &vtkDelaunay3D::GetToleranceMinValue)
    .function("GetToleranceMaxValue", &vtkDelaunay3D::GetToleranceMaxValue)
    .function("GetTolerance", &vtkDelaunay3D::GetTolerance)
    .function("SetOffset", &vtkDelaunay3D::SetOffset)
    .function("GetOffsetMinValue", &vtkDelaunay3D::GetOffsetMinValue)
    .function("GetOffsetMaxValue", &vtkDelaunay3D::GetOffsetMaxValue)
    .function("GetOffset", &vtkDelaunay3D::GetOffset)
    .function("SetBoundingTriangulation", &vtkDelaunay3D::SetBoundingTriangulation)
    .function("GetBoundingTriangulation", &vtkDelaunay3D::GetBoundingTriangulation)
    .function("BoundingTriangulationOn", &vtkDelaunay3D::BoundingTriangulationOn)
    .function("BoundingTriangulationOff", &vtkDelaunay3D::BoundingTriangulationOff)
    .function("SetLocator", &vtkDelaunay3D::SetLocator, emscripten::allow_raw_pointers())
    .function("GetLocator", &vtkDelaunay3D::GetLocator, emscripten::allow_raw_pointers())
    .function("CreateDefaultLocator", &vtkDelaunay3D::CreateDefaultLocator)
    .function("EndPointInsertion", &vtkDelaunay3D::EndPointInsertion)
    .function("GetMTime", &vtkDelaunay3D::GetMTime)
    .function("SetOutputPointsPrecision", &vtkDelaunay3D::SetOutputPointsPrecision)
    .function("GetOutputPointsPrecision", &vtkDelaunay3D::GetOutputPointsPrecision);
}
