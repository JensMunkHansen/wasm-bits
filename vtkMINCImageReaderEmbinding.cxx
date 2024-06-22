// JavaScript wrapper for vtkMINCImageReader with embind 
//
// This file was auto-generated using :
/*
node /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/bin/vtkWrapJavaScript.js \
 @/home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkIOMINC.js/vtkIOMINC.js.Release.args \
 -o \
 /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkIOMINC.js/vtkMINCImageReaderEmbinding.cxx \
 /home/jmh/github/vtk/IO/MINC/vtkMINCImageReader.h
*/
#include "vtkEmbindSmartPointerTrait.h"
#include <emscripten.h>
#include <string>
#include "vtkVariant.h"
#include "vtkObjectBase.h"
#include "vtkIndent.h"
#include "vtkMatrix4x4.h"
#include "vtkMINCImageAttributes.h"
#include "vtkMINCImageReader.h"

template<> void emscripten::internal::raw_destructor<vtkMINCImageReader>(vtkMINCImageReader * ptr){ ptr->Delete(); }
EMSCRIPTEN_BINDINGS(vtkMINCImageReader_class) {
  emscripten::class_<vtkMINCImageReader, emscripten::base<vtkImageReader2>>("vtkMINCImageReader")
    .smart_ptr<vtkSmartPointer<vtkMINCImageReader>>("vtkSmartPointer<vtkMINCImageReader>")
    .constructor(&vtk::MakeAvtkSmartPointer<vtkMINCImageReader>)
    .class_function("IsTypeOf", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkMINCImageReader::IsTypeOf( arg_0.c_str());}))
    .function("IsA", emscripten::optional_override([](vtkMINCImageReader& self, const std::string & arg_0) -> int {  return self.IsA( arg_0.c_str());}))
    .class_function("SafeDownCast", &vtkMINCImageReader::SafeDownCast, emscripten::allow_raw_pointers())
    .function("NewInstance", &vtkMINCImageReader::NewInstance, emscripten::allow_raw_pointers())
    .class_function("GetNumberOfGenerationsFromBaseType", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkMINCImageReader::GetNumberOfGenerationsFromBaseType( arg_0.c_str());}))
    .function("GetNumberOfGenerationsFromBase", emscripten::optional_override([](vtkMINCImageReader& self, const std::string & arg_0) -> int {  return self.GetNumberOfGenerationsFromBase( arg_0.c_str());}))
    .function("SetFileName", emscripten::optional_override([](vtkMINCImageReader& self, const std::string & arg_0) -> void {  return self.SetFileName( arg_0.c_str());}))
    .function("GetFileExtensions", emscripten::optional_override([](vtkMINCImageReader& self) -> std::string {  return self.GetFileExtensions();}))
    .function("GetDescriptiveName", emscripten::optional_override([](vtkMINCImageReader& self) -> std::string {  return self.GetDescriptiveName();}))
    .function("CanReadFile", emscripten::optional_override([](vtkMINCImageReader& self, const std::string & arg_0) -> int {  return self.CanReadFile( arg_0.c_str());}))
    .function("GetDirectionCosines", &vtkMINCImageReader::GetDirectionCosines, emscripten::allow_raw_pointers())
    .function("GetRescaleSlope", &vtkMINCImageReader::GetRescaleSlope)
    .function("GetRescaleIntercept", &vtkMINCImageReader::GetRescaleIntercept)
    .function("SetRescaleRealValues", &vtkMINCImageReader::SetRescaleRealValues)
    .function("RescaleRealValuesOn", &vtkMINCImageReader::RescaleRealValuesOn)
    .function("RescaleRealValuesOff", &vtkMINCImageReader::RescaleRealValuesOff)
    .function("GetRescaleRealValues", &vtkMINCImageReader::GetRescaleRealValues)
    .function("GetNumberOfTimeSteps", &vtkMINCImageReader::GetNumberOfTimeSteps)
    .function("SetTimeStep", &vtkMINCImageReader::SetTimeStep)
    .function("GetTimeStep", &vtkMINCImageReader::GetTimeStep)
    .function("GetImageAttributes", &vtkMINCImageReader::GetImageAttributes, emscripten::allow_raw_pointers());
}
