// JavaScript wrapper for vtkSEPReader with embind 
//
// This file was auto-generated using :
/*
node /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/bin/vtkWrapJavaScript.js \
 @/home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkIOImage.js/vtkIOImage.js.Release.args \
 -o \
 /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkIOImage.js/vtkSEPReaderEmbinding.cxx \
 /home/jmh/github/vtk/IO/Image/vtkSEPReader.h
*/
#include "vtkEmbindSmartPointerTrait.h"
#include <emscripten.h>
#include <string>
#include "vtkVariant.h"
#include "vtkObjectBase.h"
#include "vtkIndent.h"
#include "vtkStringArray.h"
#include "vtkSEPReader.h"

EMSCRIPTEN_BINDINGS(vtkIOImage_vtkSEPReader_class_enums) {
}
template<> void emscripten::internal::raw_destructor<vtkSEPReader>(vtkSEPReader * ptr){ ptr->Delete(); }
EMSCRIPTEN_BINDINGS(vtkSEPReader_class) {
  emscripten::class_<vtkSEPReader, emscripten::base<vtkImageAlgorithm>>("vtkSEPReader")
    .smart_ptr<vtkSmartPointer<vtkSEPReader>>("vtkSmartPointer<vtkSEPReader>")
    .constructor(&vtk::MakeVTKSmartPtr<vtkSEPReader>)
    .class_function("IsTypeOf", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkSEPReader::IsTypeOf( arg_0.c_str());}))
    .function("IsA", emscripten::optional_override([](vtkSEPReader& self, const std::string & arg_0) -> int {  return self.IsA( arg_0.c_str());}))
    .class_function("SafeDownCast", &vtkSEPReader::SafeDownCast, emscripten::allow_raw_pointers())
    .function("NewInstance", &vtkSEPReader::NewInstance, emscripten::allow_raw_pointers())
    .class_function("GetNumberOfGenerationsFromBaseType", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkSEPReader::GetNumberOfGenerationsFromBaseType( arg_0.c_str());}))
    .function("GetNumberOfGenerationsFromBase", emscripten::optional_override([](vtkSEPReader& self, const std::string & arg_0) -> int {  return self.GetNumberOfGenerationsFromBase( arg_0.c_str());}))
    .function("SetFileName", emscripten::optional_override([](vtkSEPReader& self, const std::string & arg_0) -> void {  return self.SetFileName( arg_0.c_str());}))
    .function("GetFileName", emscripten::optional_override([](vtkSEPReader& self) -> std::string {  return self.GetFileName();}))
    .function("GetOutputGridDimension", &vtkSEPReader::GetOutputGridDimension)
    .function("SetOutputGridDimension", &vtkSEPReader::SetOutputGridDimension)
    .function("SetExtentSplitMode", &vtkSEPReader::SetExtentSplitMode)
    .function("GetExtentSplitMode", &vtkSEPReader::GetExtentSplitMode)
    .function("GetDataOrigin", emscripten::optional_override([](vtkSEPReader& self) -> std::uintptr_t {  return reinterpret_cast<std::uintptr_t>(self.GetDataOrigin()) / sizeof(double);}))
    .function("GetDataSpacing", emscripten::optional_override([](vtkSEPReader& self) -> std::uintptr_t {  return reinterpret_cast<std::uintptr_t>(self.GetDataSpacing()) / sizeof(double);}))
    .function("GetAllDimensions", &vtkSEPReader::GetAllDimensions, emscripten::allow_raw_pointers())
    .function("GetAllRanges", &vtkSEPReader::GetAllRanges, emscripten::allow_raw_pointers())
    .function("SetXDimension", emscripten::optional_override([](vtkSEPReader& self, const std::string & arg_0) -> void {  return self.SetXDimension( arg_0.c_str());}))
    .function("SetYDimension", emscripten::optional_override([](vtkSEPReader& self, const std::string & arg_0) -> void {  return self.SetYDimension( arg_0.c_str());}))
    .function("SetZDimension", emscripten::optional_override([](vtkSEPReader& self, const std::string & arg_0) -> void {  return self.SetZDimension( arg_0.c_str());}))
    .function("SetFixedDimension1", emscripten::optional_override([](vtkSEPReader& self, const std::string & arg_0) -> void {  return self.SetFixedDimension1( arg_0.c_str());}))
    .function("SetFixedDimension2", emscripten::optional_override([](vtkSEPReader& self, const std::string & arg_0) -> void {  return self.SetFixedDimension2( arg_0.c_str());}))
    .function("SetFixedDimensionValue1", &vtkSEPReader::SetFixedDimensionValue1)
    .function("SetFixedDimensionValue2", &vtkSEPReader::SetFixedDimensionValue2)
    .function("CanReadFile", emscripten::optional_override([](vtkSEPReader& self, const std::string & arg_0) -> bool {  return self.CanReadFile( arg_0.c_str());}));
}
