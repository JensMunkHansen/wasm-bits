// JavaScript wrapper for vtkPNMWriter with embind 
//
// This file was auto-generated using :
/*
node /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/bin/vtkWrapJavaScript.js \
 @/home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkIOImage.js/vtkIOImage.js.Release.args \
 -o \
 /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkIOImage.js/vtkPNMWriterEmbinding.cxx \
 /home/jmh/github/vtk/IO/Image/vtkPNMWriter.h
*/
#include "vtkEmbindSmartPointerTrait.h"
#include <emscripten.h>
#include <string>
#include "vtkVariant.h"
#include "vtkObjectBase.h"
#include "vtkIndent.h"
#include "vtkPNMWriter.h"

template<> void emscripten::internal::raw_destructor<vtkPNMWriter>(vtkPNMWriter * ptr){ ptr->Delete(); }
EMSCRIPTEN_BINDINGS(vtkPNMWriter_class) {
  emscripten::class_<vtkPNMWriter, emscripten::base<vtkImageWriter>>("vtkPNMWriter")
    .smart_ptr<vtkSmartPointer<vtkPNMWriter>>("vtkSmartPointer<vtkPNMWriter>")
    .constructor(&vtk::MakeVTKSmartPtr<vtkPNMWriter>)
    .class_function("IsTypeOf", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkPNMWriter::IsTypeOf( arg_0.c_str());}))
    .function("IsA", emscripten::optional_override([](vtkPNMWriter& self, const std::string & arg_0) -> int {  return self.IsA( arg_0.c_str());}))
    .class_function("SafeDownCast", &vtkPNMWriter::SafeDownCast, emscripten::allow_raw_pointers())
    .function("NewInstance", &vtkPNMWriter::NewInstance, emscripten::allow_raw_pointers())
    .class_function("GetNumberOfGenerationsFromBaseType", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkPNMWriter::GetNumberOfGenerationsFromBaseType( arg_0.c_str());}))
    .function("GetNumberOfGenerationsFromBase", emscripten::optional_override([](vtkPNMWriter& self, const std::string & arg_0) -> int {  return self.GetNumberOfGenerationsFromBase( arg_0.c_str());}));
}
