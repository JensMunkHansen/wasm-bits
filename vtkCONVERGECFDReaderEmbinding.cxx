// JavaScript wrapper for vtkCONVERGECFDReader with embind 
//
// This file was auto-generated using :
/*
node /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/bin/vtkWrapJavaScript.js \
 @/home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkIOCONVERGECFD.js/vtkIOCONVERGECFD.js.Release.args \
 -o \
 /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkIOCONVERGECFD.js/vtkCONVERGECFDReaderEmbinding.cxx \
 /home/jmh/github/vtk/IO/CONVERGECFD/vtkCONVERGECFDReader.h
*/
#include "vtkEmbindSmartPointerTrait.h"
#include <emscripten.h>
#include <string>
#include "vtkVariant.h"
#include "vtkObjectBase.h"
#include "vtkIndent.h"
#include "vtkDataArraySelection.h"
#include "vtkCONVERGECFDReader.h"

template<> void emscripten::internal::raw_destructor<vtkCONVERGECFDReader>(vtkCONVERGECFDReader * ptr){ ptr->Delete(); }
EMSCRIPTEN_BINDINGS(vtkCONVERGECFDReader_class) {
  emscripten::class_<vtkCONVERGECFDReader, emscripten::base<vtkPartitionedDataSetCollectionAlgorithm>>("vtkCONVERGECFDReader")
    .smart_ptr<vtkSmartPointer<vtkCONVERGECFDReader>>("vtkSmartPointer<vtkCONVERGECFDReader>")
    .constructor(&vtk::MakeVTKSmartPtr<vtkCONVERGECFDReader>)
    .class_function("IsTypeOf", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkCONVERGECFDReader::IsTypeOf( arg_0.c_str());}))
    .function("IsA", emscripten::optional_override([](vtkCONVERGECFDReader& self, const std::string & arg_0) -> int {  return self.IsA( arg_0.c_str());}))
    .class_function("SafeDownCast", &vtkCONVERGECFDReader::SafeDownCast, emscripten::allow_raw_pointers())
    .function("NewInstance", &vtkCONVERGECFDReader::NewInstance, emscripten::allow_raw_pointers())
    .class_function("GetNumberOfGenerationsFromBaseType", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkCONVERGECFDReader::GetNumberOfGenerationsFromBaseType( arg_0.c_str());}))
    .function("GetNumberOfGenerationsFromBase", emscripten::optional_override([](vtkCONVERGECFDReader& self, const std::string & arg_0) -> int {  return self.GetNumberOfGenerationsFromBase( arg_0.c_str());}))
    .function("GetCellDataArraySelection", &vtkCONVERGECFDReader::GetCellDataArraySelection, emscripten::allow_raw_pointers())
    .function("GetParcelDataArraySelection", &vtkCONVERGECFDReader::GetParcelDataArraySelection, emscripten::allow_raw_pointers())
    .function("CanReadFile", emscripten::optional_override([](vtkCONVERGECFDReader& self, const std::string & arg_0) -> int {  return self.CanReadFile( arg_0.c_str());}))
    .function("SetFileName", emscripten::optional_override([](vtkCONVERGECFDReader& self, const std::string & arg_0) -> void {  return self.SetFileName( arg_0.c_str());}))
    .function("GetFileName", emscripten::optional_override([](vtkCONVERGECFDReader& self) -> std::string {  return self.GetFileName();}));
}
