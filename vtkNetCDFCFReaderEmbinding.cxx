// JavaScript wrapper for vtkNetCDFCFReader with embind 
//
// This file was auto-generated using :
/*
node /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/bin/vtkWrapJavaScript.js \
 @/home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkIONetCDF.js/vtkIONetCDF.js.Release.args \
 -o \
 /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkIONetCDF.js/vtkNetCDFCFReaderEmbinding.cxx \
 /home/jmh/github/vtk/IO/NetCDF/vtkNetCDFCFReader.h
*/
#include "vtkEmbindSmartPointerTrait.h"
#include <emscripten.h>
#include <string>
#include "vtkVariant.h"
#include "vtkObjectBase.h"
#include "vtkIndent.h"
#include "vtkNetCDFCFReader.h"

EMSCRIPTEN_BINDINGS(vtkIONetCDF_vtkNetCDFCFReader_class_enums) {
}
template<> void emscripten::internal::raw_destructor<vtkNetCDFCFReader>(vtkNetCDFCFReader * ptr){ ptr->Delete(); }
EMSCRIPTEN_BINDINGS(vtkNetCDFCFReader_class) {
  emscripten::class_<vtkNetCDFCFReader, emscripten::base<vtkNetCDFReader>>("vtkNetCDFCFReader")
    .smart_ptr<vtkSmartPointer<vtkNetCDFCFReader>>("vtkSmartPointer<vtkNetCDFCFReader>")
    .constructor(&vtk::MakeVTKSmartPtr<vtkNetCDFCFReader>)
    .class_function("IsTypeOf", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkNetCDFCFReader::IsTypeOf( arg_0.c_str());}))
    .function("IsA", emscripten::optional_override([](vtkNetCDFCFReader& self, const std::string & arg_0) -> int {  return self.IsA( arg_0.c_str());}))
    .class_function("SafeDownCast", &vtkNetCDFCFReader::SafeDownCast, emscripten::allow_raw_pointers())
    .function("NewInstance", &vtkNetCDFCFReader::NewInstance, emscripten::allow_raw_pointers())
    .class_function("GetNumberOfGenerationsFromBaseType", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkNetCDFCFReader::GetNumberOfGenerationsFromBaseType( arg_0.c_str());}))
    .function("GetNumberOfGenerationsFromBase", emscripten::optional_override([](vtkNetCDFCFReader& self, const std::string & arg_0) -> int {  return self.GetNumberOfGenerationsFromBase( arg_0.c_str());}))
    .function("GetSphericalCoordinates", &vtkNetCDFCFReader::GetSphericalCoordinates)
    .function("SetSphericalCoordinates", &vtkNetCDFCFReader::SetSphericalCoordinates)
    .function("SphericalCoordinatesOn", &vtkNetCDFCFReader::SphericalCoordinatesOn)
    .function("SphericalCoordinatesOff", &vtkNetCDFCFReader::SphericalCoordinatesOff)
    .function("GetVerticalScale", &vtkNetCDFCFReader::GetVerticalScale)
    .function("SetVerticalScale", &vtkNetCDFCFReader::SetVerticalScale)
    .function("GetVerticalBias", &vtkNetCDFCFReader::GetVerticalBias)
    .function("SetVerticalBias", &vtkNetCDFCFReader::SetVerticalBias)
    .function("GetOutputType", &vtkNetCDFCFReader::GetOutputType)
    .function("SetOutputType", &vtkNetCDFCFReader::SetOutputType)
    .function("SetOutputTypeToAutomatic", &vtkNetCDFCFReader::SetOutputTypeToAutomatic)
    .function("SetOutputTypeToImage", &vtkNetCDFCFReader::SetOutputTypeToImage)
    .function("SetOutputTypeToRectilinear", &vtkNetCDFCFReader::SetOutputTypeToRectilinear)
    .function("SetOutputTypeToStructured", &vtkNetCDFCFReader::SetOutputTypeToStructured)
    .function("SetOutputTypeToUnstructured", &vtkNetCDFCFReader::SetOutputTypeToUnstructured)
    .class_function("CanReadFile", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkNetCDFCFReader::CanReadFile( arg_0.c_str());}));
}
