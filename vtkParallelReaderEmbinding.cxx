// JavaScript wrapper for vtkParallelReader with embind 
//
// This file was auto-generated using :
/*
node /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/bin/vtkWrapJavaScript.js \
 @/home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkCommonExecutionModel.js/vtkCommonExecutionModel.js.Release.args \
 -o \
 /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkCommonExecutionModel.js/vtkParallelReaderEmbinding.cxx \
 /home/jmh/github/vtk/Common/ExecutionModel/vtkParallelReader.h
*/
#include "vtkEmbindSmartPointerTrait.h"
#include <emscripten.h>
#include <string>
#include "vtkVariant.h"
#include "vtkObjectBase.h"
#include "vtkIndent.h"
#include "vtkInformation.h"
#include "vtkDataObject.h"
#include "vtkParallelReader.h"

template<> void emscripten::internal::raw_destructor<vtkParallelReader>(vtkParallelReader * ptr){ ptr->Delete(); }
EMSCRIPTEN_BINDINGS(vtkParallelReader_class) {
  emscripten::class_<vtkParallelReader, emscripten::base<vtkReaderAlgorithm>>("vtkParallelReader")
    .class_function("IsTypeOf", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkParallelReader::IsTypeOf( arg_0.c_str());}))
    .function("IsA", emscripten::optional_override([](vtkParallelReader& self, const std::string & arg_0) -> int {  return self.IsA( arg_0.c_str());}))
    .class_function("SafeDownCast", &vtkParallelReader::SafeDownCast, emscripten::allow_raw_pointers())
    .function("NewInstance", &vtkParallelReader::NewInstance, emscripten::allow_raw_pointers())
    .class_function("GetNumberOfGenerationsFromBaseType", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkParallelReader::GetNumberOfGenerationsFromBaseType( arg_0.c_str());}))
    .function("GetNumberOfGenerationsFromBase", emscripten::optional_override([](vtkParallelReader& self, const std::string & arg_0) -> int {  return self.GetNumberOfGenerationsFromBase( arg_0.c_str());}))
    .function("AddFileName", emscripten::optional_override([](vtkParallelReader& self, const std::string & arg_0) -> void {  return self.AddFileName( arg_0.c_str());}))
    .function("ClearFileNames", &vtkParallelReader::ClearFileNames)
    .function("GetNumberOfFileNames", &vtkParallelReader::GetNumberOfFileNames)
    .function("GetFileName", emscripten::optional_override([](vtkParallelReader& self, int arg_0) -> std::string {  return self.GetFileName( arg_0);}))
    .function("GetCurrentFileName", emscripten::optional_override([](vtkParallelReader& self) -> std::string {  return self.GetCurrentFileName();}))
    .function("ReadMetaData", &vtkParallelReader::ReadMetaData, emscripten::allow_raw_pointers())
    .function("ReadMesh", emscripten::select_overload<int(vtkParallelReader&, int, int, int, int, vtkDataObject*)>([](vtkParallelReader& self, int arg_0, int arg_1, int arg_2, int arg_3, vtkDataObject* arg_4) -> int { return self.ReadMesh( arg_0, arg_1, arg_2, arg_3, arg_4); }), emscripten::allow_raw_pointers())
    .function("ReadPoints", emscripten::select_overload<int(vtkParallelReader&, int, int, int, int, vtkDataObject*)>([](vtkParallelReader& self, int arg_0, int arg_1, int arg_2, int arg_3, vtkDataObject* arg_4) -> int { return self.ReadPoints( arg_0, arg_1, arg_2, arg_3, arg_4); }), emscripten::allow_raw_pointers())
    .function("ReadArrays", emscripten::select_overload<int(vtkParallelReader&, int, int, int, int, vtkDataObject*)>([](vtkParallelReader& self, int arg_0, int arg_1, int arg_2, int arg_3, vtkDataObject* arg_4) -> int { return self.ReadArrays( arg_0, arg_1, arg_2, arg_3, arg_4); }), emscripten::allow_raw_pointers());
}
