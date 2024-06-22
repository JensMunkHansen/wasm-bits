// JavaScript wrapper for vtkMRCReader with embind 
//
// This file was auto-generated using :
/*
node /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/bin/vtkWrapJavaScript.js \
 @/home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkIOImage.js/vtkIOImage.js.Release.args \
 -o \
 /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkIOImage.js/vtkMRCReaderEmbinding.cxx \
 /home/jmh/github/vtk/IO/Image/vtkMRCReader.h
*/
#include "vtkEmbindSmartPointerTrait.h"
#include <emscripten.h>
#include <string>
#include "vtkVariant.h"
#include "vtkObjectBase.h"
#include "vtkIndent.h"
#include "vtkMRCReader.h"

template<> void emscripten::internal::raw_destructor<vtkMRCReader>(vtkMRCReader * ptr){ ptr->Delete(); }
EMSCRIPTEN_BINDINGS(vtkMRCReader_class) {
  emscripten::class_<vtkMRCReader, emscripten::base<vtkImageAlgorithm>>("vtkMRCReader")
    .smart_ptr<vtkSmartPointer<vtkMRCReader>>("vtkSmartPointer<vtkMRCReader>")
    .constructor(&vtk::MakeVTKSmartPtr<vtkMRCReader>)
    .class_function("IsTypeOf", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkMRCReader::IsTypeOf( arg_0.c_str());}))
    .function("IsA", emscripten::optional_override([](vtkMRCReader& self, const std::string & arg_0) -> int {  return self.IsA( arg_0.c_str());}))
    .class_function("SafeDownCast", &vtkMRCReader::SafeDownCast, emscripten::allow_raw_pointers())
    .function("NewInstance", &vtkMRCReader::NewInstance, emscripten::allow_raw_pointers())
    .class_function("GetNumberOfGenerationsFromBaseType", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkMRCReader::GetNumberOfGenerationsFromBaseType( arg_0.c_str());}))
    .function("GetNumberOfGenerationsFromBase", emscripten::optional_override([](vtkMRCReader& self, const std::string & arg_0) -> int {  return self.GetNumberOfGenerationsFromBase( arg_0.c_str());}))
    .function("SetFileName", emscripten::optional_override([](vtkMRCReader& self, const std::string & arg_0) -> void {  return self.SetFileName( arg_0.c_str());}))
    .function("GetFileName", emscripten::optional_override([](vtkMRCReader& self) -> std::string {  return self.GetFileName();}));
}
