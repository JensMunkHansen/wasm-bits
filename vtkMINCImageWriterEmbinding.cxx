// JavaScript wrapper for vtkMINCImageWriter with embind 
//
// This file was auto-generated using :
/*
node /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/bin/vtkWrapJavaScript.js \
 @/home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkIOMINC.js/vtkIOMINC.js.Release.args \
 -o \
 /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkIOMINC.js/vtkMINCImageWriterEmbinding.cxx \
 /home/jmh/github/vtk/IO/MINC/vtkMINCImageWriter.h
*/
#include "vtkEmbindSmartPointerTrait.h"
#include <emscripten.h>
#include <string>
#include "vtkVariant.h"
#include "vtkObjectBase.h"
#include "vtkIndent.h"
#include "vtkMatrix4x4.h"
#include "vtkMINCImageAttributes.h"
#include "vtkMINCImageWriter.h"

template<> void emscripten::internal::raw_destructor<vtkMINCImageWriter>(vtkMINCImageWriter * ptr){ ptr->Delete(); }
EMSCRIPTEN_BINDINGS(vtkMINCImageWriter_class) {
  emscripten::class_<vtkMINCImageWriter, emscripten::base<vtkImageWriter>>("vtkMINCImageWriter")
    .smart_ptr<vtkSmartPointer<vtkMINCImageWriter>>("vtkSmartPointer<vtkMINCImageWriter>")
    .constructor(&vtk::MakeVTKSmartPtr<vtkMINCImageWriter>)
    .class_function("IsTypeOf", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkMINCImageWriter::IsTypeOf( arg_0.c_str());}))
    .function("IsA", emscripten::optional_override([](vtkMINCImageWriter& self, const std::string & arg_0) -> int {  return self.IsA( arg_0.c_str());}))
    .class_function("SafeDownCast", &vtkMINCImageWriter::SafeDownCast, emscripten::allow_raw_pointers())
    .function("NewInstance", &vtkMINCImageWriter::NewInstance, emscripten::allow_raw_pointers())
    .class_function("GetNumberOfGenerationsFromBaseType", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkMINCImageWriter::GetNumberOfGenerationsFromBaseType( arg_0.c_str());}))
    .function("GetNumberOfGenerationsFromBase", emscripten::optional_override([](vtkMINCImageWriter& self, const std::string & arg_0) -> int {  return self.GetNumberOfGenerationsFromBase( arg_0.c_str());}))
    .function("GetFileExtensions", emscripten::optional_override([](vtkMINCImageWriter& self) -> std::string {  return self.GetFileExtensions();}))
    .function("GetDescriptiveName", emscripten::optional_override([](vtkMINCImageWriter& self) -> std::string {  return self.GetDescriptiveName();}))
    .function("SetFileName", emscripten::optional_override([](vtkMINCImageWriter& self, const std::string & arg_0) -> void {  return self.SetFileName( arg_0.c_str());}))
    .function("Write", &vtkMINCImageWriter::Write)
    .function("SetDirectionCosines", &vtkMINCImageWriter::SetDirectionCosines, emscripten::allow_raw_pointers())
    .function("GetDirectionCosines", &vtkMINCImageWriter::GetDirectionCosines, emscripten::allow_raw_pointers())
    .function("SetRescaleSlope", &vtkMINCImageWriter::SetRescaleSlope)
    .function("GetRescaleSlope", &vtkMINCImageWriter::GetRescaleSlope)
    .function("SetRescaleIntercept", &vtkMINCImageWriter::SetRescaleIntercept)
    .function("GetRescaleIntercept", &vtkMINCImageWriter::GetRescaleIntercept)
    .function("SetImageAttributes", &vtkMINCImageWriter::SetImageAttributes, emscripten::allow_raw_pointers())
    .function("GetImageAttributes", &vtkMINCImageWriter::GetImageAttributes, emscripten::allow_raw_pointers())
    .function("SetStrictValidation", &vtkMINCImageWriter::SetStrictValidation)
    .function("StrictValidationOn", &vtkMINCImageWriter::StrictValidationOn)
    .function("StrictValidationOff", &vtkMINCImageWriter::StrictValidationOff)
    .function("GetStrictValidation", &vtkMINCImageWriter::GetStrictValidation)
    .function("SetHistoryAddition", emscripten::optional_override([](vtkMINCImageWriter& self, const std::string & arg_0) -> void {  return self.SetHistoryAddition( arg_0.c_str());}))
    .function("GetHistoryAddition", emscripten::optional_override([](vtkMINCImageWriter& self) -> std::string {  return self.GetHistoryAddition();}));
}
