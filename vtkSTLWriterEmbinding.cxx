// JavaScript wrapper for vtkSTLWriter with embind 
//
// This file was auto-generated using :
/*
node /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/bin/vtkWrapJavaScript.js \
 @/home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkIOGeometry.js/vtkIOGeometry.js.Release.args \
 -o \
 /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkIOGeometry.js/vtkSTLWriterEmbinding.cxx \
 /home/jmh/github/vtk/IO/Geometry/vtkSTLWriter.h
*/
#include "vtkEmbindSmartPointerTrait.h"
#include <emscripten.h>
#include <string>
#include "vtkVariant.h"
#include "vtkObjectBase.h"
#include "vtkIndent.h"
#include "vtkPolyData.h"
#include "vtkUnsignedCharArray.h"
#include "vtkSTLWriter.h"

template<> void emscripten::internal::raw_destructor<vtkSTLWriter>(vtkSTLWriter * ptr){ ptr->Delete(); }
EMSCRIPTEN_BINDINGS(vtkSTLWriter_class) {
  emscripten::class_<vtkSTLWriter, emscripten::base<vtkWriter>>("vtkSTLWriter")
    .smart_ptr<vtkSmartPointer<vtkSTLWriter>>("vtkSmartPointer<vtkSTLWriter>")
    .constructor(&vtk::MakeAvtkSmartPointer<vtkSTLWriter>)
    .class_function("IsTypeOf", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkSTLWriter::IsTypeOf( arg_0.c_str());}))
    .function("IsA", emscripten::optional_override([](vtkSTLWriter& self, const std::string & arg_0) -> int {  return self.IsA( arg_0.c_str());}))
    .class_function("SafeDownCast", &vtkSTLWriter::SafeDownCast, emscripten::allow_raw_pointers())
    .function("NewInstance", &vtkSTLWriter::NewInstance, emscripten::allow_raw_pointers())
    .class_function("GetNumberOfGenerationsFromBaseType", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkSTLWriter::GetNumberOfGenerationsFromBaseType( arg_0.c_str());}))
    .function("GetNumberOfGenerationsFromBase", emscripten::optional_override([](vtkSTLWriter& self, const std::string & arg_0) -> int {  return self.GetNumberOfGenerationsFromBase( arg_0.c_str());}))
    .function("GetInput", emscripten::select_overload<vtkPolyData*(vtkSTLWriter&)>([](vtkSTLWriter& self) -> vtkPolyData* { return self.GetInput(); }), emscripten::allow_raw_pointers())
    .function("GetInput", emscripten::select_overload<vtkPolyData*(vtkSTLWriter&, int)>([](vtkSTLWriter& self, int arg_0) -> vtkPolyData* { return self.GetInput( arg_0); }), emscripten::allow_raw_pointers())
    .function("SetFileName", emscripten::optional_override([](vtkSTLWriter& self, const std::string & arg_0) -> void {  return self.SetFileName( arg_0.c_str());}))
    .function("GetFileName", emscripten::optional_override([](vtkSTLWriter& self) -> std::string {  return self.GetFileName();}))
    .function("SetHeader", emscripten::optional_override([](vtkSTLWriter& self, const std::string & arg_0) -> void {  return self.SetHeader( arg_0.c_str());}))
    .function("GetHeader", emscripten::optional_override([](vtkSTLWriter& self) -> std::string {  return self.GetHeader();}))
    .function("SetBinaryHeader", &vtkSTLWriter::SetBinaryHeader, emscripten::allow_raw_pointers())
    .function("GetBinaryHeader", &vtkSTLWriter::GetBinaryHeader, emscripten::allow_raw_pointers())
    .function("SetFileType", &vtkSTLWriter::SetFileType)
    .function("GetFileTypeMinValue", &vtkSTLWriter::GetFileTypeMinValue)
    .function("GetFileTypeMaxValue", &vtkSTLWriter::GetFileTypeMaxValue)
    .function("GetFileType", &vtkSTLWriter::GetFileType)
    .function("SetFileTypeToASCII", &vtkSTLWriter::SetFileTypeToASCII)
    .function("SetFileTypeToBinary", &vtkSTLWriter::SetFileTypeToBinary);
}
