// JavaScript wrapper for vtkOFFReader with embind 
//
// This file was auto-generated using :
/*
node /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/bin/vtkWrapJavaScript.js \
 @/home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkIOGeometry.js/vtkIOGeometry.js.Release.args \
 -o \
 /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkIOGeometry.js/vtkOFFReaderEmbinding.cxx \
 /home/jmh/github/vtk/IO/Geometry/vtkOFFReader.h
*/
#include "vtkEmbindSmartPointerTrait.h"
#include <emscripten.h>
#include <string>
#include "vtkVariant.h"
#include "vtkObjectBase.h"
#include "vtkResourceStream.h"
#include "vtkOFFReader.h"

template<> void emscripten::internal::raw_destructor<vtkOFFReader>(vtkOFFReader * ptr){ ptr->Delete(); }
EMSCRIPTEN_BINDINGS(vtkOFFReader_class) {
  emscripten::class_<vtkOFFReader, emscripten::base<vtkAbstractPolyDataReader>>("vtkOFFReader")
    .smart_ptr<vtkSmartPointer<vtkOFFReader>>("vtkSmartPointer<vtkOFFReader>")
    .constructor(&vtk::MakeVTKSmartPtr<vtkOFFReader>)
    .class_function("IsTypeOf", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkOFFReader::IsTypeOf( arg_0.c_str());}))
    .function("IsA", emscripten::optional_override([](vtkOFFReader& self, const std::string & arg_0) -> int {  return self.IsA( arg_0.c_str());}))
    .class_function("SafeDownCast", &vtkOFFReader::SafeDownCast, emscripten::allow_raw_pointers())
    .function("NewInstance", &vtkOFFReader::NewInstance, emscripten::allow_raw_pointers())
    .class_function("GetNumberOfGenerationsFromBaseType", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkOFFReader::GetNumberOfGenerationsFromBaseType( arg_0.c_str());}))
    .function("GetNumberOfGenerationsFromBase", emscripten::optional_override([](vtkOFFReader& self, const std::string & arg_0) -> int {  return self.GetNumberOfGenerationsFromBase( arg_0.c_str());}))
    .function("SetStream", &vtkOFFReader::SetStream, emscripten::allow_raw_pointers())
    .function("GetStream", &vtkOFFReader::GetStream, emscripten::allow_raw_pointers());
}
