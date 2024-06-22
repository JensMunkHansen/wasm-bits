// JavaScript wrapper for vtkMNITransformReader with embind 
//
// This file was auto-generated using :
/*
node /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/bin/vtkWrapJavaScript.js \
 @/home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkIOMINC.js/vtkIOMINC.js.Release.args \
 -o \
 /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkIOMINC.js/vtkMNITransformReaderEmbinding.cxx \
 /home/jmh/github/vtk/IO/MINC/vtkMNITransformReader.h
*/
#include "vtkEmbindSmartPointerTrait.h"
#include <emscripten.h>
#include <string>
#include "vtkVariant.h"
#include "vtkObjectBase.h"
#include "vtkIndent.h"
#include "vtkAbstractTransform.h"
#include "vtkMNITransformReader.h"

template<> void emscripten::internal::raw_destructor<vtkMNITransformReader>(vtkMNITransformReader * ptr){ ptr->Delete(); }
EMSCRIPTEN_BINDINGS(vtkMNITransformReader_class) {
  emscripten::class_<vtkMNITransformReader, emscripten::base<vtkAlgorithm>>("vtkMNITransformReader")
    .smart_ptr<vtkSmartPointer<vtkMNITransformReader>>("vtkSmartPointer<vtkMNITransformReader>")
    .constructor(&vtk::MakeVTKSmartPtr<vtkMNITransformReader>)
    .class_function("IsTypeOf", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkMNITransformReader::IsTypeOf( arg_0.c_str());}))
    .function("IsA", emscripten::optional_override([](vtkMNITransformReader& self, const std::string & arg_0) -> int {  return self.IsA( arg_0.c_str());}))
    .class_function("SafeDownCast", &vtkMNITransformReader::SafeDownCast, emscripten::allow_raw_pointers())
    .function("NewInstance", &vtkMNITransformReader::NewInstance, emscripten::allow_raw_pointers())
    .class_function("GetNumberOfGenerationsFromBaseType", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkMNITransformReader::GetNumberOfGenerationsFromBaseType( arg_0.c_str());}))
    .function("GetNumberOfGenerationsFromBase", emscripten::optional_override([](vtkMNITransformReader& self, const std::string & arg_0) -> int {  return self.GetNumberOfGenerationsFromBase( arg_0.c_str());}))
    .function("SetFileName", emscripten::optional_override([](vtkMNITransformReader& self, const std::string & arg_0) -> void {  return self.SetFileName( arg_0.c_str());}))
    .function("GetFileName", emscripten::optional_override([](vtkMNITransformReader& self) -> std::string {  return self.GetFileName();}))
    .function("GetFileExtensions", emscripten::optional_override([](vtkMNITransformReader& self) -> std::string {  return self.GetFileExtensions();}))
    .function("GetDescriptiveName", emscripten::optional_override([](vtkMNITransformReader& self) -> std::string {  return self.GetDescriptiveName();}))
    .function("CanReadFile", emscripten::optional_override([](vtkMNITransformReader& self, const std::string & arg_0) -> int {  return self.CanReadFile( arg_0.c_str());}))
    .function("GetNumberOfTransforms", &vtkMNITransformReader::GetNumberOfTransforms)
    .function("GetNthTransform", &vtkMNITransformReader::GetNthTransform, emscripten::allow_raw_pointers())
    .function("GetTransform", &vtkMNITransformReader::GetTransform, emscripten::allow_raw_pointers())
    .function("GetComments", emscripten::optional_override([](vtkMNITransformReader& self) -> std::string {  return self.GetComments();}));
}
