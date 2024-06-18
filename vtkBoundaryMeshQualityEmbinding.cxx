// JavaScript wrapper for vtkBoundaryMeshQuality with embind 
//
// This file was auto-generated using :
/*
node /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/bin/vtkWrapJavaScript.js \
 @/home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkFiltersVerdict.js/vtkFiltersVerdict.js.Release.args \
 -o \
 /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkFiltersVerdict.js/vtkBoundaryMeshQualityEmbinding.cxx \
 /home/jmh/github/vtk/Filters/Verdict/vtkBoundaryMeshQuality.h
*/
#include "vtkEmbindSmartPointerTrait.h"
#include <emscripten.h>
#include <string>
#include "vtkVariant.h"
#include "vtkObjectBase.h"
#include "vtkIndent.h"
#include "vtkBoundaryMeshQuality.h"

template<> void emscripten::internal::raw_destructor<vtkBoundaryMeshQuality>(vtkBoundaryMeshQuality * ptr){ ptr->Delete(); }
EMSCRIPTEN_BINDINGS(vtkBoundaryMeshQuality_class) {
  emscripten::class_<vtkBoundaryMeshQuality, emscripten::base<vtkPolyDataAlgorithm>>("vtkBoundaryMeshQuality")
    .smart_ptr<vtkSmartPointer<vtkBoundaryMeshQuality>>("vtkSmartPointer<vtkBoundaryMeshQuality>")
    .constructor(&vtk::MakeAvtkSmartPointer<vtkBoundaryMeshQuality>)
    .class_function("IsTypeOf", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkBoundaryMeshQuality::IsTypeOf( arg_0.c_str());}))
    .function("IsA", emscripten::optional_override([](vtkBoundaryMeshQuality& self, const std::string & arg_0) -> int {  return self.IsA( arg_0.c_str());}))
    .class_function("SafeDownCast", &vtkBoundaryMeshQuality::SafeDownCast, emscripten::allow_raw_pointers())
    .function("NewInstance", &vtkBoundaryMeshQuality::NewInstance, emscripten::allow_raw_pointers())
    .class_function("GetNumberOfGenerationsFromBaseType", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkBoundaryMeshQuality::GetNumberOfGenerationsFromBaseType( arg_0.c_str());}))
    .function("GetNumberOfGenerationsFromBase", emscripten::optional_override([](vtkBoundaryMeshQuality& self, const std::string & arg_0) -> int {  return self.GetNumberOfGenerationsFromBase( arg_0.c_str());}))
    .function("SetDistanceFromCellCenterToFaceCenter", &vtkBoundaryMeshQuality::SetDistanceFromCellCenterToFaceCenter)
    .function("GetDistanceFromCellCenterToFaceCenter", &vtkBoundaryMeshQuality::GetDistanceFromCellCenterToFaceCenter)
    .function("DistanceFromCellCenterToFaceCenterOn", &vtkBoundaryMeshQuality::DistanceFromCellCenterToFaceCenterOn)
    .function("DistanceFromCellCenterToFaceCenterOff", &vtkBoundaryMeshQuality::DistanceFromCellCenterToFaceCenterOff)
    .function("SetDistanceFromCellCenterToFacePlane", &vtkBoundaryMeshQuality::SetDistanceFromCellCenterToFacePlane)
    .function("GetDistanceFromCellCenterToFacePlane", &vtkBoundaryMeshQuality::GetDistanceFromCellCenterToFacePlane)
    .function("DistanceFromCellCenterToFacePlaneOn", &vtkBoundaryMeshQuality::DistanceFromCellCenterToFacePlaneOn)
    .function("DistanceFromCellCenterToFacePlaneOff", &vtkBoundaryMeshQuality::DistanceFromCellCenterToFacePlaneOff)
    .function("SetAngleFaceNormalAndCellCenterToFaceCenterVector", &vtkBoundaryMeshQuality::SetAngleFaceNormalAndCellCenterToFaceCenterVector)
    .function("GetAngleFaceNormalAndCellCenterToFaceCenterVector", &vtkBoundaryMeshQuality::GetAngleFaceNormalAndCellCenterToFaceCenterVector)
    .function("AngleFaceNormalAndCellCenterToFaceCenterVectorOn", &vtkBoundaryMeshQuality::AngleFaceNormalAndCellCenterToFaceCenterVectorOn)
    .function("AngleFaceNormalAndCellCenterToFaceCenterVectorOff", &vtkBoundaryMeshQuality::AngleFaceNormalAndCellCenterToFaceCenterVectorOff);
}
