// JavaScript wrapper for vtkDEMReader with embind 
//
// This file was auto-generated using :
/*
node /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/bin/vtkWrapJavaScript.js \
 @/home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkIOImage.js/vtkIOImage.js.Release.args \
 -o \
 /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkIOImage.js/vtkDEMReaderEmbinding.cxx \
 /home/jmh/github/vtk/IO/Image/vtkDEMReader.h
*/
#include "vtkEmbindSmartPointerTrait.h"
#include <emscripten.h>
#include <string>
#include "vtkVariant.h"
#include "vtkObjectBase.h"
#include "vtkIndent.h"
#include "vtkInformation.h"
#include "vtkInformationVector.h"
#include "vtkDEMReader.h"

template<> void emscripten::internal::raw_destructor<vtkDEMReader>(vtkDEMReader * ptr){ ptr->Delete(); }
EMSCRIPTEN_BINDINGS(vtkDEMReader_class) {
  emscripten::class_<vtkDEMReader, emscripten::base<vtkImageAlgorithm>>("vtkDEMReader")
    .smart_ptr<vtkSmartPointer<vtkDEMReader>>("vtkSmartPointer<vtkDEMReader>")
    .constructor(&vtk::MakeVTKSmartPtr<vtkDEMReader>)
    .class_function("IsTypeOf", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkDEMReader::IsTypeOf( arg_0.c_str());}))
    .function("IsA", emscripten::optional_override([](vtkDEMReader& self, const std::string & arg_0) -> int {  return self.IsA( arg_0.c_str());}))
    .class_function("SafeDownCast", &vtkDEMReader::SafeDownCast, emscripten::allow_raw_pointers())
    .function("NewInstance", &vtkDEMReader::NewInstance, emscripten::allow_raw_pointers())
    .class_function("GetNumberOfGenerationsFromBaseType", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkDEMReader::GetNumberOfGenerationsFromBaseType( arg_0.c_str());}))
    .function("GetNumberOfGenerationsFromBase", emscripten::optional_override([](vtkDEMReader& self, const std::string & arg_0) -> int {  return self.GetNumberOfGenerationsFromBase( arg_0.c_str());}))
    .function("SetFileName", emscripten::optional_override([](vtkDEMReader& self, const std::string & arg_0) -> void {  return self.SetFileName( arg_0.c_str());}))
    .function("GetFileName", emscripten::optional_override([](vtkDEMReader& self) -> std::string {  return self.GetFileName();}))
    .function("SetElevationReference", &vtkDEMReader::SetElevationReference)
    .function("GetElevationReferenceMinValue", &vtkDEMReader::GetElevationReferenceMinValue)
    .function("GetElevationReferenceMaxValue", &vtkDEMReader::GetElevationReferenceMaxValue)
    .function("GetElevationReference", &vtkDEMReader::GetElevationReference)
    .function("SetElevationReferenceToSeaLevel", &vtkDEMReader::SetElevationReferenceToSeaLevel)
    .function("SetElevationReferenceToElevationBounds", &vtkDEMReader::SetElevationReferenceToElevationBounds)
    .function("GetElevationReferenceAsString", emscripten::optional_override([](vtkDEMReader& self) -> std::string {  return self.GetElevationReferenceAsString();}))
    .function("GetMapLabel", emscripten::optional_override([](vtkDEMReader& self) -> std::string {  return self.GetMapLabel();}))
    .function("GetDEMLevel", &vtkDEMReader::GetDEMLevel)
    .function("GetElevationPattern", &vtkDEMReader::GetElevationPattern)
    .function("GetGroundSystem", &vtkDEMReader::GetGroundSystem)
    .function("GetGroundZone", &vtkDEMReader::GetGroundZone)
    .function("GetPlaneUnitOfMeasure", &vtkDEMReader::GetPlaneUnitOfMeasure)
    .function("GetElevationUnitOfMeasure", &vtkDEMReader::GetElevationUnitOfMeasure)
    .function("GetPolygonSize", &vtkDEMReader::GetPolygonSize)
    .function("GetLocalRotation", &vtkDEMReader::GetLocalRotation)
    .function("GetAccuracyCode", &vtkDEMReader::GetAccuracyCode);
}
EMSCRIPTEN_BINDINGS(vtkIOImage_vtkDEMReader_0_2_constants) {
  const struct { const char *name; int value; }
    constants[2] = {
      { "vtkDEMReader_REFERENCE_SEA_LEVEL", vtkDEMReader::REFERENCE_SEA_LEVEL },
      { "vtkDEMReader_REFERENCE_ELEVATION_BOUNDS", vtkDEMReader::REFERENCE_ELEVATION_BOUNDS },
  };
  for (int c = 0; c < 2; c++)
  {
    emscripten::constant(constants[c].name, constants[c].value);
  }
}
