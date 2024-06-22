// JavaScript wrapper for vtkX3DExporterFIWriter with embind 
//
// This file was auto-generated using :
/*
node /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/bin/vtkWrapJavaScript.js \
 @/home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkIOExport.js/vtkIOExport.js.Release.args \
 -o \
 /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkIOExport.js/vtkX3DExporterFIWriterEmbinding.cxx \
 /home/jmh/github/vtk/IO/Export/vtkX3DExporterFIWriter.h
*/
#include "vtkEmbindSmartPointerTrait.h"
#include <emscripten.h>
#include <string>
#include "vtkVariant.h"
#include "vtkObjectBase.h"
#include "vtkIndent.h"
#include "vtkDataArray.h"
#include "vtkCellArray.h"
#include "vtkX3DExporterFIWriter.h"

template<> void emscripten::internal::raw_destructor<vtkX3DExporterFIWriter>(vtkX3DExporterFIWriter * ptr){ ptr->Delete(); }
EMSCRIPTEN_BINDINGS(vtkX3DExporterFIWriter_class) {
  emscripten::class_<vtkX3DExporterFIWriter, emscripten::base<vtkX3DExporterWriter>>("vtkX3DExporterFIWriter")
    .smart_ptr<vtkSmartPointer<vtkX3DExporterFIWriter>>("vtkSmartPointer<vtkX3DExporterFIWriter>")
    .constructor(&vtk::MakeVTKSmartPtr<vtkX3DExporterFIWriter>)
    .class_function("IsTypeOf", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkX3DExporterFIWriter::IsTypeOf( arg_0.c_str());}))
    .function("IsA", emscripten::optional_override([](vtkX3DExporterFIWriter& self, const std::string & arg_0) -> int {  return self.IsA( arg_0.c_str());}))
    .class_function("SafeDownCast", &vtkX3DExporterFIWriter::SafeDownCast, emscripten::allow_raw_pointers())
    .function("NewInstance", &vtkX3DExporterFIWriter::NewInstance, emscripten::allow_raw_pointers())
    .class_function("GetNumberOfGenerationsFromBaseType", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkX3DExporterFIWriter::GetNumberOfGenerationsFromBaseType( arg_0.c_str());}))
    .function("GetNumberOfGenerationsFromBase", emscripten::optional_override([](vtkX3DExporterFIWriter& self, const std::string & arg_0) -> int {  return self.GetNumberOfGenerationsFromBase( arg_0.c_str());}))
    .function("CloseFile", &vtkX3DExporterFIWriter::CloseFile)
    .function("OpenFile", emscripten::optional_override([](vtkX3DExporterFIWriter& self, const std::string & arg_0) -> int {  return self.OpenFile( arg_0.c_str());}))
    .function("OpenStream", &vtkX3DExporterFIWriter::OpenStream)
    .function("Flush", &vtkX3DExporterFIWriter::Flush)
    .function("StartDocument", &vtkX3DExporterFIWriter::StartDocument)
    .function("EndDocument", &vtkX3DExporterFIWriter::EndDocument)
    .function("StartNode", &vtkX3DExporterFIWriter::StartNode)
    .function("EndNode", &vtkX3DExporterFIWriter::EndNode)
    .function("SetField", emscripten::select_overload<void(vtkX3DExporterFIWriter&, int, const std::string &, bool)>([](vtkX3DExporterFIWriter& self, int arg_0, const std::string & arg_1, bool arg_2) -> void { return self.SetField( arg_0, arg_1.c_str(), arg_2); }))
    .function("SetField", emscripten::select_overload<void(vtkX3DExporterFIWriter&, int, int, std::uintptr_t)>([](vtkX3DExporterFIWriter& self, int arg_0, int arg_1, std::uintptr_t arg_2) -> void { return self.SetField( arg_0, arg_1,reinterpret_cast<double*>(arg_2 * sizeof(double))); }))
    .function("SetField", emscripten::select_overload<void(vtkX3DExporterFIWriter&, int, int, vtkDataArray*)>([](vtkX3DExporterFIWriter& self, int arg_0, int arg_1, vtkDataArray* arg_2) -> void { return self.SetField( arg_0, arg_1, arg_2); }), emscripten::allow_raw_pointers())
    .function("SetField", emscripten::select_overload<void(vtkX3DExporterFIWriter&, int, std::uintptr_t, size_t)>([](vtkX3DExporterFIWriter& self, int arg_0, std::uintptr_t arg_1, size_t arg_2) -> void { return self.SetField( arg_0,reinterpret_cast<double*>(arg_1 * sizeof(double)), arg_2); }))
    .function("SetField", emscripten::select_overload<void(vtkX3DExporterFIWriter&, int, int, vtkCellArray*)>([](vtkX3DExporterFIWriter& self, int arg_0, int arg_1, vtkCellArray* arg_2) -> void { return self.SetField( arg_0, arg_1, arg_2); }), emscripten::allow_raw_pointers())
    .function("SetField", emscripten::select_overload<void(vtkX3DExporterFIWriter&, int, int)>([](vtkX3DExporterFIWriter& self, int arg_0, int arg_1) -> void { return self.SetField( arg_0, arg_1); }))
    .function("SetField", emscripten::select_overload<void(vtkX3DExporterFIWriter&, int, float)>([](vtkX3DExporterFIWriter& self, int arg_0, float arg_1) -> void { return self.SetField( arg_0, arg_1); }))
    .function("SetField", emscripten::select_overload<void(vtkX3DExporterFIWriter&, int, double)>([](vtkX3DExporterFIWriter& self, int arg_0, double arg_1) -> void { return self.SetField( arg_0, arg_1); }))
    .function("SetField", emscripten::select_overload<void(vtkX3DExporterFIWriter&, int, bool)>([](vtkX3DExporterFIWriter& self, int arg_0, bool arg_1) -> void { return self.SetField( arg_0, arg_1); }))
    .function("SetField", emscripten::select_overload<void(vtkX3DExporterFIWriter&, int, std::uintptr_t, size_t, bool)>([](vtkX3DExporterFIWriter& self, int arg_0, std::uintptr_t arg_1, size_t arg_2, bool arg_3) -> void { return self.SetField( arg_0,reinterpret_cast<int*>(arg_1 * sizeof(int)), arg_2, arg_3); }))
    .function("SetFastest", &vtkX3DExporterFIWriter::SetFastest)
    .function("GetFastestMinValue", &vtkX3DExporterFIWriter::GetFastestMinValue)
    .function("GetFastestMaxValue", &vtkX3DExporterFIWriter::GetFastestMaxValue)
    .function("FastestOn", &vtkX3DExporterFIWriter::FastestOn)
    .function("FastestOff", &vtkX3DExporterFIWriter::FastestOff)
    .function("GetFastest", &vtkX3DExporterFIWriter::GetFastest);
}
