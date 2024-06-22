// JavaScript wrapper for vtkX3DExporterXMLWriter with embind 
//
// This file was auto-generated using :
/*
node /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/bin/vtkWrapJavaScript.js \
 @/home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkIOExport.js/vtkIOExport.js.Release.args \
 -o \
 /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkIOExport.js/vtkX3DExporterXMLWriterEmbinding.cxx \
 /home/jmh/github/vtk/IO/Export/vtkX3DExporterXMLWriter.h
*/
#include "vtkEmbindSmartPointerTrait.h"
#include <emscripten.h>
#include <string>
#include "vtkVariant.h"
#include "vtkObjectBase.h"
#include "vtkIndent.h"
#include "vtkDataArray.h"
#include "vtkX3DExporterXMLWriter.h"

template<> void emscripten::internal::raw_destructor<vtkX3DExporterXMLWriter>(vtkX3DExporterXMLWriter * ptr){ ptr->Delete(); }
EMSCRIPTEN_BINDINGS(vtkX3DExporterXMLWriter_class) {
  emscripten::class_<vtkX3DExporterXMLWriter, emscripten::base<vtkX3DExporterWriter>>("vtkX3DExporterXMLWriter")
    .smart_ptr<vtkSmartPointer<vtkX3DExporterXMLWriter>>("vtkSmartPointer<vtkX3DExporterXMLWriter>")
    .constructor(&vtk::MakeVTKSmartPtr<vtkX3DExporterXMLWriter>)
    .class_function("IsTypeOf", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkX3DExporterXMLWriter::IsTypeOf( arg_0.c_str());}))
    .function("IsA", emscripten::optional_override([](vtkX3DExporterXMLWriter& self, const std::string & arg_0) -> int {  return self.IsA( arg_0.c_str());}))
    .class_function("SafeDownCast", &vtkX3DExporterXMLWriter::SafeDownCast, emscripten::allow_raw_pointers())
    .function("NewInstance", &vtkX3DExporterXMLWriter::NewInstance, emscripten::allow_raw_pointers())
    .class_function("GetNumberOfGenerationsFromBaseType", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkX3DExporterXMLWriter::GetNumberOfGenerationsFromBaseType( arg_0.c_str());}))
    .function("GetNumberOfGenerationsFromBase", emscripten::optional_override([](vtkX3DExporterXMLWriter& self, const std::string & arg_0) -> int {  return self.GetNumberOfGenerationsFromBase( arg_0.c_str());}))
    .function("CloseFile", &vtkX3DExporterXMLWriter::CloseFile)
    .function("OpenFile", emscripten::optional_override([](vtkX3DExporterXMLWriter& self, const std::string & arg_0) -> int {  return self.OpenFile( arg_0.c_str());}))
    .function("Flush", &vtkX3DExporterXMLWriter::Flush)
    .function("OpenStream", &vtkX3DExporterXMLWriter::OpenStream)
    .function("StartDocument", &vtkX3DExporterXMLWriter::StartDocument)
    .function("EndDocument", &vtkX3DExporterXMLWriter::EndDocument)
    .function("StartNode", &vtkX3DExporterXMLWriter::StartNode)
    .function("EndNode", &vtkX3DExporterXMLWriter::EndNode)
    .function("SetField", emscripten::select_overload<void(vtkX3DExporterXMLWriter&, int, const std::string &, bool)>([](vtkX3DExporterXMLWriter& self, int arg_0, const std::string & arg_1, bool arg_2) -> void { return self.SetField( arg_0, arg_1.c_str(), arg_2); }))
    .function("SetField", emscripten::select_overload<void(vtkX3DExporterXMLWriter&, int, int, std::uintptr_t)>([](vtkX3DExporterXMLWriter& self, int arg_0, int arg_1, std::uintptr_t arg_2) -> void { return self.SetField( arg_0, arg_1,reinterpret_cast<double*>(arg_2 * sizeof(double))); }))
    .function("SetField", emscripten::select_overload<void(vtkX3DExporterXMLWriter&, int, int, vtkDataArray*)>([](vtkX3DExporterXMLWriter& self, int arg_0, int arg_1, vtkDataArray* arg_2) -> void { return self.SetField( arg_0, arg_1, arg_2); }), emscripten::allow_raw_pointers())
    .function("SetField", emscripten::select_overload<void(vtkX3DExporterXMLWriter&, int, std::uintptr_t, size_t)>([](vtkX3DExporterXMLWriter& self, int arg_0, std::uintptr_t arg_1, size_t arg_2) -> void { return self.SetField( arg_0,reinterpret_cast<double*>(arg_1 * sizeof(double)), arg_2); }))
    .function("SetField", emscripten::select_overload<void(vtkX3DExporterXMLWriter&, int, int)>([](vtkX3DExporterXMLWriter& self, int arg_0, int arg_1) -> void { return self.SetField( arg_0, arg_1); }))
    .function("SetField", emscripten::select_overload<void(vtkX3DExporterXMLWriter&, int, float)>([](vtkX3DExporterXMLWriter& self, int arg_0, float arg_1) -> void { return self.SetField( arg_0, arg_1); }))
    .function("SetField", emscripten::select_overload<void(vtkX3DExporterXMLWriter&, int, double)>([](vtkX3DExporterXMLWriter& self, int arg_0, double arg_1) -> void { return self.SetField( arg_0, arg_1); }))
    .function("SetField", emscripten::select_overload<void(vtkX3DExporterXMLWriter&, int, bool)>([](vtkX3DExporterXMLWriter& self, int arg_0, bool arg_1) -> void { return self.SetField( arg_0, arg_1); }))
    .function("SetField", emscripten::select_overload<void(vtkX3DExporterXMLWriter&, int, std::uintptr_t, size_t, bool)>([](vtkX3DExporterXMLWriter& self, int arg_0, std::uintptr_t arg_1, size_t arg_2, bool arg_3) -> void { return self.SetField( arg_0,reinterpret_cast<int*>(arg_1 * sizeof(int)), arg_2, arg_3); }));
}
