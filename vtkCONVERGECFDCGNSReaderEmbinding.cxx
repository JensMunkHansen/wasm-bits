// JavaScript wrapper for vtkCONVERGECFDCGNSReader with embind 
//
// This file was auto-generated using :
/*
node /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/bin/vtkWrapJavaScript.js \
 @/home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkIOCGNSReader.js/vtkIOCGNSReader.js.Release.args \
 -o \
 /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkIOCGNSReader.js/vtkCONVERGECFDCGNSReaderEmbinding.cxx \
 /home/jmh/github/vtk/IO/CGNS/vtkCONVERGECFDCGNSReader.h
*/
#include "vtkEmbindSmartPointerTrait.h"
#include <emscripten.h>
#include <string>
#include "vtkVariant.h"
#include "vtkObjectBase.h"
#include "vtkIndent.h"
#include "vtkDataArraySelection.h"
#include "vtkCONVERGECFDCGNSReader.h"

template<> void emscripten::internal::raw_destructor<vtkCONVERGECFDCGNSReader>(vtkCONVERGECFDCGNSReader * ptr){ ptr->Delete(); }
EMSCRIPTEN_BINDINGS(vtkCONVERGECFDCGNSReader_class) {
  emscripten::class_<vtkCONVERGECFDCGNSReader, emscripten::base<vtkPartitionedDataSetCollectionAlgorithm>>("vtkCONVERGECFDCGNSReader")
    .smart_ptr<vtkSmartPointer<vtkCONVERGECFDCGNSReader>>("vtkSmartPointer<vtkCONVERGECFDCGNSReader>")
    .constructor(&vtk::MakeVTKSmartPtr<vtkCONVERGECFDCGNSReader>)
    .class_function("IsTypeOf", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkCONVERGECFDCGNSReader::IsTypeOf( arg_0.c_str());}))
    .function("IsA", emscripten::optional_override([](vtkCONVERGECFDCGNSReader& self, const std::string & arg_0) -> int {  return self.IsA( arg_0.c_str());}))
    .class_function("SafeDownCast", &vtkCONVERGECFDCGNSReader::SafeDownCast, emscripten::allow_raw_pointers())
    .function("NewInstance", &vtkCONVERGECFDCGNSReader::NewInstance, emscripten::allow_raw_pointers())
    .class_function("GetNumberOfGenerationsFromBaseType", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkCONVERGECFDCGNSReader::GetNumberOfGenerationsFromBaseType( arg_0.c_str());}))
    .function("GetNumberOfGenerationsFromBase", emscripten::optional_override([](vtkCONVERGECFDCGNSReader& self, const std::string & arg_0) -> int {  return self.GetNumberOfGenerationsFromBase( arg_0.c_str());}))
    .function("GetPointDataArraySelection", &vtkCONVERGECFDCGNSReader::GetPointDataArraySelection, emscripten::allow_raw_pointers())
    .function("GetCellDataArraySelection", &vtkCONVERGECFDCGNSReader::GetCellDataArraySelection, emscripten::allow_raw_pointers())
    .function("GetParcelDataArraySelection", &vtkCONVERGECFDCGNSReader::GetParcelDataArraySelection, emscripten::allow_raw_pointers())
    .function("CanReadFile", &vtkCONVERGECFDCGNSReader::CanReadFile)
    .function("SetFileName", &vtkCONVERGECFDCGNSReader::SetFileName)
    .function("GetFileName", &vtkCONVERGECFDCGNSReader::GetFileName);
}
