// JavaScript wrapper for vtkSimpleReader with embind 
//
// This file was auto-generated using :
/*
node /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/bin/vtkWrapJavaScript.js \
 @/home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkCommonExecutionModel.js/vtkCommonExecutionModel.js.Release.args \
 -o \
 /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkCommonExecutionModel.js/vtkSimpleReaderEmbinding.cxx \
 /home/jmh/github/vtk/Common/ExecutionModel/vtkSimpleReader.h
*/
#include "vtkEmbindSmartPointerTrait.h"
#include <emscripten.h>
#include <string>
#include "vtkVariant.h"
#include "vtkObjectBase.h"
#include "vtkIndent.h"
#include "vtkInformation.h"
#include "vtkDataObject.h"
#include "vtkSimpleReader.h"

template<> void emscripten::internal::raw_destructor<vtkSimpleReader>(vtkSimpleReader * ptr){ ptr->Delete(); }
EMSCRIPTEN_BINDINGS(vtkSimpleReader_class) {
  emscripten::class_<vtkSimpleReader, emscripten::base<vtkReaderAlgorithm>>("vtkSimpleReader")
    .class_function("IsTypeOf", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkSimpleReader::IsTypeOf( arg_0.c_str());}))
    .function("IsA", emscripten::optional_override([](vtkSimpleReader& self, const std::string & arg_0) -> int {  return self.IsA( arg_0.c_str());}))
    .class_function("SafeDownCast", &vtkSimpleReader::SafeDownCast, emscripten::allow_raw_pointers())
    .function("NewInstance", &vtkSimpleReader::NewInstance, emscripten::allow_raw_pointers())
    .class_function("GetNumberOfGenerationsFromBaseType", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkSimpleReader::GetNumberOfGenerationsFromBaseType( arg_0.c_str());}))
    .function("GetNumberOfGenerationsFromBase", emscripten::optional_override([](vtkSimpleReader& self, const std::string & arg_0) -> int {  return self.GetNumberOfGenerationsFromBase( arg_0.c_str());}))
    .function("AddFileName", emscripten::optional_override([](vtkSimpleReader& self, const std::string & arg_0) -> void {  return self.AddFileName( arg_0.c_str());}))
    .function("ClearFileNames", &vtkSimpleReader::ClearFileNames)
    .function("GetNumberOfFileNames", &vtkSimpleReader::GetNumberOfFileNames)
    .function("GetFileName", emscripten::optional_override([](vtkSimpleReader& self, int arg_0) -> std::string {  return self.GetFileName( arg_0);}))
    .function("GetCurrentFileName", emscripten::optional_override([](vtkSimpleReader& self) -> std::string {  return self.GetCurrentFileName();}))
    .function("ReadTimeDependentMetaData", &vtkSimpleReader::ReadTimeDependentMetaData, emscripten::allow_raw_pointers())
    .function("ReadMetaData", &vtkSimpleReader::ReadMetaData, emscripten::allow_raw_pointers())
    .function("ReadMesh", &vtkSimpleReader::ReadMesh, emscripten::allow_raw_pointers())
    .function("ReadPoints", &vtkSimpleReader::ReadPoints, emscripten::allow_raw_pointers())
    .function("ReadArrays", &vtkSimpleReader::ReadArrays, emscripten::allow_raw_pointers())
    .function("GetTimeValue", &vtkSimpleReader::GetTimeValue)
    .function("ReadMetaDataSimple", &vtkSimpleReader::ReadMetaDataSimple, emscripten::allow_raw_pointers());
}
