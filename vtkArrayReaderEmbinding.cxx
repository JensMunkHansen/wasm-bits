// JavaScript wrapper for vtkArrayReader with embind 
//
// This file was auto-generated using :
/*
node /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/bin/vtkWrapJavaScript.js \
 @/home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkIOCore.js/vtkIOCore.js.Release.args \
 -o \
 /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkIOCore.js/vtkArrayReaderEmbinding.cxx \
 /home/jmh/github/vtk/IO/Core/vtkArrayReader.h
*/
#include "vtkEmbindSmartPointerTrait.h"
#include <emscripten.h>
#include <string>
#include "vtkVariant.h"
#include "vtkObjectBase.h"
#include "vtkIndent.h"
#include "vtkStdString.h"
#include "vtkArray.h"
#include "vtkArrayReader.h"

template<> void emscripten::internal::raw_destructor<vtkArrayReader>(vtkArrayReader * ptr){ ptr->Delete(); }
EMSCRIPTEN_BINDINGS(vtkArrayReader_class) {
  emscripten::class_<vtkArrayReader, emscripten::base<vtkArrayDataAlgorithm>>("vtkArrayReader")
    .smart_ptr<vtkSmartPointer<vtkArrayReader>>("vtkSmartPointer<vtkArrayReader>")
    .constructor(&vtk::MakeAvtkSmartPointer<vtkArrayReader>)
    .class_function("IsTypeOf", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkArrayReader::IsTypeOf( arg_0.c_str());}))
    .function("IsA", emscripten::optional_override([](vtkArrayReader& self, const std::string & arg_0) -> int {  return self.IsA( arg_0.c_str());}))
    .class_function("SafeDownCast", &vtkArrayReader::SafeDownCast, emscripten::allow_raw_pointers())
    .function("NewInstance", &vtkArrayReader::NewInstance, emscripten::allow_raw_pointers())
    .class_function("GetNumberOfGenerationsFromBaseType", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkArrayReader::GetNumberOfGenerationsFromBaseType( arg_0.c_str());}))
    .function("GetNumberOfGenerationsFromBase", emscripten::optional_override([](vtkArrayReader& self, const std::string & arg_0) -> int {  return self.GetNumberOfGenerationsFromBase( arg_0.c_str());}))
    .function("GetFileName", emscripten::optional_override([](vtkArrayReader& self) -> std::string {  return self.GetFileName();}))
    .function("SetFileName", emscripten::optional_override([](vtkArrayReader& self, const std::string & arg_0) -> void {  return self.SetFileName( arg_0.c_str());}))
    .function("SetInputString", &vtkArrayReader::SetInputString)
    .function("GetInputString", &vtkArrayReader::GetInputString)
    .function("SetReadFromInputString", &vtkArrayReader::SetReadFromInputString)
    .function("GetReadFromInputString", &vtkArrayReader::GetReadFromInputString)
    .function("ReadFromInputStringOn", &vtkArrayReader::ReadFromInputStringOn)
    .function("ReadFromInputStringOff", &vtkArrayReader::ReadFromInputStringOff)
    .class_function("Read", emscripten::select_overload<vtkArray*( const vtkStdString&)>([]( const vtkStdString& arg_0) -> vtkArray* { return vtkArrayReader::Read( arg_0); }), emscripten::allow_raw_pointers());
}
