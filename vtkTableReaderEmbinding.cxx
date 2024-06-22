// JavaScript wrapper for vtkTableReader with embind 
//
// This file was auto-generated using :
/*
node /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/bin/vtkWrapJavaScript.js \
 @/home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkIOLegacy.js/vtkIOLegacy.js.Release.args \
 -o \
 /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkIOLegacy.js/vtkTableReaderEmbinding.cxx \
 /home/jmh/github/vtk/IO/Legacy/vtkTableReader.h
*/
#include "vtkEmbindSmartPointerTrait.h"
#include <emscripten.h>
#include <string>
#include "vtkVariant.h"
#include "vtkObjectBase.h"
#include "vtkIndent.h"
#include "vtkTable.h"
#include "vtkDataObject.h"
#include "vtkTableReader.h"

template<> void emscripten::internal::raw_destructor<vtkTableReader>(vtkTableReader * ptr){ ptr->Delete(); }
EMSCRIPTEN_BINDINGS(vtkTableReader_class) {
  emscripten::class_<vtkTableReader, emscripten::base<vtkDataReader>>("vtkTableReader")
    .smart_ptr<vtkSmartPointer<vtkTableReader>>("vtkSmartPointer<vtkTableReader>")
    .constructor(&vtk::MakeAvtkSmartPointer<vtkTableReader>)
    .class_function("IsTypeOf", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkTableReader::IsTypeOf( arg_0.c_str());}))
    .function("IsA", emscripten::optional_override([](vtkTableReader& self, const std::string & arg_0) -> int {  return self.IsA( arg_0.c_str());}))
    .class_function("SafeDownCast", &vtkTableReader::SafeDownCast, emscripten::allow_raw_pointers())
    .function("NewInstance", &vtkTableReader::NewInstance, emscripten::allow_raw_pointers())
    .class_function("GetNumberOfGenerationsFromBaseType", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkTableReader::GetNumberOfGenerationsFromBaseType( arg_0.c_str());}))
    .function("GetNumberOfGenerationsFromBase", emscripten::optional_override([](vtkTableReader& self, const std::string & arg_0) -> int {  return self.GetNumberOfGenerationsFromBase( arg_0.c_str());}))
    .function("GetOutput", emscripten::select_overload<vtkTable*(vtkTableReader&)>([](vtkTableReader& self) -> vtkTable* { return self.GetOutput(); }), emscripten::allow_raw_pointers())
    .function("GetOutput", emscripten::select_overload<vtkTable*(vtkTableReader&, int)>([](vtkTableReader& self, int arg_0) -> vtkTable* { return self.GetOutput( arg_0); }), emscripten::allow_raw_pointers())
    .function("SetOutput", &vtkTableReader::SetOutput, emscripten::allow_raw_pointers())
    .function("ReadMeshSimple", &vtkTableReader::ReadMeshSimple, emscripten::allow_raw_pointers());
}
