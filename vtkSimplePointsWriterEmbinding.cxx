// JavaScript wrapper for vtkSimplePointsWriter with embind 
//
// This file was auto-generated using :
/*
node /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/bin/vtkWrapJavaScript.js \
 @/home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkIOLegacy.js/vtkIOLegacy.js.Release.args \
 -o \
 /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkIOLegacy.js/vtkSimplePointsWriterEmbinding.cxx \
 /home/jmh/github/vtk/IO/Legacy/vtkSimplePointsWriter.h
*/
#include "vtkEmbindSmartPointerTrait.h"
#include <emscripten.h>
#include <string>
#include "vtkVariant.h"
#include "vtkObjectBase.h"
#include "vtkIndent.h"
#include "vtkSimplePointsWriter.h"

template<> void emscripten::internal::raw_destructor<vtkSimplePointsWriter>(vtkSimplePointsWriter * ptr){ ptr->Delete(); }
EMSCRIPTEN_BINDINGS(vtkSimplePointsWriter_class) {
  emscripten::class_<vtkSimplePointsWriter, emscripten::base<vtkDataSetWriter>>("vtkSimplePointsWriter")
    .smart_ptr<vtkSmartPointer<vtkSimplePointsWriter>>("vtkSmartPointer<vtkSimplePointsWriter>")
    .constructor(&vtk::MakeVTKSmartPtr<vtkSimplePointsWriter>)
    .class_function("IsTypeOf", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkSimplePointsWriter::IsTypeOf( arg_0.c_str());}))
    .function("IsA", emscripten::optional_override([](vtkSimplePointsWriter& self, const std::string & arg_0) -> int {  return self.IsA( arg_0.c_str());}))
    .class_function("SafeDownCast", &vtkSimplePointsWriter::SafeDownCast, emscripten::allow_raw_pointers())
    .function("NewInstance", &vtkSimplePointsWriter::NewInstance, emscripten::allow_raw_pointers())
    .class_function("GetNumberOfGenerationsFromBaseType", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkSimplePointsWriter::GetNumberOfGenerationsFromBaseType( arg_0.c_str());}))
    .function("GetNumberOfGenerationsFromBase", emscripten::optional_override([](vtkSimplePointsWriter& self, const std::string & arg_0) -> int {  return self.GetNumberOfGenerationsFromBase( arg_0.c_str());}))
    .function("GetDecimalPrecision", &vtkSimplePointsWriter::GetDecimalPrecision)
    .function("SetDecimalPrecision", &vtkSimplePointsWriter::SetDecimalPrecision);
}
