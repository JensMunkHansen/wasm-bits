// JavaScript wrapper for vtkMNIObjectReader with embind 
//
// This file was auto-generated using :
/*
node /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/bin/vtkWrapJavaScript.js \
 @/home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkIOMINC.js/vtkIOMINC.js.Release.args \
 -o \
 /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkIOMINC.js/vtkMNIObjectReaderEmbinding.cxx \
 /home/jmh/github/vtk/IO/MINC/vtkMNIObjectReader.h
*/
#include "vtkEmbindSmartPointerTrait.h"
#include <emscripten.h>
#include <string>
#include "vtkVariant.h"
#include "vtkObjectBase.h"
#include "vtkIndent.h"
#include "vtkProperty.h"
#include "vtkMNIObjectReader.h"

template<> void emscripten::internal::raw_destructor<vtkMNIObjectReader>(vtkMNIObjectReader * ptr){ ptr->Delete(); }
EMSCRIPTEN_BINDINGS(vtkMNIObjectReader_class) {
  emscripten::class_<vtkMNIObjectReader, emscripten::base<vtkPolyDataAlgorithm>>("vtkMNIObjectReader")
    .smart_ptr<vtkSmartPointer<vtkMNIObjectReader>>("vtkSmartPointer<vtkMNIObjectReader>")
    .constructor(&vtk::MakeVTKSmartPtr<vtkMNIObjectReader>)
    .class_function("IsTypeOf", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkMNIObjectReader::IsTypeOf( arg_0.c_str());}))
    .function("IsA", emscripten::optional_override([](vtkMNIObjectReader& self, const std::string & arg_0) -> int {  return self.IsA( arg_0.c_str());}))
    .class_function("SafeDownCast", &vtkMNIObjectReader::SafeDownCast, emscripten::allow_raw_pointers())
    .function("NewInstance", &vtkMNIObjectReader::NewInstance, emscripten::allow_raw_pointers())
    .class_function("GetNumberOfGenerationsFromBaseType", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkMNIObjectReader::GetNumberOfGenerationsFromBaseType( arg_0.c_str());}))
    .function("GetNumberOfGenerationsFromBase", emscripten::optional_override([](vtkMNIObjectReader& self, const std::string & arg_0) -> int {  return self.GetNumberOfGenerationsFromBase( arg_0.c_str());}))
    .function("SetFileName", emscripten::optional_override([](vtkMNIObjectReader& self, const std::string & arg_0) -> void {  return self.SetFileName( arg_0.c_str());}))
    .function("GetFileName", emscripten::optional_override([](vtkMNIObjectReader& self) -> std::string {  return self.GetFileName();}))
    .function("GetFileExtensions", emscripten::optional_override([](vtkMNIObjectReader& self) -> std::string {  return self.GetFileExtensions();}))
    .function("GetDescriptiveName", emscripten::optional_override([](vtkMNIObjectReader& self) -> std::string {  return self.GetDescriptiveName();}))
    .function("CanReadFile", emscripten::optional_override([](vtkMNIObjectReader& self, const std::string & arg_0) -> int {  return self.CanReadFile( arg_0.c_str());}))
    .function("GetProperty", &vtkMNIObjectReader::GetProperty, emscripten::allow_raw_pointers());
}
