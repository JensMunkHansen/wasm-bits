// JavaScript wrapper for vtkStructuredGridReader with embind 
//
// This file was auto-generated using :
/*
node /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/bin/vtkWrapJavaScript.js \
 @/home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkIOLegacy.js/vtkIOLegacy.js.Release.args \
 -o \
 /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkIOLegacy.js/vtkStructuredGridReaderEmbinding.cxx \
 /home/jmh/github/vtk/IO/Legacy/vtkStructuredGridReader.h
*/
#include "vtkEmbindSmartPointerTrait.h"
#include <emscripten.h>
#include <string>
#include "vtkVariant.h"
#include "vtkObjectBase.h"
#include "vtkIndent.h"
#include "vtkStructuredGrid.h"
#include "vtkInformation.h"
#include "vtkDataObject.h"
#include "vtkStructuredGridReader.h"

template<> void emscripten::internal::raw_destructor<vtkStructuredGridReader>(vtkStructuredGridReader * ptr){ ptr->Delete(); }
EMSCRIPTEN_BINDINGS(vtkStructuredGridReader_class) {
  emscripten::class_<vtkStructuredGridReader, emscripten::base<vtkDataReader>>("vtkStructuredGridReader")
    .smart_ptr<vtkSmartPointer<vtkStructuredGridReader>>("vtkSmartPointer<vtkStructuredGridReader>")
    .constructor(&vtk::MakeAvtkSmartPointer<vtkStructuredGridReader>)
    .class_function("IsTypeOf", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkStructuredGridReader::IsTypeOf( arg_0.c_str());}))
    .function("IsA", emscripten::optional_override([](vtkStructuredGridReader& self, const std::string & arg_0) -> int {  return self.IsA( arg_0.c_str());}))
    .class_function("SafeDownCast", &vtkStructuredGridReader::SafeDownCast, emscripten::allow_raw_pointers())
    .function("NewInstance", &vtkStructuredGridReader::NewInstance, emscripten::allow_raw_pointers())
    .class_function("GetNumberOfGenerationsFromBaseType", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkStructuredGridReader::GetNumberOfGenerationsFromBaseType( arg_0.c_str());}))
    .function("GetNumberOfGenerationsFromBase", emscripten::optional_override([](vtkStructuredGridReader& self, const std::string & arg_0) -> int {  return self.GetNumberOfGenerationsFromBase( arg_0.c_str());}))
    .function("GetOutput", emscripten::select_overload<vtkStructuredGrid*(vtkStructuredGridReader&)>([](vtkStructuredGridReader& self) -> vtkStructuredGrid* { return self.GetOutput(); }), emscripten::allow_raw_pointers())
    .function("GetOutput", emscripten::select_overload<vtkStructuredGrid*(vtkStructuredGridReader&, int)>([](vtkStructuredGridReader& self, int arg_0) -> vtkStructuredGrid* { return self.GetOutput( arg_0); }), emscripten::allow_raw_pointers())
    .function("SetOutput", &vtkStructuredGridReader::SetOutput, emscripten::allow_raw_pointers())
    .function("ReadMetaDataSimple", &vtkStructuredGridReader::ReadMetaDataSimple, emscripten::allow_raw_pointers())
    .function("ReadMeshSimple", &vtkStructuredGridReader::ReadMeshSimple, emscripten::allow_raw_pointers());
}
