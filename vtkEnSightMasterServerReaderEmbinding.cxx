// JavaScript wrapper for vtkEnSightMasterServerReader with embind 
//
// This file was auto-generated using :
/*
node /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/bin/vtkWrapJavaScript.js \
 @/home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkIOEnSight.js/vtkIOEnSight.js.Release.args \
 -o \
 /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkIOEnSight.js/vtkEnSightMasterServerReaderEmbinding.cxx \
 /home/jmh/github/vtk/IO/EnSight/vtkEnSightMasterServerReader.h
*/
#include "vtkEmbindSmartPointerTrait.h"
#include <emscripten.h>
#include <string>
#include "vtkVariant.h"
#include "vtkObjectBase.h"
#include "vtkIndent.h"
#include "vtkEnSightMasterServerReader.h"

template<> void emscripten::internal::raw_destructor<vtkEnSightMasterServerReader>(vtkEnSightMasterServerReader * ptr){ ptr->Delete(); }
EMSCRIPTEN_BINDINGS(vtkEnSightMasterServerReader_class) {
  emscripten::class_<vtkEnSightMasterServerReader, emscripten::base<vtkGenericEnSightReader>>("vtkEnSightMasterServerReader")
    .smart_ptr<vtkSmartPointer<vtkEnSightMasterServerReader>>("vtkSmartPointer<vtkEnSightMasterServerReader>")
    .constructor(&vtk::MakeVTKSmartPtr<vtkEnSightMasterServerReader>)
    .class_function("IsTypeOf", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkEnSightMasterServerReader::IsTypeOf( arg_0.c_str());}))
    .function("IsA", emscripten::optional_override([](vtkEnSightMasterServerReader& self, const std::string & arg_0) -> int {  return self.IsA( arg_0.c_str());}))
    .class_function("SafeDownCast", &vtkEnSightMasterServerReader::SafeDownCast, emscripten::allow_raw_pointers())
    .function("NewInstance", &vtkEnSightMasterServerReader::NewInstance, emscripten::allow_raw_pointers())
    .class_function("GetNumberOfGenerationsFromBaseType", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkEnSightMasterServerReader::GetNumberOfGenerationsFromBaseType( arg_0.c_str());}))
    .function("GetNumberOfGenerationsFromBase", emscripten::optional_override([](vtkEnSightMasterServerReader& self, const std::string & arg_0) -> int {  return self.GetNumberOfGenerationsFromBase( arg_0.c_str());}))
    .function("DetermineFileName", &vtkEnSightMasterServerReader::DetermineFileName)
    .function("GetPieceCaseFileName", emscripten::optional_override([](vtkEnSightMasterServerReader& self) -> std::string {  return self.GetPieceCaseFileName();}))
    .function("SetCurrentPiece", &vtkEnSightMasterServerReader::SetCurrentPiece)
    .function("GetCurrentPiece", &vtkEnSightMasterServerReader::GetCurrentPiece)
    .function("CanReadFile", emscripten::optional_override([](vtkEnSightMasterServerReader& self, const std::string & arg_0) -> int {  return self.CanReadFile( arg_0.c_str());}));
}
