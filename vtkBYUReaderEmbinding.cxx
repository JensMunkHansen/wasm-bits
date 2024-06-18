// JavaScript wrapper for vtkBYUReader with embind 
//
// This file was auto-generated using :
/*
node /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/bin/vtkWrapJavaScript.js \
 @/home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkIOGeometry.js/vtkIOGeometry.js.Release.args \
 -o \
 /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkIOGeometry.js/vtkBYUReaderEmbinding.cxx \
 /home/jmh/github/vtk/IO/Geometry/vtkBYUReader.h
*/
#include "vtkEmbindSmartPointerTrait.h"
#include <emscripten.h>
#include <string>
#include "vtkVariant.h"
#include "vtkObjectBase.h"
#include "vtkIndent.h"
#include "vtkBYUReader.h"

template<> void emscripten::internal::raw_destructor<vtkBYUReader>(vtkBYUReader * ptr){ ptr->Delete(); }
EMSCRIPTEN_BINDINGS(vtkBYUReader_class) {
  emscripten::class_<vtkBYUReader, emscripten::base<vtkPolyDataAlgorithm>>("vtkBYUReader")
    .smart_ptr<vtkSmartPointer<vtkBYUReader>>("vtkSmartPointer<vtkBYUReader>")
    .constructor(&vtk::MakeAvtkSmartPointer<vtkBYUReader>)
    .class_function("IsTypeOf", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkBYUReader::IsTypeOf( arg_0.c_str());}))
    .function("IsA", emscripten::optional_override([](vtkBYUReader& self, const std::string & arg_0) -> int {  return self.IsA( arg_0.c_str());}))
    .class_function("SafeDownCast", &vtkBYUReader::SafeDownCast, emscripten::allow_raw_pointers())
    .function("NewInstance", &vtkBYUReader::NewInstance, emscripten::allow_raw_pointers())
    .class_function("GetNumberOfGenerationsFromBaseType", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkBYUReader::GetNumberOfGenerationsFromBaseType( arg_0.c_str());}))
    .function("GetNumberOfGenerationsFromBase", emscripten::optional_override([](vtkBYUReader& self, const std::string & arg_0) -> int {  return self.GetNumberOfGenerationsFromBase( arg_0.c_str());}))
    .function("SetGeometryFileName", emscripten::optional_override([](vtkBYUReader& self, const std::string & arg_0) -> void {  return self.SetGeometryFileName( arg_0.c_str());}))
    .function("GetGeometryFileName", emscripten::optional_override([](vtkBYUReader& self) -> std::string {  return self.GetGeometryFileName();}))
    .function("SetFileName", emscripten::optional_override([](vtkBYUReader& self, const std::string & arg_0) -> void {  return self.SetFileName( arg_0.c_str());}))
    .function("GetFileName", emscripten::optional_override([](vtkBYUReader& self) -> std::string {  return self.GetFileName();}))
    .function("SetDisplacementFileName", emscripten::optional_override([](vtkBYUReader& self, const std::string & arg_0) -> void {  return self.SetDisplacementFileName( arg_0.c_str());}))
    .function("GetDisplacementFileName", emscripten::optional_override([](vtkBYUReader& self) -> std::string {  return self.GetDisplacementFileName();}))
    .function("SetScalarFileName", emscripten::optional_override([](vtkBYUReader& self, const std::string & arg_0) -> void {  return self.SetScalarFileName( arg_0.c_str());}))
    .function("GetScalarFileName", emscripten::optional_override([](vtkBYUReader& self) -> std::string {  return self.GetScalarFileName();}))
    .function("SetTextureFileName", emscripten::optional_override([](vtkBYUReader& self, const std::string & arg_0) -> void {  return self.SetTextureFileName( arg_0.c_str());}))
    .function("GetTextureFileName", emscripten::optional_override([](vtkBYUReader& self) -> std::string {  return self.GetTextureFileName();}))
    .function("SetReadDisplacement", &vtkBYUReader::SetReadDisplacement)
    .function("GetReadDisplacement", &vtkBYUReader::GetReadDisplacement)
    .function("ReadDisplacementOn", &vtkBYUReader::ReadDisplacementOn)
    .function("ReadDisplacementOff", &vtkBYUReader::ReadDisplacementOff)
    .function("SetReadScalar", &vtkBYUReader::SetReadScalar)
    .function("GetReadScalar", &vtkBYUReader::GetReadScalar)
    .function("ReadScalarOn", &vtkBYUReader::ReadScalarOn)
    .function("ReadScalarOff", &vtkBYUReader::ReadScalarOff)
    .function("SetReadTexture", &vtkBYUReader::SetReadTexture)
    .function("GetReadTexture", &vtkBYUReader::GetReadTexture)
    .function("ReadTextureOn", &vtkBYUReader::ReadTextureOn)
    .function("ReadTextureOff", &vtkBYUReader::ReadTextureOff)
    .function("SetPartNumber", &vtkBYUReader::SetPartNumber)
    .function("GetPartNumberMinValue", &vtkBYUReader::GetPartNumberMinValue)
    .function("GetPartNumberMaxValue", &vtkBYUReader::GetPartNumberMaxValue)
    .function("GetPartNumber", &vtkBYUReader::GetPartNumber)
    .class_function("CanReadFile", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkBYUReader::CanReadFile( arg_0.c_str());}));
}
