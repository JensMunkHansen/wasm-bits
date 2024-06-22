// JavaScript wrapper for vtkDIMACSGraphWriter with embind 
//
// This file was auto-generated using :
/*
node /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/bin/vtkWrapJavaScript.js \
 @/home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkIOInfovis.js/vtkIOInfovis.js.Release.args \
 -o \
 /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkIOInfovis.js/vtkDIMACSGraphWriterEmbinding.cxx \
 /home/jmh/github/vtk/IO/Infovis/vtkDIMACSGraphWriter.h
*/
#include "vtkEmbindSmartPointerTrait.h"
#include <emscripten.h>
#include <string>
#include "vtkVariant.h"
#include "vtkObjectBase.h"
#include "vtkIndent.h"
#include "vtkGraph.h"
#include "vtkDIMACSGraphWriter.h"

template<> void emscripten::internal::raw_destructor<vtkDIMACSGraphWriter>(vtkDIMACSGraphWriter * ptr){ ptr->Delete(); }
EMSCRIPTEN_BINDINGS(vtkDIMACSGraphWriter_class) {
  emscripten::class_<vtkDIMACSGraphWriter, emscripten::base<vtkDataWriter>>("vtkDIMACSGraphWriter")
    .smart_ptr<vtkSmartPointer<vtkDIMACSGraphWriter>>("vtkSmartPointer<vtkDIMACSGraphWriter>")
    .constructor(&vtk::MakeAvtkSmartPointer<vtkDIMACSGraphWriter>)
    .class_function("IsTypeOf", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkDIMACSGraphWriter::IsTypeOf( arg_0.c_str());}))
    .function("IsA", emscripten::optional_override([](vtkDIMACSGraphWriter& self, const std::string & arg_0) -> int {  return self.IsA( arg_0.c_str());}))
    .class_function("SafeDownCast", &vtkDIMACSGraphWriter::SafeDownCast, emscripten::allow_raw_pointers())
    .function("NewInstance", &vtkDIMACSGraphWriter::NewInstance, emscripten::allow_raw_pointers())
    .class_function("GetNumberOfGenerationsFromBaseType", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkDIMACSGraphWriter::GetNumberOfGenerationsFromBaseType( arg_0.c_str());}))
    .function("GetNumberOfGenerationsFromBase", emscripten::optional_override([](vtkDIMACSGraphWriter& self, const std::string & arg_0) -> int {  return self.GetNumberOfGenerationsFromBase( arg_0.c_str());}))
    .function("GetInput", emscripten::select_overload<vtkGraph*(vtkDIMACSGraphWriter&)>([](vtkDIMACSGraphWriter& self) -> vtkGraph* { return self.GetInput(); }), emscripten::allow_raw_pointers())
    .function("GetInput", emscripten::select_overload<vtkGraph*(vtkDIMACSGraphWriter&, int)>([](vtkDIMACSGraphWriter& self, int arg_0) -> vtkGraph* { return self.GetInput( arg_0); }), emscripten::allow_raw_pointers());
}
