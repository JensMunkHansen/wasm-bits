// JavaScript wrapper for vtkGraphReader with embind 
//
// This file was auto-generated using :
/*
node /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/bin/vtkWrapJavaScript.js \
 @/home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkIOLegacy.js/vtkIOLegacy.js.Release.args \
 -o \
 /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkIOLegacy.js/vtkGraphReaderEmbinding.cxx \
 /home/jmh/github/vtk/IO/Legacy/vtkGraphReader.h
*/
#include "vtkEmbindSmartPointerTrait.h"
#include <emscripten.h>
#include <string>
#include "vtkVariant.h"
#include "vtkObjectBase.h"
#include "vtkIndent.h"
#include "vtkGraph.h"
#include "vtkDataObject.h"
#include "vtkGraphReader.h"

EMSCRIPTEN_BINDINGS(vtkIOLegacy_vtkGraphReader_class_enums) {
}
template<> void emscripten::internal::raw_destructor<vtkGraphReader>(vtkGraphReader * ptr){ ptr->Delete(); }
EMSCRIPTEN_BINDINGS(vtkGraphReader_class) {
  emscripten::class_<vtkGraphReader, emscripten::base<vtkDataReader>>("vtkGraphReader")
    .smart_ptr<vtkSmartPointer<vtkGraphReader>>("vtkSmartPointer<vtkGraphReader>")
    .constructor(&vtk::MakeVTKSmartPtr<vtkGraphReader>)
    .class_function("IsTypeOf", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkGraphReader::IsTypeOf( arg_0.c_str());}))
    .function("IsA", emscripten::optional_override([](vtkGraphReader& self, const std::string & arg_0) -> int {  return self.IsA( arg_0.c_str());}))
    .class_function("SafeDownCast", &vtkGraphReader::SafeDownCast, emscripten::allow_raw_pointers())
    .function("NewInstance", &vtkGraphReader::NewInstance, emscripten::allow_raw_pointers())
    .class_function("GetNumberOfGenerationsFromBaseType", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkGraphReader::GetNumberOfGenerationsFromBaseType( arg_0.c_str());}))
    .function("GetNumberOfGenerationsFromBase", emscripten::optional_override([](vtkGraphReader& self, const std::string & arg_0) -> int {  return self.GetNumberOfGenerationsFromBase( arg_0.c_str());}))
    .function("GetOutput", emscripten::select_overload<vtkGraph*(vtkGraphReader&)>([](vtkGraphReader& self) -> vtkGraph* { return self.GetOutput(); }), emscripten::allow_raw_pointers())
    .function("GetOutput", emscripten::select_overload<vtkGraph*(vtkGraphReader&, int)>([](vtkGraphReader& self, int arg_0) -> vtkGraph* { return self.GetOutput( arg_0); }), emscripten::allow_raw_pointers())
    .function("ReadMeshSimple", &vtkGraphReader::ReadMeshSimple, emscripten::allow_raw_pointers());
}
