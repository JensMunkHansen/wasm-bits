// JavaScript wrapper for vtkUnstructuredGridReader with embind 
//
// This file was auto-generated using :
/*
node /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/bin/vtkWrapJavaScript.js \
 @/home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkIOLegacy.js/vtkIOLegacy.js.Release.args \
 -o \
 /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkIOLegacy.js/vtkUnstructuredGridReaderEmbinding.cxx \
 /home/jmh/github/vtk/IO/Legacy/vtkUnstructuredGridReader.h
*/
#include "vtkEmbindSmartPointerTrait.h"
#include <emscripten.h>
#include <string>
#include "vtkVariant.h"
#include "vtkObjectBase.h"
#include "vtkIndent.h"
#include "vtkUnstructuredGrid.h"
#include "vtkDataObject.h"
#include "vtkUnstructuredGridReader.h"

template<> void emscripten::internal::raw_destructor<vtkUnstructuredGridReader>(vtkUnstructuredGridReader * ptr){ ptr->Delete(); }
EMSCRIPTEN_BINDINGS(vtkUnstructuredGridReader_class) {
  emscripten::class_<vtkUnstructuredGridReader, emscripten::base<vtkDataReader>>("vtkUnstructuredGridReader")
    .smart_ptr<vtkSmartPointer<vtkUnstructuredGridReader>>("vtkSmartPointer<vtkUnstructuredGridReader>")
    .constructor(&vtk::MakeVTKSmartPtr<vtkUnstructuredGridReader>)
    .class_function("IsTypeOf", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkUnstructuredGridReader::IsTypeOf( arg_0.c_str());}))
    .function("IsA", emscripten::optional_override([](vtkUnstructuredGridReader& self, const std::string & arg_0) -> int {  return self.IsA( arg_0.c_str());}))
    .class_function("SafeDownCast", &vtkUnstructuredGridReader::SafeDownCast, emscripten::allow_raw_pointers())
    .function("NewInstance", &vtkUnstructuredGridReader::NewInstance, emscripten::allow_raw_pointers())
    .class_function("GetNumberOfGenerationsFromBaseType", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkUnstructuredGridReader::GetNumberOfGenerationsFromBaseType( arg_0.c_str());}))
    .function("GetNumberOfGenerationsFromBase", emscripten::optional_override([](vtkUnstructuredGridReader& self, const std::string & arg_0) -> int {  return self.GetNumberOfGenerationsFromBase( arg_0.c_str());}))
    .function("GetOutput", emscripten::select_overload<vtkUnstructuredGrid*(vtkUnstructuredGridReader&)>([](vtkUnstructuredGridReader& self) -> vtkUnstructuredGrid* { return self.GetOutput(); }), emscripten::allow_raw_pointers())
    .function("GetOutput", emscripten::select_overload<vtkUnstructuredGrid*(vtkUnstructuredGridReader&, int)>([](vtkUnstructuredGridReader& self, int arg_0) -> vtkUnstructuredGrid* { return self.GetOutput( arg_0); }), emscripten::allow_raw_pointers())
    .function("SetOutput", &vtkUnstructuredGridReader::SetOutput, emscripten::allow_raw_pointers())
    .function("ReadMeshSimple", &vtkUnstructuredGridReader::ReadMeshSimple, emscripten::allow_raw_pointers());
}
