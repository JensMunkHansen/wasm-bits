// JavaScript wrapper for vtkDataObjectReader with embind 
//
// This file was auto-generated using :
/*
node /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/bin/vtkWrapJavaScript.js \
 @/home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkIOLegacy.js/vtkIOLegacy.js.Release.args \
 -o \
 /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkIOLegacy.js/vtkDataObjectReaderEmbinding.cxx \
 /home/jmh/github/vtk/IO/Legacy/vtkDataObjectReader.h
*/
#include "vtkEmbindSmartPointerTrait.h"
#include <emscripten.h>
#include <string>
#include "vtkVariant.h"
#include "vtkObjectBase.h"
#include "vtkIndent.h"
#include "vtkDataObject.h"
#include "vtkDataObjectReader.h"

template<> void emscripten::internal::raw_destructor<vtkDataObjectReader>(vtkDataObjectReader * ptr){ ptr->Delete(); }
EMSCRIPTEN_BINDINGS(vtkDataObjectReader_class) {
  emscripten::class_<vtkDataObjectReader, emscripten::base<vtkDataReader>>("vtkDataObjectReader")
    .smart_ptr<vtkSmartPointer<vtkDataObjectReader>>("vtkSmartPointer<vtkDataObjectReader>")
    .constructor(&vtk::MakeAvtkSmartPointer<vtkDataObjectReader>)
    .class_function("IsTypeOf", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkDataObjectReader::IsTypeOf( arg_0.c_str());}))
    .function("IsA", emscripten::optional_override([](vtkDataObjectReader& self, const std::string & arg_0) -> int {  return self.IsA( arg_0.c_str());}))
    .class_function("SafeDownCast", &vtkDataObjectReader::SafeDownCast, emscripten::allow_raw_pointers())
    .function("NewInstance", &vtkDataObjectReader::NewInstance, emscripten::allow_raw_pointers())
    .class_function("GetNumberOfGenerationsFromBaseType", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkDataObjectReader::GetNumberOfGenerationsFromBaseType( arg_0.c_str());}))
    .function("GetNumberOfGenerationsFromBase", emscripten::optional_override([](vtkDataObjectReader& self, const std::string & arg_0) -> int {  return self.GetNumberOfGenerationsFromBase( arg_0.c_str());}))
    .function("GetOutput", emscripten::select_overload<vtkDataObject*(vtkDataObjectReader&)>([](vtkDataObjectReader& self) -> vtkDataObject* { return self.GetOutput(); }), emscripten::allow_raw_pointers())
    .function("GetOutput", emscripten::select_overload<vtkDataObject*(vtkDataObjectReader&, int)>([](vtkDataObjectReader& self, int arg_0) -> vtkDataObject* { return self.GetOutput( arg_0); }), emscripten::allow_raw_pointers())
    .function("SetOutput", &vtkDataObjectReader::SetOutput, emscripten::allow_raw_pointers())
    .function("ReadMeshSimple", &vtkDataObjectReader::ReadMeshSimple, emscripten::allow_raw_pointers());
}
