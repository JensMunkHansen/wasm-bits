// JavaScript wrapper for vtkExtractCTHPart with embind 
//
// This file was auto-generated using :
/*
node /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/bin/vtkWrapJavaScript.js \
 @/home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkFiltersParallel.js/vtkFiltersParallel.js.Release.args \
 -o \
 /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkFiltersParallel.js/vtkExtractCTHPartEmbinding.cxx \
 /home/jmh/github/vtk/Filters/Parallel/vtkExtractCTHPart.h
*/
#include "vtkEmbindSmartPointerTrait.h"
#include <emscripten.h>
#include <string>
#include "vtkVariant.h"
#include "vtkObjectBase.h"
#include "vtkIndent.h"
#include "vtkMultiProcessController.h"
#include "vtkPlane.h"
#include "vtkExtractCTHPart.h"

template<> void emscripten::internal::raw_destructor<vtkExtractCTHPart>(vtkExtractCTHPart * ptr){ ptr->Delete(); }
EMSCRIPTEN_BINDINGS(vtkExtractCTHPart_class) {
  emscripten::class_<vtkExtractCTHPart, emscripten::base<vtkMultiBlockDataSetAlgorithm>>("vtkExtractCTHPart")
    .smart_ptr<vtkSmartPointer<vtkExtractCTHPart>>("vtkSmartPointer<vtkExtractCTHPart>")
    .constructor(&vtk::MakeAvtkSmartPointer<vtkExtractCTHPart>)
    .class_function("IsTypeOf", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkExtractCTHPart::IsTypeOf( arg_0.c_str());}))
    .function("IsA", emscripten::optional_override([](vtkExtractCTHPart& self, const std::string & arg_0) -> int {  return self.IsA( arg_0.c_str());}))
    .class_function("SafeDownCast", &vtkExtractCTHPart::SafeDownCast, emscripten::allow_raw_pointers())
    .function("NewInstance", &vtkExtractCTHPart::NewInstance, emscripten::allow_raw_pointers())
    .class_function("GetNumberOfGenerationsFromBaseType", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkExtractCTHPart::GetNumberOfGenerationsFromBaseType( arg_0.c_str());}))
    .function("GetNumberOfGenerationsFromBase", emscripten::optional_override([](vtkExtractCTHPart& self, const std::string & arg_0) -> int {  return self.GetNumberOfGenerationsFromBase( arg_0.c_str());}))
    .function("AddVolumeArrayName", emscripten::optional_override([](vtkExtractCTHPart& self, const std::string & arg_0) -> void {  return self.AddVolumeArrayName( arg_0.c_str());}))
    .function("RemoveVolumeArrayNames", &vtkExtractCTHPart::RemoveVolumeArrayNames)
    .function("GetNumberOfVolumeArrayNames", &vtkExtractCTHPart::GetNumberOfVolumeArrayNames)
    .function("GetVolumeArrayName", emscripten::optional_override([](vtkExtractCTHPart& self, int arg_0) -> std::string {  return self.GetVolumeArrayName( arg_0);}))
    .function("SetController", &vtkExtractCTHPart::SetController, emscripten::allow_raw_pointers())
    .function("GetController", &vtkExtractCTHPart::GetController, emscripten::allow_raw_pointers())
    .function("SetCapping", &vtkExtractCTHPart::SetCapping)
    .function("GetCapping", &vtkExtractCTHPart::GetCapping)
    .function("CappingOn", &vtkExtractCTHPart::CappingOn)
    .function("CappingOff", &vtkExtractCTHPart::CappingOff)
    .function("SetGenerateTriangles", &vtkExtractCTHPart::SetGenerateTriangles)
    .function("GetGenerateTriangles", &vtkExtractCTHPart::GetGenerateTriangles)
    .function("GenerateTrianglesOn", &vtkExtractCTHPart::GenerateTrianglesOn)
    .function("GenerateTrianglesOff", &vtkExtractCTHPart::GenerateTrianglesOff)
    .function("SetGenerateSolidGeometry", &vtkExtractCTHPart::SetGenerateSolidGeometry)
    .function("GetGenerateSolidGeometry", &vtkExtractCTHPart::GetGenerateSolidGeometry)
    .function("GenerateSolidGeometryOn", &vtkExtractCTHPart::GenerateSolidGeometryOn)
    .function("GenerateSolidGeometryOff", &vtkExtractCTHPart::GenerateSolidGeometryOff)
    .function("SetRemoveGhostCells", &vtkExtractCTHPart::SetRemoveGhostCells)
    .function("GetRemoveGhostCells", &vtkExtractCTHPart::GetRemoveGhostCells)
    .function("RemoveGhostCellsOn", &vtkExtractCTHPart::RemoveGhostCellsOn)
    .function("RemoveGhostCellsOff", &vtkExtractCTHPart::RemoveGhostCellsOff)
    .function("SetClipPlane", &vtkExtractCTHPart::SetClipPlane, emscripten::allow_raw_pointers())
    .function("GetClipPlane", &vtkExtractCTHPart::GetClipPlane, emscripten::allow_raw_pointers())
    .function("GetMTime", &vtkExtractCTHPart::GetMTime)
    .function("SetVolumeFractionSurfaceValue", &vtkExtractCTHPart::SetVolumeFractionSurfaceValue)
    .function("GetVolumeFractionSurfaceValueMinValue", &vtkExtractCTHPart::GetVolumeFractionSurfaceValueMinValue)
    .function("GetVolumeFractionSurfaceValueMaxValue", &vtkExtractCTHPart::GetVolumeFractionSurfaceValueMaxValue)
    .function("GetVolumeFractionSurfaceValue", &vtkExtractCTHPart::GetVolumeFractionSurfaceValue);
}
