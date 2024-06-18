// JavaScript wrapper for vtkNetCDFCAMReader with embind 
//
// This file was auto-generated using :
/*
node /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/bin/vtkWrapJavaScript.js \
 @/home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkIONetCDF.js/vtkIONetCDF.js.Release.args \
 -o \
 /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkIONetCDF.js/vtkNetCDFCAMReaderEmbinding.cxx \
 /home/jmh/github/vtk/IO/NetCDF/vtkNetCDFCAMReader.h
*/
#include "vtkEmbindSmartPointerTrait.h"
#include <emscripten.h>
#include <string>
#include "vtkVariant.h"
#include "vtkObjectBase.h"
#include "vtkIndent.h"
#include "vtkNetCDFCAMReader.h"

EMSCRIPTEN_BINDINGS(vtkIONetCDF_vtkNetCDFCAMReader_class_enums) {
}
template<> void emscripten::internal::raw_destructor<vtkNetCDFCAMReader>(vtkNetCDFCAMReader * ptr){ ptr->Delete(); }
EMSCRIPTEN_BINDINGS(vtkNetCDFCAMReader_class) {
  emscripten::class_<vtkNetCDFCAMReader, emscripten::base<vtkUnstructuredGridAlgorithm>>("vtkNetCDFCAMReader")
    .smart_ptr<vtkSmartPointer<vtkNetCDFCAMReader>>("vtkSmartPointer<vtkNetCDFCAMReader>")
    .constructor(&vtk::MakeAvtkSmartPointer<vtkNetCDFCAMReader>)
    .class_function("IsTypeOf", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkNetCDFCAMReader::IsTypeOf( arg_0.c_str());}))
    .function("IsA", emscripten::optional_override([](vtkNetCDFCAMReader& self, const std::string & arg_0) -> int {  return self.IsA( arg_0.c_str());}))
    .class_function("SafeDownCast", &vtkNetCDFCAMReader::SafeDownCast, emscripten::allow_raw_pointers())
    .function("NewInstance", &vtkNetCDFCAMReader::NewInstance, emscripten::allow_raw_pointers())
    .class_function("GetNumberOfGenerationsFromBaseType", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkNetCDFCAMReader::GetNumberOfGenerationsFromBaseType( arg_0.c_str());}))
    .function("GetNumberOfGenerationsFromBase", emscripten::optional_override([](vtkNetCDFCAMReader& self, const std::string & arg_0) -> int {  return self.GetNumberOfGenerationsFromBase( arg_0.c_str());}))
    .class_function("CanReadFile", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkNetCDFCAMReader::CanReadFile( arg_0.c_str());}))
    .function("SetFileName", emscripten::optional_override([](vtkNetCDFCAMReader& self, const std::string & arg_0) -> void {  return self.SetFileName( arg_0.c_str());}))
    .function("GetFileName", emscripten::optional_override([](vtkNetCDFCAMReader& self) -> std::string {  return self.GetFileName();}))
    .function("SetConnectivityFileName", emscripten::optional_override([](vtkNetCDFCAMReader& self, const std::string & arg_0) -> void {  return self.SetConnectivityFileName( arg_0.c_str());}))
    .function("GetConnectivityFileName", emscripten::optional_override([](vtkNetCDFCAMReader& self) -> std::string {  return self.GetConnectivityFileName();}))
    .function("SetVerticalDimension", &vtkNetCDFCAMReader::SetVerticalDimension)
    .function("GetVerticalDimensionMinValue", &vtkNetCDFCAMReader::GetVerticalDimensionMinValue)
    .function("GetVerticalDimensionMaxValue", &vtkNetCDFCAMReader::GetVerticalDimensionMaxValue)
    .function("GetVerticalDimension", &vtkNetCDFCAMReader::GetVerticalDimension)
    .function("SingleMidpointLayerOn", &vtkNetCDFCAMReader::SingleMidpointLayerOn)
    .function("SingleMidpointLayerOff", &vtkNetCDFCAMReader::SingleMidpointLayerOff)
    .function("SetSingleMidpointLayer", &vtkNetCDFCAMReader::SetSingleMidpointLayer)
    .function("GetSingleMidpointLayer", &vtkNetCDFCAMReader::GetSingleMidpointLayer)
    .function("SetMidpointLayerIndex", &vtkNetCDFCAMReader::SetMidpointLayerIndex)
    .function("GetMidpointLayerIndex", &vtkNetCDFCAMReader::GetMidpointLayerIndex)
    .function("SingleInterfaceLayerOn", &vtkNetCDFCAMReader::SingleInterfaceLayerOn)
    .function("SingleInterfaceLayerOff", &vtkNetCDFCAMReader::SingleInterfaceLayerOff)
    .function("SetSingleInterfaceLayer", &vtkNetCDFCAMReader::SetSingleInterfaceLayer)
    .function("GetSingleInterfaceLayer", &vtkNetCDFCAMReader::GetSingleInterfaceLayer)
    .function("SetInterfaceLayerIndex", &vtkNetCDFCAMReader::SetInterfaceLayerIndex)
    .function("GetInterfaceLayerIndex", &vtkNetCDFCAMReader::GetInterfaceLayerIndex)
    .function("GetNumberOfPointArrays", &vtkNetCDFCAMReader::GetNumberOfPointArrays)
    .function("GetPointArrayName", emscripten::optional_override([](vtkNetCDFCAMReader& self, int arg_0) -> std::string {  return self.GetPointArrayName( arg_0);}))
    .function("GetPointArrayStatus", emscripten::optional_override([](vtkNetCDFCAMReader& self, const std::string & arg_0) -> int {  return self.GetPointArrayStatus( arg_0.c_str());}))
    .function("SetPointArrayStatus", emscripten::optional_override([](vtkNetCDFCAMReader& self, const std::string & arg_0, int arg_1) -> void {  return self.SetPointArrayStatus( arg_0.c_str(), arg_1);}))
    .function("DisableAllPointArrays", &vtkNetCDFCAMReader::DisableAllPointArrays)
    .function("EnableAllPointArrays", &vtkNetCDFCAMReader::EnableAllPointArrays);
}
EMSCRIPTEN_BINDINGS(vtkIONetCDF_vtkNetCDFCAMReader_0_2_constants) {
  const struct { const char *name; int value; }
    constants[4] = {
      { "vtkNetCDFCAMReader_VERTICAL_DIMENSION_SINGLE_LAYER", vtkNetCDFCAMReader::VERTICAL_DIMENSION_SINGLE_LAYER },
      { "vtkNetCDFCAMReader_VERTICAL_DIMENSION_MIDPOINT_LAYERS", vtkNetCDFCAMReader::VERTICAL_DIMENSION_MIDPOINT_LAYERS },
      { "vtkNetCDFCAMReader_VERTICAL_DIMENSION_INTERFACE_LAYERS", vtkNetCDFCAMReader::VERTICAL_DIMENSION_INTERFACE_LAYERS },
      { "vtkNetCDFCAMReader_VERTICAL_DIMENSION_COUNT", vtkNetCDFCAMReader::VERTICAL_DIMENSION_COUNT },
  };
  for (int c = 0; c < 4; c++)
  {
    emscripten::constant(constants[c].name, static_cast<int>(constants[c].value));
  }
}
