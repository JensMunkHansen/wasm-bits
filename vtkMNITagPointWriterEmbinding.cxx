// JavaScript wrapper for vtkMNITagPointWriter with embind 
//
// This file was auto-generated using :
/*
node /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/bin/vtkWrapJavaScript.js \
 @/home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkIOMINC.js/vtkIOMINC.js.Release.args \
 -o \
 /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkIOMINC.js/vtkMNITagPointWriterEmbinding.cxx \
 /home/jmh/github/vtk/IO/MINC/vtkMNITagPointWriter.h
*/
#include "vtkEmbindSmartPointerTrait.h"
#include <emscripten.h>
#include <string>
#include "vtkVariant.h"
#include "vtkObjectBase.h"
#include "vtkIndent.h"
#include "vtkPoints.h"
#include "vtkStringArray.h"
#include "vtkDoubleArray.h"
#include "vtkIntArray.h"
#include "vtkMNITagPointWriter.h"

template<> void emscripten::internal::raw_destructor<vtkMNITagPointWriter>(vtkMNITagPointWriter * ptr){ ptr->Delete(); }
EMSCRIPTEN_BINDINGS(vtkMNITagPointWriter_class) {
  emscripten::class_<vtkMNITagPointWriter, emscripten::base<vtkWriter>>("vtkMNITagPointWriter")
    .smart_ptr<vtkSmartPointer<vtkMNITagPointWriter>>("vtkSmartPointer<vtkMNITagPointWriter>")
    .constructor(&vtk::MakeVTKSmartPtr<vtkMNITagPointWriter>)
    .class_function("IsTypeOf", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkMNITagPointWriter::IsTypeOf( arg_0.c_str());}))
    .function("IsA", emscripten::optional_override([](vtkMNITagPointWriter& self, const std::string & arg_0) -> int {  return self.IsA( arg_0.c_str());}))
    .class_function("SafeDownCast", &vtkMNITagPointWriter::SafeDownCast, emscripten::allow_raw_pointers())
    .function("NewInstance", &vtkMNITagPointWriter::NewInstance, emscripten::allow_raw_pointers())
    .class_function("GetNumberOfGenerationsFromBaseType", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkMNITagPointWriter::GetNumberOfGenerationsFromBaseType( arg_0.c_str());}))
    .function("GetNumberOfGenerationsFromBase", emscripten::optional_override([](vtkMNITagPointWriter& self, const std::string & arg_0) -> int {  return self.GetNumberOfGenerationsFromBase( arg_0.c_str());}))
    .function("GetFileExtensions", emscripten::optional_override([](vtkMNITagPointWriter& self) -> std::string {  return self.GetFileExtensions();}))
    .function("GetDescriptiveName", emscripten::optional_override([](vtkMNITagPointWriter& self) -> std::string {  return self.GetDescriptiveName();}))
    .function("SetPoints", emscripten::select_overload<void(vtkMNITagPointWriter&, int, vtkPoints*)>([](vtkMNITagPointWriter& self, int arg_0, vtkPoints* arg_1) -> void { return self.SetPoints( arg_0, arg_1); }), emscripten::allow_raw_pointers())
    .function("SetPoints", emscripten::select_overload<void(vtkMNITagPointWriter&, vtkPoints*)>([](vtkMNITagPointWriter& self, vtkPoints* arg_0) -> void { return self.SetPoints( arg_0); }), emscripten::allow_raw_pointers())
    .function("GetPoints", emscripten::select_overload<vtkPoints*(vtkMNITagPointWriter&, int)>([](vtkMNITagPointWriter& self, int arg_0) -> vtkPoints* { return self.GetPoints( arg_0); }), emscripten::allow_raw_pointers())
    .function("GetPoints", emscripten::select_overload<vtkPoints*(vtkMNITagPointWriter&)>([](vtkMNITagPointWriter& self) -> vtkPoints* { return self.GetPoints(); }), emscripten::allow_raw_pointers())
    .function("SetLabelText", &vtkMNITagPointWriter::SetLabelText, emscripten::allow_raw_pointers())
    .function("GetLabelText", &vtkMNITagPointWriter::GetLabelText, emscripten::allow_raw_pointers())
    .function("SetWeights", &vtkMNITagPointWriter::SetWeights, emscripten::allow_raw_pointers())
    .function("GetWeights", &vtkMNITagPointWriter::GetWeights, emscripten::allow_raw_pointers())
    .function("SetStructureIds", &vtkMNITagPointWriter::SetStructureIds, emscripten::allow_raw_pointers())
    .function("GetStructureIds", &vtkMNITagPointWriter::GetStructureIds, emscripten::allow_raw_pointers())
    .function("SetPatientIds", &vtkMNITagPointWriter::SetPatientIds, emscripten::allow_raw_pointers())
    .function("GetPatientIds", &vtkMNITagPointWriter::GetPatientIds, emscripten::allow_raw_pointers())
    .function("SetComments", emscripten::optional_override([](vtkMNITagPointWriter& self, const std::string & arg_0) -> void {  return self.SetComments( arg_0.c_str());}))
    .function("GetComments", emscripten::optional_override([](vtkMNITagPointWriter& self) -> std::string {  return self.GetComments();}))
    .function("Write", &vtkMNITagPointWriter::Write)
    .function("GetMTime", &vtkMNITagPointWriter::GetMTime)
    .function("SetFileName", emscripten::optional_override([](vtkMNITagPointWriter& self, const std::string & arg_0) -> void {  return self.SetFileName( arg_0.c_str());}))
    .function("GetFileName", emscripten::optional_override([](vtkMNITagPointWriter& self) -> std::string {  return self.GetFileName();}));
}
