// JavaScript wrapper for vtkArrayWriter with embind 
//
// This file was auto-generated using :
/*
node /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/bin/vtkWrapJavaScript.js \
 @/home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkIOCore.js/vtkIOCore.js.Release.args \
 -o \
 /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkIOCore.js/vtkArrayWriterEmbinding.cxx \
 /home/jmh/github/vtk/IO/Core/vtkArrayWriter.h
*/
#include "vtkEmbindSmartPointerTrait.h"
#include <emscripten.h>
#include <string>
#include "vtkVariant.h"
#include "vtkObjectBase.h"
#include "vtkIndent.h"
#include "vtkStdString.h"
#include "vtkArray.h"
#include "vtkArrayWriter.h"

template<> void emscripten::internal::raw_destructor<vtkArrayWriter>(vtkArrayWriter * ptr){ ptr->Delete(); }
EMSCRIPTEN_BINDINGS(vtkArrayWriter_class) {
  emscripten::class_<vtkArrayWriter, emscripten::base<vtkWriter>>("vtkArrayWriter")
    .smart_ptr<vtkSmartPointer<vtkArrayWriter>>("vtkSmartPointer<vtkArrayWriter>")
    .constructor(&vtk::MakeVTKSmartPtr<vtkArrayWriter>)
    .class_function("IsTypeOf", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkArrayWriter::IsTypeOf( arg_0.c_str());}))
    .function("IsA", emscripten::optional_override([](vtkArrayWriter& self, const std::string & arg_0) -> int {  return self.IsA( arg_0.c_str());}))
    .class_function("SafeDownCast", &vtkArrayWriter::SafeDownCast, emscripten::allow_raw_pointers())
    .function("NewInstance", &vtkArrayWriter::NewInstance, emscripten::allow_raw_pointers())
    .class_function("GetNumberOfGenerationsFromBaseType", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkArrayWriter::GetNumberOfGenerationsFromBaseType( arg_0.c_str());}))
    .function("GetNumberOfGenerationsFromBase", emscripten::optional_override([](vtkArrayWriter& self, const std::string & arg_0) -> int {  return self.GetNumberOfGenerationsFromBase( arg_0.c_str());}))
    .function("SetFileName", emscripten::optional_override([](vtkArrayWriter& self, const std::string & arg_0) -> void {  return self.SetFileName( arg_0.c_str());}))
    .function("GetFileName", emscripten::optional_override([](vtkArrayWriter& self) -> std::string {  return self.GetFileName();}))
    .function("SetBinary", &vtkArrayWriter::SetBinary)
    .function("GetBinary", &vtkArrayWriter::GetBinary)
    .function("BinaryOn", &vtkArrayWriter::BinaryOn)
    .function("BinaryOff", &vtkArrayWriter::BinaryOff)
    .function("GetOutputString", &vtkArrayWriter::GetOutputString)
    .function("SetWriteToOutputString", &vtkArrayWriter::SetWriteToOutputString)
    .function("GetWriteToOutputString", &vtkArrayWriter::GetWriteToOutputString)
    .function("WriteToOutputStringOn", &vtkArrayWriter::WriteToOutputStringOn)
    .function("WriteToOutputStringOff", &vtkArrayWriter::WriteToOutputStringOff)
    .function("Write", emscripten::select_overload<int(vtkArrayWriter&)>([](vtkArrayWriter& self) -> int { return self.Write(); }))
    .function("Write", emscripten::select_overload<bool(vtkArrayWriter&, const vtkStdString&, bool)>([](vtkArrayWriter& self, const vtkStdString& arg_0, bool arg_1) -> bool { return self.Write( arg_0, arg_1); }))
    .class_function("Write", emscripten::select_overload<vtkStdString( vtkArray*, bool)>([]( vtkArray* arg_0, bool arg_1) -> vtkStdString { return vtkArrayWriter::Write( arg_0, arg_1); }), emscripten::allow_raw_pointers())
    .class_function("Write", emscripten::select_overload<bool( vtkArray*, const vtkStdString&, bool)>([]( vtkArray* arg_0, const vtkStdString& arg_1, bool arg_2) -> bool { return vtkArrayWriter::Write( arg_0, arg_1, arg_2); }), emscripten::allow_raw_pointers())
    .function("Write", emscripten::select_overload<vtkStdString(vtkArrayWriter&, bool)>([](vtkArrayWriter& self, bool arg_0) -> vtkStdString { return self.Write( arg_0); }));
}
