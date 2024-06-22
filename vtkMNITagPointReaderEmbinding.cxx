// JavaScript wrapper for vtkMNITagPointReader with embind 
//
// This file was auto-generated using :
/*
node /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/bin/vtkWrapJavaScript.js \
 @/home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkIOMINC.js/vtkIOMINC.js.Release.args \
 -o \
 /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkIOMINC.js/vtkMNITagPointReaderEmbinding.cxx \
 /home/jmh/github/vtk/IO/MINC/vtkMNITagPointReader.h
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
#include "vtkMNITagPointReader.h"

template<> void emscripten::internal::raw_destructor<vtkMNITagPointReader>(vtkMNITagPointReader * ptr){ ptr->Delete(); }
EMSCRIPTEN_BINDINGS(vtkMNITagPointReader_class) {
  emscripten::class_<vtkMNITagPointReader, emscripten::base<vtkPolyDataAlgorithm>>("vtkMNITagPointReader")
    .smart_ptr<vtkSmartPointer<vtkMNITagPointReader>>("vtkSmartPointer<vtkMNITagPointReader>")
    .constructor(&vtk::MakeVTKSmartPtr<vtkMNITagPointReader>)
    .class_function("IsTypeOf", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkMNITagPointReader::IsTypeOf( arg_0.c_str());}))
    .function("IsA", emscripten::optional_override([](vtkMNITagPointReader& self, const std::string & arg_0) -> int {  return self.IsA( arg_0.c_str());}))
    .class_function("SafeDownCast", &vtkMNITagPointReader::SafeDownCast, emscripten::allow_raw_pointers())
    .function("NewInstance", &vtkMNITagPointReader::NewInstance, emscripten::allow_raw_pointers())
    .class_function("GetNumberOfGenerationsFromBaseType", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkMNITagPointReader::GetNumberOfGenerationsFromBaseType( arg_0.c_str());}))
    .function("GetNumberOfGenerationsFromBase", emscripten::optional_override([](vtkMNITagPointReader& self, const std::string & arg_0) -> int {  return self.GetNumberOfGenerationsFromBase( arg_0.c_str());}))
    .function("SetFileName", emscripten::optional_override([](vtkMNITagPointReader& self, const std::string & arg_0) -> void {  return self.SetFileName( arg_0.c_str());}))
    .function("GetFileName", emscripten::optional_override([](vtkMNITagPointReader& self) -> std::string {  return self.GetFileName();}))
    .function("GetFileExtensions", emscripten::optional_override([](vtkMNITagPointReader& self) -> std::string {  return self.GetFileExtensions();}))
    .function("GetDescriptiveName", emscripten::optional_override([](vtkMNITagPointReader& self) -> std::string {  return self.GetDescriptiveName();}))
    .function("CanReadFile", emscripten::optional_override([](vtkMNITagPointReader& self, const std::string & arg_0) -> int {  return self.CanReadFile( arg_0.c_str());}))
    .function("GetNumberOfVolumes", &vtkMNITagPointReader::GetNumberOfVolumes)
    .function("GetPoints", emscripten::select_overload<vtkPoints*(vtkMNITagPointReader&, int)>([](vtkMNITagPointReader& self, int arg_0) -> vtkPoints* { return self.GetPoints( arg_0); }), emscripten::allow_raw_pointers())
    .function("GetPoints", emscripten::select_overload<vtkPoints*(vtkMNITagPointReader&)>([](vtkMNITagPointReader& self) -> vtkPoints* { return self.GetPoints(); }), emscripten::allow_raw_pointers())
    .function("GetLabelText", &vtkMNITagPointReader::GetLabelText, emscripten::allow_raw_pointers())
    .function("GetWeights", &vtkMNITagPointReader::GetWeights, emscripten::allow_raw_pointers())
    .function("GetStructureIds", &vtkMNITagPointReader::GetStructureIds, emscripten::allow_raw_pointers())
    .function("GetPatientIds", &vtkMNITagPointReader::GetPatientIds, emscripten::allow_raw_pointers())
    .function("GetComments", emscripten::optional_override([](vtkMNITagPointReader& self) -> std::string {  return self.GetComments();}));
}
