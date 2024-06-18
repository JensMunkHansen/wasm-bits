// JavaScript wrapper for vtkPLYReader with embind 
//
// This file was auto-generated using :
/*
node /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/bin/vtkWrapJavaScript.js \
 @/home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkIOPLY.js/vtkIOPLY.js.Release.args \
 -o \
 /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkIOPLY.js/vtkPLYReaderEmbinding.cxx \
 /home/jmh/github/vtk/IO/PLY/vtkPLYReader.h
*/
#include "vtkEmbindSmartPointerTrait.h"
#include <emscripten.h>
#include <string>
#include "vtkVariant.h"
#include "vtkObjectBase.h"
#include "vtkIndent.h"
#include "vtkStringArray.h"
#include "vtkResourceStream.h"
#include "vtkPLYReader.h"

template<> void emscripten::internal::raw_destructor<vtkPLYReader>(vtkPLYReader * ptr){ ptr->Delete(); }
EMSCRIPTEN_BINDINGS(vtkPLYReader_class) {
  emscripten::class_<vtkPLYReader, emscripten::base<vtkAbstractPolyDataReader>>("vtkPLYReader")
    .smart_ptr<vtkSmartPointer<vtkPLYReader>>("vtkSmartPointer<vtkPLYReader>")
    .constructor(&vtk::MakeAvtkSmartPointer<vtkPLYReader>)
    .class_function("IsTypeOf", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkPLYReader::IsTypeOf( arg_0.c_str());}))
    .function("IsA", emscripten::optional_override([](vtkPLYReader& self, const std::string & arg_0) -> int {  return self.IsA( arg_0.c_str());}))
    .class_function("SafeDownCast", &vtkPLYReader::SafeDownCast, emscripten::allow_raw_pointers())
    .function("NewInstance", &vtkPLYReader::NewInstance, emscripten::allow_raw_pointers())
    .class_function("GetNumberOfGenerationsFromBaseType", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkPLYReader::GetNumberOfGenerationsFromBaseType( arg_0.c_str());}))
    .function("GetNumberOfGenerationsFromBase", emscripten::optional_override([](vtkPLYReader& self, const std::string & arg_0) -> int {  return self.GetNumberOfGenerationsFromBase( arg_0.c_str());}))
    .class_function("CanReadFile", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkPLYReader::CanReadFile( arg_0.c_str());}))
    .function("GetComments", &vtkPLYReader::GetComments, emscripten::allow_raw_pointers())
    .function("GetFaceTextureTolerance", &vtkPLYReader::GetFaceTextureTolerance)
    .function("SetFaceTextureTolerance", &vtkPLYReader::SetFaceTextureTolerance)
    .function("SetReadFromInputString", &vtkPLYReader::SetReadFromInputString)
    .function("GetReadFromInputString", &vtkPLYReader::GetReadFromInputString)
    .function("ReadFromInputStringOn", &vtkPLYReader::ReadFromInputStringOn)
    .function("ReadFromInputStringOff", &vtkPLYReader::ReadFromInputStringOff)
    .function("SetInputString", &vtkPLYReader::SetInputString)
    .function("SetStream", &vtkPLYReader::SetStream, emscripten::allow_raw_pointers())
    .function("GetStream", &vtkPLYReader::GetStream, emscripten::allow_raw_pointers())
    .function("SetReadFromInputStream", &vtkPLYReader::SetReadFromInputStream)
    .function("GetReadFromInputStream", &vtkPLYReader::GetReadFromInputStream)
    .function("ReadFromInputStreamOn", &vtkPLYReader::ReadFromInputStreamOn)
    .function("ReadFromInputStreamOff", &vtkPLYReader::ReadFromInputStreamOff)
    .function("GetDuplicatePointsForFaceTexture", &vtkPLYReader::GetDuplicatePointsForFaceTexture)
    .function("SetDuplicatePointsForFaceTexture", &vtkPLYReader::SetDuplicatePointsForFaceTexture);
}
