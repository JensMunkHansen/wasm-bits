// JavaScript wrapper for vtkFacetReader with embind 
//
// This file was auto-generated using :
/*
node /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/bin/vtkWrapJavaScript.js \
 @/home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkFiltersHybrid.js/vtkFiltersHybrid.js.Release.args \
 -o \
 /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkFiltersHybrid.js/vtkFacetReaderEmbinding.cxx \
 /home/jmh/github/vtk/Filters/Hybrid/vtkFacetReader.h
*/
#include "vtkEmbindSmartPointerTrait.h"
#include <emscripten.h>
#include <string>
#include "vtkVariant.h"
#include "vtkObjectBase.h"
#include "vtkIndent.h"
#include "vtkFacetReader.h"

template<> void emscripten::internal::raw_destructor<vtkFacetReader>(vtkFacetReader * ptr){ ptr->Delete(); }
EMSCRIPTEN_BINDINGS(vtkFacetReader_class) {
  emscripten::class_<vtkFacetReader, emscripten::base<vtkPolyDataAlgorithm>>("vtkFacetReader")
    .smart_ptr<vtkSmartPointer<vtkFacetReader>>("vtkSmartPointer<vtkFacetReader>")
    .constructor(&vtk::MakeAvtkSmartPointer<vtkFacetReader>)
    .class_function("IsTypeOf", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkFacetReader::IsTypeOf( arg_0.c_str());}))
    .function("IsA", emscripten::optional_override([](vtkFacetReader& self, const std::string & arg_0) -> int {  return self.IsA( arg_0.c_str());}))
    .class_function("SafeDownCast", &vtkFacetReader::SafeDownCast, emscripten::allow_raw_pointers())
    .function("NewInstance", &vtkFacetReader::NewInstance, emscripten::allow_raw_pointers())
    .class_function("GetNumberOfGenerationsFromBaseType", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkFacetReader::GetNumberOfGenerationsFromBaseType( arg_0.c_str());}))
    .function("GetNumberOfGenerationsFromBase", emscripten::optional_override([](vtkFacetReader& self, const std::string & arg_0) -> int {  return self.GetNumberOfGenerationsFromBase( arg_0.c_str());}))
    .function("SetFileName", emscripten::optional_override([](vtkFacetReader& self, const std::string & arg_0) -> void {  return self.SetFileName( arg_0.c_str());}))
    .function("GetFileName", emscripten::optional_override([](vtkFacetReader& self) -> std::string {  return self.GetFileName();}))
    .class_function("CanReadFile", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkFacetReader::CanReadFile( arg_0.c_str());}));
}
