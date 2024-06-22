// JavaScript wrapper for vtkGraphWriter with embind 
//
// This file was auto-generated using :
/*
node /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/bin/vtkWrapJavaScript.js \
 @/home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkIOLegacy.js/vtkIOLegacy.js.Release.args \
 -o \
 /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkIOLegacy.js/vtkGraphWriterEmbinding.cxx \
 /home/jmh/github/vtk/IO/Legacy/vtkGraphWriter.h
*/
#include "vtkEmbindSmartPointerTrait.h"
#include <emscripten.h>
#include <string>
#include "vtkVariant.h"
#include "vtkObjectBase.h"
#include "vtkIndent.h"
#include "vtkGraph.h"
#include "vtkGraphWriter.h"

template<> void emscripten::internal::raw_destructor<vtkGraphWriter>(vtkGraphWriter * ptr){ ptr->Delete(); }
EMSCRIPTEN_BINDINGS(vtkGraphWriter_class) {
  emscripten::class_<vtkGraphWriter, emscripten::base<vtkDataWriter>>("vtkGraphWriter")
    .smart_ptr<vtkSmartPointer<vtkGraphWriter>>("vtkSmartPointer<vtkGraphWriter>")
    .constructor(&vtk::MakeAvtkSmartPointer<vtkGraphWriter>)
    .class_function("IsTypeOf", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkGraphWriter::IsTypeOf( arg_0.c_str());}))
    .function("IsA", emscripten::optional_override([](vtkGraphWriter& self, const std::string & arg_0) -> int {  return self.IsA( arg_0.c_str());}))
    .class_function("SafeDownCast", &vtkGraphWriter::SafeDownCast, emscripten::allow_raw_pointers())
    .function("NewInstance", &vtkGraphWriter::NewInstance, emscripten::allow_raw_pointers())
    .class_function("GetNumberOfGenerationsFromBaseType", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkGraphWriter::GetNumberOfGenerationsFromBaseType( arg_0.c_str());}))
    .function("GetNumberOfGenerationsFromBase", emscripten::optional_override([](vtkGraphWriter& self, const std::string & arg_0) -> int {  return self.GetNumberOfGenerationsFromBase( arg_0.c_str());}))
    .function("GetInput", emscripten::select_overload<vtkGraph*(vtkGraphWriter&)>([](vtkGraphWriter& self) -> vtkGraph* { return self.GetInput(); }), emscripten::allow_raw_pointers())
    .function("GetInput", emscripten::select_overload<vtkGraph*(vtkGraphWriter&, int)>([](vtkGraphWriter& self, int arg_0) -> vtkGraph* { return self.GetInput( arg_0); }), emscripten::allow_raw_pointers());
}
