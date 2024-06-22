// JavaScript wrapper for vtkBYUWriter with embind 
//
// This file was auto-generated using :
/*
node /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/bin/vtkWrapJavaScript.js \
 @/home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkIOGeometry.js/vtkIOGeometry.js.Release.args \
 -o \
 /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkIOGeometry.js/vtkBYUWriterEmbinding.cxx \
 /home/jmh/github/vtk/IO/Geometry/vtkBYUWriter.h
*/
#include "vtkEmbindSmartPointerTrait.h"
#include <emscripten.h>
#include <string>
#include "vtkVariant.h"
#include "vtkObjectBase.h"
#include "vtkIndent.h"
#include "vtkPolyData.h"
#include "vtkBYUWriter.h"

template<> void emscripten::internal::raw_destructor<vtkBYUWriter>(vtkBYUWriter * ptr){ ptr->Delete(); }
EMSCRIPTEN_BINDINGS(vtkBYUWriter_class) {
  emscripten::class_<vtkBYUWriter, emscripten::base<vtkWriter>>("vtkBYUWriter")
    .smart_ptr<vtkSmartPointer<vtkBYUWriter>>("vtkSmartPointer<vtkBYUWriter>")
    .constructor(&vtk::MakeVTKSmartPtr<vtkBYUWriter>)
    .class_function("IsTypeOf", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkBYUWriter::IsTypeOf( arg_0.c_str());}))
    .function("IsA", emscripten::optional_override([](vtkBYUWriter& self, const std::string & arg_0) -> int {  return self.IsA( arg_0.c_str());}))
    .class_function("SafeDownCast", &vtkBYUWriter::SafeDownCast, emscripten::allow_raw_pointers())
    .function("NewInstance", &vtkBYUWriter::NewInstance, emscripten::allow_raw_pointers())
    .class_function("GetNumberOfGenerationsFromBaseType", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkBYUWriter::GetNumberOfGenerationsFromBaseType( arg_0.c_str());}))
    .function("GetNumberOfGenerationsFromBase", emscripten::optional_override([](vtkBYUWriter& self, const std::string & arg_0) -> int {  return self.GetNumberOfGenerationsFromBase( arg_0.c_str());}))
    .function("SetGeometryFileName", emscripten::optional_override([](vtkBYUWriter& self, const std::string & arg_0) -> void {  return self.SetGeometryFileName( arg_0.c_str());}))
    .function("GetGeometryFileName", emscripten::optional_override([](vtkBYUWriter& self) -> std::string {  return self.GetGeometryFileName();}))
    .function("SetDisplacementFileName", emscripten::optional_override([](vtkBYUWriter& self, const std::string & arg_0) -> void {  return self.SetDisplacementFileName( arg_0.c_str());}))
    .function("GetDisplacementFileName", emscripten::optional_override([](vtkBYUWriter& self) -> std::string {  return self.GetDisplacementFileName();}))
    .function("SetScalarFileName", emscripten::optional_override([](vtkBYUWriter& self, const std::string & arg_0) -> void {  return self.SetScalarFileName( arg_0.c_str());}))
    .function("GetScalarFileName", emscripten::optional_override([](vtkBYUWriter& self) -> std::string {  return self.GetScalarFileName();}))
    .function("SetTextureFileName", emscripten::optional_override([](vtkBYUWriter& self, const std::string & arg_0) -> void {  return self.SetTextureFileName( arg_0.c_str());}))
    .function("GetTextureFileName", emscripten::optional_override([](vtkBYUWriter& self) -> std::string {  return self.GetTextureFileName();}))
    .function("SetWriteDisplacement", &vtkBYUWriter::SetWriteDisplacement)
    .function("GetWriteDisplacement", &vtkBYUWriter::GetWriteDisplacement)
    .function("WriteDisplacementOn", &vtkBYUWriter::WriteDisplacementOn)
    .function("WriteDisplacementOff", &vtkBYUWriter::WriteDisplacementOff)
    .function("SetWriteScalar", &vtkBYUWriter::SetWriteScalar)
    .function("GetWriteScalar", &vtkBYUWriter::GetWriteScalar)
    .function("WriteScalarOn", &vtkBYUWriter::WriteScalarOn)
    .function("WriteScalarOff", &vtkBYUWriter::WriteScalarOff)
    .function("SetWriteTexture", &vtkBYUWriter::SetWriteTexture)
    .function("GetWriteTexture", &vtkBYUWriter::GetWriteTexture)
    .function("WriteTextureOn", &vtkBYUWriter::WriteTextureOn)
    .function("WriteTextureOff", &vtkBYUWriter::WriteTextureOff)
    .function("GetInput", emscripten::select_overload<vtkPolyData*(vtkBYUWriter&)>([](vtkBYUWriter& self) -> vtkPolyData* { return self.GetInput(); }), emscripten::allow_raw_pointers())
    .function("GetInput", emscripten::select_overload<vtkPolyData*(vtkBYUWriter&, int)>([](vtkBYUWriter& self, int arg_0) -> vtkPolyData* { return self.GetInput( arg_0); }), emscripten::allow_raw_pointers());
}
