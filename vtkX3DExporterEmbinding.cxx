// JavaScript wrapper for vtkX3DExporter with embind 
//
// This file was auto-generated using :
/*
node /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/bin/vtkWrapJavaScript.js \
 @/home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkIOExport.js/vtkIOExport.js.Release.args \
 -o \
 /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkIOExport.js/vtkX3DExporterEmbinding.cxx \
 /home/jmh/github/vtk/IO/Export/vtkX3DExporter.h
*/
#include "vtkEmbindSmartPointerTrait.h"
#include <emscripten.h>
#include <string>
#include "vtkVariant.h"
#include "vtkObjectBase.h"
#include "vtkIndent.h"
#include "vtkX3DExporter.h"

template<> void emscripten::internal::raw_destructor<vtkX3DExporter>(vtkX3DExporter * ptr){ ptr->Delete(); }
EMSCRIPTEN_BINDINGS(vtkX3DExporter_class) {
  emscripten::class_<vtkX3DExporter, emscripten::base<vtkExporter>>("vtkX3DExporter")
    .smart_ptr<vtkSmartPointer<vtkX3DExporter>>("vtkSmartPointer<vtkX3DExporter>")
    .constructor(&vtk::MakeVTKSmartPtr<vtkX3DExporter>)
    .class_function("IsTypeOf", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkX3DExporter::IsTypeOf( arg_0.c_str());}))
    .function("IsA", emscripten::optional_override([](vtkX3DExporter& self, const std::string & arg_0) -> int {  return self.IsA( arg_0.c_str());}))
    .class_function("SafeDownCast", &vtkX3DExporter::SafeDownCast, emscripten::allow_raw_pointers())
    .function("NewInstance", &vtkX3DExporter::NewInstance, emscripten::allow_raw_pointers())
    .class_function("GetNumberOfGenerationsFromBaseType", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkX3DExporter::GetNumberOfGenerationsFromBaseType( arg_0.c_str());}))
    .function("GetNumberOfGenerationsFromBase", emscripten::optional_override([](vtkX3DExporter& self, const std::string & arg_0) -> int {  return self.GetNumberOfGenerationsFromBase( arg_0.c_str());}))
    .function("SetFileName", emscripten::optional_override([](vtkX3DExporter& self, const std::string & arg_0) -> void {  return self.SetFileName( arg_0.c_str());}))
    .function("GetFileName", emscripten::optional_override([](vtkX3DExporter& self) -> std::string {  return self.GetFileName();}))
    .function("SetSpeed", &vtkX3DExporter::SetSpeed)
    .function("GetSpeed", &vtkX3DExporter::GetSpeed)
    .function("SetBinary", &vtkX3DExporter::SetBinary)
    .function("GetBinaryMinValue", &vtkX3DExporter::GetBinaryMinValue)
    .function("GetBinaryMaxValue", &vtkX3DExporter::GetBinaryMaxValue)
    .function("BinaryOn", &vtkX3DExporter::BinaryOn)
    .function("BinaryOff", &vtkX3DExporter::BinaryOff)
    .function("GetBinary", &vtkX3DExporter::GetBinary)
    .function("SetFastest", &vtkX3DExporter::SetFastest)
    .function("GetFastestMinValue", &vtkX3DExporter::GetFastestMinValue)
    .function("GetFastestMaxValue", &vtkX3DExporter::GetFastestMaxValue)
    .function("FastestOn", &vtkX3DExporter::FastestOn)
    .function("FastestOff", &vtkX3DExporter::FastestOff)
    .function("GetFastest", &vtkX3DExporter::GetFastest)
    .function("SetWriteToOutputString", &vtkX3DExporter::SetWriteToOutputString)
    .function("GetWriteToOutputString", &vtkX3DExporter::GetWriteToOutputString)
    .function("WriteToOutputStringOn", &vtkX3DExporter::WriteToOutputStringOn)
    .function("WriteToOutputStringOff", &vtkX3DExporter::WriteToOutputStringOff)
    .function("GetOutputStringLength", &vtkX3DExporter::GetOutputStringLength)
    .function("GetOutputString", emscripten::optional_override([](vtkX3DExporter& self) -> std::string {  return self.GetOutputString();}))
    .function("GetBinaryOutputString", emscripten::optional_override([](vtkX3DExporter& self) -> std::uintptr_t {  return reinterpret_cast<std::uintptr_t>(self.GetBinaryOutputString()) / sizeof(unsigned char);}))
    .function("RegisterAndGetOutputString", emscripten::optional_override([](vtkX3DExporter& self) -> std::string {  return self.RegisterAndGetOutputString();}));
}
