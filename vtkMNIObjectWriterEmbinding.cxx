// JavaScript wrapper for vtkMNIObjectWriter with embind 
//
// This file was auto-generated using :
/*
node /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/bin/vtkWrapJavaScript.js \
 @/home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkIOMINC.js/vtkIOMINC.js.Release.args \
 -o \
 /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkIOMINC.js/vtkMNIObjectWriterEmbinding.cxx \
 /home/jmh/github/vtk/IO/MINC/vtkMNIObjectWriter.h
*/
#include "vtkEmbindSmartPointerTrait.h"
#include <emscripten.h>
#include <string>
#include "vtkVariant.h"
#include "vtkObjectBase.h"
#include "vtkIndent.h"
#include "vtkProperty.h"
#include "vtkMapper.h"
#include "vtkLookupTable.h"
#include "vtkPolyData.h"
#include "vtkMNIObjectWriter.h"

template<> void emscripten::internal::raw_destructor<vtkMNIObjectWriter>(vtkMNIObjectWriter * ptr){ ptr->Delete(); }
EMSCRIPTEN_BINDINGS(vtkMNIObjectWriter_class) {
  emscripten::class_<vtkMNIObjectWriter, emscripten::base<vtkWriter>>("vtkMNIObjectWriter")
    .smart_ptr<vtkSmartPointer<vtkMNIObjectWriter>>("vtkSmartPointer<vtkMNIObjectWriter>")
    .constructor(&vtk::MakeAvtkSmartPointer<vtkMNIObjectWriter>)
    .class_function("IsTypeOf", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkMNIObjectWriter::IsTypeOf( arg_0.c_str());}))
    .function("IsA", emscripten::optional_override([](vtkMNIObjectWriter& self, const std::string & arg_0) -> int {  return self.IsA( arg_0.c_str());}))
    .class_function("SafeDownCast", &vtkMNIObjectWriter::SafeDownCast, emscripten::allow_raw_pointers())
    .function("NewInstance", &vtkMNIObjectWriter::NewInstance, emscripten::allow_raw_pointers())
    .class_function("GetNumberOfGenerationsFromBaseType", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkMNIObjectWriter::GetNumberOfGenerationsFromBaseType( arg_0.c_str());}))
    .function("GetNumberOfGenerationsFromBase", emscripten::optional_override([](vtkMNIObjectWriter& self, const std::string & arg_0) -> int {  return self.GetNumberOfGenerationsFromBase( arg_0.c_str());}))
    .function("GetFileExtensions", emscripten::optional_override([](vtkMNIObjectWriter& self) -> std::string {  return self.GetFileExtensions();}))
    .function("GetDescriptiveName", emscripten::optional_override([](vtkMNIObjectWriter& self) -> std::string {  return self.GetDescriptiveName();}))
    .function("SetProperty", &vtkMNIObjectWriter::SetProperty, emscripten::allow_raw_pointers())
    .function("GetProperty", &vtkMNIObjectWriter::GetProperty, emscripten::allow_raw_pointers())
    .function("SetMapper", &vtkMNIObjectWriter::SetMapper, emscripten::allow_raw_pointers())
    .function("GetMapper", &vtkMNIObjectWriter::GetMapper, emscripten::allow_raw_pointers())
    .function("SetLookupTable", &vtkMNIObjectWriter::SetLookupTable, emscripten::allow_raw_pointers())
    .function("GetLookupTable", &vtkMNIObjectWriter::GetLookupTable, emscripten::allow_raw_pointers())
    .function("GetInput", emscripten::select_overload<vtkPolyData*(vtkMNIObjectWriter&)>([](vtkMNIObjectWriter& self) -> vtkPolyData* { return self.GetInput(); }), emscripten::allow_raw_pointers())
    .function("GetInput", emscripten::select_overload<vtkPolyData*(vtkMNIObjectWriter&, int)>([](vtkMNIObjectWriter& self, int arg_0) -> vtkPolyData* { return self.GetInput( arg_0); }), emscripten::allow_raw_pointers())
    .function("SetFileName", emscripten::optional_override([](vtkMNIObjectWriter& self, const std::string & arg_0) -> void {  return self.SetFileName( arg_0.c_str());}))
    .function("GetFileName", emscripten::optional_override([](vtkMNIObjectWriter& self) -> std::string {  return self.GetFileName();}))
    .function("SetFileType", &vtkMNIObjectWriter::SetFileType)
    .function("GetFileTypeMinValue", &vtkMNIObjectWriter::GetFileTypeMinValue)
    .function("GetFileTypeMaxValue", &vtkMNIObjectWriter::GetFileTypeMaxValue)
    .function("GetFileType", &vtkMNIObjectWriter::GetFileType)
    .function("SetFileTypeToASCII", &vtkMNIObjectWriter::SetFileTypeToASCII)
    .function("SetFileTypeToBinary", &vtkMNIObjectWriter::SetFileTypeToBinary);
}
