// JavaScript wrapper for vtkExodusIIReaderParser with embind 
//
// This file was auto-generated using :
/*
node /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/bin/vtkWrapJavaScript.js \
 @/home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkIOExodus.js/vtkIOExodus.js.Release.args \
 -o \
 /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkIOExodus.js/vtkExodusIIReaderParserEmbinding.cxx \
 /home/jmh/github/vtk/IO/Exodus/vtkExodusIIReaderParser.h
*/
#include "vtkEmbindSmartPointerTrait.h"
#include <emscripten.h>
#include <string>
#include "vtkVariant.h"
#include "vtkObjectBase.h"
#include "vtkIndent.h"
#include "vtkMutableDirectedGraph.h"
#include "vtkExodusIIReaderParser.h"

template<> void emscripten::internal::raw_destructor<vtkExodusIIReaderParser>(vtkExodusIIReaderParser * ptr){ ptr->Delete(); }
EMSCRIPTEN_BINDINGS(vtkExodusIIReaderParser_class) {
  emscripten::class_<vtkExodusIIReaderParser, emscripten::base<vtkXMLParser>>("vtkExodusIIReaderParser")
    .smart_ptr<vtkSmartPointer<vtkExodusIIReaderParser>>("vtkSmartPointer<vtkExodusIIReaderParser>")
    .constructor(&vtk::MakeAvtkSmartPointer<vtkExodusIIReaderParser>)
    .class_function("IsTypeOf", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkExodusIIReaderParser::IsTypeOf( arg_0.c_str());}))
    .function("IsA", emscripten::optional_override([](vtkExodusIIReaderParser& self, const std::string & arg_0) -> int {  return self.IsA( arg_0.c_str());}))
    .class_function("SafeDownCast", &vtkExodusIIReaderParser::SafeDownCast, emscripten::allow_raw_pointers())
    .function("NewInstance", &vtkExodusIIReaderParser::NewInstance, emscripten::allow_raw_pointers())
    .class_function("GetNumberOfGenerationsFromBaseType", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkExodusIIReaderParser::GetNumberOfGenerationsFromBaseType( arg_0.c_str());}))
    .function("GetNumberOfGenerationsFromBase", emscripten::optional_override([](vtkExodusIIReaderParser& self, const std::string & arg_0) -> int {  return self.GetNumberOfGenerationsFromBase( arg_0.c_str());}))
    .function("GetSIL", &vtkExodusIIReaderParser::GetSIL, emscripten::allow_raw_pointers())
    .function("Go", emscripten::optional_override([](vtkExodusIIReaderParser& self, const std::string & arg_0) -> void {  return self.Go( arg_0.c_str());}))
    .function("HasInformationAboutBlock", &vtkExodusIIReaderParser::HasInformationAboutBlock)
    .function("GetBlockName", &vtkExodusIIReaderParser::GetBlockName);
}
