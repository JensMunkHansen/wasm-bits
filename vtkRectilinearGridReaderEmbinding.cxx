// JavaScript wrapper for vtkRectilinearGridReader with embind 
//
// This file was auto-generated using :
/*
node /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/bin/vtkWrapJavaScript.js \
 @/home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkIOLegacy.js/vtkIOLegacy.js.Release.args \
 -o \
 /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkIOLegacy.js/vtkRectilinearGridReaderEmbinding.cxx \
 /home/jmh/github/vtk/IO/Legacy/vtkRectilinearGridReader.h
*/
#include "vtkEmbindSmartPointerTrait.h"
#include <emscripten.h>
#include <string>
#include "vtkVariant.h"
#include "vtkObjectBase.h"
#include "vtkIndent.h"
#include "vtkRectilinearGrid.h"
#include "vtkInformation.h"
#include "vtkDataObject.h"
#include "vtkRectilinearGridReader.h"

template<> void emscripten::internal::raw_destructor<vtkRectilinearGridReader>(vtkRectilinearGridReader * ptr){ ptr->Delete(); }
EMSCRIPTEN_BINDINGS(vtkRectilinearGridReader_class) {
  emscripten::class_<vtkRectilinearGridReader, emscripten::base<vtkDataReader>>("vtkRectilinearGridReader")
    .smart_ptr<vtkSmartPointer<vtkRectilinearGridReader>>("vtkSmartPointer<vtkRectilinearGridReader>")
    .constructor(&vtk::MakeAvtkSmartPointer<vtkRectilinearGridReader>)
    .class_function("IsTypeOf", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkRectilinearGridReader::IsTypeOf( arg_0.c_str());}))
    .function("IsA", emscripten::optional_override([](vtkRectilinearGridReader& self, const std::string & arg_0) -> int {  return self.IsA( arg_0.c_str());}))
    .class_function("SafeDownCast", &vtkRectilinearGridReader::SafeDownCast, emscripten::allow_raw_pointers())
    .function("NewInstance", &vtkRectilinearGridReader::NewInstance, emscripten::allow_raw_pointers())
    .class_function("GetNumberOfGenerationsFromBaseType", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkRectilinearGridReader::GetNumberOfGenerationsFromBaseType( arg_0.c_str());}))
    .function("GetNumberOfGenerationsFromBase", emscripten::optional_override([](vtkRectilinearGridReader& self, const std::string & arg_0) -> int {  return self.GetNumberOfGenerationsFromBase( arg_0.c_str());}))
    .function("GetOutput", emscripten::select_overload<vtkRectilinearGrid*(vtkRectilinearGridReader&)>([](vtkRectilinearGridReader& self) -> vtkRectilinearGrid* { return self.GetOutput(); }), emscripten::allow_raw_pointers())
    .function("GetOutput", emscripten::select_overload<vtkRectilinearGrid*(vtkRectilinearGridReader&, int)>([](vtkRectilinearGridReader& self, int arg_0) -> vtkRectilinearGrid* { return self.GetOutput( arg_0); }), emscripten::allow_raw_pointers())
    .function("SetOutput", &vtkRectilinearGridReader::SetOutput, emscripten::allow_raw_pointers())
    .function("ReadMetaDataSimple", &vtkRectilinearGridReader::ReadMetaDataSimple, emscripten::allow_raw_pointers())
    .function("ReadMeshSimple", &vtkRectilinearGridReader::ReadMeshSimple, emscripten::allow_raw_pointers());
}
