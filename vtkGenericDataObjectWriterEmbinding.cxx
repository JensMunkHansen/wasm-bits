// JavaScript wrapper for vtkGenericDataObjectWriter with embind 
//
// This file was auto-generated using :
/*
node /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/bin/vtkWrapJavaScript.js \
 @/home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkIOLegacy.js/vtkIOLegacy.js.Release.args \
 -o \
 /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkIOLegacy.js/vtkGenericDataObjectWriterEmbinding.cxx \
 /home/jmh/github/vtk/IO/Legacy/vtkGenericDataObjectWriter.h
*/
#include "vtkEmbindSmartPointerTrait.h"
#include <emscripten.h>
#include <string>
#include "vtkVariant.h"
#include "vtkObjectBase.h"
#include "vtkIndent.h"
#include "vtkGenericDataObjectWriter.h"

template<> void emscripten::internal::raw_destructor<vtkGenericDataObjectWriter>(vtkGenericDataObjectWriter * ptr){ ptr->Delete(); }
EMSCRIPTEN_BINDINGS(vtkGenericDataObjectWriter_class) {
  emscripten::class_<vtkGenericDataObjectWriter, emscripten::base<vtkDataWriter>>("vtkGenericDataObjectWriter")
    .smart_ptr<vtkSmartPointer<vtkGenericDataObjectWriter>>("vtkSmartPointer<vtkGenericDataObjectWriter>")
    .constructor(&vtk::MakeAvtkSmartPointer<vtkGenericDataObjectWriter>)
    .class_function("IsTypeOf", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkGenericDataObjectWriter::IsTypeOf( arg_0.c_str());}))
    .function("IsA", emscripten::optional_override([](vtkGenericDataObjectWriter& self, const std::string & arg_0) -> int {  return self.IsA( arg_0.c_str());}))
    .class_function("SafeDownCast", &vtkGenericDataObjectWriter::SafeDownCast, emscripten::allow_raw_pointers())
    .function("NewInstance", &vtkGenericDataObjectWriter::NewInstance, emscripten::allow_raw_pointers())
    .class_function("GetNumberOfGenerationsFromBaseType", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkGenericDataObjectWriter::GetNumberOfGenerationsFromBaseType( arg_0.c_str());}))
    .function("GetNumberOfGenerationsFromBase", emscripten::optional_override([](vtkGenericDataObjectWriter& self, const std::string & arg_0) -> int {  return self.GetNumberOfGenerationsFromBase( arg_0.c_str());}));
}
