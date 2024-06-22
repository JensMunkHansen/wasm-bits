// JavaScript wrapper for vtkOBJReader with embind 
//
// This file was auto-generated using :
/*
node /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/bin/vtkWrapJavaScript.js \
 @/home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkIOGeometry.js/vtkIOGeometry.js.Release.args \
 -o \
 /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkIOGeometry.js/vtkOBJReaderEmbinding.cxx \
 /home/jmh/github/vtk/IO/Geometry/vtkOBJReader.h
*/
#include "vtkEmbindSmartPointerTrait.h"
#include <emscripten.h>
#include <string>
#include "vtkVariant.h"
#include "vtkObjectBase.h"
#include "vtkIndent.h"
#include "vtkResourceStream.h"
#include "vtkOBJReader.h"

template<> void emscripten::internal::raw_destructor<vtkOBJReader>(vtkOBJReader * ptr){ ptr->Delete(); }
EMSCRIPTEN_BINDINGS(vtkOBJReader_class) {
  emscripten::class_<vtkOBJReader, emscripten::base<vtkAbstractPolyDataReader>>("vtkOBJReader")
    .smart_ptr<vtkSmartPointer<vtkOBJReader>>("vtkSmartPointer<vtkOBJReader>")
    .constructor(&vtk::MakeVTKSmartPtr<vtkOBJReader>)
    .class_function("IsTypeOf", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkOBJReader::IsTypeOf( arg_0.c_str());}))
    .function("IsA", emscripten::optional_override([](vtkOBJReader& self, const std::string & arg_0) -> int {  return self.IsA( arg_0.c_str());}))
    .class_function("SafeDownCast", &vtkOBJReader::SafeDownCast, emscripten::allow_raw_pointers())
    .function("NewInstance", &vtkOBJReader::NewInstance, emscripten::allow_raw_pointers())
    .class_function("GetNumberOfGenerationsFromBaseType", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkOBJReader::GetNumberOfGenerationsFromBaseType( arg_0.c_str());}))
    .function("GetNumberOfGenerationsFromBase", emscripten::optional_override([](vtkOBJReader& self, const std::string & arg_0) -> int {  return self.GetNumberOfGenerationsFromBase( arg_0.c_str());}))
    .function("GetComment", emscripten::optional_override([](vtkOBJReader& self) -> std::string {  return self.GetComment();}))
    .function("SetStream", &vtkOBJReader::SetStream, emscripten::allow_raw_pointers())
    .function("GetStream", &vtkOBJReader::GetStream, emscripten::allow_raw_pointers());
}
