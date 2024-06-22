// JavaScript wrapper for vtkNrrdReader with embind 
//
// This file was auto-generated using :
/*
node /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/bin/vtkWrapJavaScript.js \
 @/home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkIOImage.js/vtkIOImage.js.Release.args \
 -o \
 /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkIOImage.js/vtkNrrdReaderEmbinding.cxx \
 /home/jmh/github/vtk/IO/Image/vtkNrrdReader.h
*/
#include "vtkEmbindSmartPointerTrait.h"
#include <emscripten.h>
#include <string>
#include "vtkVariant.h"
#include "vtkObjectBase.h"
#include "vtkIndent.h"
#include "vtkNrrdReader.h"

template<> void emscripten::internal::raw_destructor<vtkNrrdReader>(vtkNrrdReader * ptr){ ptr->Delete(); }
EMSCRIPTEN_BINDINGS(vtkNrrdReader_class) {
  emscripten::class_<vtkNrrdReader, emscripten::base<vtkImageReader>>("vtkNrrdReader")
    .smart_ptr<vtkSmartPointer<vtkNrrdReader>>("vtkSmartPointer<vtkNrrdReader>")
    .constructor(&vtk::MakeVTKSmartPtr<vtkNrrdReader>)
    .class_function("IsTypeOf", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkNrrdReader::IsTypeOf( arg_0.c_str());}))
    .function("IsA", emscripten::optional_override([](vtkNrrdReader& self, const std::string & arg_0) -> int {  return self.IsA( arg_0.c_str());}))
    .class_function("SafeDownCast", &vtkNrrdReader::SafeDownCast, emscripten::allow_raw_pointers())
    .function("NewInstance", &vtkNrrdReader::NewInstance, emscripten::allow_raw_pointers())
    .class_function("GetNumberOfGenerationsFromBaseType", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkNrrdReader::GetNumberOfGenerationsFromBaseType( arg_0.c_str());}))
    .function("GetNumberOfGenerationsFromBase", emscripten::optional_override([](vtkNrrdReader& self, const std::string & arg_0) -> int {  return self.GetNumberOfGenerationsFromBase( arg_0.c_str());}))
    .function("CanReadFile", emscripten::optional_override([](vtkNrrdReader& self, const std::string & arg_0) -> int {  return self.CanReadFile( arg_0.c_str());}));
}
