// JavaScript wrapper for vtkArrayDataReader with embind 
//
// This file was auto-generated using :
/*
node /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/bin/vtkWrapJavaScript.js \
 @/home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkIOCore.js/vtkIOCore.js.Release.args \
 -o \
 /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkIOCore.js/vtkArrayDataReaderEmbinding.cxx \
 /home/jmh/github/vtk/IO/Core/vtkArrayDataReader.h
*/
#include "vtkEmbindSmartPointerTrait.h"
#include <emscripten.h>
#include <string>
#include "vtkVariant.h"
#include "vtkObjectBase.h"
#include "vtkIndent.h"
#include "vtkStdString.h"
#include "vtkArrayData.h"
#include "vtkArrayDataReader.h"

template<> void emscripten::internal::raw_destructor<vtkArrayDataReader>(vtkArrayDataReader * ptr){ ptr->Delete(); }
EMSCRIPTEN_BINDINGS(vtkArrayDataReader_class) {
  emscripten::class_<vtkArrayDataReader, emscripten::base<vtkArrayDataAlgorithm>>("vtkArrayDataReader")
    .smart_ptr<vtkSmartPointer<vtkArrayDataReader>>("vtkSmartPointer<vtkArrayDataReader>")
    .constructor(&vtk::MakeAvtkSmartPointer<vtkArrayDataReader>)
    .class_function("IsTypeOf", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkArrayDataReader::IsTypeOf( arg_0.c_str());}))
    .function("IsA", emscripten::optional_override([](vtkArrayDataReader& self, const std::string & arg_0) -> int {  return self.IsA( arg_0.c_str());}))
    .class_function("SafeDownCast", &vtkArrayDataReader::SafeDownCast, emscripten::allow_raw_pointers())
    .function("NewInstance", &vtkArrayDataReader::NewInstance, emscripten::allow_raw_pointers())
    .class_function("GetNumberOfGenerationsFromBaseType", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkArrayDataReader::GetNumberOfGenerationsFromBaseType( arg_0.c_str());}))
    .function("GetNumberOfGenerationsFromBase", emscripten::optional_override([](vtkArrayDataReader& self, const std::string & arg_0) -> int {  return self.GetNumberOfGenerationsFromBase( arg_0.c_str());}))
    .function("GetFileName", emscripten::optional_override([](vtkArrayDataReader& self) -> std::string {  return self.GetFileName();}))
    .function("SetFileName", emscripten::optional_override([](vtkArrayDataReader& self, const std::string & arg_0) -> void {  return self.SetFileName( arg_0.c_str());}))
    .function("SetInputString", &vtkArrayDataReader::SetInputString)
    .function("GetInputString", &vtkArrayDataReader::GetInputString)
    .function("SetReadFromInputString", &vtkArrayDataReader::SetReadFromInputString)
    .function("GetReadFromInputString", &vtkArrayDataReader::GetReadFromInputString)
    .function("ReadFromInputStringOn", &vtkArrayDataReader::ReadFromInputStringOn)
    .function("ReadFromInputStringOff", &vtkArrayDataReader::ReadFromInputStringOff)
    .class_function("Read", emscripten::select_overload<vtkArrayData*( const vtkStdString&)>([]( const vtkStdString& arg_0) -> vtkArrayData* { return vtkArrayDataReader::Read( arg_0); }), emscripten::allow_raw_pointers());
}
