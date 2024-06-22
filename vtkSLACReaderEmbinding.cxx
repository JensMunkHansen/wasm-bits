// JavaScript wrapper for vtkSLACReader with embind 
//
// This file was auto-generated using :
/*
node /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/bin/vtkWrapJavaScript.js \
 @/home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkIONetCDF.js/vtkIONetCDF.js.Release.args \
 -o \
 /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkIONetCDF.js/vtkSLACReaderEmbinding.cxx \
 /home/jmh/github/vtk/IO/NetCDF/vtkSLACReader.h
*/
#include "vtkEmbindSmartPointerTrait.h"
#include <emscripten.h>
#include <string>
#include "vtkVariant.h"
#include "vtkObjectBase.h"
#include "vtkIndent.h"
#include "vtkDoubleArray.h"
#include "vtkInformationIntegerKey.h"
#include "vtkInformationObjectBaseKey.h"
#include "vtkSLACReader.h"

template<> void emscripten::internal::raw_destructor<vtkSLACReader>(vtkSLACReader * ptr){ ptr->Delete(); }
EMSCRIPTEN_BINDINGS(vtkSLACReader_class) {
  emscripten::class_<vtkSLACReader, emscripten::base<vtkMultiBlockDataSetAlgorithm>>("vtkSLACReader")
    .smart_ptr<vtkSmartPointer<vtkSLACReader>>("vtkSmartPointer<vtkSLACReader>")
    .constructor(&vtk::MakeVTKSmartPtr<vtkSLACReader>)
    .class_function("IsTypeOf", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkSLACReader::IsTypeOf( arg_0.c_str());}))
    .function("IsA", emscripten::optional_override([](vtkSLACReader& self, const std::string & arg_0) -> int {  return self.IsA( arg_0.c_str());}))
    .class_function("SafeDownCast", &vtkSLACReader::SafeDownCast, emscripten::allow_raw_pointers())
    .function("NewInstance", &vtkSLACReader::NewInstance, emscripten::allow_raw_pointers())
    .class_function("GetNumberOfGenerationsFromBaseType", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkSLACReader::GetNumberOfGenerationsFromBaseType( arg_0.c_str());}))
    .function("GetNumberOfGenerationsFromBase", emscripten::optional_override([](vtkSLACReader& self, const std::string & arg_0) -> int {  return self.GetNumberOfGenerationsFromBase( arg_0.c_str());}))
    .function("GetMeshFileName", emscripten::optional_override([](vtkSLACReader& self) -> std::string {  return self.GetMeshFileName();}))
    .function("SetMeshFileName", emscripten::optional_override([](vtkSLACReader& self, const std::string & arg_0) -> void {  return self.SetMeshFileName( arg_0.c_str());}))
    .function("AddModeFileName", emscripten::optional_override([](vtkSLACReader& self, const std::string & arg_0) -> void {  return self.AddModeFileName( arg_0.c_str());}))
    .function("RemoveAllModeFileNames", &vtkSLACReader::RemoveAllModeFileNames)
    .function("GetNumberOfModeFileNames", &vtkSLACReader::GetNumberOfModeFileNames)
    .function("GetModeFileName", emscripten::optional_override([](vtkSLACReader& self, unsigned int arg_0) -> std::string {  return self.GetModeFileName( arg_0);}))
    .function("GetReadInternalVolume", &vtkSLACReader::GetReadInternalVolume)
    .function("SetReadInternalVolume", &vtkSLACReader::SetReadInternalVolume)
    .function("ReadInternalVolumeOn", &vtkSLACReader::ReadInternalVolumeOn)
    .function("ReadInternalVolumeOff", &vtkSLACReader::ReadInternalVolumeOff)
    .function("GetReadExternalSurface", &vtkSLACReader::GetReadExternalSurface)
    .function("SetReadExternalSurface", &vtkSLACReader::SetReadExternalSurface)
    .function("ReadExternalSurfaceOn", &vtkSLACReader::ReadExternalSurfaceOn)
    .function("ReadExternalSurfaceOff", &vtkSLACReader::ReadExternalSurfaceOff)
    .function("GetReadMidpoints", &vtkSLACReader::GetReadMidpoints)
    .function("SetReadMidpoints", &vtkSLACReader::SetReadMidpoints)
    .function("ReadMidpointsOn", &vtkSLACReader::ReadMidpointsOn)
    .function("ReadMidpointsOff", &vtkSLACReader::ReadMidpointsOff)
    .function("GetNumberOfVariableArrays", &vtkSLACReader::GetNumberOfVariableArrays)
    .function("GetVariableArrayName", emscripten::optional_override([](vtkSLACReader& self, int arg_0) -> std::string {  return self.GetVariableArrayName( arg_0);}))
    .function("GetVariableArrayStatus", emscripten::optional_override([](vtkSLACReader& self, const std::string & arg_0) -> int {  return self.GetVariableArrayStatus( arg_0.c_str());}))
    .function("SetVariableArrayStatus", emscripten::optional_override([](vtkSLACReader& self, const std::string & arg_0, int arg_1) -> void {  return self.SetVariableArrayStatus( arg_0.c_str(), arg_1);}))
    .function("ResetFrequencyScales", &vtkSLACReader::ResetFrequencyScales)
    .function("SetFrequencyScale", &vtkSLACReader::SetFrequencyScale)
    .function("ResetPhaseShifts", &vtkSLACReader::ResetPhaseShifts)
    .function("SetPhaseShift", &vtkSLACReader::SetPhaseShift)
    .function("GetFrequencyScales", &vtkSLACReader::GetFrequencyScales, emscripten::allow_raw_pointers())
    .function("GetPhaseShifts", &vtkSLACReader::GetPhaseShifts, emscripten::allow_raw_pointers())
    .class_function("CanReadFile", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkSLACReader::CanReadFile( arg_0.c_str());}))
    .class_function("IS_INTERNAL_VOLUME", &vtkSLACReader::IS_INTERNAL_VOLUME, emscripten::allow_raw_pointers())
    .class_function("IS_EXTERNAL_SURFACE", &vtkSLACReader::IS_EXTERNAL_SURFACE, emscripten::allow_raw_pointers())
    .class_function("POINTS", &vtkSLACReader::POINTS, emscripten::allow_raw_pointers())
    .class_function("POINT_DATA", &vtkSLACReader::POINT_DATA, emscripten::allow_raw_pointers());
}
EMSCRIPTEN_BINDINGS(vtkIONetCDF_vtkSLACReader_0_2_constants) {
  const struct { const char *name; int value; }
    constants[3] = {
      { "vtkSLACReader_SURFACE_OUTPUT", vtkSLACReader::SURFACE_OUTPUT },
      { "vtkSLACReader_VOLUME_OUTPUT", vtkSLACReader::VOLUME_OUTPUT },
      { "vtkSLACReader_NUM_OUTPUTS", vtkSLACReader::NUM_OUTPUTS },
  };
  for (int c = 0; c < 3; c++)
  {
    emscripten::constant(constants[c].name, constants[c].value);
  }
}
