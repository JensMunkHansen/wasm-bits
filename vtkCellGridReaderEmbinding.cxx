// JavaScript wrapper for vtkCellGridReader with embind 
//
// This file was auto-generated using :
/*
node /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/bin/vtkWrapJavaScript.js \
 @/home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkIOCellGrid.js/vtkIOCellGrid.js.Release.args \
 -o \
 /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkIOCellGrid.js/vtkCellGridReaderEmbinding.cxx \
 /home/jmh/github/vtk/IO/CellGrid/vtkCellGridReader.h
*/
#include "vtkEmbindSmartPointerTrait.h"
#include <emscripten.h>
#include <string>
#include "vtkVariant.h"
#include "vtkObjectBase.h"
#include "vtkIndent.h"
#include "vtkCellGridReader.h"

template<> void emscripten::internal::raw_destructor<vtkCellGridReader>(vtkCellGridReader * ptr){ ptr->Delete(); }
EMSCRIPTEN_BINDINGS(vtkCellGridReader_class) {
  emscripten::class_<vtkCellGridReader, emscripten::base<vtkCellGridAlgorithm>>("vtkCellGridReader")
    .smart_ptr<vtkSmartPointer<vtkCellGridReader>>("vtkSmartPointer<vtkCellGridReader>")
    .constructor(&vtk::MakeAvtkSmartPointer<vtkCellGridReader>)
    .class_function("IsTypeOf", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkCellGridReader::IsTypeOf( arg_0.c_str());}))
    .function("IsA", emscripten::optional_override([](vtkCellGridReader& self, const std::string & arg_0) -> int {  return self.IsA( arg_0.c_str());}))
    .class_function("SafeDownCast", &vtkCellGridReader::SafeDownCast, emscripten::allow_raw_pointers())
    .function("NewInstance", &vtkCellGridReader::NewInstance, emscripten::allow_raw_pointers())
    .class_function("GetNumberOfGenerationsFromBaseType", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkCellGridReader::GetNumberOfGenerationsFromBaseType( arg_0.c_str());}))
    .function("GetNumberOfGenerationsFromBase", emscripten::optional_override([](vtkCellGridReader& self, const std::string & arg_0) -> int {  return self.GetNumberOfGenerationsFromBase( arg_0.c_str());}))
    .function("SetFileName", emscripten::optional_override([](vtkCellGridReader& self, const std::string & arg_0) -> void {  return self.SetFileName( arg_0.c_str());}))
    .function("GetFileName", emscripten::optional_override([](vtkCellGridReader& self) -> std::string {  return self.GetFileName();}));
}
