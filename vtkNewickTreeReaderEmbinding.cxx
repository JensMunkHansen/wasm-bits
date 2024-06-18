// JavaScript wrapper for vtkNewickTreeReader with embind 
//
// This file was auto-generated using :
/*
node /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/bin/vtkWrapJavaScript.js \
 @/home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkIOInfovis.js/vtkIOInfovis.js.Release.args \
 -o \
 /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkIOInfovis.js/vtkNewickTreeReaderEmbinding.cxx \
 /home/jmh/github/vtk/IO/Infovis/vtkNewickTreeReader.h
*/
#include "vtkEmbindSmartPointerTrait.h"
#include <emscripten.h>
#include <string>
#include "vtkVariant.h"
#include "vtkObjectBase.h"
#include "vtkIndent.h"
#include "vtkTree.h"
#include "vtkDataObject.h"
#include "vtkNewickTreeReader.h"

template<> void emscripten::internal::raw_destructor<vtkNewickTreeReader>(vtkNewickTreeReader * ptr){ ptr->Delete(); }
EMSCRIPTEN_BINDINGS(vtkNewickTreeReader_class) {
  emscripten::class_<vtkNewickTreeReader, emscripten::base<vtkDataReader>>("vtkNewickTreeReader")
    .smart_ptr<vtkSmartPointer<vtkNewickTreeReader>>("vtkSmartPointer<vtkNewickTreeReader>")
    .constructor(&vtk::MakeAvtkSmartPointer<vtkNewickTreeReader>)
    .class_function("IsTypeOf", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkNewickTreeReader::IsTypeOf( arg_0.c_str());}))
    .function("IsA", emscripten::optional_override([](vtkNewickTreeReader& self, const std::string & arg_0) -> int {  return self.IsA( arg_0.c_str());}))
    .class_function("SafeDownCast", &vtkNewickTreeReader::SafeDownCast, emscripten::allow_raw_pointers())
    .function("NewInstance", &vtkNewickTreeReader::NewInstance, emscripten::allow_raw_pointers())
    .class_function("GetNumberOfGenerationsFromBaseType", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkNewickTreeReader::GetNumberOfGenerationsFromBaseType( arg_0.c_str());}))
    .function("GetNumberOfGenerationsFromBase", emscripten::optional_override([](vtkNewickTreeReader& self, const std::string & arg_0) -> int {  return self.GetNumberOfGenerationsFromBase( arg_0.c_str());}))
    .function("GetOutput", emscripten::select_overload<vtkTree*(vtkNewickTreeReader&)>([](vtkNewickTreeReader& self) -> vtkTree* { return self.GetOutput(); }), emscripten::allow_raw_pointers())
    .function("GetOutput", emscripten::select_overload<vtkTree*(vtkNewickTreeReader&, int)>([](vtkNewickTreeReader& self, int arg_0) -> vtkTree* { return self.GetOutput( arg_0); }), emscripten::allow_raw_pointers())
    .function("SetOutput", &vtkNewickTreeReader::SetOutput, emscripten::allow_raw_pointers())
    .function("ReadMeshSimple", &vtkNewickTreeReader::ReadMeshSimple, emscripten::allow_raw_pointers());
}
