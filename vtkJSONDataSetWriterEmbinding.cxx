// JavaScript wrapper for vtkJSONDataSetWriter with embind 
//
// This file was auto-generated using :
/*
node /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/bin/vtkWrapJavaScript.js \
 @/home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkIOExport.js/vtkIOExport.js.Release.args \
 -o \
 /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkIOExport.js/vtkJSONDataSetWriterEmbinding.cxx \
 /home/jmh/github/vtk/IO/Export/vtkJSONDataSetWriter.h
*/
#include "vtkEmbindSmartPointerTrait.h"
#include <emscripten.h>
#include <string>
#include "vtkVariant.h"
#include "vtkDataArray.h"
#include "vtkObjectBase.h"
#include "vtkIndent.h"
#include "vtkDataSet.h"
#include "vtkArchiver.h"
#include "vtkJSONDataSetWriter.h"

template<> void emscripten::internal::raw_destructor<vtkJSONDataSetWriter>(vtkJSONDataSetWriter * ptr){ ptr->Delete(); }
EMSCRIPTEN_BINDINGS(vtkJSONDataSetWriter_class) {
  emscripten::class_<vtkJSONDataSetWriter, emscripten::base<vtkWriter>>("vtkJSONDataSetWriter")
    .smart_ptr<vtkSmartPointer<vtkJSONDataSetWriter>>("vtkSmartPointer<vtkJSONDataSetWriter>")
    .constructor(&vtk::MakeAvtkSmartPointer<vtkJSONDataSetWriter>)
    .function("GetValidString", emscripten::optional_override([](vtkJSONDataSetWriter& self, const std::string & arg_0) -> std::string {  return self.GetValidString( arg_0.c_str());}))
    .function("WriteArrayContents", emscripten::optional_override([](vtkJSONDataSetWriter& self, vtkDataArray* arg_0, const std::string & arg_1) -> bool {  return self.WriteArrayContents( arg_0, arg_1.c_str());}), emscripten::allow_raw_pointers())
    .class_function("WriteArrayAsRAW", emscripten::optional_override([]( vtkDataArray* arg_0, const std::string & arg_1) -> bool {  return vtkJSONDataSetWriter::WriteArrayAsRAW( arg_0, arg_1.c_str());}), emscripten::allow_raw_pointers())
    .class_function("IsTypeOf", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkJSONDataSetWriter::IsTypeOf( arg_0.c_str());}))
    .function("IsA", emscripten::optional_override([](vtkJSONDataSetWriter& self, const std::string & arg_0) -> int {  return self.IsA( arg_0.c_str());}))
    .class_function("SafeDownCast", &vtkJSONDataSetWriter::SafeDownCast, emscripten::allow_raw_pointers())
    .function("NewInstance", &vtkJSONDataSetWriter::NewInstance, emscripten::allow_raw_pointers())
    .class_function("GetNumberOfGenerationsFromBaseType", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkJSONDataSetWriter::GetNumberOfGenerationsFromBaseType( arg_0.c_str());}))
    .function("GetNumberOfGenerationsFromBase", emscripten::optional_override([](vtkJSONDataSetWriter& self, const std::string & arg_0) -> int {  return self.GetNumberOfGenerationsFromBase( arg_0.c_str());}))
    .function("GetInput", emscripten::select_overload<vtkDataSet*(vtkJSONDataSetWriter&)>([](vtkJSONDataSetWriter& self) -> vtkDataSet* { return self.GetInput(); }), emscripten::allow_raw_pointers())
    .function("GetInput", emscripten::select_overload<vtkDataSet*(vtkJSONDataSetWriter&, int)>([](vtkJSONDataSetWriter& self, int arg_0) -> vtkDataSet* { return self.GetInput( arg_0); }), emscripten::allow_raw_pointers())
    .function("SetArchiver", &vtkJSONDataSetWriter::SetArchiver, emscripten::allow_raw_pointers())
    .function("GetArchiver", &vtkJSONDataSetWriter::GetArchiver, emscripten::allow_raw_pointers())
    .function("Write", emscripten::select_overload<void(vtkJSONDataSetWriter&, vtkDataSet*)>([](vtkJSONDataSetWriter& self, vtkDataSet* arg_0) -> void { return self.Write( arg_0); }), emscripten::allow_raw_pointers())
    .function("Write", emscripten::select_overload<int(vtkJSONDataSetWriter&)>([](vtkJSONDataSetWriter& self) -> int { return self.Write(); }))
    .function("IsDataSetValid", &vtkJSONDataSetWriter::IsDataSetValid);
}
