// JavaScript wrapper for vtkThreadedImageWriter with embind 
//
// This file was auto-generated using :
/*
node /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/bin/vtkWrapJavaScript.js \
 @/home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkIOAsynchronous.js/vtkIOAsynchronous.js.Release.args \
 -o \
 /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkIOAsynchronous.js/vtkThreadedImageWriterEmbinding.cxx \
 /home/jmh/github/vtk/IO/Asynchronous/vtkThreadedImageWriter.h
*/
#include "vtkEmbindSmartPointerTrait.h"
#include <emscripten.h>
#include <string>
#include "vtkVariant.h"
#include "vtkObjectBase.h"
#include "vtkIndent.h"
#include "vtkImageData.h"
#include "vtkThreadedImageWriter.h"

template<> void emscripten::internal::raw_destructor<vtkThreadedImageWriter>(vtkThreadedImageWriter * ptr){ ptr->Delete(); }
EMSCRIPTEN_BINDINGS(vtkThreadedImageWriter_class) {
  emscripten::class_<vtkThreadedImageWriter, emscripten::base<vtkObject>>("vtkThreadedImageWriter")
    .smart_ptr<vtkSmartPointer<vtkThreadedImageWriter>>("vtkSmartPointer<vtkThreadedImageWriter>")
    .constructor(&vtk::MakeAvtkSmartPointer<vtkThreadedImageWriter>)
    .class_function("IsTypeOf", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkThreadedImageWriter::IsTypeOf( arg_0.c_str());}))
    .function("IsA", emscripten::optional_override([](vtkThreadedImageWriter& self, const std::string & arg_0) -> int {  return self.IsA( arg_0.c_str());}))
    .class_function("SafeDownCast", &vtkThreadedImageWriter::SafeDownCast, emscripten::allow_raw_pointers())
    .function("NewInstance", &vtkThreadedImageWriter::NewInstance, emscripten::allow_raw_pointers())
    .class_function("GetNumberOfGenerationsFromBaseType", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkThreadedImageWriter::GetNumberOfGenerationsFromBaseType( arg_0.c_str());}))
    .function("GetNumberOfGenerationsFromBase", emscripten::optional_override([](vtkThreadedImageWriter& self, const std::string & arg_0) -> int {  return self.GetNumberOfGenerationsFromBase( arg_0.c_str());}))
    .function("Initialize", &vtkThreadedImageWriter::Initialize)
    .function("EncodeAndWrite", emscripten::optional_override([](vtkThreadedImageWriter& self, vtkImageData* arg_0, const std::string & arg_1) -> void {  return self.EncodeAndWrite( arg_0, arg_1.c_str());}), emscripten::allow_raw_pointers())
    .function("SetMaxThreads", &vtkThreadedImageWriter::SetMaxThreads)
    .function("GetMaxThreads", &vtkThreadedImageWriter::GetMaxThreads)
    .function("Finalize", &vtkThreadedImageWriter::Finalize);
}
