// JavaScript wrapper for vtkPImageWriter with embind 
//
// This file was auto-generated using :
/*
node /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/bin/vtkWrapJavaScript.js \
 @/home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkIOParallel.js/vtkIOParallel.js.Release.args \
 -o \
 /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkIOParallel.js/vtkPImageWriterEmbinding.cxx \
 /home/jmh/github/vtk/IO/Parallel/vtkPImageWriter.h
*/
#include "vtkEmbindSmartPointerTrait.h"
#include <emscripten.h>
#include <string>
#include "vtkVariant.h"
#include "vtkObjectBase.h"
#include "vtkIndent.h"
#include "vtkPImageWriter.h"

template<> void emscripten::internal::raw_destructor<vtkPImageWriter>(vtkPImageWriter * ptr){ ptr->Delete(); }
EMSCRIPTEN_BINDINGS(vtkPImageWriter_class) {
  emscripten::class_<vtkPImageWriter, emscripten::base<vtkImageWriter>>("vtkPImageWriter")
    .smart_ptr<vtkSmartPointer<vtkPImageWriter>>("vtkSmartPointer<vtkPImageWriter>")
    .constructor(&vtk::MakeAvtkSmartPointer<vtkPImageWriter>)
    .class_function("IsTypeOf", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkPImageWriter::IsTypeOf( arg_0.c_str());}))
    .function("IsA", emscripten::optional_override([](vtkPImageWriter& self, const std::string & arg_0) -> int {  return self.IsA( arg_0.c_str());}))
    .class_function("SafeDownCast", &vtkPImageWriter::SafeDownCast, emscripten::allow_raw_pointers())
    .function("NewInstance", &vtkPImageWriter::NewInstance, emscripten::allow_raw_pointers())
    .class_function("GetNumberOfGenerationsFromBaseType", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkPImageWriter::GetNumberOfGenerationsFromBaseType( arg_0.c_str());}))
    .function("GetNumberOfGenerationsFromBase", emscripten::optional_override([](vtkPImageWriter& self, const std::string & arg_0) -> int {  return self.GetNumberOfGenerationsFromBase( arg_0.c_str());}))
    .function("SetMemoryLimit", &vtkPImageWriter::SetMemoryLimit)
    .function("GetMemoryLimit", &vtkPImageWriter::GetMemoryLimit);
}
