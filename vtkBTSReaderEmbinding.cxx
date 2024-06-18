// JavaScript wrapper for vtkBTSReader with embind 
//
// This file was auto-generated using :
/*
node /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/bin/vtkWrapJavaScript.js \
 @/home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkIOEngys.js/vtkIOEngys.js.Release.args \
 -o \
 /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkIOEngys.js/vtkBTSReaderEmbinding.cxx \
 /home/jmh/github/vtk/IO/Engys/vtkBTSReader.h
*/
#include "vtkEmbindSmartPointerTrait.h"
#include <emscripten.h>
#include <string>
#include "vtkVariant.h"
#include "vtkObjectBase.h"
#include "vtkIndent.h"
#include "vtkResourceStream.h"
#include "vtkBTSReader.h"

template<> void emscripten::internal::raw_destructor<vtkBTSReader>(vtkBTSReader * ptr){ ptr->Delete(); }
EMSCRIPTEN_BINDINGS(vtkBTSReader_class) {
  emscripten::class_<vtkBTSReader, emscripten::base<vtkPartitionedDataSetAlgorithm>>("vtkBTSReader")
    .smart_ptr<vtkSmartPointer<vtkBTSReader>>("vtkSmartPointer<vtkBTSReader>")
    .constructor(&vtk::MakeAvtkSmartPointer<vtkBTSReader>)
    .class_function("IsTypeOf", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkBTSReader::IsTypeOf( arg_0.c_str());}))
    .function("IsA", emscripten::optional_override([](vtkBTSReader& self, const std::string & arg_0) -> int {  return self.IsA( arg_0.c_str());}))
    .class_function("SafeDownCast", &vtkBTSReader::SafeDownCast, emscripten::allow_raw_pointers())
    .function("NewInstance", &vtkBTSReader::NewInstance, emscripten::allow_raw_pointers())
    .class_function("GetNumberOfGenerationsFromBaseType", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkBTSReader::GetNumberOfGenerationsFromBaseType( arg_0.c_str());}))
    .function("GetNumberOfGenerationsFromBase", emscripten::optional_override([](vtkBTSReader& self, const std::string & arg_0) -> int {  return self.GetNumberOfGenerationsFromBase( arg_0.c_str());}))
    .function("SetFileName", emscripten::optional_override([](vtkBTSReader& self, const std::string & arg_0) -> void {  return self.SetFileName( arg_0.c_str());}))
    .function("GetFileName", emscripten::optional_override([](vtkBTSReader& self) -> std::string {  return self.GetFileName();}))
    .function("SetStream", &vtkBTSReader::SetStream, emscripten::allow_raw_pointers())
    .function("GetStream", &vtkBTSReader::GetStream, emscripten::allow_raw_pointers())
    .function("GetRegistrationName", emscripten::optional_override([](vtkBTSReader& self) -> std::string {  return self.GetRegistrationName();}));
}
