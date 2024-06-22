// JavaScript wrapper for vtkTreeReader with embind 
//
// This file was auto-generated using :
/*
node /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/bin/vtkWrapJavaScript.js \
 @/home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkIOLegacy.js/vtkIOLegacy.js.Release.args \
 -o \
 /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkIOLegacy.js/vtkTreeReaderEmbinding.cxx \
 /home/jmh/github/vtk/IO/Legacy/vtkTreeReader.h
*/
#include "vtkEmbindSmartPointerTrait.h"
#include <emscripten.h>
#include <string>
#include "vtkVariant.h"
#include "vtkObjectBase.h"
#include "vtkIndent.h"
#include "vtkTree.h"
#include "vtkDataObject.h"
#include "vtkTreeReader.h"

template<> void emscripten::internal::raw_destructor<vtkTreeReader>(vtkTreeReader * ptr){ ptr->Delete(); }
EMSCRIPTEN_BINDINGS(vtkTreeReader_class) {
  emscripten::class_<vtkTreeReader, emscripten::base<vtkDataReader>>("vtkTreeReader")
    .smart_ptr<vtkSmartPointer<vtkTreeReader>>("vtkSmartPointer<vtkTreeReader>")
    .constructor(&vtk::MakeAvtkSmartPointer<vtkTreeReader>)
    .class_function("IsTypeOf", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkTreeReader::IsTypeOf( arg_0.c_str());}))
    .function("IsA", emscripten::optional_override([](vtkTreeReader& self, const std::string & arg_0) -> int {  return self.IsA( arg_0.c_str());}))
    .class_function("SafeDownCast", &vtkTreeReader::SafeDownCast, emscripten::allow_raw_pointers())
    .function("NewInstance", &vtkTreeReader::NewInstance, emscripten::allow_raw_pointers())
    .class_function("GetNumberOfGenerationsFromBaseType", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkTreeReader::GetNumberOfGenerationsFromBaseType( arg_0.c_str());}))
    .function("GetNumberOfGenerationsFromBase", emscripten::optional_override([](vtkTreeReader& self, const std::string & arg_0) -> int {  return self.GetNumberOfGenerationsFromBase( arg_0.c_str());}))
    .function("GetOutput", emscripten::select_overload<vtkTree*(vtkTreeReader&)>([](vtkTreeReader& self) -> vtkTree* { return self.GetOutput(); }), emscripten::allow_raw_pointers())
    .function("GetOutput", emscripten::select_overload<vtkTree*(vtkTreeReader&, int)>([](vtkTreeReader& self, int arg_0) -> vtkTree* { return self.GetOutput( arg_0); }), emscripten::allow_raw_pointers())
    .function("SetOutput", &vtkTreeReader::SetOutput, emscripten::allow_raw_pointers())
    .function("ReadMeshSimple", &vtkTreeReader::ReadMeshSimple, emscripten::allow_raw_pointers());
}
