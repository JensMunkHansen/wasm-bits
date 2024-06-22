// JavaScript wrapper for vtkFacetWriter with embind 
//
// This file was auto-generated using :
/*
node /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/bin/vtkWrapJavaScript.js \
 @/home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkIOGeometry.js/vtkIOGeometry.js.Release.args \
 -o \
 /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkIOGeometry.js/vtkFacetWriterEmbinding.cxx \
 /home/jmh/github/vtk/IO/Geometry/vtkFacetWriter.h
*/
#include "vtkEmbindSmartPointerTrait.h"
#include <emscripten.h>
#include <string>
#include "vtkVariant.h"
#include "vtkObjectBase.h"
#include "vtkIndent.h"
#include "vtkFacetWriter.h"

template<> void emscripten::internal::raw_destructor<vtkFacetWriter>(vtkFacetWriter * ptr){ ptr->Delete(); }
EMSCRIPTEN_BINDINGS(vtkFacetWriter_class) {
  emscripten::class_<vtkFacetWriter, emscripten::base<vtkPolyDataAlgorithm>>("vtkFacetWriter")
    .smart_ptr<vtkSmartPointer<vtkFacetWriter>>("vtkSmartPointer<vtkFacetWriter>")
    .constructor(&vtk::MakeAvtkSmartPointer<vtkFacetWriter>)
    .class_function("IsTypeOf", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkFacetWriter::IsTypeOf( arg_0.c_str());}))
    .function("IsA", emscripten::optional_override([](vtkFacetWriter& self, const std::string & arg_0) -> int {  return self.IsA( arg_0.c_str());}))
    .class_function("SafeDownCast", &vtkFacetWriter::SafeDownCast, emscripten::allow_raw_pointers())
    .function("NewInstance", &vtkFacetWriter::NewInstance, emscripten::allow_raw_pointers())
    .class_function("GetNumberOfGenerationsFromBaseType", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkFacetWriter::GetNumberOfGenerationsFromBaseType( arg_0.c_str());}))
    .function("GetNumberOfGenerationsFromBase", emscripten::optional_override([](vtkFacetWriter& self, const std::string & arg_0) -> int {  return self.GetNumberOfGenerationsFromBase( arg_0.c_str());}))
    .function("SetFileName", emscripten::optional_override([](vtkFacetWriter& self, const std::string & arg_0) -> void {  return self.SetFileName( arg_0.c_str());}))
    .function("GetFileName", emscripten::optional_override([](vtkFacetWriter& self) -> std::string {  return self.GetFileName();}))
    .function("Write", &vtkFacetWriter::Write);
}