// JavaScript wrapper for vtkCompositeCellGridReader with embind 
//
// This file was auto-generated using :
/*
node /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/bin/vtkWrapJavaScript.js \
 @/home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkIOCellGrid.js/vtkIOCellGrid.js.Release.args \
 -o \
 /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkIOCellGrid.js/vtkCompositeCellGridReaderEmbinding.cxx \
 /home/jmh/github/vtk/IO/CellGrid/vtkCompositeCellGridReader.h
*/
#include "vtkEmbindSmartPointerTrait.h"
#include <emscripten.h>
#include <string>
#include "vtkVariant.h"
#include "vtkObjectBase.h"
#include "vtkIndent.h"
#include "vtkDataArraySelection.h"
#include "vtkCompositeCellGridReader.h"

template<> void emscripten::internal::raw_destructor<vtkCompositeCellGridReader>(vtkCompositeCellGridReader * ptr){ ptr->Delete(); }
EMSCRIPTEN_BINDINGS(vtkCompositeCellGridReader_class) {
  emscripten::class_<vtkCompositeCellGridReader, emscripten::base<vtkReaderAlgorithm>>("vtkCompositeCellGridReader")
    .smart_ptr<vtkSmartPointer<vtkCompositeCellGridReader>>("vtkSmartPointer<vtkCompositeCellGridReader>")
    .constructor(&vtk::MakeAvtkSmartPointer<vtkCompositeCellGridReader>)
    .class_function("IsTypeOf", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkCompositeCellGridReader::IsTypeOf( arg_0.c_str());}))
    .function("IsA", emscripten::optional_override([](vtkCompositeCellGridReader& self, const std::string & arg_0) -> int {  return self.IsA( arg_0.c_str());}))
    .class_function("SafeDownCast", &vtkCompositeCellGridReader::SafeDownCast, emscripten::allow_raw_pointers())
    .function("NewInstance", &vtkCompositeCellGridReader::NewInstance, emscripten::allow_raw_pointers())
    .class_function("GetNumberOfGenerationsFromBaseType", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkCompositeCellGridReader::GetNumberOfGenerationsFromBaseType( arg_0.c_str());}))
    .function("GetNumberOfGenerationsFromBase", emscripten::optional_override([](vtkCompositeCellGridReader& self, const std::string & arg_0) -> int {  return self.GetNumberOfGenerationsFromBase( arg_0.c_str());}))
    .function("SetFileName", emscripten::optional_override([](vtkCompositeCellGridReader& self, const std::string & arg_0) -> void {  return self.SetFileName( arg_0.c_str());}))
    .function("GetFileName", emscripten::optional_override([](vtkCompositeCellGridReader& self) -> std::string {  return self.GetFileName();}))
    .function("GetCellTypeSelection", &vtkCompositeCellGridReader::GetCellTypeSelection, emscripten::allow_raw_pointers())
    .function("GetCellAttributeSelection", &vtkCompositeCellGridReader::GetCellAttributeSelection, emscripten::allow_raw_pointers())
    .function("GetMTime", &vtkCompositeCellGridReader::GetMTime);
}
