// JavaScript wrapper for vtkGAMBITReader with embind 
//
// This file was auto-generated using :
/*
node /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/bin/vtkWrapJavaScript.js \
 @/home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkIOGeometry.js/vtkIOGeometry.js.Release.args \
 -o \
 /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkIOGeometry.js/vtkGAMBITReaderEmbinding.cxx \
 /home/jmh/github/vtk/IO/Geometry/vtkGAMBITReader.h
*/
#include "vtkEmbindSmartPointerTrait.h"
#include <emscripten.h>
#include <string>
#include "vtkVariant.h"
#include "vtkObjectBase.h"
#include "vtkIndent.h"
#include "vtkGAMBITReader.h"

EMSCRIPTEN_BINDINGS(vtkIOGeometry_vtkGAMBITReader_class_enums) {
}
template<> void emscripten::internal::raw_destructor<vtkGAMBITReader>(vtkGAMBITReader * ptr){ ptr->Delete(); }
EMSCRIPTEN_BINDINGS(vtkGAMBITReader_class) {
  emscripten::class_<vtkGAMBITReader, emscripten::base<vtkUnstructuredGridAlgorithm>>("vtkGAMBITReader")
    .smart_ptr<vtkSmartPointer<vtkGAMBITReader>>("vtkSmartPointer<vtkGAMBITReader>")
    .constructor(&vtk::MakeVTKSmartPtr<vtkGAMBITReader>)
    .class_function("IsTypeOf", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkGAMBITReader::IsTypeOf( arg_0.c_str());}))
    .function("IsA", emscripten::optional_override([](vtkGAMBITReader& self, const std::string & arg_0) -> int {  return self.IsA( arg_0.c_str());}))
    .class_function("SafeDownCast", &vtkGAMBITReader::SafeDownCast, emscripten::allow_raw_pointers())
    .function("NewInstance", &vtkGAMBITReader::NewInstance, emscripten::allow_raw_pointers())
    .class_function("GetNumberOfGenerationsFromBaseType", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkGAMBITReader::GetNumberOfGenerationsFromBaseType( arg_0.c_str());}))
    .function("GetNumberOfGenerationsFromBase", emscripten::optional_override([](vtkGAMBITReader& self, const std::string & arg_0) -> int {  return self.GetNumberOfGenerationsFromBase( arg_0.c_str());}))
    .function("SetFileName", emscripten::optional_override([](vtkGAMBITReader& self, const std::string & arg_0) -> void {  return self.SetFileName( arg_0.c_str());}))
    .function("GetFileName", emscripten::optional_override([](vtkGAMBITReader& self) -> std::string {  return self.GetFileName();}))
    .function("GetNumberOfCells", &vtkGAMBITReader::GetNumberOfCells)
    .function("GetNumberOfNodes", &vtkGAMBITReader::GetNumberOfNodes)
    .function("GetNumberOfNodeFields", &vtkGAMBITReader::GetNumberOfNodeFields)
    .function("GetNumberOfCellFields", &vtkGAMBITReader::GetNumberOfCellFields);
}
