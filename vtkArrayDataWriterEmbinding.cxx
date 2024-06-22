// JavaScript wrapper for vtkArrayDataWriter with embind 
//
// This file was auto-generated using :
/*
node /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/bin/vtkWrapJavaScript.js \
 @/home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkIOCore.js/vtkIOCore.js.Release.args \
 -o \
 /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkIOCore.js/vtkArrayDataWriterEmbinding.cxx \
 /home/jmh/github/vtk/IO/Core/vtkArrayDataWriter.h
*/
#include "vtkEmbindSmartPointerTrait.h"
#include <emscripten.h>
#include <string>
#include "vtkVariant.h"
#include "vtkObjectBase.h"
#include "vtkIndent.h"
#include "vtkStdString.h"
#include "vtkArrayData.h"
#include "vtkArrayDataWriter.h"

template<> void emscripten::internal::raw_destructor<vtkArrayDataWriter>(vtkArrayDataWriter * ptr){ ptr->Delete(); }
EMSCRIPTEN_BINDINGS(vtkArrayDataWriter_class) {
  emscripten::class_<vtkArrayDataWriter, emscripten::base<vtkWriter>>("vtkArrayDataWriter")
    .smart_ptr<vtkSmartPointer<vtkArrayDataWriter>>("vtkSmartPointer<vtkArrayDataWriter>")
    .constructor(&vtk::MakeVTKSmartPtr<vtkArrayDataWriter>)
    .class_function("IsTypeOf", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkArrayDataWriter::IsTypeOf( arg_0.c_str());}))
    .function("IsA", emscripten::optional_override([](vtkArrayDataWriter& self, const std::string & arg_0) -> int {  return self.IsA( arg_0.c_str());}))
    .class_function("SafeDownCast", &vtkArrayDataWriter::SafeDownCast, emscripten::allow_raw_pointers())
    .function("NewInstance", &vtkArrayDataWriter::NewInstance, emscripten::allow_raw_pointers())
    .class_function("GetNumberOfGenerationsFromBaseType", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkArrayDataWriter::GetNumberOfGenerationsFromBaseType( arg_0.c_str());}))
    .function("GetNumberOfGenerationsFromBase", emscripten::optional_override([](vtkArrayDataWriter& self, const std::string & arg_0) -> int {  return self.GetNumberOfGenerationsFromBase( arg_0.c_str());}))
    .function("SetFileName", emscripten::optional_override([](vtkArrayDataWriter& self, const std::string & arg_0) -> void {  return self.SetFileName( arg_0.c_str());}))
    .function("GetFileName", emscripten::optional_override([](vtkArrayDataWriter& self) -> std::string {  return self.GetFileName();}))
    .function("SetBinary", &vtkArrayDataWriter::SetBinary)
    .function("GetBinary", &vtkArrayDataWriter::GetBinary)
    .function("BinaryOn", &vtkArrayDataWriter::BinaryOn)
    .function("BinaryOff", &vtkArrayDataWriter::BinaryOff)
    .function("GetOutputString", &vtkArrayDataWriter::GetOutputString)
    .function("SetWriteToOutputString", &vtkArrayDataWriter::SetWriteToOutputString)
    .function("GetWriteToOutputString", &vtkArrayDataWriter::GetWriteToOutputString)
    .function("WriteToOutputStringOn", &vtkArrayDataWriter::WriteToOutputStringOn)
    .function("WriteToOutputStringOff", &vtkArrayDataWriter::WriteToOutputStringOff)
    .function("Write", emscripten::select_overload<int(vtkArrayDataWriter&)>([](vtkArrayDataWriter& self) -> int { return self.Write(); }))
    .function("Write", emscripten::select_overload<bool(vtkArrayDataWriter&, const vtkStdString&, bool)>([](vtkArrayDataWriter& self, const vtkStdString& arg_0, bool arg_1) -> bool { return self.Write( arg_0, arg_1); }))
    .class_function("Write", emscripten::select_overload<vtkStdString( vtkArrayData*, bool)>([]( vtkArrayData* arg_0, bool arg_1) -> vtkStdString { return vtkArrayDataWriter::Write( arg_0, arg_1); }), emscripten::allow_raw_pointers())
    .class_function("Write", emscripten::select_overload<bool( vtkArrayData*, const vtkStdString&, bool)>([]( vtkArrayData* arg_0, const vtkStdString& arg_1, bool arg_2) -> bool { return vtkArrayDataWriter::Write( arg_0, arg_1, arg_2); }), emscripten::allow_raw_pointers())
    .function("Write", emscripten::select_overload<vtkStdString(vtkArrayDataWriter&, bool)>([](vtkArrayDataWriter& self, bool arg_0) -> vtkStdString { return self.Write( arg_0); }));
}
