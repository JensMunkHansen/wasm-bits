// JavaScript wrapper for vtkFDSReader with embind 
//
// This file was auto-generated using :
/*
node /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/bin/vtkWrapJavaScript.js \
 @/home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkIOFDS.js/vtkIOFDS.js.Release.args \
 -o \
 /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkIOFDS.js/vtkFDSReaderEmbinding.cxx \
 /home/jmh/github/vtk/IO/FDS/vtkFDSReader.h
*/
#include "vtkEmbindSmartPointerTrait.h"
#include <emscripten.h>
#include <string>
#include "vtkVariant.h"
#include "vtkObjectBase.h"
#include "vtkIndent.h"
#include "vtkResourceStream.h"
#include "vtkDataAssembly.h"
#include "vtkFDSReader.h"

template<> void emscripten::internal::raw_destructor<vtkFDSReader>(vtkFDSReader * ptr){ ptr->Delete(); }
EMSCRIPTEN_BINDINGS(vtkFDSReader_class) {
  emscripten::class_<vtkFDSReader, emscripten::base<vtkPartitionedDataSetCollectionAlgorithm>>("vtkFDSReader")
    .smart_ptr<vtkSmartPointer<vtkFDSReader>>("vtkSmartPointer<vtkFDSReader>")
    .constructor(&vtk::MakeVTKSmartPtr<vtkFDSReader>)
    .class_function("IsTypeOf", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkFDSReader::IsTypeOf( arg_0.c_str());}))
    .function("IsA", emscripten::optional_override([](vtkFDSReader& self, const std::string & arg_0) -> int {  return self.IsA( arg_0.c_str());}))
    .class_function("SafeDownCast", &vtkFDSReader::SafeDownCast, emscripten::allow_raw_pointers())
    .function("NewInstance", &vtkFDSReader::NewInstance, emscripten::allow_raw_pointers())
    .class_function("GetNumberOfGenerationsFromBaseType", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkFDSReader::GetNumberOfGenerationsFromBaseType( arg_0.c_str());}))
    .function("GetNumberOfGenerationsFromBase", emscripten::optional_override([](vtkFDSReader& self, const std::string & arg_0) -> int {  return self.GetNumberOfGenerationsFromBase( arg_0.c_str());}))
    .function("SetFileName", &vtkFDSReader::SetFileName)
    .function("GetFileName", &vtkFDSReader::GetFileName)
    .function("SetStream", &vtkFDSReader::SetStream, emscripten::allow_raw_pointers())
    .function("GetStream", &vtkFDSReader::GetStream, emscripten::allow_raw_pointers())
    .function("GetAssembly", &vtkFDSReader::GetAssembly, emscripten::allow_raw_pointers())
    .function("GetAssemblyTag", &vtkFDSReader::GetAssemblyTag)
    .function("AddSelector", emscripten::optional_override([](vtkFDSReader& self, const std::string & arg_0) -> bool {  return self.AddSelector( arg_0.c_str());}))
    .function("ClearSelectors", &vtkFDSReader::ClearSelectors)
    .function("GetTimeTolerance", &vtkFDSReader::GetTimeTolerance)
    .function("SetTimeTolerance", &vtkFDSReader::SetTimeTolerance);
}
