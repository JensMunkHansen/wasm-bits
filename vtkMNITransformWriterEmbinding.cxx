// JavaScript wrapper for vtkMNITransformWriter with embind 
//
// This file was auto-generated using :
/*
node /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/bin/vtkWrapJavaScript.js \
 @/home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkIOMINC.js/vtkIOMINC.js.Release.args \
 -o \
 /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkIOMINC.js/vtkMNITransformWriterEmbinding.cxx \
 /home/jmh/github/vtk/IO/MINC/vtkMNITransformWriter.h
*/
#include "vtkEmbindSmartPointerTrait.h"
#include <emscripten.h>
#include <string>
#include "vtkVariant.h"
#include "vtkObjectBase.h"
#include "vtkIndent.h"
#include "vtkAbstractTransform.h"
#include "vtkMNITransformWriter.h"

template<> void emscripten::internal::raw_destructor<vtkMNITransformWriter>(vtkMNITransformWriter * ptr){ ptr->Delete(); }
EMSCRIPTEN_BINDINGS(vtkMNITransformWriter_class) {
  emscripten::class_<vtkMNITransformWriter, emscripten::base<vtkAlgorithm>>("vtkMNITransformWriter")
    .smart_ptr<vtkSmartPointer<vtkMNITransformWriter>>("vtkSmartPointer<vtkMNITransformWriter>")
    .constructor(&vtk::MakeAvtkSmartPointer<vtkMNITransformWriter>)
    .class_function("IsTypeOf", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkMNITransformWriter::IsTypeOf( arg_0.c_str());}))
    .function("IsA", emscripten::optional_override([](vtkMNITransformWriter& self, const std::string & arg_0) -> int {  return self.IsA( arg_0.c_str());}))
    .class_function("SafeDownCast", &vtkMNITransformWriter::SafeDownCast, emscripten::allow_raw_pointers())
    .function("NewInstance", &vtkMNITransformWriter::NewInstance, emscripten::allow_raw_pointers())
    .class_function("GetNumberOfGenerationsFromBaseType", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkMNITransformWriter::GetNumberOfGenerationsFromBaseType( arg_0.c_str());}))
    .function("GetNumberOfGenerationsFromBase", emscripten::optional_override([](vtkMNITransformWriter& self, const std::string & arg_0) -> int {  return self.GetNumberOfGenerationsFromBase( arg_0.c_str());}))
    .function("SetFileName", emscripten::optional_override([](vtkMNITransformWriter& self, const std::string & arg_0) -> void {  return self.SetFileName( arg_0.c_str());}))
    .function("GetFileName", emscripten::optional_override([](vtkMNITransformWriter& self) -> std::string {  return self.GetFileName();}))
    .function("GetFileExtensions", emscripten::optional_override([](vtkMNITransformWriter& self) -> std::string {  return self.GetFileExtensions();}))
    .function("GetDescriptiveName", emscripten::optional_override([](vtkMNITransformWriter& self) -> std::string {  return self.GetDescriptiveName();}))
    .function("SetTransform", &vtkMNITransformWriter::SetTransform, emscripten::allow_raw_pointers())
    .function("GetTransform", &vtkMNITransformWriter::GetTransform, emscripten::allow_raw_pointers())
    .function("AddTransform", &vtkMNITransformWriter::AddTransform, emscripten::allow_raw_pointers())
    .function("GetNumberOfTransforms", &vtkMNITransformWriter::GetNumberOfTransforms)
    .function("SetComments", emscripten::optional_override([](vtkMNITransformWriter& self, const std::string & arg_0) -> void {  return self.SetComments( arg_0.c_str());}))
    .function("GetComments", emscripten::optional_override([](vtkMNITransformWriter& self) -> std::string {  return self.GetComments();}))
    .function("Write", &vtkMNITransformWriter::Write);
}
